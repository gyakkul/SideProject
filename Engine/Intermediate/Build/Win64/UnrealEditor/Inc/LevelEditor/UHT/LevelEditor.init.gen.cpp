// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditor_init() {}
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LevelEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LevelEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_LevelEditor.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LevelEditor",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000040,
				0xBA2C46E2,
				0x31AC2792,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LevelEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LevelEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LevelEditor(Z_Construct_UPackage__Script_LevelEditor, TEXT("/Script/LevelEditor"), Z_Registration_Info_UPackage__Script_LevelEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBA2C46E2, 0x31AC2792));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
