// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/AudioSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundConcurrency_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDefaultAudioCompressionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPanningMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVoiceSampleRate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAudioQualitySettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultAudioBusSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundDebugEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVoiceSampleRate;
	static UEnum* EVoiceSampleRate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVoiceSampleRate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVoiceSampleRate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVoiceSampleRate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVoiceSampleRate"));
		}
		return Z_Registration_Info_UEnum_EVoiceSampleRate.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVoiceSampleRate>()
	{
		return EVoiceSampleRate_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::Enumerators[] = {
		{ "EVoiceSampleRate::Low16000Hz", (int64)EVoiceSampleRate::Low16000Hz },
		{ "EVoiceSampleRate::Normal24000Hz", (int64)EVoiceSampleRate::Normal24000Hz },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Enumeration for what our options are for sample rates used for VOIP.\n" },
		{ "Low16000Hz.Name", "EVoiceSampleRate::Low16000Hz" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "Normal24000Hz.Name", "EVoiceSampleRate::Normal24000Hz" },
		{ "ToolTip", "Enumeration for what our options are for sample rates used for VOIP." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVoiceSampleRate",
		"EVoiceSampleRate",
		Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVoiceSampleRate()
	{
		if (!Z_Registration_Info_UEnum_EVoiceSampleRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVoiceSampleRate.InnerSingleton, Z_Construct_UEnum_Engine_EVoiceSampleRate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVoiceSampleRate.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPanningMethod;
	static UEnum* EPanningMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPanningMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPanningMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPanningMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPanningMethod"));
		}
		return Z_Registration_Info_UEnum_EPanningMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPanningMethod>()
	{
		return EPanningMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPanningMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPanningMethod_Statics::Enumerators[] = {
		{ "EPanningMethod::Linear", (int64)EPanningMethod::Linear },
		{ "EPanningMethod::EqualPower", (int64)EPanningMethod::EqualPower },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPanningMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Enumeration defines what method of panning to use (for non-binaural audio) with the audio-mixer.\n" },
		{ "EqualPower.Comment", "// Equal power panning maintains equal power when panning between speakers.\n" },
		{ "EqualPower.Name", "EPanningMethod::EqualPower" },
		{ "EqualPower.ToolTip", "Equal power panning maintains equal power when panning between speakers." },
		{ "Linear.Comment", "// Linear panning maintains linear amplitude when panning between speakers.\n" },
		{ "Linear.Name", "EPanningMethod::Linear" },
		{ "Linear.ToolTip", "Linear panning maintains linear amplitude when panning between speakers." },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Enumeration defines what method of panning to use (for non-binaural audio) with the audio-mixer." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPanningMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPanningMethod",
		"EPanningMethod",
		Z_Construct_UEnum_Engine_EPanningMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPanningMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPanningMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPanningMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPanningMethod()
	{
		if (!Z_Registration_Info_UEnum_EPanningMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPanningMethod.InnerSingleton, Z_Construct_UEnum_Engine_EPanningMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPanningMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMonoChannelUpmixMethod;
	static UEnum* EMonoChannelUpmixMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMonoChannelUpmixMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMonoChannelUpmixMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMonoChannelUpmixMethod"));
		}
		return Z_Registration_Info_UEnum_EMonoChannelUpmixMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMonoChannelUpmixMethod>()
	{
		return EMonoChannelUpmixMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::Enumerators[] = {
		{ "EMonoChannelUpmixMethod::Linear", (int64)EMonoChannelUpmixMethod::Linear },
		{ "EMonoChannelUpmixMethod::EqualPower", (int64)EMonoChannelUpmixMethod::EqualPower },
		{ "EMonoChannelUpmixMethod::FullVolume", (int64)EMonoChannelUpmixMethod::FullVolume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Enumeration defines how to treat mono 2D playback. Mono sounds need to upmixed to stereo when played back in 2D.\n" },
		{ "EqualPower.Comment", "// The mono channel is split 0.707 left/right\n" },
		{ "EqualPower.Name", "EMonoChannelUpmixMethod::EqualPower" },
		{ "EqualPower.ToolTip", "The mono channel is split 0.707 left/right" },
		{ "FullVolume.Comment", "// The mono channel is split 1.0 left/right\n" },
		{ "FullVolume.Name", "EMonoChannelUpmixMethod::FullVolume" },
		{ "FullVolume.ToolTip", "The mono channel is split 1.0 left/right" },
		{ "Linear.Comment", "// The mono channel is split 0.5 left/right\n" },
		{ "Linear.Name", "EMonoChannelUpmixMethod::Linear" },
		{ "Linear.ToolTip", "The mono channel is split 0.5 left/right" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Enumeration defines how to treat mono 2D playback. Mono sounds need to upmixed to stereo when played back in 2D." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMonoChannelUpmixMethod",
		"EMonoChannelUpmixMethod",
		Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod()
	{
		if (!Z_Registration_Info_UEnum_EMonoChannelUpmixMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMonoChannelUpmixMethod.InnerSingleton, Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMonoChannelUpmixMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultAudioCompressionType;
	static UEnum* EDefaultAudioCompressionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDefaultAudioCompressionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDefaultAudioCompressionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDefaultAudioCompressionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDefaultAudioCompressionType"));
		}
		return Z_Registration_Info_UEnum_EDefaultAudioCompressionType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDefaultAudioCompressionType>()
	{
		return EDefaultAudioCompressionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::Enumerators[] = {
		{ "EDefaultAudioCompressionType::BinkAudio", (int64)EDefaultAudioCompressionType::BinkAudio },
		{ "EDefaultAudioCompressionType::ADPCM", (int64)EDefaultAudioCompressionType::ADPCM },
		{ "EDefaultAudioCompressionType::PCM", (int64)EDefaultAudioCompressionType::PCM },
		{ "EDefaultAudioCompressionType::PlatformSpecific", (int64)EDefaultAudioCompressionType::PlatformSpecific },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::Enum_MetaDataParams[] = {
		{ "ADPCM.Comment", "// Will encode the asset using ADPCM, a time-domain codec that has fixed-sized quality and about ~4x compression ratio, but is relatively cheap to decode.\n" },
		{ "ADPCM.Name", "EDefaultAudioCompressionType::ADPCM" },
		{ "ADPCM.ToolTip", "Will encode the asset using ADPCM, a time-domain codec that has fixed-sized quality and about ~4x compression ratio, but is relatively cheap to decode." },
		{ "BinkAudio.Comment", "// Perceptual-based codec which supports all features across all platforms.\n" },
		{ "BinkAudio.Name", "EDefaultAudioCompressionType::BinkAudio" },
		{ "BinkAudio.ToolTip", "Perceptual-based codec which supports all features across all platforms." },
		{ "Comment", "// The sound asset compression type to use for assets using the compression type \"project defined\".\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "PCM.Comment", "// Uncompressed audio. Large memory usage (streamed chunks contain less audio per chunk) but extremely cheap to decode and supports all features. \n" },
		{ "PCM.Name", "EDefaultAudioCompressionType::PCM" },
		{ "PCM.ToolTip", "Uncompressed audio. Large memory usage (streamed chunks contain less audio per chunk) but extremely cheap to decode and supports all features." },
		{ "PlatformSpecific.Comment", "// Encodes the asset to a platform specific format and will be different depending on the platform. It does not currently support seeking.\n" },
		{ "PlatformSpecific.Name", "EDefaultAudioCompressionType::PlatformSpecific" },
		{ "PlatformSpecific.ToolTip", "Encodes the asset to a platform specific format and will be different depending on the platform. It does not currently support seeking." },
		{ "ToolTip", "The sound asset compression type to use for assets using the compression type \"project defined\"." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDefaultAudioCompressionType",
		"EDefaultAudioCompressionType",
		Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDefaultAudioCompressionType()
	{
		if (!Z_Registration_Info_UEnum_EDefaultAudioCompressionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultAudioCompressionType.InnerSingleton, Z_Construct_UEnum_Engine_EDefaultAudioCompressionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDefaultAudioCompressionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioQualitySettings;
class UScriptStruct* FAudioQualitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioQualitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioQualitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioQualitySettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AudioQualitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_AudioQualitySettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAudioQualitySettings>()
{
	return FAudioQualitySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioQualitySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxChannels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioQualitySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioQualitySettings, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels_MetaData[] = {
		{ "Category", "Quality" },
		{ "ClampMin", "1" },
		{ "Comment", "// The number of audio channels that can be used at once\n// NOTE: Some platforms may cap this value to a lower setting regardless of what the settings request\n" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The number of audio channels that can be used at once\nNOTE: Some platforms may cap this value to a lower setting regardless of what the settings request" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels = { "MaxChannels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioQualitySettings, MaxChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewProp_MaxChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AudioQualitySettings",
		sizeof(FAudioQualitySettings),
		alignof(FAudioQualitySettings),
		Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioQualitySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioQualitySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioQualitySettings.InnerSingleton, Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioQualitySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundDebugEntry;
class UScriptStruct* FSoundDebugEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundDebugEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundDebugEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundDebugEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundDebugEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SoundDebugEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundDebugEntry>()
{
	return FSoundDebugEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundDebugEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundDebugEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_DebugName_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Short name to use when referencing sound (ex. in the command line) */" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Short name to use when referencing sound (ex. in the command line)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundDebugEntry, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_DebugName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_Sound_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundBase" },
		{ "Category", "Debug" },
		{ "Comment", "/** Reference to a Debug Sound */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Reference to a Debug Sound" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundDebugEntry, Sound), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_Sound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewProp_Sound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundDebugEntry",
		sizeof(FSoundDebugEntry),
		alignof(FSoundDebugEntry),
		Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundDebugEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundDebugEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundDebugEntry.InnerSingleton, Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundDebugEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings;
class UScriptStruct* FDefaultAudioBusSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultAudioBusSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DefaultAudioBusSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDefaultAudioBusSettings>()
{
	return FDefaultAudioBusSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioBus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioBus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultAudioBusSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::NewProp_AudioBus_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.AudioBus" },
		{ "Category", "Mix" },
		{ "Comment", "/** The audio bus to start up by default on init. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The audio bus to start up by default on init." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDefaultAudioBusSettings, AudioBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::NewProp_AudioBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::NewProp_AudioBus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::NewProp_AudioBus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DefaultAudioBusSettings",
		sizeof(FDefaultAudioBusSettings),
		alignof(FDefaultAudioBusSettings),
		Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDefaultAudioBusSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings.InnerSingleton, Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings.InnerSingleton;
	}
	void UAudioSettings::StaticRegisterNativesUAudioSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSettings);
	UClass* Z_Construct_UClass_UAudioSettings_NoRegister()
	{
		return UAudioSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSoundClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMediaSoundClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultMediaSoundClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundConcurrencyName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSoundConcurrencyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBaseSoundMix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBaseSoundMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiPSoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VoiPSoundClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MasterSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseDefaultSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseDefaultSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReverbSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReverbSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EQSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EQSubmix;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VoiPSampleRate_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoiPSampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VoiPSampleRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultAudioCompressionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAudioCompressionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultAudioCompressionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultReverbSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultReverbSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumConcurrentStreams_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumConcurrentStreams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalMinPitchScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalMinPitchScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalMaxPitchScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalMaxPitchScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QualityLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPlayWhenSilent_MetaData[];
#endif
		static void NewProp_bAllowPlayWhenSilent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPlayWhenSilent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableMasterEQ_MetaData[];
#endif
		static void NewProp_bDisableMasterEQ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableMasterEQ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCenterChannel3DPanning_MetaData[];
#endif
		static void NewProp_bAllowCenterChannel3DPanning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCenterChannel3DPanning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStoppingSources_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumStoppingSources;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_PanningMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanningMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PanningMethod;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_MonoChannelUpmixMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonoChannelUpmixMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MonoChannelUpmixMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueFilenameFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueFilenameFormat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSounds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSounds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugSounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAudioBuses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAudioBuses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAudioBuses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSoundClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMediaSoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMediaSoundClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSoundConcurrency_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSoundConcurrency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Audio settings.\n */" },
		{ "DisplayName", "Audio" },
		{ "IncludePath", "Sound/AudioSettings.h" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Audio settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Audio" },
		{ "Comment", "/** The SoundClass assigned to newly created sounds */" },
		{ "DisplayName", "Default Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundClass assigned to newly created sounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName = { "DefaultSoundClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultSoundClassName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Audio" },
		{ "Comment", "/** The SoundClass assigned to media player assets */" },
		{ "DisplayName", "Default Media Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundClass assigned to media player assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName = { "DefaultMediaSoundClassName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultMediaSoundClassName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundConcurrency" },
		{ "Category", "Audio" },
		{ "Comment", "/** The SoundConcurrency assigned to newly created sounds */" },
		{ "DisplayName", "Default Sound Concurrency" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundConcurrency assigned to newly created sounds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName = { "DefaultSoundConcurrencyName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultSoundConcurrencyName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundMix" },
		{ "Category", "Audio" },
		{ "Comment", "/** The SoundMix to use as base when no other system has specified a Base SoundMix */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The SoundMix to use as base when no other system has specified a Base SoundMix" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix = { "DefaultBaseSoundMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultBaseSoundMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundClass" },
		{ "Category", "Audio" },
		{ "Comment", "/** Sound class to be used for the VOIP audio component */" },
		{ "DisplayName", "VOIP Sound Class" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Sound class to be used for the VOIP audio component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass = { "VoiPSoundClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, VoiPSoundClass), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_MasterSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "Mix" },
		{ "Comment", "/** The default submix through which all sounds are routed to. The root submix that outputs to audio hardware. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The default submix through which all sounds are routed to. The root submix that outputs to audio hardware." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MasterSubmix = { "MasterSubmix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, MasterSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MasterSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MasterSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_BaseDefaultSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "Mix" },
		{ "Comment", "/** The default submix to use for implicit submix sends (i.e. if the base submix send is null or if a submix parent is null) */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The default submix to use for implicit submix sends (i.e. if the base submix send is null or if a submix parent is null)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_BaseDefaultSubmix = { "BaseDefaultSubmix", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, BaseDefaultSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_BaseDefaultSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_BaseDefaultSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_ReverbSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "Mix" },
		{ "Comment", "/** The submix through which all sounds set to use reverb are routed */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The submix through which all sounds set to use reverb are routed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_ReverbSubmix = { "ReverbSubmix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, ReverbSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_ReverbSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_ReverbSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_EQSubmix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "Mix" },
		{ "Comment", "/** The submix through which all sounds set to use legacy EQ system are routed */" },
		{ "DisplayName", "EQ Submix (Legacy)" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The submix through which all sounds set to use legacy EQ system are routed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_EQSubmix = { "EQSubmix", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, EQSubmix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_EQSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_EQSubmix_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Sample rate used for voice over IP. VOIP audio is resampled to the application's sample rate on the receiver side. */" },
		{ "DisplayName", "VOIP Sample Rate" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Sample rate used for voice over IP. VOIP audio is resampled to the application's sample rate on the receiver side." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate = { "VoiPSampleRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, VoiPSampleRate), Z_Construct_UEnum_Engine_EVoiceSampleRate, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_MetaData)) }; // 2016672378
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioCompressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioCompressionType_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Default audio compression type to use for audio assets. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Default audio compression type to use for audio assets." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioCompressionType = { "DefaultAudioCompressionType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultAudioCompressionType), Z_Construct_UEnum_Engine_EDefaultAudioCompressionType, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioCompressionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioCompressionType_MetaData)) }; // 3173963389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel_MetaData[] = {
		{ "Comment", "/** The amount of audio to send to reverb submixes if no reverb send is setup for the source through attenuation settings. Only used in audio mixer. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The amount of audio to send to reverb submixes if no reverb send is setup for the source through attenuation settings. Only used in audio mixer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel = { "DefaultReverbSendLevel", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultReverbSendLevel_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many streaming sounds can be played at the same time (if more are played they will be sorted by priority) */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "How many streaming sounds can be played at the same time (if more are played they will be sorted by priority)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams = { "MaximumConcurrentStreams", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, MaximumConcurrentStreams), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The value to use to clamp the min pitch scale */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The value to use to clamp the min pitch scale" },
		{ "UIMax", "4.000000" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale = { "GlobalMinPitchScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, GlobalMinPitchScale), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0.001000" },
		{ "Comment", "/** The value to use to clamp the max pitch scale */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The value to use to clamp the max pitch scale" },
		{ "UIMax", "4.000000" },
		{ "UIMin", "0.001000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale = { "GlobalMaxPitchScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, GlobalMaxPitchScale), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioQualitySettings, METADATA_PARAMS(nullptr, 0) }; // 3163618235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Quality" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, QualityLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_MetaData)) }; // 3163618235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowPlayWhenSilent_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Allows sounds to play at 0 volume. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Allows sounds to play at 0 volume." },
	};
#endif
	void Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowPlayWhenSilent_SetBit(void* Obj)
	{
		((UAudioSettings*)Obj)->bAllowPlayWhenSilent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowPlayWhenSilent = { "bAllowPlayWhenSilent", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioSettings), &Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowPlayWhenSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowPlayWhenSilent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowPlayWhenSilent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/** Disables master EQ effect in the audio DSP graph. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Disables master EQ effect in the audio DSP graph." },
	};
#endif
	void Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_SetBit(void* Obj)
	{
		((UAudioSettings*)Obj)->bDisableMasterEQ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ = { "bDisableMasterEQ", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioSettings), &Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_MetaData[] = {
		{ "Category", "Panning" },
		{ "Comment", "/** Enables the surround sound spatialization calculations to include the center channel. */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Enables the surround sound spatialization calculations to include the center channel." },
	};
#endif
	void Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_SetBit(void* Obj)
	{
		((UAudioSettings*)Obj)->bAllowCenterChannel3DPanning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning = { "bAllowCenterChannel3DPanning", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAudioSettings), &Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/**\n\x09 * The max number of sources to reserve for \"stopping\" sounds. A \"stopping\" sound applies a fast fade in the DSP\n\x09 * render to prevent discontinuities when stopping sources.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The max number of sources to reserve for \"stopping\" sounds. A \"stopping\" sound applies a fast fade in the DSP\nrender to prevent discontinuities when stopping sources." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources = { "NumStoppingSources", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, NumStoppingSources), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_MetaData[] = {
		{ "Category", "Panning" },
		{ "Comment", "/**\n\x09* The method to use when doing non-binaural or object-based panning.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The method to use when doing non-binaural or object-based panning." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod = { "PanningMethod", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, PanningMethod), Z_Construct_UEnum_Engine_EPanningMethod, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_MetaData)) }; // 3604492629
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/**\n\x09* The upmixing method for mono sound sources. Defines how mono channels are up-mixed to stereo channels.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The upmixing method for mono sound sources. Defines how mono channels are up-mixed to stereo channels." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod = { "MonoChannelUpmixMethod", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, MonoChannelUpmixMethod), Z_Construct_UEnum_Engine_EMonoChannelUpmixMethod, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_MetaData)) }; // 120608014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "/**\n\x09 * The format string to use when generating the filename for contexts within dialogue waves. This must generate unique names for your project.\n\x09 * Available format markers:\n\x09 *   * {DialogueGuid} - The GUID of the dialogue wave. Guaranteed to be unique and stable against asset renames.\n\x09 *   * {DialogueHash} - The hash of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue name.\n\x09 *   * {DialogueName} - The name of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue hash.\n\x09 *   * {ContextId}    - The ID of the context. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against changes to the context.\n\x09 *   * {ContextIndex} - The index of the context within its parent dialogue wave. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against contexts being removed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "The format string to use when generating the filename for contexts within dialogue waves. This must generate unique names for your project.\nAvailable format markers:\n  * {DialogueGuid} - The GUID of the dialogue wave. Guaranteed to be unique and stable against asset renames.\n  * {DialogueHash} - The hash of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue name.\n  * {DialogueName} - The name of the dialogue wave. Not guaranteed to be unique or stable against asset renames, however may be unique enough if combined with the dialogue hash.\n  * {ContextId}    - The ID of the context. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against changes to the context.\n  * {ContextIndex} - The index of the context within its parent dialogue wave. Guaranteed to be unique within its dialogue wave. Not guaranteed to be stable against contexts being removed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat = { "DialogueFilenameFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DialogueFilenameFormat), METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DebugSounds_Inner = { "DebugSounds", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoundDebugEntry, METADATA_PARAMS(nullptr, 0) }; // 130877958
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DebugSounds_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n\x09* Sounds only packaged in non-shipped builds for debugging.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Sounds only packaged in non-shipped builds for debugging." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DebugSounds = { "DebugSounds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DebugSounds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DebugSounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DebugSounds_MetaData)) }; // 130877958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioBuses_Inner = { "DefaultAudioBuses", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDefaultAudioBusSettings, METADATA_PARAMS(nullptr, 0) }; // 3974899755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioBuses_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/** Array of AudioBuses that are automatically initialized when the AudioEngine is initialized */" },
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
		{ "ToolTip", "Array of AudioBuses that are automatically initialized when the AudioEngine is initialized" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioBuses = { "DefaultAudioBuses", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultAudioBuses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioBuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioBuses_MetaData)) }; // 3974899755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClass = { "DefaultSoundClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClass = { "DefaultMediaSoundClass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultMediaSoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrency_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/AudioSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrency = { "DefaultSoundConcurrency", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAudioSettings, DefaultSoundConcurrency), Z_Construct_UClass_USoundConcurrency_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrencyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultBaseSoundMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MasterSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_BaseDefaultSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_ReverbSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_EQSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_VoiPSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioCompressionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioCompressionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultReverbSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MaximumConcurrentStreams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMinPitchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_GlobalMaxPitchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_QualityLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowPlayWhenSilent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_bDisableMasterEQ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_bAllowCenterChannel3DPanning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_NumStoppingSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_PanningMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_MonoChannelUpmixMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DialogueFilenameFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DebugSounds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DebugSounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioBuses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultAudioBuses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultMediaSoundClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioSettings_Statics::NewProp_DefaultSoundConcurrency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSettings_Statics::ClassParams = {
		&UAudioSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSettings()
	{
		if (!Z_Registration_Info_UClass_UAudioSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSettings.OuterSingleton, Z_Construct_UClass_UAudioSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAudioSettings>()
	{
		return UAudioSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSettings);
	UAudioSettings::~UAudioSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::EnumInfo[] = {
		{ EVoiceSampleRate_StaticEnum, TEXT("EVoiceSampleRate"), &Z_Registration_Info_UEnum_EVoiceSampleRate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2016672378U) },
		{ EPanningMethod_StaticEnum, TEXT("EPanningMethod"), &Z_Registration_Info_UEnum_EPanningMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3604492629U) },
		{ EMonoChannelUpmixMethod_StaticEnum, TEXT("EMonoChannelUpmixMethod"), &Z_Registration_Info_UEnum_EMonoChannelUpmixMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 120608014U) },
		{ EDefaultAudioCompressionType_StaticEnum, TEXT("EDefaultAudioCompressionType"), &Z_Registration_Info_UEnum_EDefaultAudioCompressionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3173963389U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::ScriptStructInfo[] = {
		{ FAudioQualitySettings::StaticStruct, Z_Construct_UScriptStruct_FAudioQualitySettings_Statics::NewStructOps, TEXT("AudioQualitySettings"), &Z_Registration_Info_UScriptStruct_AudioQualitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioQualitySettings), 3163618235U) },
		{ FSoundDebugEntry::StaticStruct, Z_Construct_UScriptStruct_FSoundDebugEntry_Statics::NewStructOps, TEXT("SoundDebugEntry"), &Z_Registration_Info_UScriptStruct_SoundDebugEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundDebugEntry), 130877958U) },
		{ FDefaultAudioBusSettings::StaticStruct, Z_Construct_UScriptStruct_FDefaultAudioBusSettings_Statics::NewStructOps, TEXT("DefaultAudioBusSettings"), &Z_Registration_Info_UScriptStruct_DefaultAudioBusSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultAudioBusSettings), 3974899755U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSettings, UAudioSettings::StaticClass, TEXT("UAudioSettings"), &Z_Registration_Info_UClass_UAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSettings), 480487558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_4134316662(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_AudioSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
