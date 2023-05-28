// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioEditorSettings() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAudioEditorSettings();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_UAudioEditorSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void UAudioEditorSettings::StaticRegisterNativesUAudioEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioEditorSettings);
	UClass* Z_Construct_UClass_UAudioEditorSettings_NoRegister()
	{
		return UAudioEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinSoundCueInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinSoundCueInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinSoundCueInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinSoundCueTemplateInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinSoundCueTemplateInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinSoundCueTemplateInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinSoundAttenuationInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinSoundAttenuationInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinSoundAttenuationInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinSoundConcurrencyInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinSoundConcurrencyInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinSoundConcurrencyInAssetMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Audio" },
		{ "IncludePath", "AudioEditorSettings.h" },
		{ "ModuleRelativePath", "Classes/AudioEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Sound Cue asset type when creating new assets. */" },
		{ "ModuleRelativePath", "Classes/AudioEditorSettings.h" },
		{ "ToolTip", "Whether to pin the Sound Cue asset type when creating new assets." },
	};
#endif
	void Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueInAssetMenu_SetBit(void* Obj)
	{
		((UAudioEditorSettings*)Obj)->bPinSoundCueInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueInAssetMenu = { "bPinSoundCueInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioEditorSettings), &Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueTemplateInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Sound Cue Template asset type when creating new assets. */" },
		{ "ModuleRelativePath", "Classes/AudioEditorSettings.h" },
		{ "ToolTip", "Whether to pin the Sound Cue Template asset type when creating new assets." },
	};
#endif
	void Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueTemplateInAssetMenu_SetBit(void* Obj)
	{
		((UAudioEditorSettings*)Obj)->bPinSoundCueTemplateInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueTemplateInAssetMenu = { "bPinSoundCueTemplateInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioEditorSettings), &Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueTemplateInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueTemplateInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueTemplateInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundAttenuationInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Sound Attenuation asset type when creating new assets. */" },
		{ "ModuleRelativePath", "Classes/AudioEditorSettings.h" },
		{ "ToolTip", "Whether to pin the Sound Attenuation asset type when creating new assets." },
	};
#endif
	void Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundAttenuationInAssetMenu_SetBit(void* Obj)
	{
		((UAudioEditorSettings*)Obj)->bPinSoundAttenuationInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundAttenuationInAssetMenu = { "bPinSoundAttenuationInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioEditorSettings), &Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundAttenuationInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundAttenuationInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundAttenuationInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundConcurrencyInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the Sound Concurrency asset type when creating new assets. */" },
		{ "ModuleRelativePath", "Classes/AudioEditorSettings.h" },
		{ "ToolTip", "Whether to pin the Sound Concurrency asset type when creating new assets." },
	};
#endif
	void Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundConcurrencyInAssetMenu_SetBit(void* Obj)
	{
		((UAudioEditorSettings*)Obj)->bPinSoundConcurrencyInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundConcurrencyInAssetMenu = { "bPinSoundConcurrencyInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAudioEditorSettings), &Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundConcurrencyInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundConcurrencyInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundConcurrencyInAssetMenu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundCueTemplateInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundAttenuationInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioEditorSettings_Statics::NewProp_bPinSoundConcurrencyInAssetMenu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioEditorSettings_Statics::ClassParams = {
		&UAudioEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UAudioEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioEditorSettings.OuterSingleton, Z_Construct_UClass_UAudioEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioEditorSettings.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<UAudioEditorSettings>()
	{
		return UAudioEditorSettings::StaticClass();
	}
	UAudioEditorSettings::UAudioEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioEditorSettings);
	UAudioEditorSettings::~UAudioEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioEditorSettings, UAudioEditorSettings::StaticClass, TEXT("UAudioEditorSettings"), &Z_Registration_Info_UClass_UAudioEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioEditorSettings), 2260020665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_2373252224(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_AudioEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
