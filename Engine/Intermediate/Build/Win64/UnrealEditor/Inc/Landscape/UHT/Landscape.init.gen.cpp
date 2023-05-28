// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscape_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Landscape;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Landscape()
	{
		if (!Z_Registration_Info_UPackage__Script_Landscape.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Landscape",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBD6474D1,
				0x1A9B81AE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Landscape.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Landscape.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Landscape(Z_Construct_UPackage__Script_Landscape, TEXT("/Script/Landscape"), Z_Registration_Info_UPackage__Script_Landscape, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBD6474D1, 0x1A9B81AE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
