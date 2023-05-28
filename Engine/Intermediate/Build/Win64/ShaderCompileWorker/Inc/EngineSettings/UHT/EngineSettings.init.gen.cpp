// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineSettings_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EngineSettings;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EngineSettings()
	{
		if (!Z_Registration_Info_UPackage__Script_EngineSettings.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EngineSettings",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4F79A215,
				0x07D22A38,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EngineSettings.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EngineSettings.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EngineSettings(Z_Construct_UPackage__Script_EngineSettings, TEXT("/Script/EngineSettings"), Z_Registration_Info_UPackage__Script_EngineSettings, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4F79A215, 0x07D22A38));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
