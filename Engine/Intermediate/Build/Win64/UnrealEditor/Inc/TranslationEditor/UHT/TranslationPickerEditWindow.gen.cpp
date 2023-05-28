// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TranslationPickerEditWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTranslationPickerEditWindow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationPickerSettings();
	TRANSLATIONEDITOR_API UClass* Z_Construct_UClass_UTranslationPickerSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TranslationEditor();
// End Cross Module References
	void UTranslationPickerSettings::StaticRegisterNativesUTranslationPickerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTranslationPickerSettings);
	UClass* Z_Construct_UClass_UTranslationPickerSettings_NoRegister()
	{
		return UTranslationPickerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTranslationPickerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData[];
#endif
		static void NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubmitTranslationPickerChangesToLocalizationService;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTranslationPickerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TranslationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TranslationPickerEditWindow.h" },
		{ "ModuleRelativePath", "Private/TranslationPickerEditWindow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData[] = {
		{ "Comment", "/** Bool submit translation picker changes to Localization Service */" },
		{ "ModuleRelativePath", "Private/TranslationPickerEditWindow.h" },
		{ "ToolTip", "Bool submit translation picker changes to Localization Service" },
	};
#endif
	void Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit(void* Obj)
	{
		((UTranslationPickerSettings*)Obj)->bSubmitTranslationPickerChangesToLocalizationService = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService = { "bSubmitTranslationPickerChangesToLocalizationService", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTranslationPickerSettings), &Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTranslationPickerSettings_Statics::NewProp_bSubmitTranslationPickerChangesToLocalizationService,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTranslationPickerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTranslationPickerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTranslationPickerSettings_Statics::ClassParams = {
		&UTranslationPickerSettings::StaticClass,
		"TranslationPickerSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTranslationPickerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTranslationPickerSettings()
	{
		if (!Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton, Z_Construct_UClass_UTranslationPickerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTranslationPickerSettings.OuterSingleton;
	}
	template<> TRANSLATIONEDITOR_API UClass* StaticClass<UTranslationPickerSettings>()
	{
		return UTranslationPickerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTranslationPickerSettings);
	UTranslationPickerSettings::~UTranslationPickerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTranslationPickerSettings, UTranslationPickerSettings::StaticClass, TEXT("UTranslationPickerSettings"), &Z_Registration_Info_UClass_UTranslationPickerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTranslationPickerSettings), 4037074778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_1423386920(TEXT("/Script/TranslationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_TranslationEditor_Private_TranslationPickerEditWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
