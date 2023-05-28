// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Meter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeter() {}
// Cross Module References
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterAnalyzer();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterAnalyzer_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UMeterSettings_NoRegister();
	AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UScriptStruct* Z_Construct_UScriptStruct_FMeterResults();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeterPeakType;
	static UEnum* EMeterPeakType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("EMeterPeakType"));
		}
		return Z_Registration_Info_UEnum_EMeterPeakType.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<EMeterPeakType>()
	{
		return EMeterPeakType_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enumerators[] = {
		{ "EMeterPeakType::MeanSquared", (int64)EMeterPeakType::MeanSquared },
		{ "EMeterPeakType::RootMeanSquared", (int64)EMeterPeakType::RootMeanSquared },
		{ "EMeterPeakType::Peak", (int64)EMeterPeakType::Peak },
		{ "EMeterPeakType::Count", (int64)EMeterPeakType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EMeterPeakType::Count" },
		{ "MeanSquared.Name", "EMeterPeakType::MeanSquared" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "Peak.Name", "EMeterPeakType::Peak" },
		{ "RootMeanSquared.Name", "EMeterPeakType::RootMeanSquared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia,
		nullptr,
		"EMeterPeakType",
		"EMeterPeakType",
		Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType()
	{
		if (!Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton, Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeterPeakType.InnerSingleton;
	}
	void UMeterSettings::StaticRegisterNativesUMeterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeterSettings);
	UClass* Z_Construct_UClass_UMeterSettings_NoRegister()
	{
		return UMeterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMeterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PeakMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PeakMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterAttackTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeterAttackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterReleaseTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeterReleaseTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakHoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PeakHoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClippingThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClippingThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UMeterSettings\n *\n * Settings for a UMeterAnalyzer.\n */" },
		{ "IncludePath", "Meter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "UMeterSettings\n\nSettings for a UMeterAnalyzer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterSettings_Statics::NewProp_AnalysisPeriod_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between meter measurements */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Number of seconds between meter measurements" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_AnalysisPeriod = { "AnalysisPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterSettings, AnalysisPeriod), METADATA_PARAMS(Z_Construct_UClass_UMeterSettings_Statics::NewProp_AnalysisPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::NewProp_AnalysisPeriod_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Meter envelope type type */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Meter envelope type type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterSettings, PeakMode), Z_Construct_UEnum_AudioSynesthesia_EMeterPeakType, METADATA_PARAMS(Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode_MetaData)) }; // 2238768812
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterAttackTime_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Meter attack time, in milliseconds */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Meter attack time, in milliseconds" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterAttackTime = { "MeterAttackTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterSettings, MeterAttackTime), METADATA_PARAMS(Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterAttackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterAttackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterReleaseTime_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Meter release time, in milliseconds. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Meter release time, in milliseconds." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterReleaseTime = { "MeterReleaseTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterSettings, MeterReleaseTime), METADATA_PARAMS(Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterReleaseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterReleaseTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakHoldTime_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Peak hold time, in milliseconds */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Peak hold time, in milliseconds" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakHoldTime = { "PeakHoldTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterSettings, PeakHoldTime), METADATA_PARAMS(Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakHoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakHoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterSettings_Statics::NewProp_ClippingThreshold_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** What volume threshold to throw clipping detection notifications. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "What volume threshold to throw clipping detection notifications." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeterSettings_Statics::NewProp_ClippingThreshold = { "ClippingThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterSettings, ClippingThreshold), METADATA_PARAMS(Z_Construct_UClass_UMeterSettings_Statics::NewProp_ClippingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::NewProp_ClippingThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_AnalysisPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterAttackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_MeterReleaseTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_PeakHoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterSettings_Statics::NewProp_ClippingThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeterSettings_Statics::ClassParams = {
		&UMeterSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeterSettings()
	{
		if (!Z_Registration_Info_UClass_UMeterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeterSettings.OuterSingleton, Z_Construct_UClass_UMeterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeterSettings.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UMeterSettings>()
	{
		return UMeterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeterSettings);
	UMeterSettings::~UMeterSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeterResults;
class UScriptStruct* FMeterResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeterResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeterResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeterResults, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("MeterResults"));
	}
	return Z_Registration_Info_UScriptStruct_MeterResults.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<FMeterResults>()
{
	return FMeterResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeterResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeakValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PeakValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesClipping_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplesClipping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClippingValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClippingValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeterResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The results of the meter analysis. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The results of the meter analysis." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeterResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeterResults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The time in seconds since analysis began of this meter analysis result\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The time in seconds since analysis began of this meter analysis result" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeterResults, TimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_TimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_MeterValue_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The meter value\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The meter value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_MeterValue = { "MeterValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeterResults, MeterValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_MeterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_MeterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_PeakValue_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The peak value\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The peak value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_PeakValue = { "PeakValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeterResults, PeakValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_PeakValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_PeakValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_NumSamplesClipping_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The number of samples in the period which were above the clipping threshold. Will be 0 if no clipping was detected.\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The number of samples in the period which were above the clipping threshold. Will be 0 if no clipping was detected." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_NumSamplesClipping = { "NumSamplesClipping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeterResults, NumSamplesClipping), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_NumSamplesClipping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_NumSamplesClipping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_ClippingValue_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The value (if non-zero) if clipping was detected above the clipping threshold\n" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The value (if non-zero) if clipping was detected above the clipping threshold" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_ClippingValue = { "ClippingValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeterResults, ClippingValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_ClippingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_ClippingValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeterResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_TimeSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_MeterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_PeakValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_NumSamplesClipping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeterResults_Statics::NewProp_ClippingValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeterResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
		nullptr,
		&NewStructOps,
		"MeterResults",
		sizeof(FMeterResults),
		alignof(FMeterResults),
		Z_Construct_UScriptStruct_FMeterResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeterResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeterResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeterResults()
	{
		if (!Z_Registration_Info_UScriptStruct_MeterResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeterResults.InnerSingleton, Z_Construct_UScriptStruct_FMeterResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeterResults.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnOverallMeterResults_Parms
		{
			TArray<FMeterResults> MeterResults;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeterResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner = { "MeterResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(nullptr, 0) }; // 284537580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults = { "MeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms, MeterResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults_MetaData)) }; // 284537580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::NewProp_MeterResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all overall loudness results (time-stamped in an array) since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all overall loudness results (time-stamped in an array) since last delegate call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnOverallMeterResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallMeterResults, TArray<FMeterResults> const& MeterResults)
{
	struct _Script_AudioSynesthesia_eventOnOverallMeterResults_Parms
	{
		TArray<FMeterResults> MeterResults;
	};
	_Script_AudioSynesthesia_eventOnOverallMeterResults_Parms Parms;
	Parms.MeterResults=MeterResults;
	OnOverallMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms
		{
			FMeterResults LatestOverallMeterResults;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestOverallMeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatestOverallMeterResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::NewProp_LatestOverallMeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::NewProp_LatestOverallMeterResults = { "LatestOverallMeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms, LatestOverallMeterResults), Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::NewProp_LatestOverallMeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::NewProp_LatestOverallMeterResults_MetaData)) }; // 284537580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::NewProp_LatestOverallMeterResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall meter results. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall meter results." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestOverallMeterResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLatestOverallMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallMeterResults, FMeterResults const& LatestOverallMeterResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms
	{
		FMeterResults LatestOverallMeterResults;
	};
	_Script_AudioSynesthesia_eventOnLatestOverallMeterResults_Parms Parms;
	Parms.LatestOverallMeterResults=LatestOverallMeterResults;
	OnLatestOverallMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms
		{
			int32 ChannelIndex;
			TArray<FMeterResults> MeterResults;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeterResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeterResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner = { "MeterResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(nullptr, 0) }; // 284537580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults = { "MeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms, MeterResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults_MetaData)) }; // 284537580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::NewProp_MeterResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all meter results per channel (time-stamped in an array) since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all meter results per channel (time-stamped in an array) since last delegate call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnPerChannelMeterResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelMeterResults, int32 ChannelIndex, TArray<FMeterResults> const& MeterResults)
{
	struct _Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms
	{
		int32 ChannelIndex;
		TArray<FMeterResults> MeterResults;
	};
	_Script_AudioSynesthesia_eventOnPerChannelMeterResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.MeterResults=MeterResults;
	OnPerChannelMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms
		{
			int32 ChannelIndex;
			FMeterResults LatestMeterResults;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestMeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatestMeterResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_LatestMeterResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_LatestMeterResults = { "LatestMeterResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms, LatestMeterResults), Z_Construct_UScriptStruct_FMeterResults, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_LatestMeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_LatestMeterResults_MetaData)) }; // 284537580
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::NewProp_LatestMeterResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall meter result per channel. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall meter result per channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestPerChannelMeterResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLatestPerChannelMeterResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelMeterResults, int32 ChannelIndex, FMeterResults const& LatestMeterResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms
	{
		int32 ChannelIndex;
		FMeterResults LatestMeterResults;
	};
	_Script_AudioSynesthesia_eventOnLatestPerChannelMeterResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.LatestMeterResults=LatestMeterResults;
	OnLatestPerChannelMeterResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMeterAnalyzer::StaticRegisterNativesUMeterAnalyzer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeterAnalyzer);
	UClass* Z_Construct_UClass_UMeterAnalyzer_NoRegister()
	{
		return UMeterAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UMeterAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOverallMeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOverallMeterResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPerChannelMeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerChannelMeterResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestOverallMeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestOverallMeterResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestPerChannelMeterResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestPerChannelMeterResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeterAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzer,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UMeterAnalyzer\n *\n * UMeterAnalyzer calculates the current amplitude of an\n * audio bus in real-time.\n */" },
		{ "IncludePath", "Meter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "UMeterAnalyzer\n\nUMeterAnalyzer calculates the current amplitude of an\naudio bus in real-time." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the meter audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "The settings for the meter audio analyzer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterAnalyzer, Settings), Z_Construct_UClass_UMeterSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnOverallMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all overall meter results since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all overall meter results since last delegate call." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnOverallMeterResults = { "OnOverallMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterAnalyzer, OnOverallMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallMeterResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnOverallMeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnOverallMeterResults_MetaData)) }; // 600478698
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnPerChannelMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all meter results, per-channel, since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive all meter results, per-channel, since last delegate call." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnPerChannelMeterResults = { "OnPerChannelMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterAnalyzer, OnPerChannelMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelMeterResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnPerChannelMeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnPerChannelMeterResults_MetaData)) }; // 2680979098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestOverallMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest overall meter results. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive the latest overall meter results." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestOverallMeterResults = { "OnLatestOverallMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterAnalyzer, OnLatestOverallMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallMeterResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestOverallMeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestOverallMeterResults_MetaData)) }; // 2801581291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestPerChannelMeterResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest per-channel meter results. */" },
		{ "ModuleRelativePath", "Classes/Meter.h" },
		{ "ToolTip", "Delegate to receive the latest per-channel meter results." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestPerChannelMeterResults = { "OnLatestPerChannelMeterResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeterAnalyzer, OnLatestPerChannelMeterResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelMeterResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestPerChannelMeterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestPerChannelMeterResults_MetaData)) }; // 164031278
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeterAnalyzer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnOverallMeterResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnPerChannelMeterResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestOverallMeterResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeterAnalyzer_Statics::NewProp_OnLatestPerChannelMeterResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeterAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeterAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeterAnalyzer_Statics::ClassParams = {
		&UMeterAnalyzer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeterAnalyzer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeterAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeterAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeterAnalyzer()
	{
		if (!Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton, Z_Construct_UClass_UMeterAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeterAnalyzer.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UMeterAnalyzer>()
	{
		return UMeterAnalyzer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeterAnalyzer);
	UMeterAnalyzer::~UMeterAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::EnumInfo[] = {
		{ EMeterPeakType_StaticEnum, TEXT("EMeterPeakType"), &Z_Registration_Info_UEnum_EMeterPeakType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2238768812U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ScriptStructInfo[] = {
		{ FMeterResults::StaticStruct, Z_Construct_UScriptStruct_FMeterResults_Statics::NewStructOps, TEXT("MeterResults"), &Z_Registration_Info_UScriptStruct_MeterResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeterResults), 284537580U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeterSettings, UMeterSettings::StaticClass, TEXT("UMeterSettings"), &Z_Registration_Info_UClass_UMeterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeterSettings), 3905150604U) },
		{ Z_Construct_UClass_UMeterAnalyzer, UMeterAnalyzer::StaticClass, TEXT("UMeterAnalyzer"), &Z_Registration_Info_UClass_UMeterAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeterAnalyzer), 3129693251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_1574329330(TEXT("/Script/AudioSynesthesia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Meter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
