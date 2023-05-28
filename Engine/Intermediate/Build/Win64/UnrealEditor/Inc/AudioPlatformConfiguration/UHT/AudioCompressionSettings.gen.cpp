// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioCompressionSettings() {}
// Cross Module References
	AUDIOPLATFORMCONFIGURATION_API UEnum* Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings();
	AUDIOPLATFORMCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides();
	UPackage* Z_Construct_UPackage__Script_AudioPlatformConfiguration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings;
	static UEnum* ESoundwaveSampleRateSettings_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings, (UObject*)Z_Construct_UPackage__Script_AudioPlatformConfiguration(), TEXT("ESoundwaveSampleRateSettings"));
		}
		return Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.OuterSingleton;
	}
	template<> AUDIOPLATFORMCONFIGURATION_API UEnum* StaticEnum<ESoundwaveSampleRateSettings>()
	{
		return ESoundwaveSampleRateSettings_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::Enumerators[] = {
		{ "ESoundwaveSampleRateSettings::Max", (int64)ESoundwaveSampleRateSettings::Max },
		{ "ESoundwaveSampleRateSettings::High", (int64)ESoundwaveSampleRateSettings::High },
		{ "ESoundwaveSampleRateSettings::Medium", (int64)ESoundwaveSampleRateSettings::Medium },
		{ "ESoundwaveSampleRateSettings::Low", (int64)ESoundwaveSampleRateSettings::Low },
		{ "ESoundwaveSampleRateSettings::Min", (int64)ESoundwaveSampleRateSettings::Min },
		{ "ESoundwaveSampleRateSettings::MatchDevice_DEPRECATED", (int64)ESoundwaveSampleRateSettings::MatchDevice_DEPRECATED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::Enum_MetaDataParams[] = {
		{ "High.Name", "ESoundwaveSampleRateSettings::High" },
		{ "Low.Name", "ESoundwaveSampleRateSettings::Low" },
		{ "MatchDevice_DEPRECATED.Name", "ESoundwaveSampleRateSettings::MatchDevice_DEPRECATED" },
		{ "Max.Name", "ESoundwaveSampleRateSettings::Max" },
		{ "Medium.Name", "ESoundwaveSampleRateSettings::Medium" },
		{ "Min.Name", "ESoundwaveSampleRateSettings::Min" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioPlatformConfiguration,
		nullptr,
		"ESoundwaveSampleRateSettings",
		"ESoundwaveSampleRateSettings",
		Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings()
	{
		if (!Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.InnerSingleton, Z_Construct_UEnum_AudioPlatformConfiguration_ESoundwaveSampleRateSettings_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides;
class UScriptStruct* FPlatformRuntimeAudioCompressionOverrides::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides, (UObject*)Z_Construct_UPackage__Script_AudioPlatformConfiguration(), TEXT("PlatformRuntimeAudioCompressionOverrides"));
	}
	return Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides.OuterSingleton;
}
template<> AUDIOPLATFORMCONFIGURATION_API UScriptStruct* StaticStruct<FPlatformRuntimeAudioCompressionOverrides>()
{
	return FPlatformRuntimeAudioCompressionOverrides::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCompressionTimes_MetaData[];
#endif
		static void NewProp_bOverrideCompressionTimes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCompressionTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumRandomBranches_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumRandomBranches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCueQualityIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SoundCueQualityIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformRuntimeAudioCompressionOverrides>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_MetaData[] = {
		{ "Category", "DecompressOnLoad" },
		{ "Comment", "// When true, overrides the Sound Group on each Sound Wave, and instead uses the Duration Threshold value to determine whether a sound should be fully decompressed during initial loading.\n" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "When true, overrides the Sound Group on each Sound Wave, and instead uses the Duration Threshold value to determine whether a sound should be fully decompressed during initial loading." },
	};
#endif
	void Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_SetBit(void* Obj)
	{
		((FPlatformRuntimeAudioCompressionOverrides*)Obj)->bOverrideCompressionTimes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes = { "bOverrideCompressionTimes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPlatformRuntimeAudioCompressionOverrides), &Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold_MetaData[] = {
		{ "Category", "DecompressOnLoad" },
		{ "Comment", "// When Override Compression Times is set to true, any sound under this threshold (in seconds) will be fully decompressed on load.\n// Otherwise the first chunk of this sound is cached at load and the rest is decompressed in real time.\n// If set to zero, will default to the Sound Group on the relevant Sound Wave\n" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "When Override Compression Times is set to true, any sound under this threshold (in seconds) will be fully decompressed on load.\nOtherwise the first chunk of this sound is cached at load and the rest is decompressed in real time.\nIf set to zero, will default to the Sound Group on the relevant Sound Wave" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold = { "DurationThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlatformRuntimeAudioCompressionOverrides, DurationThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches_MetaData[] = {
		{ "Category", "SoundCueLoading" },
		{ "ClampMin", "0" },
		{ "Comment", "// On this platform, any random nodes on Sound Cues will automatically only preload this number of branches and dispose of any others\n// on load. This can drastically cut down on memory usage. If set to 0, no branches are culled.\n" },
		{ "DisplayName", "Maximum Branches on Random SoundCue nodes" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "On this platform, any random nodes on Sound Cues will automatically only preload this number of branches and dispose of any others\non load. This can drastically cut down on memory usage. If set to 0, no branches are culled." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches = { "MaxNumRandomBranches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlatformRuntimeAudioCompressionOverrides, MaxNumRandomBranches), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex_MetaData[] = {
		{ "Category", "SoundCueLoading" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "// On this platform, use the specified quality at this index to override the quality used for SoundCues on this platform\n" },
		{ "DisplayName", "Quality Index for Sound Cues" },
		{ "ModuleRelativePath", "Public/AudioCompressionSettings.h" },
		{ "ToolTip", "On this platform, use the specified quality at this index to override the quality used for SoundCues on this platform" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex = { "SoundCueQualityIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlatformRuntimeAudioCompressionOverrides, SoundCueQualityIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_bOverrideCompressionTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_DurationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_MaxNumRandomBranches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewProp_SoundCueQualityIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioPlatformConfiguration,
		nullptr,
		&NewStructOps,
		"PlatformRuntimeAudioCompressionOverrides",
		sizeof(FPlatformRuntimeAudioCompressionOverrides),
		alignof(FPlatformRuntimeAudioCompressionOverrides),
		Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides()
	{
		if (!Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides.InnerSingleton, Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_Statics::EnumInfo[] = {
		{ ESoundwaveSampleRateSettings_StaticEnum, TEXT("ESoundwaveSampleRateSettings"), &Z_Registration_Info_UEnum_ESoundwaveSampleRateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2785538257U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_Statics::ScriptStructInfo[] = {
		{ FPlatformRuntimeAudioCompressionOverrides::StaticStruct, Z_Construct_UScriptStruct_FPlatformRuntimeAudioCompressionOverrides_Statics::NewStructOps, TEXT("PlatformRuntimeAudioCompressionOverrides"), &Z_Registration_Info_UScriptStruct_PlatformRuntimeAudioCompressionOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlatformRuntimeAudioCompressionOverrides), 764648477U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_4161212840(TEXT("/Script/AudioPlatformConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioPlatformConfiguration_Public_AudioCompressionSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
