// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bridge/Private/UI/BrowserBinding.h"
#include "Runtime/WebBrowser/Public/WebJSFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrowserBinding() {}

// Begin Cross Module References
BRIDGE_API UClass* Z_Construct_UClass_UBrowserBinding();
BRIDGE_API UClass* Z_Construct_UClass_UBrowserBinding_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_Bridge();
WEBBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FWebJSFunction();
// End Cross Module References

// Begin Class UBrowserBinding Function DialogFailCallback
struct Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics
{
	struct BrowserBinding_eventDialogFailCallback_Parms
	{
		FWebJSFunction DialogJSCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogJSCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::NewProp_DialogJSCallback = { "DialogJSCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventDialogFailCallback_Parms, DialogJSCallback), Z_Construct_UScriptStruct_FWebJSFunction, METADATA_PARAMS(0, nullptr) }; // 4277313148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::NewProp_DialogJSCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "DialogFailCallback", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::BrowserBinding_eventDialogFailCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::BrowserBinding_eventDialogFailCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_DialogFailCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_DialogFailCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execDialogFailCallback)
{
	P_GET_STRUCT(FWebJSFunction,Z_Param_DialogJSCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogFailCallback(Z_Param_DialogJSCallback);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function DialogFailCallback

// Begin Class UBrowserBinding Function DialogSuccessCallback
struct Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics
{
	struct BrowserBinding_eventDialogSuccessCallback_Parms
	{
		FWebJSFunction DialogJSCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogJSCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::NewProp_DialogJSCallback = { "DialogJSCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventDialogSuccessCallback_Parms, DialogJSCallback), Z_Construct_UScriptStruct_FWebJSFunction, METADATA_PARAMS(0, nullptr) }; // 4277313148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::NewProp_DialogJSCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "DialogSuccessCallback", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::BrowserBinding_eventDialogSuccessCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::BrowserBinding_eventDialogSuccessCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execDialogSuccessCallback)
{
	P_GET_STRUCT(FWebJSFunction,Z_Param_DialogJSCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogSuccessCallback(Z_Param_DialogJSCallback);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function DialogSuccessCallback

// Begin Class UBrowserBinding Function DragStarted
struct Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics
{
	struct BrowserBinding_eventDragStarted_Parms
	{
		TArray<FString> ImageUrl;
		TArray<FString> IDs;
		TArray<FString> Types;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageUrl_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IDs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Types_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Types;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_ImageUrl_Inner = { "ImageUrl", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_ImageUrl = { "ImageUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventDragStarted_Parms, ImageUrl), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_IDs_Inner = { "IDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_IDs = { "IDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventDragStarted_Parms, IDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventDragStarted_Parms, Types), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_ImageUrl_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_ImageUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_IDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_IDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_Types_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::NewProp_Types,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "DragStarted", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::BrowserBinding_eventDragStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::BrowserBinding_eventDragStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_DragStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_DragStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execDragStarted)
{
	P_GET_TARRAY(FString,Z_Param_ImageUrl);
	P_GET_TARRAY(FString,Z_Param_IDs);
	P_GET_TARRAY(FString,Z_Param_Types);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DragStarted(Z_Param_ImageUrl,Z_Param_IDs,Z_Param_Types);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function DragStarted

// Begin Class UBrowserBinding Function ExportDataToMSPlugin
struct Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics
{
	struct BrowserBinding_eventExportDataToMSPlugin_Parms
	{
		FString Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventExportDataToMSPlugin_Parms, Data), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "ExportDataToMSPlugin", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::BrowserBinding_eventExportDataToMSPlugin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::BrowserBinding_eventExportDataToMSPlugin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execExportDataToMSPlugin)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExportDataToMSPlugin(Z_Param_Data);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function ExportDataToMSPlugin

// Begin Class UBrowserBinding Function GetAuthToken
struct Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics
{
	struct BrowserBinding_eventGetAuthToken_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventGetAuthToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "GetAuthToken", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::BrowserBinding_eventGetAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::BrowserBinding_eventGetAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_GetAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_GetAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execGetAuthToken)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetAuthToken();
	P_NATIVE_END;
}
// End Class UBrowserBinding Function GetAuthToken

// Begin Class UBrowserBinding Function GetProjectPath
struct Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics
{
	struct BrowserBinding_eventGetProjectPath_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventGetProjectPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "GetProjectPath", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::BrowserBinding_eventGetProjectPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::BrowserBinding_eventGetProjectPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_GetProjectPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_GetProjectPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execGetProjectPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetProjectPath();
	P_NATIVE_END;
}
// End Class UBrowserBinding Function GetProjectPath

// Begin Class UBrowserBinding Function Logout
struct Z_Construct_UFunction_UBrowserBinding_Logout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "Logout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_Logout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_Logout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBrowserBinding_Logout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_Logout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execLogout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Logout();
	P_NATIVE_END;
}
// End Class UBrowserBinding Function Logout

// Begin Class UBrowserBinding Function OnBulkExportMetahumansCallback
struct Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics
{
	struct BrowserBinding_eventOnBulkExportMetahumansCallback_Parms
	{
		FWebJSFunction OnBulkExportMetahumansJSCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnBulkExportMetahumansJSCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::NewProp_OnBulkExportMetahumansJSCallback = { "OnBulkExportMetahumansJSCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventOnBulkExportMetahumansCallback_Parms, OnBulkExportMetahumansJSCallback), Z_Construct_UScriptStruct_FWebJSFunction, METADATA_PARAMS(0, nullptr) }; // 4277313148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::NewProp_OnBulkExportMetahumansJSCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "OnBulkExportMetahumansCallback", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::BrowserBinding_eventOnBulkExportMetahumansCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::BrowserBinding_eventOnBulkExportMetahumansCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execOnBulkExportMetahumansCallback)
{
	P_GET_STRUCT(FWebJSFunction,Z_Param_OnBulkExportMetahumansJSCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBulkExportMetahumansCallback(Z_Param_OnBulkExportMetahumansJSCallback);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function OnBulkExportMetahumansCallback

// Begin Class UBrowserBinding Function OnDropDiscardedCallback
struct Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics
{
	struct BrowserBinding_eventOnDropDiscardedCallback_Parms
	{
		FWebJSFunction OnDropDiscardedJSCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnDropDiscardedJSCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::NewProp_OnDropDiscardedJSCallback = { "OnDropDiscardedJSCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventOnDropDiscardedCallback_Parms, OnDropDiscardedJSCallback), Z_Construct_UScriptStruct_FWebJSFunction, METADATA_PARAMS(0, nullptr) }; // 4277313148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::NewProp_OnDropDiscardedJSCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "OnDropDiscardedCallback", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::BrowserBinding_eventOnDropDiscardedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::BrowserBinding_eventOnDropDiscardedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execOnDropDiscardedCallback)
{
	P_GET_STRUCT(FWebJSFunction,Z_Param_OnDropDiscardedJSCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDropDiscardedCallback(Z_Param_OnDropDiscardedJSCallback);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function OnDropDiscardedCallback

// Begin Class UBrowserBinding Function OnDroppedCallback
struct Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics
{
	struct BrowserBinding_eventOnDroppedCallback_Parms
	{
		FWebJSFunction OnDroppedJSCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnDroppedJSCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::NewProp_OnDroppedJSCallback = { "OnDroppedJSCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventOnDroppedCallback_Parms, OnDroppedJSCallback), Z_Construct_UScriptStruct_FWebJSFunction, METADATA_PARAMS(0, nullptr) }; // 4277313148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::NewProp_OnDroppedJSCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "OnDroppedCallback", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::BrowserBinding_eventOnDroppedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::BrowserBinding_eventOnDroppedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execOnDroppedCallback)
{
	P_GET_STRUCT(FWebJSFunction,Z_Param_OnDroppedJSCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDroppedCallback(Z_Param_OnDroppedJSCallback);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function OnDroppedCallback

// Begin Class UBrowserBinding Function OnExitCallback
struct Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics
{
	struct BrowserBinding_eventOnExitCallback_Parms
	{
		FWebJSFunction OnExitJSCallback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OnExitJSCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::NewProp_OnExitJSCallback = { "OnExitJSCallback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventOnExitCallback_Parms, OnExitJSCallback), Z_Construct_UScriptStruct_FWebJSFunction, METADATA_PARAMS(0, nullptr) }; // 4277313148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::NewProp_OnExitJSCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "OnExitCallback", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::BrowserBinding_eventOnExitCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::BrowserBinding_eventOnExitCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_OnExitCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_OnExitCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execOnExitCallback)
{
	P_GET_STRUCT(FWebJSFunction,Z_Param_OnExitJSCallback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitCallback(Z_Param_OnExitJSCallback);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function OnExitCallback

// Begin Class UBrowserBinding Function OpenExternalUrl
struct Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics
{
	struct BrowserBinding_eventOpenExternalUrl_Parms
	{
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventOpenExternalUrl_Parms, Url), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "OpenExternalUrl", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::BrowserBinding_eventOpenExternalUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::BrowserBinding_eventOpenExternalUrl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execOpenExternalUrl)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenExternalUrl(Z_Param_Url);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function OpenExternalUrl

// Begin Class UBrowserBinding Function OpenMegascansPluginSettings
struct Z_Construct_UFunction_UBrowserBinding_OpenMegascansPluginSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_OpenMegascansPluginSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "OpenMegascansPluginSettings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_OpenMegascansPluginSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_OpenMegascansPluginSettings_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBrowserBinding_OpenMegascansPluginSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_OpenMegascansPluginSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execOpenMegascansPluginSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenMegascansPluginSettings();
	P_NATIVE_END;
}
// End Class UBrowserBinding Function OpenMegascansPluginSettings

// Begin Class UBrowserBinding Function RestartNodeProcess
struct Z_Construct_UFunction_UBrowserBinding_RestartNodeProcess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_RestartNodeProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "RestartNodeProcess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_RestartNodeProcess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_RestartNodeProcess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBrowserBinding_RestartNodeProcess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_RestartNodeProcess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execRestartNodeProcess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartNodeProcess();
	P_NATIVE_END;
}
// End Class UBrowserBinding Function RestartNodeProcess

// Begin Class UBrowserBinding Function SaveAuthToken
struct Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics
{
	struct BrowserBinding_eventSaveAuthToken_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventSaveAuthToken_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "SaveAuthToken", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::BrowserBinding_eventSaveAuthToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::BrowserBinding_eventSaveAuthToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_SaveAuthToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_SaveAuthToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execSaveAuthToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAuthToken(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function SaveAuthToken

// Begin Class UBrowserBinding Function SendFailure
struct Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics
{
	struct BrowserBinding_eventSendFailure_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventSendFailure_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "SendFailure", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::BrowserBinding_eventSendFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::BrowserBinding_eventSendFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_SendFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_SendFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execSendFailure)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendFailure(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function SendFailure

// Begin Class UBrowserBinding Function SendSuccess
struct Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics
{
	struct BrowserBinding_eventSendSuccess_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventSendSuccess_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "SendSuccess", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::BrowserBinding_eventSendSuccess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::BrowserBinding_eventSendSuccess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_SendSuccess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_SendSuccess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execSendSuccess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendSuccess(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function SendSuccess

// Begin Class UBrowserBinding Function ShowDialog
struct Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics
{
	struct BrowserBinding_eventShowDialog_Parms
	{
		FString Type;
		FString Url;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventShowDialog_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventShowDialog_Parms, Url), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::NewProp_Url,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "ShowDialog", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::BrowserBinding_eventShowDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::BrowserBinding_eventShowDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_ShowDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_ShowDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execShowDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Type);
	P_GET_PROPERTY(FStrProperty,Z_Param_Url);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowDialog(Z_Param_Type,Z_Param_Url);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function ShowDialog

// Begin Class UBrowserBinding Function ShowLoginDialog
struct Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics
{
	struct BrowserBinding_eventShowLoginDialog_Parms
	{
		FString LoginUrl;
		FString ResponseCodeUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LoginUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseCodeUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::NewProp_LoginUrl = { "LoginUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventShowLoginDialog_Parms, LoginUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::NewProp_ResponseCodeUrl = { "ResponseCodeUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrowserBinding_eventShowLoginDialog_Parms, ResponseCodeUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::NewProp_LoginUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::NewProp_ResponseCodeUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "ShowLoginDialog", nullptr, nullptr, Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::BrowserBinding_eventShowLoginDialog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::BrowserBinding_eventShowLoginDialog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execShowLoginDialog)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_LoginUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_ResponseCodeUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowLoginDialog(Z_Param_LoginUrl,Z_Param_ResponseCodeUrl);
	P_NATIVE_END;
}
// End Class UBrowserBinding Function ShowLoginDialog

// Begin Class UBrowserBinding Function StartNodeProcess
struct Z_Construct_UFunction_UBrowserBinding_StartNodeProcess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrowserBinding_StartNodeProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrowserBinding, nullptr, "StartNodeProcess", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrowserBinding_StartNodeProcess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrowserBinding_StartNodeProcess_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBrowserBinding_StartNodeProcess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrowserBinding_StartNodeProcess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrowserBinding::execStartNodeProcess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartNodeProcess();
	P_NATIVE_END;
}
// End Class UBrowserBinding Function StartNodeProcess

// Begin Class UBrowserBinding
void UBrowserBinding::StaticRegisterNativesUBrowserBinding()
{
	UClass* Class = UBrowserBinding::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DialogFailCallback", &UBrowserBinding::execDialogFailCallback },
		{ "DialogSuccessCallback", &UBrowserBinding::execDialogSuccessCallback },
		{ "DragStarted", &UBrowserBinding::execDragStarted },
		{ "ExportDataToMSPlugin", &UBrowserBinding::execExportDataToMSPlugin },
		{ "GetAuthToken", &UBrowserBinding::execGetAuthToken },
		{ "GetProjectPath", &UBrowserBinding::execGetProjectPath },
		{ "Logout", &UBrowserBinding::execLogout },
		{ "OnBulkExportMetahumansCallback", &UBrowserBinding::execOnBulkExportMetahumansCallback },
		{ "OnDropDiscardedCallback", &UBrowserBinding::execOnDropDiscardedCallback },
		{ "OnDroppedCallback", &UBrowserBinding::execOnDroppedCallback },
		{ "OnExitCallback", &UBrowserBinding::execOnExitCallback },
		{ "OpenExternalUrl", &UBrowserBinding::execOpenExternalUrl },
		{ "OpenMegascansPluginSettings", &UBrowserBinding::execOpenMegascansPluginSettings },
		{ "RestartNodeProcess", &UBrowserBinding::execRestartNodeProcess },
		{ "SaveAuthToken", &UBrowserBinding::execSaveAuthToken },
		{ "SendFailure", &UBrowserBinding::execSendFailure },
		{ "SendSuccess", &UBrowserBinding::execSendSuccess },
		{ "ShowDialog", &UBrowserBinding::execShowDialog },
		{ "ShowLoginDialog", &UBrowserBinding::execShowLoginDialog },
		{ "StartNodeProcess", &UBrowserBinding::execStartNodeProcess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrowserBinding);
UClass* Z_Construct_UClass_UBrowserBinding_NoRegister()
{
	return UBrowserBinding::StaticClass();
}
struct Z_Construct_UClass_UBrowserBinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BrowserBinding.h" },
		{ "ModuleRelativePath", "Private/UI/BrowserBinding.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrowserBinding_DialogFailCallback, "DialogFailCallback" }, // 739612404
		{ &Z_Construct_UFunction_UBrowserBinding_DialogSuccessCallback, "DialogSuccessCallback" }, // 1369563791
		{ &Z_Construct_UFunction_UBrowserBinding_DragStarted, "DragStarted" }, // 3278974405
		{ &Z_Construct_UFunction_UBrowserBinding_ExportDataToMSPlugin, "ExportDataToMSPlugin" }, // 3958876440
		{ &Z_Construct_UFunction_UBrowserBinding_GetAuthToken, "GetAuthToken" }, // 3042669402
		{ &Z_Construct_UFunction_UBrowserBinding_GetProjectPath, "GetProjectPath" }, // 3097484127
		{ &Z_Construct_UFunction_UBrowserBinding_Logout, "Logout" }, // 1177502948
		{ &Z_Construct_UFunction_UBrowserBinding_OnBulkExportMetahumansCallback, "OnBulkExportMetahumansCallback" }, // 1608595770
		{ &Z_Construct_UFunction_UBrowserBinding_OnDropDiscardedCallback, "OnDropDiscardedCallback" }, // 3366968110
		{ &Z_Construct_UFunction_UBrowserBinding_OnDroppedCallback, "OnDroppedCallback" }, // 1529500433
		{ &Z_Construct_UFunction_UBrowserBinding_OnExitCallback, "OnExitCallback" }, // 1999516752
		{ &Z_Construct_UFunction_UBrowserBinding_OpenExternalUrl, "OpenExternalUrl" }, // 4174931634
		{ &Z_Construct_UFunction_UBrowserBinding_OpenMegascansPluginSettings, "OpenMegascansPluginSettings" }, // 3540071846
		{ &Z_Construct_UFunction_UBrowserBinding_RestartNodeProcess, "RestartNodeProcess" }, // 151781265
		{ &Z_Construct_UFunction_UBrowserBinding_SaveAuthToken, "SaveAuthToken" }, // 3739703183
		{ &Z_Construct_UFunction_UBrowserBinding_SendFailure, "SendFailure" }, // 2067105622
		{ &Z_Construct_UFunction_UBrowserBinding_SendSuccess, "SendSuccess" }, // 4287138014
		{ &Z_Construct_UFunction_UBrowserBinding_ShowDialog, "ShowDialog" }, // 1601339528
		{ &Z_Construct_UFunction_UBrowserBinding_ShowLoginDialog, "ShowLoginDialog" }, // 4224392294
		{ &Z_Construct_UFunction_UBrowserBinding_StartNodeProcess, "StartNodeProcess" }, // 529244622
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrowserBinding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBrowserBinding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Bridge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrowserBinding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrowserBinding_Statics::ClassParams = {
	&UBrowserBinding::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrowserBinding_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrowserBinding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrowserBinding()
{
	if (!Z_Registration_Info_UClass_UBrowserBinding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrowserBinding.OuterSingleton, Z_Construct_UClass_UBrowserBinding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrowserBinding.OuterSingleton;
}
template<> BRIDGE_API UClass* StaticClass<UBrowserBinding>()
{
	return UBrowserBinding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrowserBinding);
UBrowserBinding::~UBrowserBinding() {}
// End Class UBrowserBinding

// Begin Registration
struct Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrowserBinding, UBrowserBinding::StaticClass, TEXT("UBrowserBinding"), &Z_Registration_Info_UClass_UBrowserBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrowserBinding), 1833423461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_685885795(TEXT("/Script/Bridge"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_UI_BrowserBinding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
