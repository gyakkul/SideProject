// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateReflector_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SlateReflector;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SlateReflector()
	{
		if (!Z_Registration_Info_UPackage__Script_SlateReflector.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SlateReflector",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x2F8AB11D,
				0x912A2AAC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SlateReflector.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SlateReflector.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SlateReflector(Z_Construct_UPackage__Script_SlateReflector, TEXT("/Script/SlateReflector"), Z_Registration_Info_UPackage__Script_SlateReflector, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2F8AB11D, 0x912A2AAC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
