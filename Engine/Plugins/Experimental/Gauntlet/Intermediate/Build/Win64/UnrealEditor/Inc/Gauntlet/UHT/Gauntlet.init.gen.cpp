// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGauntlet_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Gauntlet;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Gauntlet()
	{
		if (!Z_Registration_Info_UPackage__Script_Gauntlet.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Gauntlet",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0C4A8408,
				0x2076B2EE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Gauntlet.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Gauntlet.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Gauntlet(Z_Construct_UPackage__Script_Gauntlet, TEXT("/Script/Gauntlet"), Z_Registration_Info_UPackage__Script_Gauntlet, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0C4A8408, 0x2076B2EE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
