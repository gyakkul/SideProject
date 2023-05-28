// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveCoding_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LiveCoding;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LiveCoding()
	{
		if (!Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LiveCoding",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x32DC1A42,
				0x0D829E02,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LiveCoding.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LiveCoding(Z_Construct_UPackage__Script_LiveCoding, TEXT("/Script/LiveCoding"), Z_Registration_Info_UPackage__Script_LiveCoding, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x32DC1A42, 0x0D829E02));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
