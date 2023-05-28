// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcert_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Concert;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Concert()
	{
		if (!Z_Registration_Info_UPackage__Script_Concert.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Concert",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0xFC0324D4,
				0xC90E8CB8,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Concert.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Concert.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Concert(Z_Construct_UPackage__Script_Concert, TEXT("/Script/Concert"), Z_Registration_Info_UPackage__Script_Concert, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFC0324D4, 0xC90E8CB8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
