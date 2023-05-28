// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHotfix_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Hotfix;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Hotfix()
	{
		if (!Z_Registration_Info_UPackage__Script_Hotfix.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Hotfix",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF91B1EF8,
				0x4D581F48,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Hotfix.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Hotfix.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Hotfix(Z_Construct_UPackage__Script_Hotfix, TEXT("/Script/Hotfix"), Z_Registration_Info_UPackage__Script_Hotfix, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF91B1EF8, 0x4D581F48));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
