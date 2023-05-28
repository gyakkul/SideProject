// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OverlayEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OverlayEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_OverlayEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OverlayEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xC7EBCCD8,
				0x7D75F49E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OverlayEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OverlayEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OverlayEditor(Z_Construct_UPackage__Script_OverlayEditor, TEXT("/Script/OverlayEditor"), Z_Registration_Info_UPackage__Script_OverlayEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC7EBCCD8, 0x7D75F49E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
