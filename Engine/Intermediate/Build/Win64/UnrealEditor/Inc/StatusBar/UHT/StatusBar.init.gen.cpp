// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusBar_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_StatusBar;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_StatusBar()
	{
		if (!Z_Registration_Info_UPackage__Script_StatusBar.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/StatusBar",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xFAFF86BB,
				0x95D8FA6F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_StatusBar.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_StatusBar.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_StatusBar(Z_Construct_UPackage__Script_StatusBar, TEXT("/Script/StatusBar"), Z_Registration_Info_UPackage__Script_StatusBar, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFAFF86BB, 0x95D8FA6F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
