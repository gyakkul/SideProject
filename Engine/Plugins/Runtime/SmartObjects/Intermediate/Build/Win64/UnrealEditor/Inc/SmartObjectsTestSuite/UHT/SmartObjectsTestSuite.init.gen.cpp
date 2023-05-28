// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectsTestSuite_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SmartObjectsTestSuite;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SmartObjectsTestSuite()
	{
		if (!Z_Registration_Info_UPackage__Script_SmartObjectsTestSuite.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SmartObjectsTestSuite",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0x3F7B0522,
				0x075F721C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SmartObjectsTestSuite.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SmartObjectsTestSuite.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SmartObjectsTestSuite(Z_Construct_UPackage__Script_SmartObjectsTestSuite, TEXT("/Script/SmartObjectsTestSuite"), Z_Registration_Info_UPackage__Script_SmartObjectsTestSuite, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3F7B0522, 0x075F721C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
