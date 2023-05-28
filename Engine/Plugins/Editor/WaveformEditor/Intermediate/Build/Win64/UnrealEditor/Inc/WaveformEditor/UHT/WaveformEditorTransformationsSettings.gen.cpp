// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaveformEditorTransformationsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveformEditorTransformationsSettings() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_WaveformEditor();
	WAVEFORMEDITOR_API UClass* Z_Construct_UClass_UWaveformEditorTransformationsSettings();
	WAVEFORMEDITOR_API UClass* Z_Construct_UClass_UWaveformEditorTransformationsSettings_NoRegister();
// End Cross Module References
	void UWaveformEditorTransformationsSettings::StaticRegisterNativesUWaveformEditorTransformationsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformEditorTransformationsSettings);
	UClass* Z_Construct_UClass_UWaveformEditorTransformationsSettings_NoRegister()
	{
		return UWaveformEditorTransformationsSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LaunchTransformations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaunchTransformations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LaunchTransformations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings to regulate Waveform Transformations behavior inside Waveform Editor plugin.\n */" },
		{ "DisplayName", "Waveform Editor Transformations" },
		{ "IncludePath", "WaveformEditorTransformationsSettings.h" },
		{ "ModuleRelativePath", "Private/WaveformEditorTransformationsSettings.h" },
		{ "ToolTip", "Settings to regulate Waveform Transformations behavior inside Waveform Editor plugin." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::NewProp_LaunchTransformations_Inner = { "LaunchTransformations", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UWaveformTransformationBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::NewProp_LaunchTransformations_MetaData[] = {
		{ "Category", "Launch Options" },
		{ "Comment", "/** A Transformation chain that will be added to the inspected Soundwave if there aren't any  */" },
		{ "ModuleRelativePath", "Private/WaveformEditorTransformationsSettings.h" },
		{ "ToolTip", "A Transformation chain that will be added to the inspected Soundwave if there aren't any" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::NewProp_LaunchTransformations = { "LaunchTransformations", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformEditorTransformationsSettings, LaunchTransformations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::NewProp_LaunchTransformations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::NewProp_LaunchTransformations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::NewProp_LaunchTransformations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::NewProp_LaunchTransformations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformEditorTransformationsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::ClassParams = {
		&UWaveformEditorTransformationsSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveformEditorTransformationsSettings()
	{
		if (!Z_Registration_Info_UClass_UWaveformEditorTransformationsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformEditorTransformationsSettings.OuterSingleton, Z_Construct_UClass_UWaveformEditorTransformationsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveformEditorTransformationsSettings.OuterSingleton;
	}
	template<> WAVEFORMEDITOR_API UClass* StaticClass<UWaveformEditorTransformationsSettings>()
	{
		return UWaveformEditorTransformationsSettings::StaticClass();
	}
	UWaveformEditorTransformationsSettings::UWaveformEditorTransformationsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformEditorTransformationsSettings);
	UWaveformEditorTransformationsSettings::~UWaveformEditorTransformationsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveformEditorTransformationsSettings, UWaveformEditorTransformationsSettings::StaticClass, TEXT("UWaveformEditorTransformationsSettings"), &Z_Registration_Info_UClass_UWaveformEditorTransformationsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformEditorTransformationsSettings), 2624780265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_4051964640(TEXT("/Script/WaveformEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformEditor_Private_WaveformEditorTransformationsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
