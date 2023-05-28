// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioModulationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioModulationSettings() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationSettings();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_UAudioModulationSettings_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	void UAudioModulationSettings::StaticRegisterNativesUAudioModulationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioModulationSettings);
	UClass* Z_Construct_UClass_UAudioModulationSettings_NoRegister()
	{
		return UAudioModulationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioModulationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioModulationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioModulationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Audio Modulation" },
		{ "IncludePath", "AudioModulationSettings.h" },
		{ "ModuleRelativePath", "Public/AudioModulationSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioModulationSettings_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioModulationSettings_Statics::NewProp_Parameters_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundModulationParameter" },
		{ "Category", "Parameters" },
		{ "Comment", "// Array of Modulation Parameters that are loaded on plugin startup\n" },
		{ "ModuleRelativePath", "Public/AudioModulationSettings.h" },
		{ "ToolTip", "Array of Modulation Parameters that are loaded on plugin startup" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioModulationSettings_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioModulationSettings, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioModulationSettings_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioModulationSettings_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioModulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioModulationSettings_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioModulationSettings_Statics::NewProp_Parameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioModulationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioModulationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioModulationSettings_Statics::ClassParams = {
		&UAudioModulationSettings::StaticClass,
		"AudioModulation",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioModulationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioModulationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioModulationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioModulationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioModulationSettings()
	{
		if (!Z_Registration_Info_UClass_UAudioModulationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioModulationSettings.OuterSingleton, Z_Construct_UClass_UAudioModulationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioModulationSettings.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<UAudioModulationSettings>()
	{
		return UAudioModulationSettings::StaticClass();
	}
	UAudioModulationSettings::UAudioModulationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioModulationSettings);
	UAudioModulationSettings::~UAudioModulationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioModulationSettings, UAudioModulationSettings::StaticClass, TEXT("UAudioModulationSettings"), &Z_Registration_Info_UClass_UAudioModulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioModulationSettings), 463993417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_3541790851(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_AudioModulationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
