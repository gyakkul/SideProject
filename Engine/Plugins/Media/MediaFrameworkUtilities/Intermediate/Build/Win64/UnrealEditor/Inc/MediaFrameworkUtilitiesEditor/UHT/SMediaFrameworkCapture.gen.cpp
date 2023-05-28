// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureTab/SMediaFrameworkCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMediaFrameworkCapture() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_NoRegister();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_NoRegister();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	void UMediaFrameworkMediaCaptureSettings::StaticRegisterNativesUMediaFrameworkMediaCaptureSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaFrameworkMediaCaptureSettings);
	UClass* Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_NoRegister()
	{
		return UMediaFrameworkMediaCaptureSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVerticalSplitterOrientation_MetaData[];
#endif
		static void NewProp_bIsVerticalSplitterOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVerticalSplitterOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the media capture tab.\n */" },
		{ "IncludePath", "CaptureTab/SMediaFrameworkCapture.h" },
		{ "ModuleRelativePath", "Private/CaptureTab/SMediaFrameworkCapture.h" },
		{ "ToolTip", "Settings for the media capture tab." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Private/CaptureTab/SMediaFrameworkCapture.h" },
	};
#endif
	void Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::NewProp_bIsVerticalSplitterOrientation_SetBit(void* Obj)
	{
		((UMediaFrameworkMediaCaptureSettings*)Obj)->bIsVerticalSplitterOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::NewProp_bIsVerticalSplitterOrientation = { "bIsVerticalSplitterOrientation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaFrameworkMediaCaptureSettings), &Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::NewProp_bIsVerticalSplitterOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::NewProp_bIsVerticalSplitterOrientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaFrameworkMediaCaptureSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::ClassParams = {
		&UMediaFrameworkMediaCaptureSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings()
	{
		if (!Z_Registration_Info_UClass_UMediaFrameworkMediaCaptureSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaFrameworkMediaCaptureSettings.OuterSingleton, Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaFrameworkMediaCaptureSettings.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaFrameworkMediaCaptureSettings>()
	{
		return UMediaFrameworkMediaCaptureSettings::StaticClass();
	}
	UMediaFrameworkMediaCaptureSettings::UMediaFrameworkMediaCaptureSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaFrameworkMediaCaptureSettings);
	UMediaFrameworkMediaCaptureSettings::~UMediaFrameworkMediaCaptureSettings() {}
	void UMediaFrameworkEditorCaptureSettings::StaticRegisterNativesUMediaFrameworkEditorCaptureSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaFrameworkEditorCaptureSettings);
	UClass* Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_NoRegister()
	{
		return UMediaFrameworkEditorCaptureSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveCaptureSetingsInWorld_MetaData[];
#endif
		static void NewProp_bSaveCaptureSetingsInWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCaptureSetingsInWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRestartCaptureOnChange_MetaData[];
#endif
		static void NewProp_bAutoRestartCaptureOnChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRestartCaptureOnChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaFrameworkWorldSettingsAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the capture that are persistent per users.\n */" },
		{ "IncludePath", "CaptureTab/SMediaFrameworkCapture.h" },
		{ "ModuleRelativePath", "Private/CaptureTab/SMediaFrameworkCapture.h" },
		{ "ToolTip", "Settings for the capture that are persistent per users." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bSaveCaptureSetingsInWorld_MetaData[] = {
		{ "Comment", "/** Should the Capture setting be saved with the level or should it be saved as a project settings. */" },
		{ "ModuleRelativePath", "Private/CaptureTab/SMediaFrameworkCapture.h" },
		{ "ToolTip", "Should the Capture setting be saved with the level or should it be saved as a project settings." },
	};
#endif
	void Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bSaveCaptureSetingsInWorld_SetBit(void* Obj)
	{
		((UMediaFrameworkEditorCaptureSettings*)Obj)->bSaveCaptureSetingsInWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bSaveCaptureSetingsInWorld = { "bSaveCaptureSetingsInWorld", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaFrameworkEditorCaptureSettings), &Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bSaveCaptureSetingsInWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bSaveCaptureSetingsInWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bSaveCaptureSetingsInWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bAutoRestartCaptureOnChange_MetaData[] = {
		{ "Comment", "/** Should the capture be restarted if the media output is modified. */" },
		{ "ModuleRelativePath", "Private/CaptureTab/SMediaFrameworkCapture.h" },
		{ "ToolTip", "Should the capture be restarted if the media output is modified." },
	};
#endif
	void Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bAutoRestartCaptureOnChange_SetBit(void* Obj)
	{
		((UMediaFrameworkEditorCaptureSettings*)Obj)->bAutoRestartCaptureOnChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bAutoRestartCaptureOnChange = { "bAutoRestartCaptureOnChange", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaFrameworkEditorCaptureSettings), &Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bAutoRestartCaptureOnChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bAutoRestartCaptureOnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bAutoRestartCaptureOnChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bSaveCaptureSetingsInWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::NewProp_bAutoRestartCaptureOnChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaFrameworkEditorCaptureSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::ClassParams = {
		&UMediaFrameworkEditorCaptureSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::PropPointers),
		0,
		0x002810A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings()
	{
		if (!Z_Registration_Info_UClass_UMediaFrameworkEditorCaptureSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaFrameworkEditorCaptureSettings.OuterSingleton, Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaFrameworkEditorCaptureSettings.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaFrameworkEditorCaptureSettings>()
	{
		return UMediaFrameworkEditorCaptureSettings::StaticClass();
	}
	UMediaFrameworkEditorCaptureSettings::UMediaFrameworkEditorCaptureSettings() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaFrameworkEditorCaptureSettings);
	UMediaFrameworkEditorCaptureSettings::~UMediaFrameworkEditorCaptureSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_SMediaFrameworkCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_SMediaFrameworkCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaFrameworkMediaCaptureSettings, UMediaFrameworkMediaCaptureSettings::StaticClass, TEXT("UMediaFrameworkMediaCaptureSettings"), &Z_Registration_Info_UClass_UMediaFrameworkMediaCaptureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaFrameworkMediaCaptureSettings), 3630423674U) },
		{ Z_Construct_UClass_UMediaFrameworkEditorCaptureSettings, UMediaFrameworkEditorCaptureSettings::StaticClass, TEXT("UMediaFrameworkEditorCaptureSettings"), &Z_Registration_Info_UClass_UMediaFrameworkEditorCaptureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaFrameworkEditorCaptureSettings), 3795171375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_SMediaFrameworkCapture_h_4083705177(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_SMediaFrameworkCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_SMediaFrameworkCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
