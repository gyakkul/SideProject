// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleCustomDataInterface_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ExampleCustomDataInterface;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ExampleCustomDataInterface()
	{
		if (!Z_Registration_Info_UPackage__Script_ExampleCustomDataInterface.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ExampleCustomDataInterface",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9DC08714,
				0xF3318E75,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ExampleCustomDataInterface.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ExampleCustomDataInterface.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ExampleCustomDataInterface(Z_Construct_UPackage__Script_ExampleCustomDataInterface, TEXT("/Script/ExampleCustomDataInterface"), Z_Registration_Info_UPackage__Script_ExampleCustomDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9DC08714, 0xF3318E75));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
