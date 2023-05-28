// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoReferencing_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeoReferencing;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeoReferencing()
	{
		if (!Z_Registration_Info_UPackage__Script_GeoReferencing.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeoReferencing",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x0661E661,
				0xD0E22D35,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeoReferencing.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeoReferencing.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeoReferencing(Z_Construct_UPackage__Script_GeoReferencing, TEXT("/Script/GeoReferencing"), Z_Registration_Info_UPackage__Script_GeoReferencing, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0661E661, 0xD0E22D35));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
