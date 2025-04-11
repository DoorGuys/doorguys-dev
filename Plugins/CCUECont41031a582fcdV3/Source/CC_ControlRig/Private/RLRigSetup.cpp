// Copyright 2024 The Reallusion Authors. All Rights Reserved.

#include "RLRigSetup.h"
#include "RLRigSetupStyle.h"
#include "RLRigSetupCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

// for UI
#include "LevelEditor.h"

// for Rig Setup
#include "Editor.h"
#include "Selection.h"
#include "SkeletalRenderPublic.h"
#include "AssetToolsModule.h"
#include "FileHelpers.h"
#include "ObjectTools.h"
#include "EditorAnimUtils.h"
#include "Animation/SkeletalMeshActor.h"
#include "Engine/World.h"
#include "Engine/SimpleConstructionScript.h"
#include "Engine/SCS_Node.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/FileHelper.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Rendering/SkeletalMeshModel.h"
#include "Rendering/SkeletalMeshLODModel.h"
#include "Factories/AnimBlueprintFactory.h"
#include "Factories/BlueprintFactory.h"
#include "HAL/FileManagerGeneric.h"
#include "Interfaces/IPluginManager.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "UObject/UObjectGlobals.h"

#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "AssetRegistry/AssetData.h"
#include "EdGraphUtilities.h"

static const FName RLRigSetupTabName( "RLRigSetup" );

#define LOCTEXT_NAMESPACE "FRLRigSetupModule"

void FRLRigSetupModule::StartupModule()
{
    // This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

    FRLRigSetupStyle::Initialize();
    FRLRigSetupStyle::ReloadTextures();

    FRLRigSetupCommands::Register();

    m_kPluginCommands = MakeShareable( new FUICommandList );
    m_kPluginCommands->MapAction( FRLRigSetupCommands::Get().PluginAction,
                                  FExecuteAction::CreateRaw( this, &FRLRigSetupModule::PluginButtonClicked ),
                                  FCanExecuteAction() );

    FContentBrowserModule& kContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>( "ContentBrowser" );
    TArray<FContentBrowserMenuExtender_SelectedAssets>& kMenuExtenders = kContentBrowserModule.GetAllAssetViewContextMenuExtenders();
    kMenuExtenders.Add( FContentBrowserMenuExtender_SelectedAssets::CreateRaw( this, &FRLRigSetupModule::CreateContentBrowserAssetSelectionMenu ) );
    UToolMenus::RegisterStartupCallback( FSimpleMulticastDelegate::FDelegate::CreateRaw( this, &FRLRigSetupModule::RegisterMenus ) );
}

void FRLRigSetupModule::ShutdownModule()
{
    // This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
    // we call this function before unloading the module.

    UToolMenus::UnRegisterStartupCallback( this );

    UToolMenus::UnregisterOwner( this );

    FRLRigSetupStyle::Shutdown();

    FRLRigSetupCommands::Unregister();
}

void FRLRigSetupModule::PluginButtonClicked()
{
    // Put your "OnButtonClicked" stuff here
    TArray< UObject* > kSelectedSkeletons;
    GetSelectedActors( ASkeletalMeshActor::StaticClass(), kSelectedSkeletons );
    if ( kSelectedSkeletons.Num() >= 1 )
    {
        SetupSelectedCharactersToBlueprint();

        FText DialogText = FText::Format(
            LOCTEXT( "PluginButtonDialogText", SELECTED_ACTORS_RIG_SETUP_FINISHED_MESSAGE ), FText() );
        FMessageDialog::Open( EAppMsgType::Ok, DialogText, FText::FromString( PLUGIN_NAME ) );
    }
    else
    {
        FText DialogText = FText::FromString( NO_SELECTED_ACTORS_RIG_SETUP_MESSAGE );
        FMessageDialog::Open( EAppMsgType::Ok, DialogText, FText::FromString( PLUGIN_NAME ) );
    }

}

void FRLRigSetupModule::RegisterMenus()
{
    FLevelEditorModule& kLevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>( "LevelEditor" );

    // init toolbar
    TSharedPtr<FExtender> spToolbarExtender = MakeShareable( new FExtender );
    FName kExtensionHook = "Play";
    EExtensionHook::Position eHookPosition = EExtensionHook::Before;
    spToolbarExtender->AddToolBarExtension( kExtensionHook,
                                            eHookPosition,
                                            m_kPluginCommands,
                                            FToolBarExtensionDelegate::CreateRaw( this, &FRLRigSetupModule::AddToolBarButton ) );
    kLevelEditorModule.GetToolBarExtensibilityManager()->AddExtender( spToolbarExtender );

}

FString FRLRigSetupModule::GetRigPluginPath()
{
    FString strPluginPath = IPluginManager::Get().FindPlugin( TEXT( "CC_ControlRig" ) )->GetBaseDir();
    return strPluginPath;
}

uint32 FRLRigSetupModule::GetSelectedActors( UClass* pFilterClass, TArray<UObject*>& kOutSelectedObjects )
{
    USelection* pSelectedActors = GEditor->GetSelectedActors();
    return pSelectedActors->GetSelectedObjects( pFilterClass, kOutSelectedObjects );
}

FString FRLRigSetupModule::GetActorPackagePath( ASkeletalMeshActor* pActor )
{
    if ( !IsValid( pActor ) )
    {
        check( false );
        return FString();
    }

    FString strActorPath;
    TArray<FString> kSpiltWord;
    pActor->GetDetailedInfo().ParseIntoArray( kSpiltWord, TEXT( "/" ), true );
    for ( int i = 0; i < kSpiltWord.Num(); ++i )
    {
        strActorPath += "/" + kSpiltWord[ i ];
    }
    return strActorPath;
}

FString FRLRigSetupModule::GetActorRLContentRegularPath( ASkeletalMeshActor* pActor )
{
    if ( !IsValid( pActor ) )
    {
        check( false );
        return FString();
    }

    FString strActorGamePath = GetActorPackagePath( pActor );
    strActorGamePath = FPaths::GetPath( strActorGamePath ); // get folder path.
    strActorGamePath.RemoveFromStart( TEXT( "/Game/" ) );
    FString strActorFullPath = FPaths::ProjectContentDir() + strActorGamePath;
    return strActorFullPath;
}

FString FRLRigSetupModule::GetActorName( ASkeletalMeshActor* pActor )
{
    if ( !IsValid( pActor ) )
    {
        return "";
    }

    FString strActorGamePath = GetActorPackagePath( pActor );
    FString strActorName = FPaths::GetBaseFilename( strActorGamePath );
    return strActorName;
}

FString FRLRigSetupModule::GetSkeletalMeshFilePath( ASkeletalMeshActor* pActor )
{
    if ( !IsValid( pActor ) )
    {
        return "";
    }
    FString strActorFolder = GetActorRLContentRegularPath( pActor );
    FString strActorName = GetActorName( pActor );
    FString strSkeletalMeshPath = strActorFolder + "/" + strActorName + UNREAL_ASSET_FORMAT;
    return strSkeletalMeshPath;
}

bool FRLRigSetupModule::IsLiveLinkedActor( ASkeletalMeshActor* pActor )
{
    if ( !IsValid( pActor ) )
    {
        check( false );
        return false;
    }

    FString strActorName = GetActorName( pActor );
    FString strCharacterFolder = GetActorRLContentRegularPath( pActor );
    return IsLiveLinkedAsset( strActorName, strCharacterFolder );
}

bool FRLRigSetupModule::IsLiveLinkedAsset( const FString& strSkeletalMeshName, const FString& strRegularPath )
{
    FString strLiveLinkAnimBlueprintName = strSkeletalMeshName + RL_LIVE_LINK_ANIMATION_BLUEPRINT_SUFFIX + UNREAL_ASSET_FORMAT;
    FString strLiveLinkBlueprintName = strSkeletalMeshName + RL_LIVE_LINK_BLUEPRINT_SUFFIX + UNREAL_ASSET_FORMAT;
    FString strLiveLinkAnimBlueprintPath = strRegularPath + "/" + strLiveLinkAnimBlueprintName;
    FString strLiveLinkBlueprintPath = strRegularPath + "/" + strLiveLinkBlueprintName;

    IFileManager& kFileManager = IFileManager::Get();
    if ( kFileManager.FileExists( *strLiveLinkAnimBlueprintPath )
         || kFileManager.FileExists( *strLiveLinkBlueprintPath ) )
    {
        return true;
    }
    return false;
}

bool FRLRigSetupModule::IsSectionUsedHeadBone( const FSkelMeshSection& kSection, const TArray<FName> kBones )
{
    const auto& kBoneMap = kSection.BoneMap;
    for ( const auto nBoneIndex : kBoneMap )
    {
        if ( nBoneIndex < kBones.Num() )
        {
            FName BoneName = kBones[ nBoneIndex ];
            return m_kHeadBoneNames.Contains( BoneName );
        }
    }
    return false;
}

bool FRLRigSetupModule::CreateRigBlueprint( USkeletalMesh* pSkeletalMesh,
                                            USkeletalMesh* pFaceSkeletalMesh,
                                            USkeletalMesh* pBodySkeletalMesh,
                                            const FString& strFaceAnimBlueprintPackagePath,
                                            const FString& strFaceAnimBlueprintRegularPath,
                                            const FString& strBodyAnimBlueprintPackagePath,
                                            const FString& strBodyAnimBlueprintRegularPath,
                                            const FString& strRigBlueprintPackagePath,
                                            const FString& strRigBlueprintRegularPath )
{
    if ( !IsValid( pSkeletalMesh ) )
    {
        return false;
    }

    USkeleton* pSkeleton = pSkeletalMesh->GetSkeleton();
    if ( !IsValid( pSkeleton ) )
    {
        return false;
    }

    // Create Animation Blueprint
    UAnimBlueprint* pFaceAnimBP = CreateAnimationBlueprintTemplate( strFaceAnimBlueprintPackagePath, strFaceAnimBlueprintRegularPath, RIG_SETUP_FACE_ANIMATION_BLUEPRINT_TEMPLATE_NAME );
    UAnimBlueprint* pBodyAnimBP = CreateAnimationBlueprintTemplate( strBodyAnimBlueprintPackagePath, strBodyAnimBlueprintRegularPath, RIG_SETUP_BODY_ANIMATION_BLUEPRINT_TEMPLATE_NAME );
    check( ReAssignAnimationBlueprintSkeleton( pFaceAnimBP, pSkeleton ) );
    check( ReAssignAnimationBlueprintSkeleton( pBodyAnimBP, pSkeleton ) );

    // Create Animation ControlRig
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    const FString& strAnimationRigFolder = FPaths::ProjectContentDir() + RIG_SETUP_FOLDER_SHARE_CONTENT_PATH;
    if ( !kPlatformFile.DirectoryExists( *strAnimationRigFolder ) )
    {
        kPlatformFile.CreateDirectory( *strAnimationRigFolder );
    }
    CopyRigControlFolder();
    UObject* pFaceAnimationRig = CreateAnimationRigTemplate( RIG_SETUP_FACE_RIG_TEMPLATE_NAME );
    UObject* pBodyAnimationRig = CreateAnimationRigTemplate( RIG_SETUP_BODY_RIG_TEMPLATE_NAME );

    // Create Rig Blueprint
    UBlueprint* pRigBP = CreateBlueprintFromTemplate( strRigBlueprintPackagePath, strRigBlueprintRegularPath, RIG_SETUP_BLUEPRINT_TEMPLATE_NAME );
    USkeletalMeshComponent* pFaceComponent = GetSkeletalMeshByPart( pRigBP, "Face" );
    USkeletalMeshComponent* pBodyComponent = GetSkeletalMeshByPart( pRigBP, "Body" );
    if ( !pBodyComponent || !pFaceComponent || !pFaceAnimationRig || !pBodyAnimationRig )
    {
        return false;
    }
    pFaceComponent->SetSkeletalMeshAsset( pFaceSkeletalMesh );
    pFaceComponent->SetAnimClass( pFaceAnimBP->GeneratedClass );
    pFaceComponent->SetDefaultAnimatingRigOverride( pFaceAnimationRig );

    pBodyComponent->SetSkeletalMeshAsset( pBodySkeletalMesh );
    pBodyComponent->SetAnimClass( pBodyAnimBP->GeneratedClass );
    pBodyComponent->SetDefaultAnimatingRigOverride( pBodyAnimationRig );

    //Compile
    FKismetEditorUtilities::CompileBlueprint( pRigBP );

    TArray< UPackage*> kPackagesToSave;
    kPackagesToSave.Add( pRigBP->GetOutermost() );
    FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );
    return true;
}

bool FRLRigSetupModule::CreateRigBlueprintWithLiveLink( USkeletalMesh* pSkeletalMesh,
                                                        USkeletalMesh* pFaceSkeletalMesh,
                                                        USkeletalMesh* pBodySkeletalMesh,
                                                        const FString& strFaceAnimBlueprintPackagePath,
                                                        const FString& strFaceAnimBlueprintRegularPath,
                                                        const FString& strBodyAnimBlueprintPackagePath,
                                                        const FString& strBodyAnimBlueprintRegularPath,
                                                        const FString& strRigBlueprintPackagePath,
                                                        const FString& strRigBlueprintRegularPath )
{
    if ( !IsValid( pSkeletalMesh ) )
    {
        return false;
    }

    USkeleton* pSkeleton = pSkeletalMesh->GetSkeleton();
    if ( !IsValid( pSkeleton ) )
    {
        return false;
    }

    // Create Animation Blueprint
    UAnimBlueprint* pFaceAnimBP = CreateAnimationBlueprintTemplate( strFaceAnimBlueprintPackagePath, strFaceAnimBlueprintRegularPath,
                                                                    RIG_SETUP_FACE_ANIMATION_BLUEPRINT_TEMPLATE_NAME );
    UAnimBlueprint* pBodyAnimBP = CreateAnimationBlueprintTemplate( strBodyAnimBlueprintPackagePath, strBodyAnimBlueprintRegularPath,
                                                                    RIG_SETUP_BODY_WITH_LIVE_LINK_ANIMATION_BLUEPRINT_TEMPLATE_NAME );
    check( ReAssignAnimationBlueprintSkeleton( pFaceAnimBP, pSkeleton ) );
    check( ReAssignAnimationBlueprintSkeleton( pBodyAnimBP, pSkeleton ) );

    // Create Animation ControlRig
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    const FString& strAnimationRigFolder = FPaths::ProjectContentDir() + RIG_SETUP_FOLDER_SHARE_CONTENT_PATH;
    if ( !kPlatformFile.DirectoryExists( *strAnimationRigFolder ) )
    {
        kPlatformFile.CreateDirectory( *strAnimationRigFolder );
    }
    CopyRigControlFolder();
    UObject* pFaceAnimationRig = CreateAnimationRigTemplate( RIG_SETUP_FACE_RIG_TEMPLATE_NAME );
    UObject* pBodyAnimationRig = CreateAnimationRigTemplate( RIG_SETUP_BODY_RIG_TEMPLATE_NAME );

    // Create Rig Blueprint
    UBlueprint* pRigWithLiveLinkBP = CreateBlueprintFromTemplate( strRigBlueprintPackagePath, strRigBlueprintRegularPath, RIG_SETUP_WITH_LIVE_LINK_BLUEPRINT_TEMPLATE_NAME );
    USkeletalMeshComponent* pFaceComponent = GetSkeletalMeshByPart( pRigWithLiveLinkBP, "Face" );
    USkeletalMeshComponent* pBodyComponent = GetSkeletalMeshByPart( pRigWithLiveLinkBP, "Body" );
    if ( !pBodyComponent || !pFaceComponent || !pFaceAnimationRig || !pBodyAnimationRig )
    {
        return false;
    }
    pFaceComponent->SetSkeletalMeshAsset( pFaceSkeletalMesh );
    pFaceComponent->SetAnimClass( pFaceAnimBP->GeneratedClass );
    pFaceComponent->SetDefaultAnimatingRigOverride( pFaceAnimationRig );

    pBodyComponent->SetSkeletalMeshAsset( pBodySkeletalMesh );
    pBodyComponent->SetAnimClass( pBodyAnimBP->GeneratedClass );
    pBodyComponent->SetDefaultAnimatingRigOverride( pBodyAnimationRig );

    //Set SubjectName variable
    for ( FBPVariableDescription& pVar : pRigWithLiveLinkBP->NewVariables )
    {
        if ( pVar.VarName == "SubjectName" )
        {
            pVar.DefaultValue = pSkeletalMesh->GetName();
            FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pRigWithLiveLinkBP );
        }
    }

    //Get Blueprint Graph Text
    const FString& strBPDataText = RIG_SETUP_BP_WITH_LIVE_LINK_CODE;
    const FString& strRigWithLiveLinkAnimationBlueprintName = RIG_SETUP_BODY_WITH_LIVE_LINK_ANIMATION_BLUEPRINT_TEMPLATE_NAME;
    const FString& strRigWithLiveLinkBlueprintName = RIG_SETUP_WITH_LIVE_LINK_BLUEPRINT_TEMPLATE_NAME;
    const FString strObjectPath = strRigBlueprintPackagePath.Replace( TEXT( "/Game" ), TEXT( "" ) );

    FString strTextToImport;
    FString strSourceFilePathText = IPluginManager::Get().FindPlugin( PLUGIN_NAME )->GetBaseDir() + "/Content/" + strBPDataText + ".txt";
    FFileHelper::LoadFileToString( strTextToImport, *strSourceFilePathText );

    strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkANName" ), *strRigWithLiveLinkAnimationBlueprintName ); //set anim_blueprint
    strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkBPName" ), *strRigWithLiveLinkBlueprintName );
    strTextToImport = strTextToImport.Replace( TEXT( "/ObjectPath" ), *strObjectPath );

    UEdGraph* pGraph = pRigWithLiveLinkBP->UbergraphPages[ 0 ];
    check( pGraph );
    TSet<UEdGraphNode*> kBPPastedNodes;
    FEdGraphUtilities::ImportNodesFromText( pGraph, strTextToImport, kBPPastedNodes );

    //Get Animtion Blueprint Graph Text
    const FString& strABDataText = RIG_SETUP_AB_WITH_LIVE_LINK_CODE;
    strSourceFilePathText = IPluginManager::Get().FindPlugin( PLUGIN_NAME )->GetBaseDir() + "/Content/" + strABDataText + ".txt";
    FFileHelper::LoadFileToString( strTextToImport, *strSourceFilePathText );

    strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkANName" ), *strRigWithLiveLinkAnimationBlueprintName ); //set anim_blueprint
    strTextToImport = strTextToImport.Replace( TEXT( "LiveLinkBPName" ), *strRigWithLiveLinkBlueprintName );
    strTextToImport = strTextToImport.Replace( TEXT( "/ObjectPath" ), *strObjectPath );

    pGraph = pBodyAnimBP->UbergraphPages[ 0 ];
    check( pGraph );
    TSet<UEdGraphNode*> kABPastedNodes;
    FEdGraphUtilities::ImportNodesFromText( pGraph, strTextToImport, kABPastedNodes );

    //Compile
    FKismetEditorUtilities::CompileBlueprint( pRigWithLiveLinkBP );
    FKismetEditorUtilities::CompileBlueprint( pBodyAnimBP );

    const FString& strAssetName = pSkeletalMesh->GetFName().ToString();
    const FString& strLiveLinkBlueprintName = strAssetName + RL_LIVE_LINK_BLUEPRINT_SUFFIX;
    const FString& strLiveLinkBlueprintPath = strRigBlueprintPackagePath + "/" + strLiveLinkBlueprintName + "." + strLiveLinkBlueprintName;
    const FString& strLiveLinkAnimBlueprintName = strAssetName + RL_LIVE_LINK_ANIMATION_BLUEPRINT_SUFFIX;
    const FString& strLiveLinkAnimBlueprintPath = strRigBlueprintPackagePath + "/" + strLiveLinkAnimBlueprintName + "." + strLiveLinkAnimBlueprintName;

    UObject* pLiveLinkBlueprint = StaticLoadObject( UBlueprint::StaticClass(), NULL, *strLiveLinkBlueprintPath);
    UObject* pLiveLinkAnimBlueprint = StaticLoadObject( UAnimBlueprint::StaticClass(), NULL, *strLiveLinkAnimBlueprintPath );
    TArray<UObject*> ObjectsToDelete = { pLiveLinkBlueprint, pLiveLinkAnimBlueprint };
    int nDeleteSuccessCount = ObjectTools::ForceDeleteObjects( ObjectsToDelete, false );
    RenameAsset( pRigWithLiveLinkBP, strLiveLinkBlueprintName );
    RenameAsset( pBodyAnimBP, strLiveLinkAnimBlueprintName );

    //Compile
    FKismetEditorUtilities::CompileBlueprint( pRigWithLiveLinkBP );
    FKismetEditorUtilities::CompileBlueprint( pBodyAnimBP );

    TArray< UPackage*> kPackagesToSave;
    kPackagesToSave.Add( pFaceAnimBP->GetOutermost() );
    kPackagesToSave.Add( pBodyAnimBP->GetOutermost() );
    kPackagesToSave.Add( pRigWithLiveLinkBP->GetOutermost() );
    FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );
    return true;
}

bool FRLRigSetupModule::SetupSelectedCharactersToBlueprint()
{
    //Start
    TArray< UObject* > kSelectedSkeletons;
    GetSelectedActors( ASkeletalMeshActor::StaticClass(), kSelectedSkeletons );
    for ( const auto& pActor : kSelectedSkeletons )
    {
        IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
        FString strAssetRegularPath = GetActorRLContentRegularPath( Cast< ASkeletalMeshActor >( pActor ) );
        FString strAssetPackagePath = FPaths::GetPath( GetActorPackagePath( Cast< ASkeletalMeshActor >( pActor ) ) );
        FString strRigPackagePath =  strAssetPackagePath + RIG_SETUP_FOLDER_PATH;
        FString strRigRegularPath =  strAssetRegularPath + RIG_SETUP_FOLDER_PATH;
        
        if ( kPlatformFile.DirectoryExists( *strRigRegularPath ) )
        {
            DeleteAssetsInFolder( *strRigPackagePath );
            FFileManagerGeneric::Get().DeleteDirectory( *strRigRegularPath, true, true );
        }

        kPlatformFile.CreateDirectory( *strRigRegularPath );
        ASkeletalMeshActor* pSkeletalActor = Cast< ASkeletalMeshActor >( pActor );
        USkeletalMesh* pSkeletalMesh = pSkeletalActor->GetSkeletalMeshComponent()->GetSkeletalMeshAsset();
        if ( !IsCC3PlusSkeleton( pSkeletalMesh->GetSkeleton() ) )
        {
            ShowSkeltonNotCompatiableMessage( pSkeletalMesh->GetName() );
            continue;
        }

        if ( pSkeletalActor && pSkeletalMesh )
        {
            bool bIsLiveLink = IsLiveLinkedActor( Cast< ASkeletalMeshActor >( pActor ) );
            USkeletalMesh* pFaceSkeletalMesh = nullptr;
            USkeletalMesh* pBodySkeletalMesh = nullptr;
            if ( bIsLiveLink )
            {
                ShowDisableLiveLinkActiveMessage();
                CreateBodyAndFaceAsset( pSkeletalActor, pFaceSkeletalMesh, pBodySkeletalMesh );
                CreateRigBlueprintWithLiveLink( pSkeletalMesh,
                                                pFaceSkeletalMesh,
                                                pBodySkeletalMesh,
                                                strRigPackagePath,
                                                strRigRegularPath,
                                                strAssetPackagePath,
                                                strAssetRegularPath,
                                                strAssetPackagePath,
                                                strAssetRegularPath );
            }
            else
            {
                CreateBodyAndFaceAsset( pSkeletalActor, pFaceSkeletalMesh, pBodySkeletalMesh );
                CreateRigBlueprint( pSkeletalMesh, 
                                    pFaceSkeletalMesh,
                                    pBodySkeletalMesh,
                                    strRigPackagePath,
                                    strRigRegularPath,
                                    strRigPackagePath,
                                    strRigRegularPath,
                                    strRigPackagePath,
                                    strRigRegularPath );
            }
            CopyRigPickerFolderToRigFolder();
        }  
    }
    return true;
}

bool FRLRigSetupModule::SetupSelectedAssetsToBluepriunt()
{
    FContentBrowserModule& kContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>( "ContentBrowser" );
    IContentBrowserSingleton& kContentBrowserSingleton = kContentBrowserModule.Get();
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    TArray< FAssetData > kSelectedAssets;
    kContentBrowserSingleton.GetSelectedAssets( kSelectedAssets );
    for ( const auto& kAssetData : kSelectedAssets )
    {
        FString strAssetObjectPath = kAssetData.GetSoftObjectPath().ToString();
        UE_LOG( LogTemp, Warning, TEXT( "Selected Asset: %s" ), *strAssetObjectPath );

        FString strAssetPackagePath = kAssetData.PackagePath.ToString();
        FString strAssetRegularPath = strAssetPackagePath;
        {
            strAssetRegularPath.RemoveFromStart( TEXT( "/Game/" ) );
            strAssetRegularPath = FPaths::ProjectContentDir() + strAssetRegularPath;
        }
        FString strRigPackagePath = strAssetPackagePath + RIG_SETUP_FOLDER_PATH;
        FString strRigRegularPath = strAssetRegularPath + RIG_SETUP_FOLDER_PATH;

        if ( kPlatformFile.DirectoryExists( *strRigRegularPath ) )
        {
            DeleteAssetsInFolder( *strRigPackagePath );
            FFileManagerGeneric::Get().DeleteDirectory( *strRigRegularPath, true, true );
        }
        kPlatformFile.CreateDirectory( *strRigRegularPath );

        USkeletalMesh* pSkeletalMesh = Cast< USkeletalMesh >( StaticLoadObject( USkeletalMesh::StaticClass(), NULL, *( strAssetObjectPath ) ) );
        if ( !pSkeletalMesh )
        {
            continue;
        }

        if ( !IsCC3PlusSkeleton( pSkeletalMesh->GetSkeleton() ) )
        {
            ShowSkeltonNotCompatiableMessage( pSkeletalMesh->GetName() );
            continue;
        }

        FString strMainName = kAssetData.AssetName.ToString();
        bool bIsLiveLink = IsLiveLinkedAsset( strMainName, strAssetRegularPath );
        USkeletalMesh* pFaceSkeletalMesh = nullptr;
        USkeletalMesh* pBodySkeletalMesh = nullptr;
        if ( bIsLiveLink )
        {
            ShowDisableLiveLinkActiveMessage();
            CreateBodyAndFaceAsset( pSkeletalMesh, strMainName, strRigPackagePath, pFaceSkeletalMesh, pBodySkeletalMesh );
            CreateRigBlueprintWithLiveLink( pSkeletalMesh,
                                            pFaceSkeletalMesh,
                                            pBodySkeletalMesh,
                                            strRigPackagePath,
                                            strRigRegularPath,
                                            strAssetPackagePath,
                                            strAssetRegularPath,
                                            strAssetPackagePath,
                                            strAssetRegularPath );
        }
        else
        {
            CreateBodyAndFaceAsset( pSkeletalMesh, strMainName, strRigPackagePath, pFaceSkeletalMesh, pBodySkeletalMesh );
            CreateRigBlueprint( pSkeletalMesh,
                                pFaceSkeletalMesh,
                                pBodySkeletalMesh,
                                strRigPackagePath,
                                strRigRegularPath, 
                                strRigPackagePath,
                                strRigRegularPath, 
                                strRigPackagePath,
                                strRigRegularPath );
        }
        CopyRigPickerFolderToRigFolder();
    }
    return true;
}

bool FRLRigSetupModule::CreateBodyAndFaceAsset( ASkeletalMeshActor* pActor,
                                                USkeletalMesh*& pFaceSkeletalMesh,
                                                USkeletalMesh*& pBodySkeletalMesh )
{
    const FString& strActorName = GetActorName( pActor );
    const FString& strFaceSkeletalMeshName = strActorName + "_Face";
    const FString& strBodySkeletalMeshName = strActorName + "_Body";
    pFaceSkeletalMesh = CopySkeletalMeshFile( pActor, strFaceSkeletalMeshName );
    pBodySkeletalMesh = CopySkeletalMeshFile( pActor, strBodySkeletalMeshName );
    if ( !pFaceSkeletalMesh && !pBodySkeletalMesh )
    {
        return false;
    }

    auto pSkeletalMeshCmp = pActor->GetSkeletalMeshComponent();
    if ( !pSkeletalMeshCmp )
    {
        return false;
    }

    RemoveSkeletalMeshPart( pFaceSkeletalMesh, ESkeletalMeshPart::Body );
    RemoveSkeletalMeshPart( pBodySkeletalMesh, ESkeletalMeshPart::Face );

    TArray<UPackage*> kSkeletonPackagesToSave;
    kSkeletonPackagesToSave.Add( pFaceSkeletalMesh->GetOutermost() );
    kSkeletonPackagesToSave.Add( pBodySkeletalMesh->GetOutermost() );
    FEditorFileUtils::PromptForCheckoutAndSave( kSkeletonPackagesToSave, false, /*bPromptToSave=*/ false );
    return true;
}

bool FRLRigSetupModule::CreateBodyAndFaceAsset( USkeletalMesh* pSkeletalMesh, 
                                                const FString strMainName,
                                                const FString& strCreateTargetPackagePath,
                                                USkeletalMesh*& pFaceSkeletalMesh,
                                                USkeletalMesh*& pBodySkeletalMesh )
{
    const FString& strFaceSkeletalMeshName = strMainName + "_Face";
    const FString& strBodySkeletalMeshName = strMainName + "_Body";
    pFaceSkeletalMesh = CopySkeletalMeshFile( pSkeletalMesh, strCreateTargetPackagePath, strFaceSkeletalMeshName );
    pBodySkeletalMesh = CopySkeletalMeshFile( pSkeletalMesh, strCreateTargetPackagePath, strBodySkeletalMeshName );
    if ( !pFaceSkeletalMesh && !pBodySkeletalMesh )
    {
        return false;
    }

    RemoveSkeletalMeshPart( pFaceSkeletalMesh, ESkeletalMeshPart::Body );
    RemoveSkeletalMeshPart( pBodySkeletalMesh, ESkeletalMeshPart::Face );

    TArray<UPackage*> kSkeletonPackagesToSave;
    kSkeletonPackagesToSave.Add( pFaceSkeletalMesh->GetOutermost() );
    kSkeletonPackagesToSave.Add( pBodySkeletalMesh->GetOutermost() );
    FEditorFileUtils::PromptForCheckoutAndSave( kSkeletonPackagesToSave, false, /*bPromptToSave=*/ false );
    return true;
}

void FRLRigSetupModule::AddToolBarButton( FToolBarBuilder& kBuilder )
{
    kBuilder.AddToolBarButton( FRLRigSetupCommands::Get().PluginAction );
}

TSharedRef< FExtender > FRLRigSetupModule::CreateContentBrowserAssetSelectionMenu( const TArray< FAssetData >& kSelectedAssets )
{
    TSharedRef<FExtender> spMenuExtender = MakeShareable( new FExtender );

    // 先檢查是否為SkeletalMesh
    for ( const FAssetData& kAsset : kSelectedAssets )
    {
        if ( kAsset.GetClass() != USkeletalMesh::StaticClass() )
        {
            return spMenuExtender;
        }
    }
    spMenuExtender->AddMenuExtension( "AssetContextReferences",
                                      EExtensionHook::After,
                                      nullptr,
                                      FMenuExtensionDelegate::CreateLambda( [ & ]( FMenuBuilder& kMenuBuilder )
    {
        kMenuBuilder.BeginSection( "CC Rig Setup", LOCTEXT( CONTENT_BROWSERT_CONTEXT_MENU_RIG_SETUP_SECTION_NAME, CONTENT_BROWSERT_CONTEXT_MENU_RIG_SETUP_SECTION_NAME ) );
        {
            kMenuBuilder.AddMenuEntry
            (
                LOCTEXT( CONTENT_BROWSERT_CONTEXT_MENU_RIG_SETUP_ACTION_NAME, CONTENT_BROWSERT_CONTEXT_MENU_RIG_SETUP_ACTION_NAME ),
                LOCTEXT( CONTENT_BROWSERT_CONTEXT_MENU_RIG_SETUP_ACTION_TOOLTIP, CONTENT_BROWSERT_CONTEXT_MENU_RIG_SETUP_ACTION_TOOLTIP ),
                FSlateIcon(),
                FUIAction( FExecuteAction::CreateLambda( [ & ]()
            {
                SetupSelectedAssetsToBluepriunt();
            } ) )
            );
        }
        kMenuBuilder.EndSection();
    } )
    );
    return spMenuExtender;
}

USkeletalMeshComponent* FRLRigSetupModule::GetSkeletalMeshByPart( UBlueprint* pBlueprint, const FString& strPart )
{
    if ( !pBlueprint || !pBlueprint->SimpleConstructionScript )
    {
        return nullptr;
    }
    AActor* pActor = Cast< AActor >( pBlueprint->GeneratedClass->GetDefaultObject() );
    if ( !pActor )
    {
        return nullptr;
    }
    UBlueprintGeneratedClass* RootBlueprintGeneratedClass = Cast<UBlueprintGeneratedClass>( pBlueprint->GeneratedClass );
    UClass* ActorClass =  pBlueprint->GeneratedClass;

    UBlueprintGeneratedClass* pActorBlueprintGeneratedClass = Cast<UBlueprintGeneratedClass>( ActorClass );
    if ( !pActorBlueprintGeneratedClass )
    {
        return nullptr;
    }

    const TArray<USCS_Node*>& ActorBlueprintNodes = pActorBlueprintGeneratedClass->SimpleConstructionScript->GetAllNodes();
    for ( USCS_Node* pNode : ActorBlueprintNodes )
    {
        if ( pNode->ComponentClass->IsChildOf( USkeletalMeshComponent::StaticClass() ) )
        {
            USkeletalMeshComponent* pFound = Cast<USkeletalMeshComponent>( pNode->GetActualComponentTemplate( pActorBlueprintGeneratedClass ) );
            if ( !pFound )
            {
                continue;
            }

            FString strComponentName = pFound->GetName();
            if ( strComponentName.Contains( strPart ) )
            {
                return pFound;
            }
        }
    }
    return nullptr;
}

UAnimBlueprint* FRLRigSetupModule::CreateAnimationBlueprintTemplate( const FString& strTargetPackagePath,
                                                                     const FString& strTargetRegularPath,
                                                                     const FString& strTemplateName )
{
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString strSoruceRigTemplate = GetRigPluginPath() + "/Content/" + strTemplateName + UNREAL_ASSET_FORMAT;
    FString strTargetRigTemplate = strTargetRegularPath + "/" + strTemplateName + UNREAL_ASSET_FORMAT;
    if ( !kPlatformFile.FileExists( *strTargetRigTemplate ) )
    {
        if ( FFileManagerGeneric::Get().Copy( *strTargetRigTemplate, *strSoruceRigTemplate ) != 0 )
        {
            return nullptr;
        }
    }  
    FString strAnimBlueprintPath = strTargetPackagePath + "/" + strTemplateName + "." + strTemplateName;
    UAnimBlueprint* pAnimBP = Cast< UAnimBlueprint >( StaticLoadObject( UAnimBlueprint::StaticClass(), nullptr, *( strAnimBlueprintPath ) ) );
    return pAnimBP;
}

UBlueprint* FRLRigSetupModule::CreateBlueprintFromTemplate( const FString& strTargetPackagePath,
                                                        const FString& strTargetRegularPath,
                                                        const FString& strTemplateName )
{
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    FString strSoruceRigTemplate = GetRigPluginPath() + "/Content/" + strTemplateName + UNREAL_ASSET_FORMAT;
    FString strTargetRigTemplate = strTargetRegularPath + "/" + strTemplateName + UNREAL_ASSET_FORMAT;
    if ( !kPlatformFile.FileExists( *strTargetRigTemplate ) )
    {
        if ( FFileManagerGeneric::Get().Copy( *strTargetRigTemplate, *strSoruceRigTemplate ) != 0 )
        {
            return nullptr;
        }
    }    FString strBlueprintPath = strTargetPackagePath + "/" + strTemplateName + "." + strTemplateName;
    UBlueprint* pAnimBP = Cast< UBlueprint >( StaticLoadObject( UBlueprint::StaticClass(), nullptr, *( strBlueprintPath ) ) );
    return pAnimBP;
}

UObject* FRLRigSetupModule::CreateAnimationRigTemplate( const FString& strTemplateName )
{
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString strBlueprintPath = FString( "/Game" ) + RIG_SETUP_FOLDER_SHARE_CONTENT_CONTROL_PATH + "/" + strTemplateName + "." + strTemplateName;
    UObject* pAnimBP = Cast< UObject >( StaticLoadObject( UBlueprint::StaticClass(), nullptr, *( strBlueprintPath ) ) );
    return pAnimBP;
}

USkeletalMesh* FRLRigSetupModule::CopySkeletalMeshFile( ASkeletalMeshActor* pActor,
                                                        const FString& strTemplateName )
{
    FAssetToolsModule& AssetToolsModule = FModuleManager::Get().LoadModuleChecked<FAssetToolsModule>( "AssetTools" );
    FString strNewAssetPath = FPaths::GetPath( GetActorPackagePath( pActor ) ) + RIG_SETUP_FOLDER_PATH;
    UObject* pSkeletalMesh = AssetToolsModule.Get().DuplicateAsset( strTemplateName, strNewAssetPath, pActor->GetSkeletalMeshComponent()->GetSkeletalMeshAsset() );
    return Cast< USkeletalMesh >( pSkeletalMesh );
}

USkeletalMesh* FRLRigSetupModule::CopySkeletalMeshFile( USkeletalMesh* pSkeletalMesh,
                                                        const FString& strPackagePath,
                                                        const FString& strTemplateName )
{
    FAssetToolsModule& AssetToolsModule = FModuleManager::Get().LoadModuleChecked<FAssetToolsModule>( "AssetTools" );
    UObject* pCopySkeletalMesh = AssetToolsModule.Get().DuplicateAsset( strTemplateName, strPackagePath, pSkeletalMesh );
    return Cast< USkeletalMesh >( pCopySkeletalMesh );
}

void FRLRigSetupModule::CopyRigPickerFolderToRigFolder()
{
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    FString strSoruceRigTemplate  = GetRigPluginPath() + RIG_SETUP_CONTENT_UTILITY_PATH;
    FString strSorucePickerFolder = GetRigPluginPath() + RIG_SETUP_CONTENT_PICKER_FOLDER_PATH;
    FString strTargetRigTemplate  = FPaths::ProjectContentDir() + RIG_SETUP_FOLDER_SHARE_CONTENT_PATH;
    FString strTargetPickerFolder = FPaths::ProjectContentDir() + RIG_SETUP_FOLDER_SHARE_PICKER_FOLDER_PATH;
    if ( !kPlatformFile.DirectoryExists( *strTargetRigTemplate ) )
    {
        kPlatformFile.CreateDirectory( *strTargetRigTemplate );
    }
    if ( !kPlatformFile.DirectoryExists( *strTargetPickerFolder ) )
    {
        kPlatformFile.CreateDirectory( *strTargetPickerFolder );
    }
    bool bCopyFolder = kPlatformFile.CopyDirectoryTree( *strTargetPickerFolder, *strSorucePickerFolder, true );
    FString strSorucePikcer = GetRigPluginPath() + RIG_SETUP_CONTENT_5_4_PICKER_FOLDER;
#if ( ENGINE_MAJOR_VERSION >= 5 && ENGINE_MINOR_VERSION <= 3 )
    strSorucePikcer = GetRigPluginPath() + RIG_SETUP_CONTENT_5_3_PICKER_FOLDER;
#endif
    bCopyFolder = kPlatformFile.CopyDirectoryTree( *strTargetRigTemplate, *strSorucePikcer, true );
}

void FRLRigSetupModule::RemoveSkeletalMeshPart( USkeletalMesh* pSkeletalMesh,
                                                ESkeletalMeshPart eRemovePart )
{
    if ( !pSkeletalMesh )
    {
        return;
    }

    FSkeletalMeshModel* pImportedModel = pSkeletalMesh->GetImportedModel();
    if ( pImportedModel )
    {
        TArray<FName> kBoneNames;
        size_t uBoneNum = pSkeletalMesh->GetRefSkeleton().GetNum();
        for ( size_t uBoneIndex = 0; uBoneIndex < uBoneNum; ++uBoneIndex )
        {
            kBoneNames.Add( pSkeletalMesh->GetRefSkeleton().GetBoneName( uBoneIndex ) );
        }
        TIndirectArray<FSkeletalMeshLODModel>& LODModels = pImportedModel->LODModels;

        for ( int nLodModelIndex = 0; nLodModelIndex < LODModels.Num(); ++nLodModelIndex )
        {
            auto& Sections = LODModels[ nLodModelIndex ].Sections;
            TArray< int > kDisableIndexes;
            for ( int nSectionIndex = 0; nSectionIndex < Sections.Num(); ++nSectionIndex )
            {
                bool bIsUsedHeadBone = IsSectionUsedHeadBone( Sections[ nSectionIndex ], kBoneNames );
                if ( ( eRemovePart == ESkeletalMeshPart::Face && bIsUsedHeadBone )
                     || ( eRemovePart == ESkeletalMeshPart::Body && !bIsUsedHeadBone ) )
                {
                   FSkelMeshSection& SectionToDisable = Sections[ nSectionIndex ];
                    FSkelMeshSourceSectionUserData& UserSectionToDisableData = LODModels[ nLodModelIndex ].UserSectionsData.FindChecked( SectionToDisable.OriginalDataSectionIndex );
                    UserSectionToDisableData.ClothingData = FClothingSectionData();
                    kDisableIndexes.Add( nSectionIndex );
                }
            }

            // Need a mesh resource
            if ( pSkeletalMesh->GetImportedModel() == nullptr )
            {
                return;
            }
            // Need a valid LOD
            if ( !pSkeletalMesh->GetImportedModel()->LODModels.IsValidIndex( nLodModelIndex ) )
            {
                return;
            }

            FSkeletalMeshLODModel& kLodModel = pSkeletalMesh->GetImportedModel()->LODModels[ nLodModelIndex ];
            for ( auto nDisableSectionIndex : kDisableIndexes )
            {
                FSkelMeshSection& kSectionToDisable = kLodModel.Sections[ nDisableSectionIndex ];
                //Get the UserSectionData
                FSkelMeshSourceSectionUserData& kUserSectionToDisableData = kLodModel.UserSectionsData.FindChecked( kSectionToDisable.OriginalDataSectionIndex );
                if ( !kUserSectionToDisableData.bDisabled || !kSectionToDisable.bDisabled )
                {
                    //Disable the section
                    kUserSectionToDisableData.bDisabled = true;
                    kSectionToDisable.bDisabled = true;
                }
            }
        }

        //Scope a post edit change
        FScopedSkeletalMeshPostEditChange kScopedPostEditChange( pSkeletalMesh );
        // Valid to disable, dirty the mesh
        pSkeletalMesh->Modify();
        pSkeletalMesh->PreEditChange( nullptr );
    }
}

bool FRLRigSetupModule::ReAssignAnimationBlueprintSkeleton( UAnimBlueprint* pAnimBlueprint, USkeleton* pSkeleton )
{
    if ( !pAnimBlueprint || !pSkeleton )
    {
        return false;
    }
    FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified( pAnimBlueprint );
    FAssetRegistryModule::AssetCreated( pAnimBlueprint );
    pAnimBlueprint->MarkPackageDirty();

    pAnimBlueprint->TargetSkeleton = pSkeleton;
    pAnimBlueprint->SetPreviewMesh( pSkeleton->GetPreviewMesh(), true );
    auto pMesh = pAnimBlueprint->GetPreviewMesh();
    pAnimBlueprint->Modify( true );

    //Compile
    TWeakObjectPtr<UAnimBlueprint> pWeekAnimBlueprint = pAnimBlueprint;
    TArray<TWeakObjectPtr<UObject>> kAssetsToRetarget;
    kAssetsToRetarget.Add( pWeekAnimBlueprint );
    EditorAnimUtils::RetargetAnimations( pAnimBlueprint->TargetSkeleton, pSkeleton, kAssetsToRetarget, false, NULL, false );

    FKismetEditorUtilities::CompileBlueprint( pAnimBlueprint );
    UPackage* const pAssetPackage = pAnimBlueprint->GetOutermost();
    pAssetPackage->SetDirtyFlag( true );

    //Save
    TArray<UPackage*> kPackagesToSave;
    kPackagesToSave.Add( pAssetPackage );
    FEditorFileUtils::PromptForCheckoutAndSave( kPackagesToSave, false, /*bPromptToSave=*/ false );
    return true;
}

void FRLRigSetupModule::DeleteAssetsInFolder( const FString& strDeleteFolderPath )
{
    FAssetRegistryModule& kAssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>( "AssetRegistry" );
    
    FARFilter kDeleteFilter;
    kDeleteFilter.ClassPaths.Add( USkeletalMesh::StaticClass()->GetClassPathName() );
    kDeleteFilter.ClassPaths.Add( UAnimBlueprint::StaticClass()->GetClassPathName() );
    kDeleteFilter.ClassPaths.Add( UBlueprint::StaticClass()->GetClassPathName() );
    kDeleteFilter.PackagePaths.Add( *strDeleteFolderPath );

    TArray<FAssetData> kDeleteAssetData;
    kAssetRegistryModule.Get().GetAssets( kDeleteFilter, kDeleteAssetData );
    if ( kDeleteAssetData.IsEmpty() )
    {
        return;
    }

     TArray<UObject*> kAssetObjectsInPath;
    for( auto& kDeleteData : kDeleteAssetData )
    {
        auto fnDeleteAsset = [ & ]()
        {
            UObject* pAsset = kDeleteData.GetAsset();
            if( pAsset )
            {
                kAssetObjectsInPath.Add( pAsset );
                kAssetRegistryModule.Get().AssetDeleted( pAsset );
            }
        };
        fnDeleteAsset();
    }
    for ( auto pObject : kAssetObjectsInPath )
    {
        FAssetRegistryModule::AssetDeleted( pObject );
    }
    ObjectTools::ForceDeleteObjects( kAssetObjectsInPath, false );
}

void FRLRigSetupModule::RenameAsset( UObject* pAssetObject, const FString& strNewAssetName )
{
    //Rename Asset
    FAssetToolsModule& kAssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>( "AssetTools" );
    TArray<FAssetRenameData> kAssetsAndNames;
    const FString strPackagePath = FPackageName::GetLongPackagePath( pAssetObject->GetOutermost()->GetName() );
    new( kAssetsAndNames ) FAssetRenameData();
    kAssetsAndNames[ 0 ].NewName = strNewAssetName;
    kAssetsAndNames[ 0 ].NewPackagePath = strPackagePath;
    kAssetsAndNames[ 0 ].Asset = pAssetObject;
    kAssetToolsModule.Get().RenameAssetsWithDialog( kAssetsAndNames );
}
void FRLRigSetupModule::ShowDisableLiveLinkActiveMessage()
{
    FText kDialogText = FText::FromString( LIVE_LINK_SKELETON_BEGIN_RIG_SETUP_MESSAGE );
    FMessageDialog::Open( EAppMsgType::Ok, kDialogText );
}

void FRLRigSetupModule::ShowSkeltonNotCompatiableMessage( FString strSkeletonName )
{
    FText kDialogText = FText::FromString( LIVE_LINK_SKELETON_NOTCOMPATIBLE_MESSAGE );
    FMessageDialog::Open( EAppMsgType::Ok, kDialogText );
}

bool FRLRigSetupModule::CopyRigControlFolder()
{
    IPlatformFile& kPlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString strSoruceRigControlsTemplate = GetRigPluginPath() + "/Content/Controls";
    FString strTargetRigControlsTemplate = FPaths::ProjectContentDir() + RIG_SETUP_FOLDER_SHARE_CONTENT_CONTROL_PATH;
    bool bCopyContent = kPlatformFile.CopyDirectoryTree( *strTargetRigControlsTemplate, *strSoruceRigControlsTemplate, true );
    return bCopyContent;
}

bool FRLRigSetupModule::IsCC3PlusSkeleton( USkeleton* pSkeleton )
{
    FString strCCPlusPelvis = "cc_base_pelvis";
    if ( pSkeleton )
    {
        size_t uBoneNum = pSkeleton->GetReferenceSkeleton().GetNum();
        for ( size_t uBoneIndex = 0; uBoneIndex < uBoneNum; ++uBoneIndex )
        {
            if ( strCCPlusPelvis == pSkeleton->GetReferenceSkeleton().GetBoneName( uBoneIndex ) )
            {
                return true;
            }
        } 
    }
    return false;
}
#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE( FRLRigSetupModule, RLRigSetup )