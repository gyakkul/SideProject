// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderTrace_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RenderTrace;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RenderTrace()
	{
		if (!Z_Registration_Info_UPackage__Script_RenderTrace.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RenderTrace",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC979C0A1,
				0xE2088B5B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RenderTrace.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RenderTrace.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RenderTrace(Z_Construct_UPackage__Script_RenderTrace, TEXT("/Script/RenderTrace"), Z_Registration_Info_UPackage__Script_RenderTrace, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC979C0A1, 0xE2088B5B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
