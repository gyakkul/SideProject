// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ScriptPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ScriptPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ScriptPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ScriptPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x36328A2A,
				0xD84C2621,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ScriptPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ScriptPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ScriptPlugin(Z_Construct_UPackage__Script_ScriptPlugin, TEXT("/Script/ScriptPlugin"), Z_Registration_Info_UPackage__Script_ScriptPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x36328A2A, 0xD84C2621));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
