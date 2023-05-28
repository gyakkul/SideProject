// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMDLImporter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MDLImporter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MDLImporter()
	{
		if (!Z_Registration_Info_UPackage__Script_MDLImporter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MDLImporter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x2770B265,
				0xF8A86438,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MDLImporter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MDLImporter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MDLImporter(Z_Construct_UPackage__Script_MDLImporter, TEXT("/Script/MDLImporter"), Z_Registration_Info_UPackage__Script_MDLImporter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2770B265, 0xF8A86438));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
