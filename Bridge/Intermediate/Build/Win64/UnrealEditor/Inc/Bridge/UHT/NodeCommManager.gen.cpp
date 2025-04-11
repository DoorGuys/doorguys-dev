// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bridge/Private/NodeCommManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeCommManager() {}

// Begin Cross Module References
BRIDGE_API UScriptStruct* Z_Construct_UScriptStruct_FBifrostNodeInfo();
UPackage* Z_Construct_UPackage__Script_Bridge();
// End Cross Module References

// Begin ScriptStruct FBifrostNodeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BifrostNodeInfo;
class UScriptStruct* FBifrostNodeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BifrostNodeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BifrostNodeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBifrostNodeInfo, (UObject*)Z_Construct_UPackage__Script_Bridge(), TEXT("BifrostNodeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BifrostNodeInfo.OuterSingleton;
}
template<> BRIDGE_API UScriptStruct* StaticStruct<FBifrostNodeInfo>()
{
	return FBifrostNodeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "//Dummy data structure, all json data to be converted to ustructs\n" },
		{ "ModuleRelativePath", "Private/NodeCommManager.h" },
		{ "ToolTip", "Dummy data structure, all json data to be converted to ustructs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "NodeData" },
		{ "ModuleRelativePath", "Private/NodeCommManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "NodeData" },
		{ "ModuleRelativePath", "Private/NodeCommManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBifrostNodeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBifrostNodeInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBifrostNodeInfo, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Bridge,
	nullptr,
	&NewStructOps,
	"BifrostNodeInfo",
	Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::PropPointers),
	sizeof(FBifrostNodeInfo),
	alignof(FBifrostNodeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBifrostNodeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_BifrostNodeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BifrostNodeInfo.InnerSingleton, Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BifrostNodeInfo.InnerSingleton;
}
// End ScriptStruct FBifrostNodeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBifrostNodeInfo::StaticStruct, Z_Construct_UScriptStruct_FBifrostNodeInfo_Statics::NewStructOps, TEXT("BifrostNodeInfo"), &Z_Registration_Info_UScriptStruct_BifrostNodeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBifrostNodeInfo), 130674625U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_4169874148(TEXT("/Script/Bridge"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LocalBuilds_Bridge_2025_0_3_HostProject_Plugins_Bridge_Source_Bridge_Private_NodeCommManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
