// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFramework_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UIFramework;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UIFramework()
	{
		if (!Z_Registration_Info_UPackage__Script_UIFramework.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UIFramework",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5ADEAA4F,
				0x5217AD30,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UIFramework.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UIFramework.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UIFramework(Z_Construct_UPackage__Script_UIFramework, TEXT("/Script/UIFramework"), Z_Registration_Info_UPackage__Script_UIFramework, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5ADEAA4F, 0x5217AD30));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
