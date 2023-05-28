// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigLogicEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RigLogicEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RigLogicEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_RigLogicEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RigLogicEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xCACA09CE,
				0xFF8BB4DC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RigLogicEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RigLogicEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RigLogicEditor(Z_Construct_UPackage__Script_RigLogicEditor, TEXT("/Script/RigLogicEditor"), Z_Registration_Info_UPackage__Script_RigLogicEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCACA09CE, 0xFF8BB4DC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
