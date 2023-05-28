// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditorKeyboardShortcutSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorKeyboardShortcutSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	INPUTBINDINGEDITOR_API UClass* Z_Construct_UClass_UEditorKeyboardShortcutSettings();
	INPUTBINDINGEDITOR_API UClass* Z_Construct_UClass_UEditorKeyboardShortcutSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputBindingEditor();
// End Cross Module References
	void UEditorKeyboardShortcutSettings::StaticRegisterNativesUEditorKeyboardShortcutSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorKeyboardShortcutSettings);
	UClass* Z_Construct_UClass_UEditorKeyboardShortcutSettings_NoRegister()
	{
		return UEditorKeyboardShortcutSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBindingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Keyboard Shortcuts" },
		{ "IncludePath", "EditorKeyboardShortcutSettings.h" },
		{ "ModuleRelativePath", "Private/EditorKeyboardShortcutSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorKeyboardShortcutSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics::ClassParams = {
		&UEditorKeyboardShortcutSettings::StaticClass,
		"EditorKeyBindings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorKeyboardShortcutSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorKeyboardShortcutSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorKeyboardShortcutSettings.OuterSingleton, Z_Construct_UClass_UEditorKeyboardShortcutSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorKeyboardShortcutSettings.OuterSingleton;
	}
	template<> INPUTBINDINGEDITOR_API UClass* StaticClass<UEditorKeyboardShortcutSettings>()
	{
		return UEditorKeyboardShortcutSettings::StaticClass();
	}
	UEditorKeyboardShortcutSettings::UEditorKeyboardShortcutSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorKeyboardShortcutSettings);
	UEditorKeyboardShortcutSettings::~UEditorKeyboardShortcutSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorKeyboardShortcutSettings, UEditorKeyboardShortcutSettings::StaticClass, TEXT("UEditorKeyboardShortcutSettings"), &Z_Registration_Info_UClass_UEditorKeyboardShortcutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorKeyboardShortcutSettings), 2759357075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_2217367355(TEXT("/Script/InputBindingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_InputBindingEditor_Private_EditorKeyboardShortcutSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
