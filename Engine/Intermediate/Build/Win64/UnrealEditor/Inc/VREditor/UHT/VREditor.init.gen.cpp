// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VREditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VREditor()
	{
		if (!Z_Registration_Info_UPackage__Script_VREditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VREditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x8CEE1743,
				0x0DA8F1E5,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VREditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VREditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VREditor(Z_Construct_UPackage__Script_VREditor, TEXT("/Script/VREditor"), Z_Registration_Info_UPackage__Script_VREditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8CEE1743, 0x0DA8F1E5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
