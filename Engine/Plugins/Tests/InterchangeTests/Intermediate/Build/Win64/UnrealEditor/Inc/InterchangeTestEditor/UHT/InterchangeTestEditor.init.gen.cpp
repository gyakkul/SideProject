// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTestEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InterchangeTestEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InterchangeTestEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_InterchangeTestEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InterchangeTestEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xE794B0E1,
				0x76ADE2F9,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InterchangeTestEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InterchangeTestEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InterchangeTestEditor(Z_Construct_UPackage__Script_InterchangeTestEditor, TEXT("/Script/InterchangeTestEditor"), Z_Registration_Info_UPackage__Script_InterchangeTestEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE794B0E1, 0x76ADE2F9));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
