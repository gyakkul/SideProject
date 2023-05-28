// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlembicImporter_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AlembicImporter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AlembicImporter()
	{
		if (!Z_Registration_Info_UPackage__Script_AlembicImporter.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AlembicImporter",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x6E2D1102,
				0x4BD77429,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AlembicImporter.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AlembicImporter.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AlembicImporter(Z_Construct_UPackage__Script_AlembicImporter, TEXT("/Script/AlembicImporter"), Z_Registration_Info_UPackage__Script_AlembicImporter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x6E2D1102, 0x4BD77429));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
