// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserToolBoxCore_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UserToolBoxCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UserToolBoxCore()
	{
		if (!Z_Registration_Info_UPackage__Script_UserToolBoxCore.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UserToolBoxCore",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x352506E3,
				0x98097419,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UserToolBoxCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UserToolBoxCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UserToolBoxCore(Z_Construct_UPackage__Script_UserToolBoxCore, TEXT("/Script/UserToolBoxCore"), Z_Registration_Info_UPackage__Script_UserToolBoxCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x352506E3, 0x98097419));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
