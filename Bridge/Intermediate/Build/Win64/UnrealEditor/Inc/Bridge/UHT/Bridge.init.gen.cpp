// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBridge_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Bridge;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Bridge()
	{
		if (!Z_Registration_Info_UPackage__Script_Bridge.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Bridge",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x92CFFACA,
				0x348C9DFA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Bridge.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Bridge.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Bridge(Z_Construct_UPackage__Script_Bridge, TEXT("/Script/Bridge"), Z_Registration_Info_UPackage__Script_Bridge, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x92CFFACA, 0x348C9DFA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
