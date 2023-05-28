// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Misc/TemplateSequenceEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UTemplateSequenceEditorSettings();
	TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UTemplateSequenceEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequenceEditor();
// End Cross Module References
	void UTemplateSequenceEditorSettings::StaticRegisterNativesUTemplateSequenceEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequenceEditorSettings);
	UClass* Z_Construct_UClass_UTemplateSequenceEditorSettings_NoRegister()
	{
		return UTemplateSequenceEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor_MetaData[];
#endif
		static void NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Template Sequence Editor settings.\n */" },
		{ "IncludePath", "Misc/TemplateSequenceEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Misc/TemplateSequenceEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Template Sequence Editor settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor_MetaData[] = {
		{ "Comment", "/** Whether to show \"outdated assets\" by default in the camera animation track's asset picker. */" },
		{ "ModuleRelativePath", "Private/Misc/TemplateSequenceEditorSettings.h" },
		{ "ToolTip", "Whether to show \"outdated assets\" by default in the camera animation track's asset picker." },
	};
#endif
	void Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor_SetBit(void* Obj)
	{
		((UTemplateSequenceEditorSettings*)Obj)->bShowOutdatedAssetsInCameraAnimationTrackEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor = { "bShowOutdatedAssetsInCameraAnimationTrackEditor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTemplateSequenceEditorSettings), &Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::NewProp_bShowOutdatedAssetsInCameraAnimationTrackEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::ClassParams = {
		&UTemplateSequenceEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequenceEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UTemplateSequenceEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequenceEditorSettings.OuterSingleton, Z_Construct_UClass_UTemplateSequenceEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTemplateSequenceEditorSettings.OuterSingleton;
	}
	template<> TEMPLATESEQUENCEEDITOR_API UClass* StaticClass<UTemplateSequenceEditorSettings>()
	{
		return UTemplateSequenceEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceEditorSettings);
	UTemplateSequenceEditorSettings::~UTemplateSequenceEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequenceEditorSettings, UTemplateSequenceEditorSettings::StaticClass, TEXT("UTemplateSequenceEditorSettings"), &Z_Registration_Info_UClass_UTemplateSequenceEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequenceEditorSettings), 553784824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_1487326307(TEXT("/Script/TemplateSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Misc_TemplateSequenceEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
