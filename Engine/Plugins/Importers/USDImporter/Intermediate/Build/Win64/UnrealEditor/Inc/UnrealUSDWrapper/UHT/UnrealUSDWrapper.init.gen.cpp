// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealUSDWrapper_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealUSDWrapper;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealUSDWrapper()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealUSDWrapper.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealUSDWrapper",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9C5E0108,
				0x5E1977F2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealUSDWrapper.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealUSDWrapper.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealUSDWrapper(Z_Construct_UPackage__Script_UnrealUSDWrapper, TEXT("/Script/UnrealUSDWrapper"), Z_Registration_Info_UPackage__Script_UnrealUSDWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9C5E0108, 0x5E1977F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
