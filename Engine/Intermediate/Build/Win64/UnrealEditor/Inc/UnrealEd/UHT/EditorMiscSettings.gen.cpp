// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Settings/EditorMiscSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorMiscSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UEditorMiscSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorMiscSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorMiscSettings::StaticRegisterNativesUEditorMiscSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorMiscSettings);
	UClass* Z_Construct_UClass_UEditorMiscSettings_NoRegister()
	{
		return UEditorMiscSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorMiscSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorMiscSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorMiscSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the miscellaneous Editor settings.\n */" },
		{ "IncludePath", "Settings/EditorMiscSettings.h" },
		{ "ModuleRelativePath", "Classes/Settings/EditorMiscSettings.h" },
		{ "ToolTip", "Implements the miscellaneous Editor settings." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorMiscSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorMiscSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorMiscSettings_Statics::ClassParams = {
		&UEditorMiscSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorMiscSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorMiscSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorMiscSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorMiscSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorMiscSettings.OuterSingleton, Z_Construct_UClass_UEditorMiscSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorMiscSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorMiscSettings>()
	{
		return UEditorMiscSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorMiscSettings);
	UEditorMiscSettings::~UEditorMiscSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorMiscSettings, UEditorMiscSettings::StaticClass, TEXT("UEditorMiscSettings"), &Z_Registration_Info_UClass_UEditorMiscSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorMiscSettings), 4082592733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_561184723(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Settings_EditorMiscSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
