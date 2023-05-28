// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstantQNRT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstantQNRT() {}
// Cross Module References
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UAudioSynesthesiaNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQNRT();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQNRT_NoRegister();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQNRTSettings();
	AUDIOSYNESTHESIA_API UClass* Z_Construct_UClass_UConstantQNRTSettings_NoRegister();
	AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum();
	AUDIOSYNESTHESIA_API UEnum* Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFFTWindowType();
	UPackage* Z_Construct_UPackage__Script_AudioSynesthesia();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstantQNormalizationEnum;
	static UEnum* EConstantQNormalizationEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("EConstantQNormalizationEnum"));
		}
		return Z_Registration_Info_UEnum_EConstantQNormalizationEnum.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<EConstantQNormalizationEnum>()
	{
		return EConstantQNormalizationEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::Enumerators[] = {
		{ "EConstantQNormalizationEnum::EqualEuclideanNorm", (int64)EConstantQNormalizationEnum::EqualEuclideanNorm },
		{ "EConstantQNormalizationEnum::EqualEnergy", (int64)EConstantQNormalizationEnum::EqualEnergy },
		{ "EConstantQNormalizationEnum::EqualAmplitude", (int64)EConstantQNormalizationEnum::EqualAmplitude },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** EConstantQNormalizationEnum\n *\n * Enumeration of available normalization schemes for ConstantQ frequency domain windows.\n */" },
		{ "EqualAmplitude.Comment", "/** Normalize bands by their maximum values. Will result in relatively strong high frequences because the upper constant Q bands have larger bandwidths. */" },
		{ "EqualAmplitude.DisplayName", "Equal Amplitude" },
		{ "EqualAmplitude.Name", "EConstantQNormalizationEnum::EqualAmplitude" },
		{ "EqualAmplitude.ToolTip", "Normalize bands by their maximum values. Will result in relatively strong high frequences because the upper constant Q bands have larger bandwidths." },
		{ "EqualEnergy.Comment", "/** Normalize bands by energy. Good when using power spectrum. */" },
		{ "EqualEnergy.DisplayName", "Equal Energy" },
		{ "EqualEnergy.Name", "EConstantQNormalizationEnum::EqualEnergy" },
		{ "EqualEnergy.ToolTip", "Normalize bands by energy. Good when using power spectrum." },
		{ "EqualEuclideanNorm.Comment", "/** Normalize bands by euclidean norm. Good when using magnitude spectrum. */" },
		{ "EqualEuclideanNorm.DisplayName", "Equal Euclidean Norm" },
		{ "EqualEuclideanNorm.Name", "EConstantQNormalizationEnum::EqualEuclideanNorm" },
		{ "EqualEuclideanNorm.ToolTip", "Normalize bands by euclidean norm. Good when using magnitude spectrum." },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "EConstantQNormalizationEnum\n\nEnumeration of available normalization schemes for ConstantQ frequency domain windows." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia,
		nullptr,
		"EConstantQNormalizationEnum",
		"EConstantQNormalizationEnum",
		Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstantQNormalizationEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstantQNormalizationEnum.InnerSingleton, Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConstantQNormalizationEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstantQFFTSizeEnum;
	static UEnum* EConstantQFFTSizeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum, (UObject*)Z_Construct_UPackage__Script_AudioSynesthesia(), TEXT("EConstantQFFTSizeEnum"));
		}
		return Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<EConstantQFFTSizeEnum>()
	{
		return EConstantQFFTSizeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::Enumerators[] = {
		{ "EConstantQFFTSizeEnum::Min", (int64)EConstantQFFTSizeEnum::Min },
		{ "EConstantQFFTSizeEnum::XXSmall", (int64)EConstantQFFTSizeEnum::XXSmall },
		{ "EConstantQFFTSizeEnum::XSmall", (int64)EConstantQFFTSizeEnum::XSmall },
		{ "EConstantQFFTSizeEnum::Small", (int64)EConstantQFFTSizeEnum::Small },
		{ "EConstantQFFTSizeEnum::Medium", (int64)EConstantQFFTSizeEnum::Medium },
		{ "EConstantQFFTSizeEnum::Large", (int64)EConstantQFFTSizeEnum::Large },
		{ "EConstantQFFTSizeEnum::XLarge", (int64)EConstantQFFTSizeEnum::XLarge },
		{ "EConstantQFFTSizeEnum::XXLarge", (int64)EConstantQFFTSizeEnum::XXLarge },
		{ "EConstantQFFTSizeEnum::Max", (int64)EConstantQFFTSizeEnum::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** EContantQFFTSizeEnum\n *\n *  Enumeration of available FFT sizes in audio frames.\n */" },
		{ "Large.Comment", "// 2048\n" },
		{ "Large.Name", "EConstantQFFTSizeEnum::Large" },
		{ "Large.ToolTip", "2048" },
		{ "Max.Comment", "// 16384\n" },
		{ "Max.Name", "EConstantQFFTSizeEnum::Max" },
		{ "Max.ToolTip", "16384" },
		{ "Medium.Comment", "// 1024\n" },
		{ "Medium.Name", "EConstantQFFTSizeEnum::Medium" },
		{ "Medium.ToolTip", "1024" },
		{ "Min.Comment", "// 64\n" },
		{ "Min.Name", "EConstantQFFTSizeEnum::Min" },
		{ "Min.ToolTip", "64" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "Small.Comment", "// 512\n" },
		{ "Small.Name", "EConstantQFFTSizeEnum::Small" },
		{ "Small.ToolTip", "512" },
		{ "ToolTip", "EContantQFFTSizeEnum\n\nEnumeration of available FFT sizes in audio frames." },
		{ "XLarge.Comment", "// 4096\n" },
		{ "XLarge.Name", "EConstantQFFTSizeEnum::XLarge" },
		{ "XLarge.ToolTip", "4096" },
		{ "XSmall.Comment", "// 256\n" },
		{ "XSmall.Name", "EConstantQFFTSizeEnum::XSmall" },
		{ "XSmall.ToolTip", "256" },
		{ "XXLarge.Comment", "// 8192\n" },
		{ "XXLarge.Name", "EConstantQFFTSizeEnum::XXLarge" },
		{ "XXLarge.ToolTip", "8192" },
		{ "XXSmall.Comment", "// 128\n" },
		{ "XXSmall.Name", "EConstantQFFTSizeEnum::XXSmall" },
		{ "XXSmall.ToolTip", "128" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioSynesthesia,
		nullptr,
		"EConstantQFFTSizeEnum",
		"EConstantQFFTSizeEnum",
		Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.InnerSingleton, Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConstantQFFTSizeEnum.InnerSingleton;
	}
	void UConstantQNRTSettings::StaticRegisterNativesUConstantQNRTSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstantQNRTSettings);
	UClass* Z_Construct_UClass_UConstantQNRTSettings_NoRegister()
	{
		return UConstantQNRTSettings::StaticClass();
	}
	struct Z_Construct_UClass_UConstantQNRTSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBands_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBands;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBandsPerOctave_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumBandsPerOctave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalysisPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalysisPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDownmixToMono_MetaData[];
#endif
		static void NewProp_bDownmixToMono_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDownmixToMono;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FFTSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FFTSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FFTSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpectrumType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpectrumType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BandWidthStretch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BandWidthStretch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CQTNormalization_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CQTNormalization_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CQTNormalization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFloorDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFloorDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstantQNRTSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRTSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UConstantQNRTSettings\n *\n * Settings for a UConstantQNRT analyzer.\n */" },
		{ "IncludePath", "ConstantQNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "UConstantQNRTSettings\n\nSettings for a UConstantQNRT analyzer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_StartingFrequency_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "/** Starting frequency for first bin of CQT */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Starting frequency for first bin of CQT" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_StartingFrequency = { "StartingFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, StartingFrequency), METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_StartingFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_StartingFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBands_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "96" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Total number of resulting constant Q bands. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Total number of resulting constant Q bands." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBands = { "NumBands", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, NumBands), METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBands_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBandsPerOctave_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "24" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of bands within an octave. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Number of bands within an octave." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBandsPerOctave = { "NumBandsPerOctave", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, NumBandsPerOctave), METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBandsPerOctave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBandsPerOctave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_AnalysisPeriod_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Number of seconds between cqt measurements */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Number of seconds between cqt measurements" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_AnalysisPeriod = { "AnalysisPeriod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, AnalysisPeriod), METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_AnalysisPeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_AnalysisPeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own CQT result. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "If true, multichannel audio is downmixed to mono with equal amplitude scaling. If false, each channel gets it's own CQT result." },
	};
#endif
	void Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono_SetBit(void* Obj)
	{
		((UConstantQNRTSettings*)Obj)->bDownmixToMono = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono = { "bDownmixToMono", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConstantQNRTSettings), &Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_FFTSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_FFTSize_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Size of FFT. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Size of FFT." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_FFTSize = { "FFTSize", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, FFTSize), Z_Construct_UEnum_AudioSynesthesia_EConstantQFFTSizeEnum, METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_FFTSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_FFTSize_MetaData)) }; // 2695306314
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_WindowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_WindowType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of window to be applied to input audio */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Type of window to be applied to input audio" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_WindowType = { "WindowType", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, WindowType), Z_Construct_UEnum_Engine_EFFTWindowType, METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_WindowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_WindowType_MetaData)) }; // 3488179203
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_SpectrumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_SpectrumType_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Type of spectrum to use. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Type of spectrum to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_SpectrumType = { "SpectrumType", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, SpectrumType), Z_Construct_UEnum_Engine_EAudioSpectrumType, METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_SpectrumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_SpectrumType_MetaData)) }; // 1915632009
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_BandWidthStretch_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Stretching factor to control overlap of adjacent bands. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Stretching factor to control overlap of adjacent bands." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_BandWidthStretch = { "BandWidthStretch", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, BandWidthStretch), METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_BandWidthStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_BandWidthStretch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_CQTNormalization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_CQTNormalization_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** Normalization scheme used to generate band windows. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Normalization scheme used to generate band windows." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_CQTNormalization = { "CQTNormalization", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, CQTNormalization), Z_Construct_UEnum_AudioSynesthesia_EConstantQNormalizationEnum, METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_CQTNormalization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_CQTNormalization_MetaData)) }; // 1598580276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NoiseFloorDb_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-120.0" },
		{ "Comment", "/** Noise floor to use when normalizing CQT */" },
		{ "DisplayName", "Noise Floor (dB)" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Noise floor to use when normalizing CQT" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NoiseFloorDb = { "NoiseFloorDb", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRTSettings, NoiseFloorDb), METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NoiseFloorDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NoiseFloorDb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstantQNRTSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_StartingFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBands,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NumBandsPerOctave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_AnalysisPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_bDownmixToMono,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_FFTSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_FFTSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_WindowType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_WindowType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_SpectrumType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_SpectrumType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_BandWidthStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_CQTNormalization_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_CQTNormalization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRTSettings_Statics::NewProp_NoiseFloorDb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstantQNRTSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstantQNRTSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstantQNRTSettings_Statics::ClassParams = {
		&UConstantQNRTSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConstantQNRTSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstantQNRTSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRTSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstantQNRTSettings()
	{
		if (!Z_Registration_Info_UClass_UConstantQNRTSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstantQNRTSettings.OuterSingleton, Z_Construct_UClass_UConstantQNRTSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstantQNRTSettings.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UConstantQNRTSettings>()
	{
		return UConstantQNRTSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstantQNRTSettings);
	UConstantQNRTSettings::~UConstantQNRTSettings() {}
	DEFINE_FUNCTION(UConstantQNRT::execGetNormalizedChannelConstantQAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutConstantQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalizedChannelConstantQAtTime(Z_Param_InSeconds,Z_Param_InChannel,Z_Param_Out_OutConstantQ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstantQNRT::execGetChannelConstantQAtTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InSeconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannel);
		P_GET_TARRAY_REF(float,Z_Param_Out_OutConstantQ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChannelConstantQAtTime(Z_Param_InSeconds,Z_Param_InChannel,Z_Param_Out_OutConstantQ);
		P_NATIVE_END;
	}
	void UConstantQNRT::StaticRegisterNativesUConstantQNRT()
	{
		UClass* Class = UConstantQNRT::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChannelConstantQAtTime", &UConstantQNRT::execGetChannelConstantQAtTime },
			{ "GetNormalizedChannelConstantQAtTime", &UConstantQNRT::execGetNormalizedChannelConstantQAtTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics
	{
		struct ConstantQNRT_eventGetChannelConstantQAtTime_Parms
		{
			float InSeconds;
			int32 InChannel;
			TArray<float> OutConstantQ;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutConstantQ_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConstantQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstantQNRT_eventGetChannelConstantQAtTime_Parms, InSeconds), METADATA_PARAMS(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstantQNRT_eventGetChannelConstantQAtTime_Parms, InChannel), METADATA_PARAMS(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InChannel_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_OutConstantQ_Inner = { "OutConstantQ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_OutConstantQ = { "OutConstantQ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstantQNRT_eventGetChannelConstantQAtTime_Parms, OutConstantQ), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_OutConstantQ_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::NewProp_OutConstantQ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get a specific channel cqt of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Get a specific channel cqt of the analyzed sound at a given time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstantQNRT, nullptr, "GetChannelConstantQAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::ConstantQNRT_eventGetChannelConstantQAtTime_Parms), Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics
	{
		struct ConstantQNRT_eventGetNormalizedChannelConstantQAtTime_Parms
		{
			float InSeconds;
			int32 InChannel;
			TArray<float> OutConstantQ;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutConstantQ_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutConstantQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InSeconds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstantQNRT_eventGetNormalizedChannelConstantQAtTime_Parms, InSeconds), METADATA_PARAMS(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InChannel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InChannel = { "InChannel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstantQNRT_eventGetNormalizedChannelConstantQAtTime_Parms, InChannel), METADATA_PARAMS(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InChannel_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_OutConstantQ_Inner = { "OutConstantQ", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_OutConstantQ = { "OutConstantQ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstantQNRT_eventGetNormalizedChannelConstantQAtTime_Parms, OutConstantQ), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_InChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_OutConstantQ_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::NewProp_OutConstantQ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio Analyzer" },
		{ "Comment", "/** Get a specific channel cqt of the analyzed sound at a given time. */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "Get a specific channel cqt of the analyzed sound at a given time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstantQNRT, nullptr, "GetNormalizedChannelConstantQAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::ConstantQNRT_eventGetNormalizedChannelConstantQAtTime_Parms), Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstantQNRT);
	UClass* Z_Construct_UClass_UConstantQNRT_NoRegister()
	{
		return UConstantQNRT::StaticClass();
	}
	struct Z_Construct_UClass_UConstantQNRT_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstantQNRT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioSynesthesiaNRT,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioSynesthesia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConstantQNRT_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstantQNRT_GetChannelConstantQAtTime, "GetChannelConstantQAtTime" }, // 3446631122
		{ &Z_Construct_UFunction_UConstantQNRT_GetNormalizedChannelConstantQAtTime, "GetNormalizedChannelConstantQAtTime" }, // 4128085074
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRT_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UConstantQNRT\n *\n * UConstantQNRT calculates the temporal evolution of constant q transform for a given \n * sound. ConstantQ is available for individual channels or the overall sound asset.\n */" },
		{ "IncludePath", "ConstantQNRT.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "UConstantQNRT\n\nUConstantQNRT calculates the temporal evolution of constant q transform for a given\nsound. ConstantQ is available for individual channels or the overall sound asset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstantQNRT_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "AudioAnalyzer" },
		{ "Comment", "/** The settings for the audio analyzer.  */" },
		{ "ModuleRelativePath", "Classes/ConstantQNRT.h" },
		{ "ToolTip", "The settings for the audio analyzer." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConstantQNRT_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstantQNRT, Settings), Z_Construct_UClass_UConstantQNRTSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConstantQNRT_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRT_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstantQNRT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstantQNRT_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstantQNRT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstantQNRT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstantQNRT_Statics::ClassParams = {
		&UConstantQNRT::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConstantQNRT_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRT_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstantQNRT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstantQNRT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstantQNRT()
	{
		if (!Z_Registration_Info_UClass_UConstantQNRT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstantQNRT.OuterSingleton, Z_Construct_UClass_UConstantQNRT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstantQNRT.OuterSingleton;
	}
	template<> AUDIOSYNESTHESIA_API UClass* StaticClass<UConstantQNRT>()
	{
		return UConstantQNRT::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstantQNRT);
	UConstantQNRT::~UConstantQNRT() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_Statics::EnumInfo[] = {
		{ EConstantQNormalizationEnum_StaticEnum, TEXT("EConstantQNormalizationEnum"), &Z_Registration_Info_UEnum_EConstantQNormalizationEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1598580276U) },
		{ EConstantQFFTSizeEnum_StaticEnum, TEXT("EConstantQFFTSizeEnum"), &Z_Registration_Info_UEnum_EConstantQFFTSizeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2695306314U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConstantQNRTSettings, UConstantQNRTSettings::StaticClass, TEXT("UConstantQNRTSettings"), &Z_Registration_Info_UClass_UConstantQNRTSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstantQNRTSettings), 2916567891U) },
		{ Z_Construct_UClass_UConstantQNRT, UConstantQNRT::StaticClass, TEXT("UConstantQNRT"), &Z_Registration_Info_UClass_UConstantQNRT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstantQNRT), 3092414936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_1527971824(TEXT("/Script/AudioSynesthesia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQNRT_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
