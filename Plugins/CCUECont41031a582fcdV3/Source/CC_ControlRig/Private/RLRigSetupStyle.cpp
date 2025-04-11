// Copyright 2024 The Reallusion Authors. All Rights Reserved.

#include "RLRigSetupStyle.h"
#include "RLRigSetup.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FRLRigSetupStyle::StyleInstance = nullptr;

void FRLRigSetupStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FRLRigSetupStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FRLRigSetupStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("RLRigSetupStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);
const FVector2D Icon40x40( 40.0f, 40.0f );

TSharedRef< FSlateStyleSet > FRLRigSetupStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet( "RLRigSetupStyle" ));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin( "CC_ControlRig" )->GetBaseDir() / TEXT( "Resources" ));


	Style->Set( "CC_ControlRig.PluginAction", new IMAGE_BRUSH(TEXT("ButtonIcon_40x"), Icon40x40 ));
	Style->Set( "RLPlugin.PluginAction.Small", new IMAGE_BRUSH( TEXT( "ButtonIcon_40x" ), Icon20x20 ) );
	return Style;
}

void FRLRigSetupStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FRLRigSetupStyle::Get()
{
	return *StyleInstance;
}
