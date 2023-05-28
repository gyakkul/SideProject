// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OculusEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OculusEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_OculusEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OculusEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xDFBDC566,
				0xC64C7879,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OculusEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OculusEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OculusEditor(Z_Construct_UPackage__Script_OculusEditor, TEXT("/Script/OculusEditor"), Z_Registration_Info_UPackage__Script_OculusEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDFBDC566, 0xC64C7879));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
