// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MetasoundEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MetasoundEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_MetasoundEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MetasoundEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000100,
				0xD028B159,
				0xB99822E1,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MetasoundEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MetasoundEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MetasoundEditor(Z_Construct_UPackage__Script_MetasoundEditor, TEXT("/Script/MetasoundEditor"), Z_Registration_Info_UPackage__Script_MetasoundEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD028B159, 0xB99822E1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
