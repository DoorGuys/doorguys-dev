// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MegascansPlugin/Private/Utilities/VersionInfoHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVersionInfoHandler() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UVersionInfoHandler();
MEGASCANSPLUGIN_API UClass* Z_Construct_UClass_UVersionInfoHandler_NoRegister();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAssetImportTime();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAssetInfo();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FImportTimeData();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVersionData();
UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// End Cross Module References

// Begin ScriptStruct FAssetInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetInfo;
class UScriptStruct* FAssetInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("AssetInfo"));
	}
	return Z_Registration_Info_UScriptStruct_AssetInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FAssetInfo>()
{
	return FAssetInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetInfo, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetInfo, version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_version_MetaData), NewProp_version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetInfo_Statics::NewProp_version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"AssetInfo",
	Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetInfo_Statics::PropPointers),
	sizeof(FAssetInfo),
	alignof(FAssetInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetInfo()
{
	if (!Z_Registration_Info_UScriptStruct_AssetInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetInfo.InnerSingleton, Z_Construct_UScriptStruct_FAssetInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetInfo.InnerSingleton;
}
// End ScriptStruct FAssetInfo

// Begin ScriptStruct FVersionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VersionData;
class UScriptStruct* FVersionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VersionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VersionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersionData, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("VersionData"));
	}
	return Z_Registration_Info_UScriptStruct_VersionData.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FVersionData>()
{
	return FVersionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVersionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets_Inner = { "assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetInfo, METADATA_PARAMS(0, nullptr) }; // 3373330589
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets = { "assets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVersionData, assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assets_MetaData), NewProp_assets_MetaData) }; // 3373330589
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionData_Statics::NewProp_assets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"VersionData",
	Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionData_Statics::PropPointers),
	sizeof(FVersionData),
	alignof(FVersionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVersionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVersionData()
{
	if (!Z_Registration_Info_UScriptStruct_VersionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VersionData.InnerSingleton, Z_Construct_UScriptStruct_FVersionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VersionData.InnerSingleton;
}
// End ScriptStruct FVersionData

// Begin ScriptStruct FAssetImportTime
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetImportTime;
class UScriptStruct* FAssetImportTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetImportTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetImportTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetImportTime, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("AssetImportTime"));
	}
	return Z_Registration_Info_UScriptStruct_AssetImportTime.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FAssetImportTime>()
{
	return FAssetImportTime::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetImportTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_time_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static const UECodeGen_Private::FStrPropertyParams NewProp_time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetImportTime>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetImportTime, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_time = { "time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetImportTime, time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_time_MetaData), NewProp_time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewProp_time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetImportTime_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"AssetImportTime",
	Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportTime_Statics::PropPointers),
	sizeof(FAssetImportTime),
	alignof(FAssetImportTime),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetImportTime_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetImportTime_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetImportTime()
{
	if (!Z_Registration_Info_UScriptStruct_AssetImportTime.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetImportTime.InnerSingleton, Z_Construct_UScriptStruct_FAssetImportTime_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetImportTime.InnerSingleton;
}
// End ScriptStruct FAssetImportTime

// Begin ScriptStruct FImportTimeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportTimeData;
class UScriptStruct* FImportTimeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportTimeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportTimeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportTimeData, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("ImportTimeData"));
	}
	return Z_Registration_Info_UScriptStruct_ImportTimeData.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FImportTimeData>()
{
	return FImportTimeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FImportTimeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assets_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_assets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportTimeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets_Inner = { "assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetImportTime, METADATA_PARAMS(0, nullptr) }; // 1542232927
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets = { "assets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FImportTimeData, assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assets_MetaData), NewProp_assets_MetaData) }; // 1542232927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportTimeData_Statics::NewProp_assets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportTimeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"ImportTimeData",
	Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportTimeData_Statics::PropPointers),
	sizeof(FImportTimeData),
	alignof(FImportTimeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportTimeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FImportTimeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FImportTimeData()
{
	if (!Z_Registration_Info_UScriptStruct_ImportTimeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportTimeData.InnerSingleton, Z_Construct_UScriptStruct_FImportTimeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ImportTimeData.InnerSingleton;
}
// End ScriptStruct FImportTimeData

// Begin Class UVersionInfoHandler Function Get
struct Z_Construct_UFunction_UVersionInfoHandler_Get_Statics
{
	struct VersionInfoHandler_eventGet_Parms
	{
		UVersionInfoHandler* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VersionInfoHandler_eventGet_Parms, ReturnValue), Z_Construct_UClass_UVersionInfoHandler_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVersionInfoHandler, nullptr, "Get", nullptr, nullptr, Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::VersionInfoHandler_eventGet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::VersionInfoHandler_eventGet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVersionInfoHandler_Get()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVersionInfoHandler_Get_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVersionInfoHandler::execGet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVersionInfoHandler**)Z_Param__Result=UVersionInfoHandler::Get();
	P_NATIVE_END;
}
// End Class UVersionInfoHandler Function Get

// Begin Class UVersionInfoHandler
void UVersionInfoHandler::StaticRegisterNativesUVersionInfoHandler()
{
	UClass* Class = UVersionInfoHandler::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Get", &UVersionInfoHandler::execGet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVersionInfoHandler);
UClass* Z_Construct_UClass_UVersionInfoHandler_NoRegister()
{
	return UVersionInfoHandler::StaticClass();
}
struct Z_Construct_UClass_UVersionInfoHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utilities/VersionInfoHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonVersionData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Utilities/VersionInfoHandler.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CommonVersionData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVersionInfoHandler_Get, "Get" }, // 476035435
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVersionInfoHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVersionInfoHandler_Statics::NewProp_CommonVersionData = { "CommonVersionData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVersionInfoHandler, CommonVersionData), Z_Construct_UScriptStruct_FVersionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonVersionData_MetaData), NewProp_CommonVersionData_MetaData) }; // 1178004028
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVersionInfoHandler_Statics::NewProp_CommonVersionData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVersionInfoHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVersionInfoHandler_Statics::ClassParams = {
	&UVersionInfoHandler::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVersionInfoHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UVersionInfoHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVersionInfoHandler()
{
	if (!Z_Registration_Info_UClass_UVersionInfoHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVersionInfoHandler.OuterSingleton, Z_Construct_UClass_UVersionInfoHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVersionInfoHandler.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UClass* StaticClass<UVersionInfoHandler>()
{
	return UVersionInfoHandler::StaticClass();
}
UVersionInfoHandler::UVersionInfoHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVersionInfoHandler);
UVersionInfoHandler::~UVersionInfoHandler() {}
// End Class UVersionInfoHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetInfo::StaticStruct, Z_Construct_UScriptStruct_FAssetInfo_Statics::NewStructOps, TEXT("AssetInfo"), &Z_Registration_Info_UScriptStruct_AssetInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetInfo), 3373330589U) },
		{ FVersionData::StaticStruct, Z_Construct_UScriptStruct_FVersionData_Statics::NewStructOps, TEXT("VersionData"), &Z_Registration_Info_UScriptStruct_VersionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersionData), 1178004028U) },
		{ FAssetImportTime::StaticStruct, Z_Construct_UScriptStruct_FAssetImportTime_Statics::NewStructOps, TEXT("AssetImportTime"), &Z_Registration_Info_UScriptStruct_AssetImportTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetImportTime), 1542232927U) },
		{ FImportTimeData::StaticStruct, Z_Construct_UScriptStruct_FImportTimeData_Statics::NewStructOps, TEXT("ImportTimeData"), &Z_Registration_Info_UScriptStruct_ImportTimeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportTimeData), 2111592744U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVersionInfoHandler, UVersionInfoHandler::StaticClass, TEXT("UVersionInfoHandler"), &Z_Registration_Info_UClass_UVersionInfoHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVersionInfoHandler), 2568594641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h_3034986083(TEXT("/Script/MegascansPlugin"),
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_Utilities_VersionInfoHandler_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
