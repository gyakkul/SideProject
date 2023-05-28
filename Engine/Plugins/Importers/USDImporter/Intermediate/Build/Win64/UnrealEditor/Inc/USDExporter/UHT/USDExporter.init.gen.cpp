// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDExporter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_USDExporter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_USDExporter()
	{
		if (!Z_Registration_Info_UPackage__Script_USDExporter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/USDExporter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x34506CB5,
				0xB321A196,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_USDExporter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_USDExporter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_USDExporter(Z_Construct_UPackage__Script_USDExporter, TEXT("/Script/USDExporter"), Z_Registration_Info_UPackage__Script_USDExporter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x34506CB5, 0xB321A196));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
