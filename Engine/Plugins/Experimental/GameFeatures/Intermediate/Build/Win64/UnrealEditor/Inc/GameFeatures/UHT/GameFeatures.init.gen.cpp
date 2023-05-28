// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatures_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameFeatures;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameFeatures()
	{
		if (!Z_Registration_Info_UPackage__Script_GameFeatures.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameFeatures",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCB8FF5B6,
				0xDF74EB15,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameFeatures.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameFeatures.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameFeatures(Z_Construct_UPackage__Script_GameFeatures, TEXT("/Script/GameFeatures"), Z_Registration_Info_UPackage__Script_GameFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCB8FF5B6, 0xDF74EB15));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
