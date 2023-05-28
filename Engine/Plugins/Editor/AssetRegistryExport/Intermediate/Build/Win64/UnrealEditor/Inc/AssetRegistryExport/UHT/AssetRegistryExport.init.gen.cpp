// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetRegistryExport_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AssetRegistryExport;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AssetRegistryExport()
	{
		if (!Z_Registration_Info_UPackage__Script_AssetRegistryExport.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AssetRegistryExport",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x182E4940,
				0xDA8DA729,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AssetRegistryExport.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AssetRegistryExport.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AssetRegistryExport(Z_Construct_UPackage__Script_AssetRegistryExport, TEXT("/Script/AssetRegistryExport"), Z_Registration_Info_UPackage__Script_AssetRegistryExport, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x182E4940, 0xDA8DA729));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
