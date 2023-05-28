// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderDocPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RenderDocPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RenderDocPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_RenderDocPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RenderDocPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000080,
				0x0E4C7357,
				0x20CD648B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RenderDocPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RenderDocPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RenderDocPlugin(Z_Construct_UPackage__Script_RenderDocPlugin, TEXT("/Script/RenderDocPlugin"), Z_Registration_Info_UPackage__Script_RenderDocPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0E4C7357, 0x20CD648B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
