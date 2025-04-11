// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/BrowserBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWebJSFunction;
#ifdef BRIDGE_BrowserBinding_generated_h
#error "BrowserBinding.generated.h already included, missing '#pragma once' in BrowserBinding.h"
#endif
#define BRIDGE_BrowserBinding_generated_h

#define FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOpenMegascansPluginSettings); \
	DECLARE_FUNCTION(execRestartNodeProcess); \
	DECLARE_FUNCTION(execStartNodeProcess); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execGetProjectPath); \
	DECLARE_FUNCTION(execExportDataToMSPlugin); \
	DECLARE_FUNCTION(execOpenExternalUrl); \
	DECLARE_FUNCTION(execShowLoginDialog); \
	DECLARE_FUNCTION(execDragStarted); \
	DECLARE_FUNCTION(execShowDialog); \
	DECLARE_FUNCTION(execSendFailure); \
	DECLARE_FUNCTION(execSendSuccess); \
	DECLARE_FUNCTION(execGetAuthToken); \
	DECLARE_FUNCTION(execSaveAuthToken); \
	DECLARE_FUNCTION(execOnBulkExportMetahumansCallback); \
	DECLARE_FUNCTION(execOnExitCallback); \
	DECLARE_FUNCTION(execOnDropDiscardedCallback); \
	DECLARE_FUNCTION(execOnDroppedCallback); \
	DECLARE_FUNCTION(execDialogFailCallback); \
	DECLARE_FUNCTION(execDialogSuccessCallback);


#define FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUBrowserBinding(); \
	friend struct Z_Construct_UClass_UBrowserBinding_Statics; \
public: \
	DECLARE_CLASS(UBrowserBinding, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Bridge"), NO_API) \
	DECLARE_SERIALIZER(UBrowserBinding)


#define FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBrowserBinding(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBrowserBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBrowserBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBrowserBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBrowserBinding(UBrowserBinding&&); \
	UBrowserBinding(const UBrowserBinding&); \
public: \
	NO_API virtual ~UBrowserBinding();


#define FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_22_PROLOG
#define FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_25_RPC_WRAPPERS \
	FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_25_INCLASS \
	FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BRIDGE_API UClass* StaticClass<class UBrowserBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
