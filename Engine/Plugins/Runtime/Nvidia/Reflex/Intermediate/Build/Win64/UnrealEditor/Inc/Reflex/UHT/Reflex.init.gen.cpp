// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflex_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Reflex;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Reflex()
	{
		if (!Z_Registration_Info_UPackage__Script_Reflex.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Reflex",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x14CABCA1,
				0x1BC29C07,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Reflex.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Reflex.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Reflex(Z_Construct_UPackage__Script_Reflex, TEXT("/Script/Reflex"), Z_Registration_Info_UPackage__Script_Reflex, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x14CABCA1, 0x1BC29C07));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
