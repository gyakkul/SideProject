// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetDefinition;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetDefinition()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetDefinition.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AssetDefinition",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x633A2402,
				0x4CA91EEB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetDefinition.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AssetDefinition.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetDefinition(Z_Construct_UPackage__Script_AssetDefinition, TEXT("/Script/AssetDefinition"), Z_Registration_Info_UPackage__Script_AssetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x633A2402, 0x4CA91EEB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
