// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BlueprintRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BlueprintRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_BlueprintRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueprintRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x4226D94D,
				0x1D9F2941,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BlueprintRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BlueprintRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BlueprintRuntime(Z_Construct_UPackage__Script_BlueprintRuntime, TEXT("/Script/BlueprintRuntime"), Z_Registration_Info_UPackage__Script_BlueprintRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4226D94D, 0x1D9F2941));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
