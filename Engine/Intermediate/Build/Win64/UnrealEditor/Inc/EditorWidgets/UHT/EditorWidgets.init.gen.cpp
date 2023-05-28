// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorWidgets_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_EditorWidgets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_EditorWidgets()
	{
		if (!Z_Registration_Info_UPackage__Script_EditorWidgets.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/EditorWidgets",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x03CF668B,
				0xCB367E39,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_EditorWidgets.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_EditorWidgets.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_EditorWidgets(Z_Construct_UPackage__Script_EditorWidgets, TEXT("/Script/EditorWidgets"), Z_Registration_Info_UPackage__Script_EditorWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x03CF668B, 0xCB367E39));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
