// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMegascansPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MegascansPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MegascansPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_MegascansPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MegascansPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8EF6DB55,
				0x8F59A0E6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MegascansPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MegascansPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MegascansPlugin(Z_Construct_UPackage__Script_MegascansPlugin, TEXT("/Script/MegascansPlugin"), Z_Registration_Info_UPackage__Script_MegascansPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8EF6DB55, 0x8F59A0E6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
