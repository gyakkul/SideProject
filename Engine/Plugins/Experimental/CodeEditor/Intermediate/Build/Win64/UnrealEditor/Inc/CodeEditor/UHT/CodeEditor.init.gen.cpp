// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CodeEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CodeEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_CodeEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CodeEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x970F4BA0,
				0x21AFCC1B,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CodeEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CodeEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CodeEditor(Z_Construct_UPackage__Script_CodeEditor, TEXT("/Script/CodeEditor"), Z_Registration_Info_UPackage__Script_CodeEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x970F4BA0, 0x21AFCC1B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
