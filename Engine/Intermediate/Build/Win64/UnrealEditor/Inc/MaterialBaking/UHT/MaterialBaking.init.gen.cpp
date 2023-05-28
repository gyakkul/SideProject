// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialBaking_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MaterialBaking;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MaterialBaking()
	{
		if (!Z_Registration_Info_UPackage__Script_MaterialBaking.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MaterialBaking",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x6B4F9D6C,
				0x7551E3CD,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MaterialBaking.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MaterialBaking.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MaterialBaking(Z_Construct_UPackage__Script_MaterialBaking, TEXT("/Script/MaterialBaking"), Z_Registration_Info_UPackage__Script_MaterialBaking, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6B4F9D6C, 0x7551E3CD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
