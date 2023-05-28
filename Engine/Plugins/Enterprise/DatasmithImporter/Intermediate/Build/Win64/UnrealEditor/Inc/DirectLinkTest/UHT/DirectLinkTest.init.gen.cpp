// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectLinkTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DirectLinkTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DirectLinkTest()
	{
		if (!Z_Registration_Info_UPackage__Script_DirectLinkTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DirectLinkTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9571D398,
				0xAEE15A2A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DirectLinkTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DirectLinkTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DirectLinkTest(Z_Construct_UPackage__Script_DirectLinkTest, TEXT("/Script/DirectLinkTest"), Z_Registration_Info_UPackage__Script_DirectLinkTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9571D398, 0xAEE15A2A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
