// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderMicrophoneAudioSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderMicrophoneAudioSource() {}
// Cross Module References
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_NoRegister();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings();
	TAKERECORDERSOURCES_API UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_TakeRecorderSources();
// End Cross Module References
	void UTakeRecorderMicrophoneAudioSourceSettings::StaticRegisterNativesUTakeRecorderMicrophoneAudioSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderMicrophoneAudioSourceSettings);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_NoRegister()
	{
		return UTakeRecorderMicrophoneAudioSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioTrackName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AudioTrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSubDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioSubDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A recording source that records microphone audio */" },
		{ "DisplayName", "Microphone Audio Recorder" },
		{ "IncludePath", "TakeRecorderMicrophoneAudioSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A recording source that records microphone audio" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Name of the recorded audio track */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Name of the recorded audio track" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName = { "AudioTrackName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSourceSettings, AudioTrackName), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the audio asset. */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "The name of the audio asset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName = { "AudioAssetName", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSourceSettings, AudioAssetName), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** The name of the subdirectory audio will be placed in. Leave this empty to place into the same directory as the sequence base path */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "The name of the subdirectory audio will be placed in. Leave this empty to place into the same directory as the sequence base path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory = { "AudioSubDirectory", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSourceSettings, AudioSubDirectory), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::NewProp_AudioSubDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderMicrophoneAudioSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::ClassParams = {
		&UTakeRecorderMicrophoneAudioSourceSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::PropPointers),
		0,
		0x000000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings.OuterSingleton, Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderMicrophoneAudioSourceSettings>()
	{
		return UTakeRecorderMicrophoneAudioSourceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderMicrophoneAudioSourceSettings);
	UTakeRecorderMicrophoneAudioSourceSettings::~UTakeRecorderMicrophoneAudioSourceSettings() {}
	void UTakeRecorderMicrophoneAudioSource::StaticRegisterNativesUTakeRecorderMicrophoneAudioSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderMicrophoneAudioSource);
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_NoRegister()
	{
		return UTakeRecorderMicrophoneAudioSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[];
#endif
		static void NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitAudioChannelsIntoSeparateTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceRecordedAudio_MetaData[];
#endif
		static void NewProp_bReplaceRecordedAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceRecordedAudio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorderSources,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** A recording source that records microphone audio */" },
		{ "IncludePath", "TakeRecorderMicrophoneAudioSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Microphone Audio" },
		{ "ToolTip", "A recording source that records microphone audio" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain_MetaData[] = {
		{ "Category", "Source" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Gain in decibels to apply to recorded audio */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Gain in decibels to apply to recorded audio" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain = { "AudioGain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderMicrophoneAudioSource, AudioGain), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Whether or not to split mic channels into separate audio tracks. If not true, a max of 2 input channels is supported. */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Whether or not to split mic channels into separate audio tracks. If not true, a max of 2 input channels is supported." },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj)
	{
		((UTakeRecorderMicrophoneAudioSource*)Obj)->bSplitAudioChannelsIntoSeparateTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks = { "bSplitAudioChannelsIntoSeparateTracks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderMicrophoneAudioSource), &Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Replace existing recorded audio with any newly recorded audio */" },
		{ "ModuleRelativePath", "Private/TakeRecorderMicrophoneAudioSource.h" },
		{ "ToolTip", "Replace existing recorded audio with any newly recorded audio" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_SetBit(void* Obj)
	{
		((UTakeRecorderMicrophoneAudioSource*)Obj)->bReplaceRecordedAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio = { "bReplaceRecordedAudio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderMicrophoneAudioSource), &Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_AudioGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::NewProp_bReplaceRecordedAudio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderMicrophoneAudioSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::ClassParams = {
		&UTakeRecorderMicrophoneAudioSource::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource.OuterSingleton;
	}
	template<> TAKERECORDERSOURCES_API UClass* StaticClass<UTakeRecorderMicrophoneAudioSource>()
	{
		return UTakeRecorderMicrophoneAudioSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderMicrophoneAudioSource);
	UTakeRecorderMicrophoneAudioSource::~UTakeRecorderMicrophoneAudioSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderMicrophoneAudioSourceSettings, UTakeRecorderMicrophoneAudioSourceSettings::StaticClass, TEXT("UTakeRecorderMicrophoneAudioSourceSettings"), &Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderMicrophoneAudioSourceSettings), 1895218210U) },
		{ Z_Construct_UClass_UTakeRecorderMicrophoneAudioSource, UTakeRecorderMicrophoneAudioSource::StaticClass, TEXT("UTakeRecorderMicrophoneAudioSource"), &Z_Registration_Info_UClass_UTakeRecorderMicrophoneAudioSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderMicrophoneAudioSource), 3560102904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_1184510143(TEXT("/Script/TakeRecorderSources"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorderSources_Private_TakeRecorderMicrophoneAudioSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
