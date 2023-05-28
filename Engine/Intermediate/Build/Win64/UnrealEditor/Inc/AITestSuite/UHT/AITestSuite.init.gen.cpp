// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITestSuite_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AITestSuite;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AITestSuite()
	{
		if (!Z_Registration_Info_UPackage__Script_AITestSuite.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AITestSuite",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x1C255005,
				0xBD48DB62,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AITestSuite.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AITestSuite.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AITestSuite(Z_Construct_UPackage__Script_AITestSuite, TEXT("/Script/AITestSuite"), Z_Registration_Info_UPackage__Script_AITestSuite, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1C255005, 0xBD48DB62));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
