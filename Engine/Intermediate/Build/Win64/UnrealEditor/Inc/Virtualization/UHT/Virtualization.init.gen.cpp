// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualization_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Virtualization;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Virtualization()
	{
		if (!Z_Registration_Info_UPackage__Script_Virtualization.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Virtualization",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0xEAAD922E,
				0xF3502F35,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Virtualization.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Virtualization.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Virtualization(Z_Construct_UPackage__Script_Virtualization, TEXT("/Script/Virtualization"), Z_Registration_Info_UPackage__Script_Virtualization, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEAAD922E, 0xF3502F35));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
