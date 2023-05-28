// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapePatch_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LandscapePatch;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LandscapePatch()
	{
		if (!Z_Registration_Info_UPackage__Script_LandscapePatch.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LandscapePatch",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4558F846,
				0x9F44652C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LandscapePatch.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LandscapePatch.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LandscapePatch(Z_Construct_UPackage__Script_LandscapePatch, TEXT("/Script/LandscapePatch"), Z_Registration_Info_UPackage__Script_LandscapePatch, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4558F846, 0x9F44652C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
