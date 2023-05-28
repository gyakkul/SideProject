// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SlateCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SlateCore()
	{
		if (!Z_Registration_Info_UPackage__Script_SlateCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SlateCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1A596126,
				0x70724ACA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SlateCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SlateCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SlateCore(Z_Construct_UPackage__Script_SlateCore, TEXT("/Script/SlateCore"), Z_Registration_Info_UPackage__Script_SlateCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1A596126, 0x70724ACA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
