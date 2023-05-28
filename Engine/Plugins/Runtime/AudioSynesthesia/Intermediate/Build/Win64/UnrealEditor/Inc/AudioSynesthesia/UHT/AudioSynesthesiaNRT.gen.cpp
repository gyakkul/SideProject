// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioSynesthesiaNRT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSynesthesiaNRT() {}
// Cross Module References
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRT();
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzerNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References
	void UAudioSynesthesiaNRTSettings::StaticRegisterNativesUAudioSynesthesiaNRTSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaNRTSettings);
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings_NoRegister()
	{
		return UAudioSynesthesiaNRTSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerNRTSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioSynesthesiaNRTSettings\n *\n * Defines asset actions for derived UAudioSynthesiaNRTSettings subclasses.\n */" },
		{ "IncludePath", "AudioSynesthesiaNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRT.h" },
		{ "ToolTip", "UAudioSynesthesiaNRTSettings\n\nDefines asset actions for derived UAudioSynthesiaNRTSettings subclasses." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRTSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::ClassParams = {
		&UAudioSynesthesiaNRTSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings()
	{
		if (!Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaNRTSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UAudioSynesthesiaNRTSettings>()
	{
		return UAudioSynesthesiaNRTSettings::StaticClass();
	}
	UAudioSynesthesiaNRTSettings::UAudioSynesthesiaNRTSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRTSettings);
	UAudioSynesthesiaNRTSettings::~UAudioSynesthesiaNRTSettings() {}
	void UAudioSynesthesiaNRT::StaticRegisterNativesUAudioSynesthesiaNRT()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSynesthesiaNRT);
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRT_NoRegister()
	{
		return UAudioSynesthesiaNRT::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSynesthesiaNRT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzerNRT,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UAudioSynesthesiaNRT\n *\n * Defines asset actions for derived UAudioSynthesiaNRT subclasses.\n */" },
		{ "IncludePath", "AudioSynesthesiaNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AudioSynesthesiaNRT.h" },
		{ "ToolTip", "UAudioSynesthesiaNRT\n\nDefines asset actions for derived UAudioSynthesiaNRT subclasses." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSynesthesiaNRT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::ClassParams = {
		&UAudioSynesthesiaNRT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSynesthesiaNRT()
	{
		if (!Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton, Z_Construct_UClass_UAudioSynesthesiaNRT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioSynesthesiaNRT.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UAudioSynesthesiaNRT>()
	{
		return UAudioSynesthesiaNRT::StaticClass();
	}
	UAudioSynesthesiaNRT::UAudioSynesthesiaNRT(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSynesthesiaNRT);
	UAudioSynesthesiaNRT::~UAudioSynesthesiaNRT() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSynesthesiaNRTSettings, UAudioSynesthesiaNRTSettings::StaticClass, TEXT("UAudioSynesthesiaNRTSettings"), &Z_Registration_Info_UClass_UAudioSynesthesiaNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaNRTSettings), 411546303U) },
		{ Z_Construct_UClass_UAudioSynesthesiaNRT, UAudioSynesthesiaNRT::StaticClass, TEXT("UAudioSynesthesiaNRT"), &Z_Registration_Info_UClass_UAudioSynesthesiaNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSynesthesiaNRT), 3793483751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_2700027501(TEXT("/Script/AudioSynesthesia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_AudioSynesthesiaNRT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
