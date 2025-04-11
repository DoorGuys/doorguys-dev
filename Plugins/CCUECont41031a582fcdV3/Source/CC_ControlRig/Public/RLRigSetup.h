// Copyright 2024 The Reallusion Authors. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "RLRigSetupDefine.h"

class FToolBarBuilder;
class FMenuBuilder;
class ASkeletalMeshActor;

class FRLRigSetupModule : public IModuleInterface
{
public:
	enum ESkeletalMeshPart : uint8
	{
		Face = 0,
		Body
	};

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	void PluginButtonClicked();
	
private:
	void AddToolBarButton(FToolBarBuilder& kBuilder);
	TSharedRef< FExtender > CreateContentBrowserAssetSelectionMenu( const TArray< FAssetData >& kSelectedAssets );
	void RegisterMenus();

	// Main Function
	bool SetupSelectedCharactersToBlueprint();
	bool SetupSelectedAssetsToBluepriunt();
	bool CreateRigBlueprint( USkeletalMesh* pSkeletalMesh,
							 USkeletalMesh* pFaceSkeletalMesh,
							 USkeletalMesh* pBodySkeletalMesh,
							 const FString& strFaceAnimBlueprintPackagePath,
							 const FString& strFaceAnimBlueprintRegularPath,
							 const FString& strBodyAnimBlueprintPackagePath,
							 const FString& strBodyAnimBlueprintRegularPath,
							 const FString& strRigBlueprintPackagePath,
							 const FString& strRigBlueprintRegularPath );
	bool CreateRigBlueprintWithLiveLink( USkeletalMesh* pSkeletalMesh,
										 USkeletalMesh* pFaceSkeletalMesh,
										 USkeletalMesh* pBodySkeletalMesh,
										 const FString& strFaceAnimBlueprintPackagePath,
										 const FString& strFaceAnimBlueprintRegularPath,
										 const FString& strBodyAnimBlueprintPackagePath,
										 const FString& strBodyAnimBlueprintRegularPath,
										 const FString& strRigBlueprintPackagePath,
										 const FString& strRigBlueprintRegularPath );
	bool CreateBodyAndFaceAsset( ASkeletalMeshActor* pActor,
								 USkeletalMesh*& pFaceSkeletalMesh,
								 USkeletalMesh*& pBodySkeletalMesh );
	bool CreateBodyAndFaceAsset( USkeletalMesh* pSkeletalMesh,
								 const FString strMainName,
								 const FString& strCreateTargetPackagePath,
								 USkeletalMesh*& pFaceSkeletalMesh,
								 USkeletalMesh*& pBodySkeletalMesh );

	//Utility
	FString GetRigPluginPath();
	uint32 GetSelectedActors( UClass* pFilterClass, TArray<UObject*>& kOutSelectedObjects );
	FString GetActorPackagePath( ASkeletalMeshActor* pActor );
	FString GetActorName( ASkeletalMeshActor* pActor );
	FString GetActorRLContentRegularPath( ASkeletalMeshActor* pActor );
	FString GetSkeletalMeshFilePath( ASkeletalMeshActor* pActor );
	bool IsLiveLinkedActor( ASkeletalMeshActor* pActor );
	bool IsLiveLinkedAsset( const FString& strSkeletalMeshName, const FString& strRegularPath );
	bool IsSectionUsedHeadBone( const FSkelMeshSection& kSection, const TArray<FName> kBones );

	UAnimBlueprint* CreateAnimationBlueprintTemplate( const FString& strTargetPackagePath,
													  const FString& strTargetRegularPath,
													  const FString& strTemplateName );
	UBlueprint* CreateBlueprintFromTemplate( const FString& strTargetPackagePath,
									 		 const FString& strTargetRegularPath,
											 const FString& strTemplateName );
	UObject* CreateAnimationRigTemplate( const FString& strTemplateName );
	USkeletalMeshComponent* GetSkeletalMeshByPart( UBlueprint* pBlueprint, const FString& strPart );
	USkeletalMesh* CopySkeletalMeshFile( ASkeletalMeshActor* pActor,
									     const FString& strTemplateName );
	USkeletalMesh* CopySkeletalMeshFile( USkeletalMesh* pSkeletalMesh,
										 const FString& strActorGamePath,
										 const FString& strTemplateName );
	void CopyRigPickerFolderToRigFolder();
	void RemoveSkeletalMeshPart( USkeletalMesh* pSkeletalMesh,
								 ESkeletalMeshPart ePart );
	void DeleteAssetsInFolder( const FString& strFolder );
	bool ReAssignAnimationBlueprintSkeleton( UAnimBlueprint* pAnimBlueprint, USkeleton* pSkeleton );
	void RenameAsset( UObject* pAssetObject, const FString& strNewAssetName );
	void ShowDisableLiveLinkActiveMessage();
	void ShowSkeltonNotCompatiableMessage( FString strSkeletonName );
	bool CopyRigControlFolder();
	bool IsCC3PlusSkeleton( USkeleton* pSkeleton );

private:
	TSharedPtr<class FUICommandList> m_kPluginCommands;

	TArray< FName > m_kHeadBoneNames ={ CC_HEAD, CC_FACIAL, CC_JAW_ROOT, CC_UPPER_JAW, CC_TEETH_01, CC_TEETH_02,
										CC_TONGUE_01, CC_TONGUE_02, CC_TONGUE_03, CC_LEFT_EYE, CC_RIGHT_EYE, };
};
