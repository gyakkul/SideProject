// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Loudness.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudness() {}
// Cross Module References
	AUDIOANALYZER_API UClass* Z_Construct_UClass_UAudioAnalyzer();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessAnalyzer();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessAnalyzer_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_ULoudnessSettings_NoRegister();
	AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature();
	AUDIOSYNESTHESIA_API UScriptStruct* Z_Construct_UScriptStruct_FLoudnessResults();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum;
	static UEnum* ELoudnessCurveTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("ELoudnessCurveTypeEnum"));
		}
		return Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<ELoudnessCurveTypeEnum>()
	{
		return ELoudnessCurveTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::Enumerators[] = {
		{ "ELoudnessCurveTypeEnum::A", (int64)ELoudnessCurveTypeEnum::A },
		{ "ELoudnessCurveTypeEnum::B", (int64)ELoudnessCurveTypeEnum::B },
		{ "ELoudnessCurveTypeEnum::C", (int64)ELoudnessCurveTypeEnum::C },
		{ "ELoudnessCurveTypeEnum::D", (int64)ELoudnessCurveTypeEnum::D },
		{ "ELoudnessCurveTypeEnum::None", (int64)ELoudnessCurveTypeEnum::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "A.Comment", "/** Loudness Curve A Weighting. Commonly used in environmental sound measurements. Best for low level sounds. */" },
		{ "A.DisplayName", "A" },
		{ "A.Name", "ELoudnessCurveTypeEnum::A" },
		{ "A.ToolTip", "Loudness Curve A Weighting. Commonly used in environmental sound measurements. Best for low level sounds." },
		{ "B.Comment", "/** Loudness Curve B Weighting. Relative to \"A\", gives more precedence to frequencies below 1kHz. */" },
		{ "B.DisplayName", "B" },
		{ "B.Name", "ELoudnessCurveTypeEnum::B" },
		{ "B.ToolTip", "Loudness Curve B Weighting. Relative to \"A\", gives more precedence to frequencies below 1kHz." },
		{ "BlueprintType", "true" },
		{ "C.Comment", "/** Loudness Curve C Weighting. Relative to \"A\" and \"B\", gives more precedence to frequencies below 1kHz. */" },
		{ "C.DisplayName", "C" },
		{ "C.Name", "ELoudnessCurveTypeEnum::C" },
		{ "C.ToolTip", "Loudness Curve C Weighting. Relative to \"A\" and \"B\", gives more precedence to frequencies below 1kHz." },
		{ "Comment", "/** ELoudnessCurveTypeEnum\n *\n * Enumeration of available equal loudness curves. Loudness curves based on IEC 61672-1:2013 Electroacoustics - Sound level meters - Part 1: Specifications.\n */" },
		{ "D.Comment", "/** Loudness Curve D Weighting. Similar to \"B\" but with an emphasis on presence in the 2kHz-6KHz frequency range. */" },
		{ "D.DisplayName", "D" },
		{ "D.Name", "ELoudnessCurveTypeEnum::D" },
		{ "D.ToolTip", "Loudness Curve D Weighting. Similar to \"B\" but with an emphasis on presence in the 2kHz-6KHz frequency range." },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "None.Comment", "/** No loudness curve weighting. */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ELoudnessCurveTypeEnum::None" },
		{ "None.ToolTip", "No loudness curve weighting." },
		{ "ToolTip", "ELoudnessCurveTypeEnum\n\nEnumeration of available equal loudness curves. Loudness curves based on IEC 61672-1:2013 Electroacoustics - Sound level meters - Part 1: Specifications." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia,
		nullptr,
		"ELoudnessCurveTypeEnum",
		"ELoudnessCurveTypeEnum",
		Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.InnerSingleton, Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum.InnerSingleton;
	}
	void ULoudnessSettings::StaticRegisterNativesULoudnessSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoudnessSettings);
	UClass* Z_Construct_UClass_ULoudnessSettings_NoRegister()
	{
		return ULoudnessSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULoudnessSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumFrequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFloorDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFloorDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedMaxLoudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpectedMaxLoudness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudnessSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** ULoudnessSettings\n *\n * Settings for a ULoudness analyzer.\n */" },
		{ "IncludePath", "Loudness.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "ULoudnessSettings\n\nSettings for a ULoudness analyzer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_AnalysisPeriod_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.25" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between loudness measurements */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Number of seconds between loudness measurements" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_AnalysisPeriod = { "AnalysisPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessSettings, AnalysisPeriod), METADATA_PARAMS(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_AnalysisPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_AnalysisPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MinimumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Minimum analysis frequency for calculating loudness. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Minimum analysis frequency for calculating loudness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MinimumFrequency = { "MinimumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessSettings, MinimumFrequency), METADATA_PARAMS(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MinimumFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MinimumFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MaximumFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Maximum analysis frequency for calculating loudness. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Maximum analysis frequency for calculating loudness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MaximumFrequency = { "MaximumFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessSettings, MaximumFrequency), METADATA_PARAMS(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MaximumFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MaximumFrequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_CurveType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of equal loudness curve used in calculations */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Type of equal loudness curve used in calculations" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessSettings, CurveType), Z_Construct_UEnum_AudioSynesthesia_ELoudnessCurveTypeEnum, METADATA_PARAMS(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_CurveType_MetaData)) }; // 1531421567
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_NoiseFloorDb_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** dB level to denote silence.  Used when calculating normalized loudness. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "dB level to denote silence.  Used when calculating normalized loudness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_NoiseFloorDb = { "NoiseFloorDb", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessSettings, NoiseFloorDb), METADATA_PARAMS(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_NoiseFloorDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_NoiseFloorDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_ExpectedMaxLoudness_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** dB level to denote silence.  Used when calculating normalized loudness. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "dB level to denote silence.  Used when calculating normalized loudness." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_ExpectedMaxLoudness = { "ExpectedMaxLoudness", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessSettings, ExpectedMaxLoudness), METADATA_PARAMS(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_ExpectedMaxLoudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_ExpectedMaxLoudness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoudnessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_AnalysisPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MinimumFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_MaximumFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_NoiseFloorDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessSettings_Statics::NewProp_ExpectedMaxLoudness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudnessSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudnessSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoudnessSettings_Statics::ClassParams = {
		&ULoudnessSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoudnessSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoudnessSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudnessSettings()
	{
		if (!Z_Registration_Info_UClass_ULoudnessSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoudnessSettings.OuterSingleton, Z_Construct_UClass_ULoudnessSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoudnessSettings.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<ULoudnessSettings>()
	{
		return ULoudnessSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudnessSettings);
	ULoudnessSettings::~ULoudnessSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LoudnessResults;
class UScriptStruct* FLoudnessResults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LoudnessResults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LoudnessResults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoudnessResults, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("LoudnessResults"));
	}
	return Z_Registration_Info_UScriptStruct_LoudnessResults.OuterSingleton;
}
template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<FLoudnessResults>()
{
	return FLoudnessResults::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLoudnessResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedLoudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedLoudness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptualEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PerceptualEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudnessResults_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The results of the loudness analyis. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "The results of the loudness analyis." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoudnessResults>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_Loudness_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The raw loudness value in dB\n" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "The raw loudness value in dB" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoudnessResults, Loudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_Loudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_Loudness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_NormalizedLoudness_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The normalized loudness\n" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "The normalized loudness" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_NormalizedLoudness = { "NormalizedLoudness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoudnessResults, NormalizedLoudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_NormalizedLoudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_NormalizedLoudness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_PerceptualEnergy_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The normalized loudness\n" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "The normalized loudness" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_PerceptualEnergy = { "PerceptualEnergy", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoudnessResults, PerceptualEnergy), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_PerceptualEnergy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_PerceptualEnergy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "// The time in seconds since analysis began\n" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "The time in seconds since analysis began" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLoudnessResults, TimeSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_TimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_TimeSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoudnessResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_Loudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_NormalizedLoudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_PerceptualEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewProp_TimeSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoudnessResults_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
		nullptr,
		&NewStructOps,
		"LoudnessResults",
		sizeof(FLoudnessResults),
		alignof(FLoudnessResults),
		Z_Construct_UScriptStruct_FLoudnessResults_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudnessResults_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudnessResults_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudnessResults_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoudnessResults()
	{
		if (!Z_Registration_Info_UScriptStruct_LoudnessResults.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LoudnessResults.InnerSingleton, Z_Construct_UScriptStruct_FLoudnessResults_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LoudnessResults.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnOverallLoudnessResults_Parms
		{
			TArray<FLoudnessResults> OverallLoudnessResults;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverallLoudnessResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallLoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverallLoudnessResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::NewProp_OverallLoudnessResults_Inner = { "OverallLoudnessResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLoudnessResults, METADATA_PARAMS(nullptr, 0) }; // 1307329375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::NewProp_OverallLoudnessResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::NewProp_OverallLoudnessResults = { "OverallLoudnessResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnOverallLoudnessResults_Parms, OverallLoudnessResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::NewProp_OverallLoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::NewProp_OverallLoudnessResults_MetaData)) }; // 1307329375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::NewProp_OverallLoudnessResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::NewProp_OverallLoudnessResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all overall loudness results (time-stamped in an array) since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive all overall loudness results (time-stamped in an array) since last delegate call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnOverallLoudnessResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnOverallLoudnessResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnOverallLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnOverallLoudnessResults, TArray<FLoudnessResults> const& OverallLoudnessResults)
{
	struct _Script_AudioSynesthesia_eventOnOverallLoudnessResults_Parms
	{
		TArray<FLoudnessResults> OverallLoudnessResults;
	};
	_Script_AudioSynesthesia_eventOnOverallLoudnessResults_Parms Parms;
	Parms.OverallLoudnessResults=OverallLoudnessResults;
	OnOverallLoudnessResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnLatestOverallLoudnessResults_Parms
		{
			FLoudnessResults LatestOverallLoudnessResults;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestOverallLoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatestOverallLoudnessResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::NewProp_LatestOverallLoudnessResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::NewProp_LatestOverallLoudnessResults = { "LatestOverallLoudnessResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestOverallLoudnessResults_Parms, LatestOverallLoudnessResults), Z_Construct_UScriptStruct_FLoudnessResults, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::NewProp_LatestOverallLoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::NewProp_LatestOverallLoudnessResults_MetaData)) }; // 1307329375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::NewProp_LatestOverallLoudnessResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall loudness result. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall loudness result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestOverallLoudnessResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestOverallLoudnessResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLatestOverallLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestOverallLoudnessResults, FLoudnessResults const& LatestOverallLoudnessResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestOverallLoudnessResults_Parms
	{
		FLoudnessResults LatestOverallLoudnessResults;
	};
	_Script_AudioSynesthesia_eventOnLatestOverallLoudnessResults_Parms Parms;
	Parms.LatestOverallLoudnessResults=LatestOverallLoudnessResults;
	OnLatestOverallLoudnessResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnPerChannelLoudnessResults_Parms
		{
			int32 ChannelIndex;
			TArray<FLoudnessResults> LoudnessResults;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoudnessResults_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoudnessResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnPerChannelLoudnessResults_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LoudnessResults_Inner = { "LoudnessResults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLoudnessResults, METADATA_PARAMS(nullptr, 0) }; // 1307329375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LoudnessResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LoudnessResults = { "LoudnessResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnPerChannelLoudnessResults_Parms, LoudnessResults), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LoudnessResults_MetaData)) }; // 1307329375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LoudnessResults_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LoudnessResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive all loudness results per channel (time-stamped in an array) since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive all loudness results per channel (time-stamped in an array) since last delegate call." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnPerChannelLoudnessResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnPerChannelLoudnessResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPerChannelLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnPerChannelLoudnessResults, int32 ChannelIndex, TArray<FLoudnessResults> const& LoudnessResults)
{
	struct _Script_AudioSynesthesia_eventOnPerChannelLoudnessResults_Parms
	{
		int32 ChannelIndex;
		TArray<FLoudnessResults> LoudnessResults;
	};
	_Script_AudioSynesthesia_eventOnPerChannelLoudnessResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.LoudnessResults=LoudnessResults;
	OnPerChannelLoudnessResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics
	{
		struct _Script_AudioSynesthesia_eventOnLatestPerChannelLoudnessResults_Parms
		{
			int32 ChannelIndex;
			FLoudnessResults LatestLoudnessResults;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestLoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatestLoudnessResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestPerChannelLoudnessResults_Parms, ChannelIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LatestLoudnessResults_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LatestLoudnessResults = { "LatestLoudnessResults", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AudioSynesthesia_eventOnLatestPerChannelLoudnessResults_Parms, LatestLoudnessResults), Z_Construct_UScriptStruct_FLoudnessResults, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LatestLoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LatestLoudnessResults_MetaData)) }; // 1307329375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::NewProp_LatestLoudnessResults,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate to receive only the most recent overall loudness result per channel. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive only the most recent overall loudness result per channel." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia, nullptr, "OnLatestPerChannelLoudnessResults__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::_Script_AudioSynesthesia_eventOnLatestPerChannelLoudnessResults_Parms), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLatestPerChannelLoudnessResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestPerChannelLoudnessResults, int32 ChannelIndex, FLoudnessResults const& LatestLoudnessResults)
{
	struct _Script_AudioSynesthesia_eventOnLatestPerChannelLoudnessResults_Parms
	{
		int32 ChannelIndex;
		FLoudnessResults LatestLoudnessResults;
	};
	_Script_AudioSynesthesia_eventOnLatestPerChannelLoudnessResults_Parms Parms;
	Parms.ChannelIndex=ChannelIndex;
	Parms.LatestLoudnessResults=LatestLoudnessResults;
	OnLatestPerChannelLoudnessResults.ProcessMulticastDelegate<UObject>(&Parms);
}
	void ULoudnessAnalyzer::StaticRegisterNativesULoudnessAnalyzer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoudnessAnalyzer);
	UClass* Z_Construct_UClass_ULoudnessAnalyzer_NoRegister()
	{
		return ULoudnessAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_ULoudnessAnalyzer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOverallLoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOverallLoudnessResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPerChannelLoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPerChannelLoudnessResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestOverallLoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestOverallLoudnessResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLatestPerChannelLoudnessResults_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLatestPerChannelLoudnessResults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoudnessAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioAnalyzer,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** ULoudnessAnalyzer\n *\n * ULoudnessAnalyzer calculates the temporal evolution of perceptual loudness for a given\n * audio bus in real-time. Loudness is available for individual channels or the overall audio bus. Normalized\n * loudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the\n * maximum loudness of the particular sound.\n */" },
		{ "IncludePath", "Loudness.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "ULoudnessAnalyzer\n\nULoudnessAnalyzer calculates the temporal evolution of perceptual loudness for a given\naudio bus in real-time. Loudness is available for individual channels or the overall audio bus. Normalized\nloudness values convert the range to 0.0 to 1.0 where 0.0 is the noise floor and 1.0 is the\nmaximum loudness of the particular sound." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessAnalyzer, Settings), Z_Construct_UClass_ULoudnessSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnOverallLoudnessResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all overall loudness results since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive all overall loudness results since last delegate call." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnOverallLoudnessResults = { "OnOverallLoudnessResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessAnalyzer, OnOverallLoudnessResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnOverallLoudnessResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnOverallLoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnOverallLoudnessResults_MetaData)) }; // 402310782
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnPerChannelLoudnessResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive all loudness results, per-channel, since last delegate call. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive all loudness results, per-channel, since last delegate call." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnPerChannelLoudnessResults = { "OnPerChannelLoudnessResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessAnalyzer, OnPerChannelLoudnessResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnPerChannelLoudnessResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnPerChannelLoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnPerChannelLoudnessResults_MetaData)) }; // 1163404524
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestOverallLoudnessResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest overall loudness results. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive the latest overall loudness results." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestOverallLoudnessResults = { "OnLatestOverallLoudnessResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessAnalyzer, OnLatestOverallLoudnessResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestOverallLoudnessResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestOverallLoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestOverallLoudnessResults_MetaData)) }; // 245169481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestPerChannelLoudnessResults_MetaData[] = {
		{ "Comment", "/** Delegate to receive the latest per-channel loudness results. */" },
		{ "ModuleRelativePath", "Classes/Loudness.h" },
		{ "ToolTip", "Delegate to receive the latest per-channel loudness results." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestPerChannelLoudnessResults = { "OnLatestPerChannelLoudnessResults", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoudnessAnalyzer, OnLatestPerChannelLoudnessResults), Z_Construct_UDelegateFunction_AudioSynesthesia_OnLatestPerChannelLoudnessResults__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestPerChannelLoudnessResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestPerChannelLoudnessResults_MetaData)) }; // 1269026268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoudnessAnalyzer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnOverallLoudnessResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnPerChannelLoudnessResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestOverallLoudnessResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoudnessAnalyzer_Statics::NewProp_OnLatestPerChannelLoudnessResults,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoudnessAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoudnessAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoudnessAnalyzer_Statics::ClassParams = {
		&ULoudnessAnalyzer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoudnessAnalyzer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessAnalyzer_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoudnessAnalyzer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoudnessAnalyzer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoudnessAnalyzer()
	{
		if (!Z_Registration_Info_UClass_ULoudnessAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoudnessAnalyzer.OuterSingleton, Z_Construct_UClass_ULoudnessAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoudnessAnalyzer.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<ULoudnessAnalyzer>()
	{
		return ULoudnessAnalyzer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoudnessAnalyzer);
	ULoudnessAnalyzer::~ULoudnessAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::EnumInfo[] = {
		{ ELoudnessCurveTypeEnum_StaticEnum, TEXT("ELoudnessCurveTypeEnum"), &Z_Registration_Info_UEnum_ELoudnessCurveTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1531421567U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::ScriptStructInfo[] = {
		{ FLoudnessResults::StaticStruct, Z_Construct_UScriptStruct_FLoudnessResults_Statics::NewStructOps, TEXT("LoudnessResults"), &Z_Registration_Info_UScriptStruct_LoudnessResults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLoudnessResults), 1307329375U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoudnessSettings, ULoudnessSettings::StaticClass, TEXT("ULoudnessSettings"), &Z_Registration_Info_UClass_ULoudnessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoudnessSettings), 107434885U) },
		{ Z_Construct_UClass_ULoudnessAnalyzer, ULoudnessAnalyzer::StaticClass, TEXT("ULoudnessAnalyzer"), &Z_Registration_Info_UClass_ULoudnessAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoudnessAnalyzer), 1472528879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_1911044781(TEXT("/Script/AudioSynesthesia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_Loudness_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
