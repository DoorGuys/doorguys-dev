// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MegascansPlugin/Private/MSAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMSAssetImportData() {}

// Begin Cross Module References
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FChannelPackedInfo();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeInfo();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMasterMaterialInfo();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceInfo();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParams();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialUsage();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTexturesList();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTextureUsage();
MEGASCANSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUAssetMeta();
UPackage* Z_Construct_UPackage__Script_MegascansPlugin();
// End Cross Module References

// Begin ScriptStruct FMaterialUsage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialUsage;
class UScriptStruct* FMaterialUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialUsage, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MaterialUsage"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialUsage.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMaterialUsage>()
{
	return FMaterialUsage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Asset metadata\n" },
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
		{ "ToolTip", "Asset metadata" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_instanceID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialSlot_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_instanceID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_materialSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialUsage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_instanceID = { "instanceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialUsage, instanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_instanceID_MetaData), NewProp_instanceID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_materialSlot = { "materialSlot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialUsage, materialSlot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialSlot_MetaData), NewProp_materialSlot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_instanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewProp_materialSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialUsage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"MaterialUsage",
	Z_Construct_UScriptStruct_FMaterialUsage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialUsage_Statics::PropPointers),
	sizeof(FMaterialUsage),
	alignof(FMaterialUsage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialUsage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialUsage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialUsage()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialUsage.InnerSingleton, Z_Construct_UScriptStruct_FMaterialUsage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialUsage.InnerSingleton;
}
// End ScriptStruct FMaterialUsage

// Begin ScriptStruct FMeshInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshInfo;
class UScriptStruct* FMeshInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MeshInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MeshInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMeshInfo>()
{
	return FMeshInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meshID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_numberOfLods_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialUsage_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_meshID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_numberOfLods;
	static const UECodeGen_Private::FStructPropertyParams NewProp_materialUsage_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_materialUsage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_meshID = { "meshID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo, meshID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meshID_MetaData), NewProp_meshID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_numberOfLods = { "numberOfLods", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo, numberOfLods), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_numberOfLods_MetaData), NewProp_numberOfLods_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage_Inner = { "materialUsage", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialUsage, METADATA_PARAMS(0, nullptr) }; // 4044588278
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage = { "materialUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshInfo, materialUsage), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialUsage_MetaData), NewProp_materialUsage_MetaData) }; // 4044588278
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_meshID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_numberOfLods,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshInfo_Statics::NewProp_materialUsage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"MeshInfo",
	Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::PropPointers),
	sizeof(FMeshInfo),
	alignof(FMeshInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MeshInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshInfo.InnerSingleton, Z_Construct_UScriptStruct_FMeshInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshInfo.InnerSingleton;
}
// End ScriptStruct FMeshInfo

// Begin ScriptStruct FFoliageTypeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoliageTypeInfo;
class UScriptStruct* FFoliageTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoliageTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageTypeInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("FoliageTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_FoliageTypeInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FFoliageTypeInfo>()
{
	return FFoliageTypeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageTypeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliageTypeInfo, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewProp_path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"FoliageTypeInfo",
	Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::PropPointers),
	sizeof(FFoliageTypeInfo),
	alignof(FFoliageTypeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFoliageTypeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageTypeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoliageTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FoliageTypeInfo.InnerSingleton;
}
// End ScriptStruct FFoliageTypeInfo

// Begin ScriptStruct FMaterialParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialParams;
class UScriptStruct* FMaterialParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParams, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MaterialParams"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialParams.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMaterialParams>()
{
	return FMaterialParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_paramName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_usedTextureID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_paramName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_usedTextureID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_paramName = { "paramName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParams, paramName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_paramName_MetaData), NewProp_paramName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_usedTextureID = { "usedTextureID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialParams, usedTextureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_usedTextureID_MetaData), NewProp_usedTextureID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_paramName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParams_Statics::NewProp_usedTextureID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"MaterialParams",
	Z_Construct_UScriptStruct_FMaterialParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParams_Statics::PropPointers),
	sizeof(FMaterialParams),
	alignof(FMaterialParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialParams()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialParams.InnerSingleton, Z_Construct_UScriptStruct_FMaterialParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialParams.InnerSingleton;
}
// End ScriptStruct FMaterialParams

// Begin ScriptStruct FMaterialInstanceInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceInfo;
class UScriptStruct* FMaterialInstanceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MaterialInstanceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMaterialInstanceInfo>()
{
	return FMaterialInstanceInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_instanceID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_instanceName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_instancePath_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_instanceMaster_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_params_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_instanceID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_instanceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_instancePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_instanceMaster;
	static const UECodeGen_Private::FStrPropertyParams NewProp_type;
	static const UECodeGen_Private::FStructPropertyParams NewProp_params_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceID = { "instanceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceInfo, instanceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_instanceID_MetaData), NewProp_instanceID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceName = { "instanceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceInfo, instanceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_instanceName_MetaData), NewProp_instanceName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instancePath = { "instancePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceInfo, instancePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_instancePath_MetaData), NewProp_instancePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceMaster = { "instanceMaster", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceInfo, instanceMaster), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_instanceMaster_MetaData), NewProp_instanceMaster_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceInfo, type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params_Inner = { "params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialParams, METADATA_PARAMS(0, nullptr) }; // 1952485942
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceInfo, params), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_params_MetaData), NewProp_params_MetaData) }; // 1952485942
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instancePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_instanceMaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewProp_params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"MaterialInstanceInfo",
	Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::PropPointers),
	sizeof(FMaterialInstanceInfo),
	alignof(FMaterialInstanceInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceInfo.InnerSingleton;
}
// End ScriptStruct FMaterialInstanceInfo

// Begin ScriptStruct FMasterMaterialInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MasterMaterialInfo;
class UScriptStruct* FMasterMaterialInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MasterMaterialInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MasterMaterialInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMasterMaterialInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("MasterMaterialInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MasterMaterialInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FMasterMaterialInfo>()
{
	return FMasterMaterialInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_masterID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_masterMaterialName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_masterID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_masterMaterialName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMasterMaterialInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterID = { "masterID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMasterMaterialInfo, masterID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_masterID_MetaData), NewProp_masterID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterMaterialName = { "masterMaterialName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMasterMaterialInfo, masterMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_masterMaterialName_MetaData), NewProp_masterMaterialName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMasterMaterialInfo, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_masterMaterialName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewProp_path,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"MasterMaterialInfo",
	Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::PropPointers),
	sizeof(FMasterMaterialInfo),
	alignof(FMasterMaterialInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMasterMaterialInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MasterMaterialInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MasterMaterialInfo.InnerSingleton, Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MasterMaterialInfo.InnerSingleton;
}
// End ScriptStruct FMasterMaterialInfo

// Begin ScriptStruct FChannelPackedInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChannelPackedInfo;
class UScriptStruct* FChannelPackedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelPackedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChannelPackedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelPackedInfo, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("ChannelPackedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChannelPackedInfo.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FChannelPackedInfo>()
{
	return FChannelPackedInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChannelPackedInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_channel_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_packedType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_channel;
	static const UECodeGen_Private::FStrPropertyParams NewProp_packedType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelPackedInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelPackedInfo, channel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_channel_MetaData), NewProp_channel_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_packedType = { "packedType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChannelPackedInfo, packedType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_packedType_MetaData), NewProp_packedType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewProp_packedType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"ChannelPackedInfo",
	Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::PropPointers),
	sizeof(FChannelPackedInfo),
	alignof(FChannelPackedInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChannelPackedInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelPackedInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChannelPackedInfo.InnerSingleton, Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChannelPackedInfo.InnerSingleton;
}
// End ScriptStruct FChannelPackedInfo

// Begin ScriptStruct FTextureUsage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureUsage;
class UScriptStruct* FTextureUsage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureUsage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureUsage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureUsage, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("TextureUsage"));
	}
	return Z_Registration_Info_UScriptStruct_TextureUsage.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FTextureUsage>()
{
	return FTextureUsage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureUsage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_matID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_matParams_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_matID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_matParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureUsage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matID = { "matID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureUsage, matID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_matID_MetaData), NewProp_matID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matParams = { "matParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureUsage, matParams), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_matParams_MetaData), NewProp_matParams_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureUsage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureUsage_Statics::NewProp_matParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureUsage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureUsage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"TextureUsage",
	Z_Construct_UScriptStruct_FTextureUsage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureUsage_Statics::PropPointers),
	sizeof(FTextureUsage),
	alignof(FTextureUsage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureUsage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureUsage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureUsage()
{
	if (!Z_Registration_Info_UScriptStruct_TextureUsage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureUsage.InnerSingleton, Z_Construct_UScriptStruct_FTextureUsage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureUsage.InnerSingleton;
}
// End ScriptStruct FTextureUsage

// Begin ScriptStruct FTexturesList
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TexturesList;
class UScriptStruct* FTexturesList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TexturesList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TexturesList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTexturesList, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("TexturesList"));
	}
	return Z_Registration_Info_UScriptStruct_TexturesList.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FTexturesList>()
{
	return FTexturesList::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTexturesList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_textureID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_resolution_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isChannelPacked_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_channelPackInfo_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pluggedIn_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_textureID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_resolution;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_path;
	static void NewProp_isChannelPacked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isChannelPacked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_channelPackInfo_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_channelPackInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pluggedIn_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_pluggedIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTexturesList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_textureID = { "textureID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturesList, textureID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_textureID_MetaData), NewProp_textureID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturesList, type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_type_MetaData), NewProp_type_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_resolution = { "resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturesList, resolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_resolution_MetaData), NewProp_resolution_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturesList, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturesList, path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_path_MetaData), NewProp_path_MetaData) };
void Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked_SetBit(void* Obj)
{
	((FTexturesList*)Obj)->isChannelPacked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked = { "isChannelPacked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTexturesList), &Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isChannelPacked_MetaData), NewProp_isChannelPacked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo_Inner = { "channelPackInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChannelPackedInfo, METADATA_PARAMS(0, nullptr) }; // 730171286
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo = { "channelPackInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturesList, channelPackInfo), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_channelPackInfo_MetaData), NewProp_channelPackInfo_MetaData) }; // 730171286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn_Inner = { "pluggedIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTextureUsage, METADATA_PARAMS(0, nullptr) }; // 1059363718
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn = { "pluggedIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTexturesList, pluggedIn), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pluggedIn_MetaData), NewProp_pluggedIn_MetaData) }; // 1059363718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTexturesList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_textureID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_isChannelPacked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_channelPackInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTexturesList_Statics::NewProp_pluggedIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTexturesList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"TexturesList",
	Z_Construct_UScriptStruct_FTexturesList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::PropPointers),
	sizeof(FTexturesList),
	alignof(FTexturesList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTexturesList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTexturesList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTexturesList()
{
	if (!Z_Registration_Info_UScriptStruct_TexturesList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TexturesList.InnerSingleton, Z_Construct_UScriptStruct_FTexturesList_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TexturesList.InnerSingleton;
}
// End ScriptStruct FTexturesList

// Begin ScriptStruct FUAssetMeta
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UAssetMeta;
class UScriptStruct* FUAssetMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UAssetMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UAssetMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUAssetMeta, (UObject*)Z_Construct_UPackage__Script_MegascansPlugin(), TEXT("UAssetMeta"));
	}
	return Z_Registration_Info_UScriptStruct_UAssetMeta.OuterSingleton;
}
template<> MEGASCANSPLUGIN_API UScriptStruct* StaticStruct<FUAssetMeta>()
{
	return FUAssetMeta::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUAssetMeta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assetID_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assetName_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assetType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assetSubType_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assetTier_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_assetRootPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meshList_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_foliageAssetPaths_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_materialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_textureSets_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_masterMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Private/MSAssetImportData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_assetID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_assetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_assetType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_assetSubType;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_assetTier;
	static const UECodeGen_Private::FStrPropertyParams NewProp_assetRootPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_meshList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_meshList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_foliageAssetPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_foliageAssetPaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_materialInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_materialInstances;
	static const UECodeGen_Private::FStructPropertyParams NewProp_textureSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_textureSets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_masterMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_masterMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUAssetMeta>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetID = { "assetID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, assetID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assetID_MetaData), NewProp_assetID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetName = { "assetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, assetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assetName_MetaData), NewProp_assetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetType = { "assetType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, assetType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assetType_MetaData), NewProp_assetType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetSubType = { "assetSubType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, assetSubType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assetSubType_MetaData), NewProp_assetSubType_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetTier = { "assetTier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, assetTier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assetTier_MetaData), NewProp_assetTier_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetRootPath = { "assetRootPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, assetRootPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_assetRootPath_MetaData), NewProp_assetRootPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList_Inner = { "meshList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshInfo, METADATA_PARAMS(0, nullptr) }; // 3829595289
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList = { "meshList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, meshList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meshList_MetaData), NewProp_meshList_MetaData) }; // 3829595289
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths_Inner = { "foliageAssetPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths = { "foliageAssetPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, foliageAssetPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_foliageAssetPaths_MetaData), NewProp_foliageAssetPaths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances_Inner = { "materialInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialInstanceInfo, METADATA_PARAMS(0, nullptr) }; // 1250969570
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances = { "materialInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, materialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_materialInstances_MetaData), NewProp_materialInstances_MetaData) }; // 1250969570
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets_Inner = { "textureSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTexturesList, METADATA_PARAMS(0, nullptr) }; // 3742229152
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets = { "textureSets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, textureSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_textureSets_MetaData), NewProp_textureSets_MetaData) }; // 3742229152
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials_Inner = { "masterMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMasterMaterialInfo, METADATA_PARAMS(0, nullptr) }; // 546977347
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials = { "masterMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUAssetMeta, masterMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_masterMaterials_MetaData), NewProp_masterMaterials_MetaData) }; // 546977347
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUAssetMeta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetSubType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetTier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_assetRootPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_meshList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_foliageAssetPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_materialInstances,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_textureSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewProp_masterMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUAssetMeta_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MegascansPlugin,
	nullptr,
	&NewStructOps,
	"UAssetMeta",
	Z_Construct_UScriptStruct_FUAssetMeta_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::PropPointers),
	sizeof(FUAssetMeta),
	alignof(FUAssetMeta),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUAssetMeta_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUAssetMeta_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUAssetMeta()
{
	if (!Z_Registration_Info_UScriptStruct_UAssetMeta.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UAssetMeta.InnerSingleton, Z_Construct_UScriptStruct_FUAssetMeta_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UAssetMeta.InnerSingleton;
}
// End ScriptStruct FUAssetMeta

// Begin Registration
struct Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialUsage::StaticStruct, Z_Construct_UScriptStruct_FMaterialUsage_Statics::NewStructOps, TEXT("MaterialUsage"), &Z_Registration_Info_UScriptStruct_MaterialUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialUsage), 4044588278U) },
		{ FMeshInfo::StaticStruct, Z_Construct_UScriptStruct_FMeshInfo_Statics::NewStructOps, TEXT("MeshInfo"), &Z_Registration_Info_UScriptStruct_MeshInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshInfo), 3829595289U) },
		{ FFoliageTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FFoliageTypeInfo_Statics::NewStructOps, TEXT("FoliageTypeInfo"), &Z_Registration_Info_UScriptStruct_FoliageTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoliageTypeInfo), 1085706377U) },
		{ FMaterialParams::StaticStruct, Z_Construct_UScriptStruct_FMaterialParams_Statics::NewStructOps, TEXT("MaterialParams"), &Z_Registration_Info_UScriptStruct_MaterialParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialParams), 1952485942U) },
		{ FMaterialInstanceInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceInfo_Statics::NewStructOps, TEXT("MaterialInstanceInfo"), &Z_Registration_Info_UScriptStruct_MaterialInstanceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceInfo), 1250969570U) },
		{ FMasterMaterialInfo::StaticStruct, Z_Construct_UScriptStruct_FMasterMaterialInfo_Statics::NewStructOps, TEXT("MasterMaterialInfo"), &Z_Registration_Info_UScriptStruct_MasterMaterialInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMasterMaterialInfo), 546977347U) },
		{ FChannelPackedInfo::StaticStruct, Z_Construct_UScriptStruct_FChannelPackedInfo_Statics::NewStructOps, TEXT("ChannelPackedInfo"), &Z_Registration_Info_UScriptStruct_ChannelPackedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChannelPackedInfo), 730171286U) },
		{ FTextureUsage::StaticStruct, Z_Construct_UScriptStruct_FTextureUsage_Statics::NewStructOps, TEXT("TextureUsage"), &Z_Registration_Info_UScriptStruct_TextureUsage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureUsage), 1059363718U) },
		{ FTexturesList::StaticStruct, Z_Construct_UScriptStruct_FTexturesList_Statics::NewStructOps, TEXT("TexturesList"), &Z_Registration_Info_UScriptStruct_TexturesList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTexturesList), 3742229152U) },
		{ FUAssetMeta::StaticStruct, Z_Construct_UScriptStruct_FUAssetMeta_Statics::NewStructOps, TEXT("UAssetMeta"), &Z_Registration_Info_UScriptStruct_UAssetMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUAssetMeta), 4275647151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_2193407368(TEXT("/Script/MegascansPlugin"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_MegascansPlugin_Private_MSAssetImportData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
