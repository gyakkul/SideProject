// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Renderer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Renderer()
	{
		if (!Z_Registration_Info_UPackage__Script_Renderer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Renderer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x849FC41E,
				0x34A3C164,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Renderer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Renderer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Renderer(Z_Construct_UPackage__Script_Renderer, TEXT("/Script/Renderer"), Z_Registration_Info_UPackage__Script_Renderer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x849FC41E, 0x34A3C164));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
