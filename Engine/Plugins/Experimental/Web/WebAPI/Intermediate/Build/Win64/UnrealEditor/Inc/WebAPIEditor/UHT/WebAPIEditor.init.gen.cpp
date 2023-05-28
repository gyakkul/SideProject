// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WebAPIEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WebAPIEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_WebAPIEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WebAPIEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x473D2294,
				0xC573C79E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WebAPIEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WebAPIEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WebAPIEditor(Z_Construct_UPackage__Script_WebAPIEditor, TEXT("/Script/WebAPIEditor"), Z_Registration_Info_UPackage__Script_WebAPIEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x473D2294, 0xC573C79E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
