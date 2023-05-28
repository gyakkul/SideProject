// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryScriptingEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GeometryScriptingEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GeometryScriptingEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_GeometryScriptingEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeometryScriptingEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x627735F7,
				0xDDECE776,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GeometryScriptingEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GeometryScriptingEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GeometryScriptingEditor(Z_Construct_UPackage__Script_GeometryScriptingEditor, TEXT("/Script/GeometryScriptingEditor"), Z_Registration_Info_UPackage__Script_GeometryScriptingEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x627735F7, 0xDDECE776));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
