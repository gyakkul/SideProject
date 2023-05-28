// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDTests_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_USDTests;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_USDTests()
	{
		if (!Z_Registration_Info_UPackage__Script_USDTests.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/USDTests",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x18A81105,
				0x9D43FA40,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_USDTests.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_USDTests.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_USDTests(Z_Construct_UPackage__Script_USDTests, TEXT("/Script/USDTests"), Z_Registration_Info_UPackage__Script_USDTests, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x18A81105, 0x9D43FA40));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
