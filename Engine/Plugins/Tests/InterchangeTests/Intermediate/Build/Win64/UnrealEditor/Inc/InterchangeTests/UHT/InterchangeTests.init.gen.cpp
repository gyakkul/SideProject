// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTests_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InterchangeTests;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InterchangeTests()
	{
		if (!Z_Registration_Info_UPackage__Script_InterchangeTests.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InterchangeTests",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xD2599520,
				0x34333E69,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InterchangeTests.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InterchangeTests.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InterchangeTests(Z_Construct_UPackage__Script_InterchangeTests, TEXT("/Script/InterchangeTests"), Z_Registration_Info_UPackage__Script_InterchangeTests, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD2599520, 0x34333E69));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
