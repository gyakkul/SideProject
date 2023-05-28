// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMixerSubmixEffectDynamicsProcessor() {}
// Cross Module References
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset();
	AUDIOMIXER_API UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode();
	AUDIOMIXER_API UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings();
	AUDIOMIXER_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAudioBus_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioMixer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType;
	static UEnum* ESubmixEffectDynamicsProcessorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsProcessorType"));
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsProcessorType>()
	{
		return ESubmixEffectDynamicsProcessorType_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enumerators[] = {
		{ "ESubmixEffectDynamicsProcessorType::Compressor", (int64)ESubmixEffectDynamicsProcessorType::Compressor },
		{ "ESubmixEffectDynamicsProcessorType::Limiter", (int64)ESubmixEffectDynamicsProcessorType::Limiter },
		{ "ESubmixEffectDynamicsProcessorType::Expander", (int64)ESubmixEffectDynamicsProcessorType::Expander },
		{ "ESubmixEffectDynamicsProcessorType::Gate", (int64)ESubmixEffectDynamicsProcessorType::Gate },
		{ "ESubmixEffectDynamicsProcessorType::UpwardsCompressor", (int64)ESubmixEffectDynamicsProcessorType::UpwardsCompressor },
		{ "ESubmixEffectDynamicsProcessorType::Count", (int64)ESubmixEffectDynamicsProcessorType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compressor.Name", "ESubmixEffectDynamicsProcessorType::Compressor" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsProcessorType::Count" },
		{ "Expander.Name", "ESubmixEffectDynamicsProcessorType::Expander" },
		{ "Gate.Name", "ESubmixEffectDynamicsProcessorType::Gate" },
		{ "Limiter.Name", "ESubmixEffectDynamicsProcessorType::Limiter" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "UpwardsCompressor.Name", "ESubmixEffectDynamicsProcessorType::UpwardsCompressor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"ESubmixEffectDynamicsProcessorType",
		"ESubmixEffectDynamicsProcessorType",
		Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode;
	static UEnum* ESubmixEffectDynamicsPeakMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsPeakMode"));
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsPeakMode>()
	{
		return ESubmixEffectDynamicsPeakMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enumerators[] = {
		{ "ESubmixEffectDynamicsPeakMode::MeanSquared", (int64)ESubmixEffectDynamicsPeakMode::MeanSquared },
		{ "ESubmixEffectDynamicsPeakMode::RootMeanSquared", (int64)ESubmixEffectDynamicsPeakMode::RootMeanSquared },
		{ "ESubmixEffectDynamicsPeakMode::Peak", (int64)ESubmixEffectDynamicsPeakMode::Peak },
		{ "ESubmixEffectDynamicsPeakMode::Count", (int64)ESubmixEffectDynamicsPeakMode::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsPeakMode::Count" },
		{ "MeanSquared.Name", "ESubmixEffectDynamicsPeakMode::MeanSquared" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "Peak.Name", "ESubmixEffectDynamicsPeakMode::Peak" },
		{ "RootMeanSquared.Name", "ESubmixEffectDynamicsPeakMode::RootMeanSquared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"ESubmixEffectDynamicsPeakMode",
		"ESubmixEffectDynamicsPeakMode",
		Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode;
	static UEnum* ESubmixEffectDynamicsChannelLinkMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsChannelLinkMode"));
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsChannelLinkMode>()
	{
		return ESubmixEffectDynamicsChannelLinkMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enumerators[] = {
		{ "ESubmixEffectDynamicsChannelLinkMode::Disabled", (int64)ESubmixEffectDynamicsChannelLinkMode::Disabled },
		{ "ESubmixEffectDynamicsChannelLinkMode::Average", (int64)ESubmixEffectDynamicsChannelLinkMode::Average },
		{ "ESubmixEffectDynamicsChannelLinkMode::Peak", (int64)ESubmixEffectDynamicsChannelLinkMode::Peak },
		{ "ESubmixEffectDynamicsChannelLinkMode::Count", (int64)ESubmixEffectDynamicsChannelLinkMode::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enum_MetaDataParams[] = {
		{ "Average.Name", "ESubmixEffectDynamicsChannelLinkMode::Average" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsChannelLinkMode::Count" },
		{ "Disabled.Name", "ESubmixEffectDynamicsChannelLinkMode::Disabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "Peak.Name", "ESubmixEffectDynamicsChannelLinkMode::Peak" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"ESubmixEffectDynamicsChannelLinkMode",
		"ESubmixEffectDynamicsChannelLinkMode",
		Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource;
	static UEnum* ESubmixEffectDynamicsKeySource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("ESubmixEffectDynamicsKeySource"));
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.OuterSingleton;
	}
	template<> AUDIOMIXER_API UEnum* StaticEnum<ESubmixEffectDynamicsKeySource>()
	{
		return ESubmixEffectDynamicsKeySource_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enumerators[] = {
		{ "ESubmixEffectDynamicsKeySource::Default", (int64)ESubmixEffectDynamicsKeySource::Default },
		{ "ESubmixEffectDynamicsKeySource::AudioBus", (int64)ESubmixEffectDynamicsKeySource::AudioBus },
		{ "ESubmixEffectDynamicsKeySource::Submix", (int64)ESubmixEffectDynamicsKeySource::Submix },
		{ "ESubmixEffectDynamicsKeySource::Count", (int64)ESubmixEffectDynamicsKeySource::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enum_MetaDataParams[] = {
		{ "AudioBus.Comment", "// Uses audio bus as key\n" },
		{ "AudioBus.Name", "ESubmixEffectDynamicsKeySource::AudioBus" },
		{ "AudioBus.ToolTip", "Uses audio bus as key" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESubmixEffectDynamicsKeySource::Count" },
		{ "Default.Comment", "// Defaults to use local submix (input) as key\n" },
		{ "Default.Name", "ESubmixEffectDynamicsKeySource::Default" },
		{ "Default.ToolTip", "Defaults to use local submix (input) as key" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "Submix.Comment", "// Uses external submix as key\n" },
		{ "Submix.Name", "ESubmixEffectDynamicsKeySource::Submix" },
		{ "Submix.ToolTip", "Uses external submix as key" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		"ESubmixEffectDynamicsKeySource",
		"ESubmixEffectDynamicsKeySource",
		Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource()
	{
		if (!Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton, Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings;
class UScriptStruct* FSubmixEffectDynamicProcessorFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicProcessorFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectDynamicProcessorFilterSettings>()
{
	return FSubmixEffectDynamicProcessorFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cutoff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Cutoff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GainDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicProcessorFilterSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Filter" },
		{ "Comment", "// Whether or not filter is enabled\n" },
		{ "DisplayName", "Enabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Whether or not filter is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicProcessorFilterSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSubmixEffectDynamicProcessorFilterSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The cutoff frequency of the HPF applied to key signal\n" },
		{ "DisplayName", "Cutoff (Hz)" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The cutoff frequency of the HPF applied to key signal" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff = { "Cutoff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicProcessorFilterSettings, Cutoff), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb_MetaData[] = {
		{ "Category", "Filter" },
		{ "ClampMax", "6.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The gain of the filter shelf applied to the key signal\n" },
		{ "DisplayName", "Gain (dB)" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The gain of the filter shelf applied to the key signal" },
		{ "UIMax", "6.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb = { "GainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicProcessorFilterSettings, GainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_Cutoff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewProp_GainDb,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectDynamicProcessorFilterSettings",
		sizeof(FSubmixEffectDynamicProcessorFilterSettings),
		alignof(FSubmixEffectDynamicProcessorFilterSettings),
		Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings;
class UScriptStruct* FSubmixEffectDynamicsProcessorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, (UObject*)Z_Construct_UPackage__Script_AudioMixer(), TEXT("SubmixEffectDynamicsProcessorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.OuterSingleton;
}
template<> AUDIOMIXER_API UScriptStruct* StaticStruct<FSubmixEffectDynamicsProcessorSettings>()
{
	return FSubmixEffectDynamicsProcessorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicsProcessorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicsProcessorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DynamicsProcessorType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinkMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinkMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThresholdDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KneeBandwidthDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KneeBandwidthDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAheadMsec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAheadMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTimeMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReleaseTimeMsec;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeySource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeySource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalAudioBus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalAudioBus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChannelLinked_MetaData[];
#endif
		static void NewProp_bChannelLinked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannelLinked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[];
#endif
		static void NewProp_bAnalogMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeyAudition_MetaData[];
#endif
		static void NewProp_bKeyAudition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyAudition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHighshelf_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHighshelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyLowshelf_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyLowshelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Submix dynamics processor settings\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Submix dynamics processor settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectDynamicsProcessorSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Type of processor to apply\n" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Type of processor to apply" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsProcessorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData)) }; // 1740737403
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Mode of peak detection used on input key signal\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Mode of peak detection used on input key signal" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData)) }; // 3250806237
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "Comment", "// Mode of peak detection if key signal is multi-channel\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Mode of peak detection if key signal is multi-channel" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode = { "LinkMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LinkMode), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsChannelLinkMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_MetaData)) }; // 2579943414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The input gain of the dynamics processor\n" },
		{ "DisplayName", "Input Gain (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The input gain of the dynamics processor" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "// The threshold at which to perform a dynamics processing operation\n" },
		{ "DisplayName", "Threshold (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The threshold at which to perform a dynamics processing operation" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The dynamics processor ratio used for compression/expansion\n" },
		{ "EditCondition", "!bBypass && DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::Compressor || DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::Expander ||  DynamicsProcessorType == ESubmixEffectDynamicsProcessorType::UpwardsCompressor" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The dynamics processor ratio used for compression/expansion" },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "Dynamics" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The knee bandwidth of the processor to use\n" },
		{ "DisplayName", "Knee (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The knee bandwidth of the processor to use" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of time to look ahead of the current audio (Allows for transients to be included in dynamics processing)\n" },
		{ "DisplayName", "Look Ahead (ms)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to look ahead of the current audio (Allows for transients to be included in dynamics processing)" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// The amount of time to ramp into any dynamics processing effect\n" },
		{ "DisplayName", "AttackTime (ms)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to ramp into any dynamics processing effect" },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "Response" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The amount of time to release the dynamics processing effect\n" },
		{ "DisplayName", "Release Time (ms)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The amount of time to release the dynamics processing effect" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource = { "KeySource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeySource), Z_Construct_UEnum_AudioMixer_ESubmixEffectDynamicsKeySource, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource_MetaData)) }; // 4082302390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalAudioBus_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// If set, uses output of provided audio bus as modulator of input signal for dynamics processor (Uses input signal as default modulator)\n" },
		{ "EditCondition", "!bBypass && KeySource == ESubmixEffectDynamicsKeySource::AudioBus" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "If set, uses output of provided audio bus as modulator of input signal for dynamics processor (Uses input signal as default modulator)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalAudioBus = { "ExternalAudioBus", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ExternalAudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalAudioBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalAudioBus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)\n" },
		{ "EditCondition", "!bBypass && KeySource == ESubmixEffectDynamicsKeySource::Submix" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "If set, uses output of provided submix as modulator of input signal for dynamics processor (Uses input signal as default modulator)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix = { "ExternalSubmix", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, ExternalSubmix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bChannelLinked_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked = { "bChannelLinked", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "// Toggles treating the attack and release envelopes as analog-style vs digital-style (Analog will respond a bit more naturally/slower)\n" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Toggles treating the attack and release envelopes as analog-style vs digital-style (Analog will respond a bit more naturally/slower)" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Whether or not to bypass effect\n" },
		{ "DisplayAfter", "DynamicsProcessorType" },
		{ "DisplayName", "Bypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Whether or not to bypass effect" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Audition the key modulation signal, bypassing enveloping and processing the input signal.\n" },
		{ "DisplayName", "Key Audition" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Audition the key modulation signal, bypassing enveloping and processing the input signal." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_SetBit(void* Obj)
	{
		((FSubmixEffectDynamicsProcessorSettings*)Obj)->bKeyAudition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition = { "bKeyAudition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSubmixEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Gain to apply to key signal if key source not set to default (input).\n" },
		{ "DisplayName", "External Input Gain (dB)" },
		{ "EditCondition", "!bBypass && KeySource != ESubmixEffectDynamicsKeySource::Default" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Gain to apply to key signal if key source not set to default (input)." },
		{ "UIMax", "30.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb = { "KeyGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "// The output gain of the dynamics processor\n" },
		{ "DisplayName", "Output Gain (dB)" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "The output gain of the dynamics processor" },
		{ "UIMax", "30.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// High Shelf filter settings for key signal (external signal if supplied or input signal if not)\n" },
		{ "DisplayName", "Key Highshelf" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "High Shelf filter settings for key signal (external signal if supplied or input signal if not)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf = { "KeyHighshelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyHighshelf), Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf_MetaData)) }; // 3177280684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf_MetaData[] = {
		{ "Category", "Sidechain" },
		{ "Comment", "// Low Shelf filter settings for key signal (external signal if supplied or input signal if not)\n" },
		{ "DisplayName", "Key Lowshelf" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Low Shelf filter settings for key signal (external signal if supplied or input signal if not)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf = { "KeyLowshelf", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectDynamicsProcessorSettings, KeyLowshelf), Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf_MetaData)) }; // 3177280684
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LinkMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeySource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalAudioBus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_ExternalSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bChannelLinked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_bKeyAudition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyHighshelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewProp_KeyLowshelf,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
		nullptr,
		&NewStructOps,
		"SubmixEffectDynamicsProcessorSettings",
		sizeof(FSubmixEffectDynamicsProcessorSettings),
		alignof(FSubmixEffectDynamicsProcessorSettings),
		Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectDynamicsProcessorSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetExternalSubmix)
	{
		P_GET_OBJECT(USoundSubmix,Z_Param_Submix);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalSubmix(Z_Param_Submix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execSetAudioBus)
	{
		P_GET_OBJECT(UAudioBus,Z_Param_AudioBus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioBus(Z_Param_AudioBus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectDynamicsProcessorPreset::execResetKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetKey();
		P_NATIVE_END;
	}
	void USubmixEffectDynamicsProcessorPreset::StaticRegisterNativesUSubmixEffectDynamicsProcessorPreset()
	{
		UClass* Class = USubmixEffectDynamicsProcessorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetKey", &USubmixEffectDynamicsProcessorPreset::execResetKey },
			{ "SetAudioBus", &USubmixEffectDynamicsProcessorPreset::execSetAudioBus },
			{ "SetExternalSubmix", &USubmixEffectDynamicsProcessorPreset::execSetExternalSubmix },
			{ "SetSettings", &USubmixEffectDynamicsProcessorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "ResetKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetAudioBus_Parms
		{
			UAudioBus* AudioBus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioBus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::NewProp_AudioBus = { "AudioBus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetAudioBus_Parms, AudioBus), Z_Construct_UClass_UAudioBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::NewProp_AudioBus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set\n// to effect's input.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Sets the source key input as the provided AudioBus' output.  If no object is provided, key is set\nto effect's input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetAudioBus", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::SubmixEffectDynamicsProcessorPreset_eventSetAudioBus_Parms), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms
		{
			USoundSubmix* Submix;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Submix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::NewProp_Submix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Sets the source key input as the provided Submix's output.  If no object is provided, key is set\n// to effect's input.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ToolTip", "Sets the source key input as the provided Submix's output.  If no object is provided, key is set\nto effect's input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetExternalSubmix", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::SubmixEffectDynamicsProcessorPreset_eventSetExternalSubmix_Parms), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics
	{
		struct SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms
		{
			FSubmixEffectDynamicsProcessorSettings Settings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings_MetaData)) }; // 725328465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::SubmixEffectDynamicsProcessorPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectDynamicsProcessorPreset);
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_NoRegister()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMixer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_ResetKey, "ResetKey" }, // 1723431567
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetAudioBus, "SetAudioBus" }, // 1038664154
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetExternalSubmix, "SetExternalSubmix" }, // 272497514
		{ &Z_Construct_UFunction_USubmixEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 3114229795
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData)) }; // 725328465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectDynamicsProcessorPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams = {
		&USubmixEffectDynamicsProcessorPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset.OuterSingleton;
	}
	template<> AUDIOMIXER_API UClass* StaticClass<USubmixEffectDynamicsProcessorPreset>()
	{
		return USubmixEffectDynamicsProcessorPreset::StaticClass();
	}
	USubmixEffectDynamicsProcessorPreset::USubmixEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectDynamicsProcessorPreset);
	USubmixEffectDynamicsProcessorPreset::~USubmixEffectDynamicsProcessorPreset() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(USubmixEffectDynamicsProcessorPreset)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::EnumInfo[] = {
		{ ESubmixEffectDynamicsProcessorType_StaticEnum, TEXT("ESubmixEffectDynamicsProcessorType"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsProcessorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1740737403U) },
		{ ESubmixEffectDynamicsPeakMode_StaticEnum, TEXT("ESubmixEffectDynamicsPeakMode"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsPeakMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3250806237U) },
		{ ESubmixEffectDynamicsChannelLinkMode_StaticEnum, TEXT("ESubmixEffectDynamicsChannelLinkMode"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsChannelLinkMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2579943414U) },
		{ ESubmixEffectDynamicsKeySource_StaticEnum, TEXT("ESubmixEffectDynamicsKeySource"), &Z_Registration_Info_UEnum_ESubmixEffectDynamicsKeySource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4082302390U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectDynamicProcessorFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectDynamicProcessorFilterSettings_Statics::NewStructOps, TEXT("SubmixEffectDynamicProcessorFilterSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectDynamicProcessorFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectDynamicProcessorFilterSettings), 3177280684U) },
		{ FSubmixEffectDynamicsProcessorSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectDynamicsProcessorSettings_Statics::NewStructOps, TEXT("SubmixEffectDynamicsProcessorSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectDynamicsProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectDynamicsProcessorSettings), 725328465U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectDynamicsProcessorPreset, USubmixEffectDynamicsProcessorPreset::StaticClass, TEXT("USubmixEffectDynamicsProcessorPreset"), &Z_Registration_Info_UClass_USubmixEffectDynamicsProcessorPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectDynamicsProcessorPreset), 4017699059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_3197517741(TEXT("/Script/AudioMixer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioMixer_Classes_SubmixEffects_AudioMixerSubmixEffectDynamicsProcessor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
