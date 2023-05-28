// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteraction_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ViewportInteraction;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ViewportInteraction()
	{
		if (!Z_Registration_Info_UPackage__Script_ViewportInteraction.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ViewportInteraction",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xB3EDAAEF,
				0xB12CD604,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ViewportInteraction.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ViewportInteraction.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ViewportInteraction(Z_Construct_UPackage__Script_ViewportInteraction, TEXT("/Script/ViewportInteraction"), Z_Registration_Info_UPackage__Script_ViewportInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB3EDAAEF, 0xB12CD604));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
