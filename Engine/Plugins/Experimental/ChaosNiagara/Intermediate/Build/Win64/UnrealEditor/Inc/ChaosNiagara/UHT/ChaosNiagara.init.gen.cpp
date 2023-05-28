// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosNiagara_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ChaosNiagara;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ChaosNiagara()
	{
		if (!Z_Registration_Info_UPackage__Script_ChaosNiagara.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ChaosNiagara",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x519F29F8,
				0x7769F573,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ChaosNiagara.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ChaosNiagara.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ChaosNiagara(Z_Construct_UPackage__Script_ChaosNiagara, TEXT("/Script/ChaosNiagara"), Z_Registration_Info_UPackage__Script_ChaosNiagara, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x519F29F8, 0x7769F573));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
