// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascade_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Cascade;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Cascade()
	{
		if (!Z_Registration_Info_UPackage__Script_Cascade.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Cascade",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xE43F2AA5,
				0x62CAC949,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Cascade.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Cascade.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Cascade(Z_Construct_UPackage__Script_Cascade, TEXT("/Script/Cascade"), Z_Registration_Info_UPackage__Script_Cascade, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE43F2AA5, 0x62CAC949));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
