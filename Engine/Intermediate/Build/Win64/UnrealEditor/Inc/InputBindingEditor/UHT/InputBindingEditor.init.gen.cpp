// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBindingEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InputBindingEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InputBindingEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_InputBindingEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InputBindingEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xC507D95A,
				0xB90D0492,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InputBindingEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InputBindingEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InputBindingEditor(Z_Construct_UPackage__Script_InputBindingEditor, TEXT("/Script/InputBindingEditor"), Z_Registration_Info_UPackage__Script_InputBindingEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC507D95A, 0xB90D0492));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
