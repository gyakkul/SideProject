// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/EpicSynth1Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicSynth1Types() {}
// Cross Module References
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1OscType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchDestination();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchSource();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOMode();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOPatchType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOType();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvPatch();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FPatchId();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth1PatchCable();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynth1OscType;
	static UEnum* ESynth1OscType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1OscType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynth1OscType"));
		}
		return Z_Registration_Info_UEnum_ESynth1OscType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynth1OscType>()
	{
		return ESynth1OscType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::Enumerators[] = {
		{ "ESynth1OscType::Sine", (int64)ESynth1OscType::Sine },
		{ "ESynth1OscType::Saw", (int64)ESynth1OscType::Saw },
		{ "ESynth1OscType::Triangle", (int64)ESynth1OscType::Triangle },
		{ "ESynth1OscType::Square", (int64)ESynth1OscType::Square },
		{ "ESynth1OscType::Noise", (int64)ESynth1OscType::Noise },
		{ "ESynth1OscType::Count", (int64)ESynth1OscType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynth1OscType::Count" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "Noise.Name", "ESynth1OscType::Noise" },
		{ "Saw.Name", "ESynth1OscType::Saw" },
		{ "Sine.Name", "ESynth1OscType::Sine" },
		{ "Square.Name", "ESynth1OscType::Square" },
		{ "Triangle.Name", "ESynth1OscType::Triangle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynth1OscType",
		"ESynth1OscType",
		Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynth1OscType()
	{
		if (!Z_Registration_Info_UEnum_ESynth1OscType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynth1OscType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynth1OscType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynth1OscType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthLFOType;
	static UEnum* ESynthLFOType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthLFOType"));
		}
		return Z_Registration_Info_UEnum_ESynthLFOType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthLFOType>()
	{
		return ESynthLFOType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::Enumerators[] = {
		{ "ESynthLFOType::Sine", (int64)ESynthLFOType::Sine },
		{ "ESynthLFOType::UpSaw", (int64)ESynthLFOType::UpSaw },
		{ "ESynthLFOType::DownSaw", (int64)ESynthLFOType::DownSaw },
		{ "ESynthLFOType::Square", (int64)ESynthLFOType::Square },
		{ "ESynthLFOType::Triangle", (int64)ESynthLFOType::Triangle },
		{ "ESynthLFOType::Exponential", (int64)ESynthLFOType::Exponential },
		{ "ESynthLFOType::RandomSampleHold", (int64)ESynthLFOType::RandomSampleHold },
		{ "ESynthLFOType::Count", (int64)ESynthLFOType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthLFOType::Count" },
		{ "DownSaw.Name", "ESynthLFOType::DownSaw" },
		{ "Exponential.Name", "ESynthLFOType::Exponential" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "RandomSampleHold.Name", "ESynthLFOType::RandomSampleHold" },
		{ "Sine.Name", "ESynthLFOType::Sine" },
		{ "Square.Name", "ESynthLFOType::Square" },
		{ "Triangle.Name", "ESynthLFOType::Triangle" },
		{ "UpSaw.Name", "ESynthLFOType::UpSaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthLFOType",
		"ESynthLFOType",
		Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOType()
	{
		if (!Z_Registration_Info_UEnum_ESynthLFOType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthLFOType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthLFOType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthLFOType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthLFOMode;
	static UEnum* ESynthLFOMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthLFOMode"));
		}
		return Z_Registration_Info_UEnum_ESynthLFOMode.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthLFOMode>()
	{
		return ESynthLFOMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::Enumerators[] = {
		{ "ESynthLFOMode::Sync", (int64)ESynthLFOMode::Sync },
		{ "ESynthLFOMode::OneShot", (int64)ESynthLFOMode::OneShot },
		{ "ESynthLFOMode::Free", (int64)ESynthLFOMode::Free },
		{ "ESynthLFOMode::Count", (int64)ESynthLFOMode::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthLFOMode::Count" },
		{ "Free.Name", "ESynthLFOMode::Free" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "OneShot.Name", "ESynthLFOMode::OneShot" },
		{ "Sync.Name", "ESynthLFOMode::Sync" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthLFOMode",
		"ESynthLFOMode",
		Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOMode()
	{
		if (!Z_Registration_Info_UEnum_ESynthLFOMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthLFOMode.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthLFOMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthLFOMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthLFOPatchType;
	static UEnum* ESynthLFOPatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthLFOPatchType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthLFOPatchType"));
		}
		return Z_Registration_Info_UEnum_ESynthLFOPatchType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthLFOPatchType>()
	{
		return ESynthLFOPatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::Enumerators[] = {
		{ "ESynthLFOPatchType::PatchToNone", (int64)ESynthLFOPatchType::PatchToNone },
		{ "ESynthLFOPatchType::PatchToGain", (int64)ESynthLFOPatchType::PatchToGain },
		{ "ESynthLFOPatchType::PatchToOscFreq", (int64)ESynthLFOPatchType::PatchToOscFreq },
		{ "ESynthLFOPatchType::PatchToFilterFreq", (int64)ESynthLFOPatchType::PatchToFilterFreq },
		{ "ESynthLFOPatchType::PatchToFilterQ", (int64)ESynthLFOPatchType::PatchToFilterQ },
		{ "ESynthLFOPatchType::PatchToOscPulseWidth", (int64)ESynthLFOPatchType::PatchToOscPulseWidth },
		{ "ESynthLFOPatchType::PatchToOscPan", (int64)ESynthLFOPatchType::PatchToOscPan },
		{ "ESynthLFOPatchType::PatchLFO1ToLFO2Frequency", (int64)ESynthLFOPatchType::PatchLFO1ToLFO2Frequency },
		{ "ESynthLFOPatchType::PatchLFO1ToLFO2Gain", (int64)ESynthLFOPatchType::PatchLFO1ToLFO2Gain },
		{ "ESynthLFOPatchType::Count", (int64)ESynthLFOPatchType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthLFOPatchType::Count" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "PatchLFO1ToLFO2Frequency.Name", "ESynthLFOPatchType::PatchLFO1ToLFO2Frequency" },
		{ "PatchLFO1ToLFO2Gain.Name", "ESynthLFOPatchType::PatchLFO1ToLFO2Gain" },
		{ "PatchToFilterFreq.Name", "ESynthLFOPatchType::PatchToFilterFreq" },
		{ "PatchToFilterQ.Name", "ESynthLFOPatchType::PatchToFilterQ" },
		{ "PatchToGain.Name", "ESynthLFOPatchType::PatchToGain" },
		{ "PatchToNone.Name", "ESynthLFOPatchType::PatchToNone" },
		{ "PatchToOscFreq.Name", "ESynthLFOPatchType::PatchToOscFreq" },
		{ "PatchToOscPan.Name", "ESynthLFOPatchType::PatchToOscPan" },
		{ "PatchToOscPulseWidth.Name", "ESynthLFOPatchType::PatchToOscPulseWidth" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthLFOPatchType",
		"ESynthLFOPatchType",
		Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthLFOPatchType()
	{
		if (!Z_Registration_Info_UEnum_ESynthLFOPatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthLFOPatchType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthLFOPatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthLFOPatchType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthModEnvPatch;
	static UEnum* ESynthModEnvPatch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvPatch, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthModEnvPatch"));
		}
		return Z_Registration_Info_UEnum_ESynthModEnvPatch.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthModEnvPatch>()
	{
		return ESynthModEnvPatch_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::Enumerators[] = {
		{ "ESynthModEnvPatch::PatchToNone", (int64)ESynthModEnvPatch::PatchToNone },
		{ "ESynthModEnvPatch::PatchToOscFreq", (int64)ESynthModEnvPatch::PatchToOscFreq },
		{ "ESynthModEnvPatch::PatchToFilterFreq", (int64)ESynthModEnvPatch::PatchToFilterFreq },
		{ "ESynthModEnvPatch::PatchToFilterQ", (int64)ESynthModEnvPatch::PatchToFilterQ },
		{ "ESynthModEnvPatch::PatchToLFO1Gain", (int64)ESynthModEnvPatch::PatchToLFO1Gain },
		{ "ESynthModEnvPatch::PatchToLFO2Gain", (int64)ESynthModEnvPatch::PatchToLFO2Gain },
		{ "ESynthModEnvPatch::PatchToLFO1Freq", (int64)ESynthModEnvPatch::PatchToLFO1Freq },
		{ "ESynthModEnvPatch::PatchToLFO2Freq", (int64)ESynthModEnvPatch::PatchToLFO2Freq },
		{ "ESynthModEnvPatch::Count", (int64)ESynthModEnvPatch::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthModEnvPatch::Count" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "PatchToFilterFreq.Name", "ESynthModEnvPatch::PatchToFilterFreq" },
		{ "PatchToFilterQ.Name", "ESynthModEnvPatch::PatchToFilterQ" },
		{ "PatchToLFO1Freq.Name", "ESynthModEnvPatch::PatchToLFO1Freq" },
		{ "PatchToLFO1Gain.Name", "ESynthModEnvPatch::PatchToLFO1Gain" },
		{ "PatchToLFO2Freq.Name", "ESynthModEnvPatch::PatchToLFO2Freq" },
		{ "PatchToLFO2Gain.Name", "ESynthModEnvPatch::PatchToLFO2Gain" },
		{ "PatchToNone.Name", "ESynthModEnvPatch::PatchToNone" },
		{ "PatchToOscFreq.Name", "ESynthModEnvPatch::PatchToOscFreq" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthModEnvPatch",
		"ESynthModEnvPatch",
		Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvPatch()
	{
		if (!Z_Registration_Info_UEnum_ESynthModEnvPatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthModEnvPatch.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthModEnvPatch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthModEnvPatch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthModEnvBiasPatch;
	static UEnum* ESynthModEnvBiasPatch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthModEnvBiasPatch"));
		}
		return Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthModEnvBiasPatch>()
	{
		return ESynthModEnvBiasPatch_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::Enumerators[] = {
		{ "ESynthModEnvBiasPatch::PatchToNone", (int64)ESynthModEnvBiasPatch::PatchToNone },
		{ "ESynthModEnvBiasPatch::PatchToOscFreq", (int64)ESynthModEnvBiasPatch::PatchToOscFreq },
		{ "ESynthModEnvBiasPatch::PatchToFilterFreq", (int64)ESynthModEnvBiasPatch::PatchToFilterFreq },
		{ "ESynthModEnvBiasPatch::PatchToFilterQ", (int64)ESynthModEnvBiasPatch::PatchToFilterQ },
		{ "ESynthModEnvBiasPatch::PatchToLFO1Gain", (int64)ESynthModEnvBiasPatch::PatchToLFO1Gain },
		{ "ESynthModEnvBiasPatch::PatchToLFO2Gain", (int64)ESynthModEnvBiasPatch::PatchToLFO2Gain },
		{ "ESynthModEnvBiasPatch::PatchToLFO1Freq", (int64)ESynthModEnvBiasPatch::PatchToLFO1Freq },
		{ "ESynthModEnvBiasPatch::PatchToLFO2Freq", (int64)ESynthModEnvBiasPatch::PatchToLFO2Freq },
		{ "ESynthModEnvBiasPatch::Count", (int64)ESynthModEnvBiasPatch::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthModEnvBiasPatch::Count" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "PatchToFilterFreq.Name", "ESynthModEnvBiasPatch::PatchToFilterFreq" },
		{ "PatchToFilterQ.Name", "ESynthModEnvBiasPatch::PatchToFilterQ" },
		{ "PatchToLFO1Freq.Name", "ESynthModEnvBiasPatch::PatchToLFO1Freq" },
		{ "PatchToLFO1Gain.Name", "ESynthModEnvBiasPatch::PatchToLFO1Gain" },
		{ "PatchToLFO2Freq.Name", "ESynthModEnvBiasPatch::PatchToLFO2Freq" },
		{ "PatchToLFO2Gain.Name", "ESynthModEnvBiasPatch::PatchToLFO2Gain" },
		{ "PatchToNone.Name", "ESynthModEnvBiasPatch::PatchToNone" },
		{ "PatchToOscFreq.Name", "ESynthModEnvBiasPatch::PatchToOscFreq" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthModEnvBiasPatch",
		"ESynthModEnvBiasPatch",
		Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch()
	{
		if (!Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthModEnvBiasPatch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthModEnvBiasPatch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthFilterType;
	static UEnum* ESynthFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthFilterType"));
		}
		return Z_Registration_Info_UEnum_ESynthFilterType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthFilterType>()
	{
		return ESynthFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::Enumerators[] = {
		{ "ESynthFilterType::LowPass", (int64)ESynthFilterType::LowPass },
		{ "ESynthFilterType::HighPass", (int64)ESynthFilterType::HighPass },
		{ "ESynthFilterType::BandPass", (int64)ESynthFilterType::BandPass },
		{ "ESynthFilterType::BandStop", (int64)ESynthFilterType::BandStop },
		{ "ESynthFilterType::Count", (int64)ESynthFilterType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BandPass.Name", "ESynthFilterType::BandPass" },
		{ "BandStop.Name", "ESynthFilterType::BandStop" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthFilterType::Count" },
		{ "HighPass.Name", "ESynthFilterType::HighPass" },
		{ "LowPass.Name", "ESynthFilterType::LowPass" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthFilterType",
		"ESynthFilterType",
		Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterType()
	{
		if (!Z_Registration_Info_UEnum_ESynthFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthFilterType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthFilterAlgorithm;
	static UEnum* ESynthFilterAlgorithm_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthFilterAlgorithm"));
		}
		return Z_Registration_Info_UEnum_ESynthFilterAlgorithm.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthFilterAlgorithm>()
	{
		return ESynthFilterAlgorithm_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::Enumerators[] = {
		{ "ESynthFilterAlgorithm::OnePole", (int64)ESynthFilterAlgorithm::OnePole },
		{ "ESynthFilterAlgorithm::StateVariable", (int64)ESynthFilterAlgorithm::StateVariable },
		{ "ESynthFilterAlgorithm::Ladder", (int64)ESynthFilterAlgorithm::Ladder },
		{ "ESynthFilterAlgorithm::Count", (int64)ESynthFilterAlgorithm::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthFilterAlgorithm::Count" },
		{ "Ladder.Name", "ESynthFilterAlgorithm::Ladder" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "OnePole.Name", "ESynthFilterAlgorithm::OnePole" },
		{ "StateVariable.Name", "ESynthFilterAlgorithm::StateVariable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthFilterAlgorithm",
		"ESynthFilterAlgorithm",
		Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm()
	{
		if (!Z_Registration_Info_UEnum_ESynthFilterAlgorithm.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthFilterAlgorithm.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthFilterAlgorithm_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthFilterAlgorithm.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthStereoDelayMode;
	static UEnum* ESynthStereoDelayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthStereoDelayMode"));
		}
		return Z_Registration_Info_UEnum_ESynthStereoDelayMode.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthStereoDelayMode>()
	{
		return ESynthStereoDelayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::Enumerators[] = {
		{ "ESynthStereoDelayMode::Normal", (int64)ESynthStereoDelayMode::Normal },
		{ "ESynthStereoDelayMode::Cross", (int64)ESynthStereoDelayMode::Cross },
		{ "ESynthStereoDelayMode::PingPong", (int64)ESynthStereoDelayMode::PingPong },
		{ "ESynthStereoDelayMode::Count", (int64)ESynthStereoDelayMode::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthStereoDelayMode::Count" },
		{ "Cross.Name", "ESynthStereoDelayMode::Cross" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "Normal.Name", "ESynthStereoDelayMode::Normal" },
		{ "PingPong.Name", "ESynthStereoDelayMode::PingPong" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthStereoDelayMode",
		"ESynthStereoDelayMode",
		Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode()
	{
		if (!Z_Registration_Info_UEnum_ESynthStereoDelayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthStereoDelayMode.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthStereoDelayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthStereoDelayMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynth1PatchSource;
	static UEnum* ESynth1PatchSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchSource, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynth1PatchSource"));
		}
		return Z_Registration_Info_UEnum_ESynth1PatchSource.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynth1PatchSource>()
	{
		return ESynth1PatchSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::Enumerators[] = {
		{ "ESynth1PatchSource::LFO1", (int64)ESynth1PatchSource::LFO1 },
		{ "ESynth1PatchSource::LFO2", (int64)ESynth1PatchSource::LFO2 },
		{ "ESynth1PatchSource::Envelope", (int64)ESynth1PatchSource::Envelope },
		{ "ESynth1PatchSource::BiasEnvelope", (int64)ESynth1PatchSource::BiasEnvelope },
		{ "ESynth1PatchSource::Count", (int64)ESynth1PatchSource::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::Enum_MetaDataParams[] = {
		{ "BiasEnvelope.Name", "ESynth1PatchSource::BiasEnvelope" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynth1PatchSource::Count" },
		{ "Envelope.Name", "ESynth1PatchSource::Envelope" },
		{ "LFO1.Name", "ESynth1PatchSource::LFO1" },
		{ "LFO2.Name", "ESynth1PatchSource::LFO2" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynth1PatchSource",
		"ESynth1PatchSource",
		Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchSource()
	{
		if (!Z_Registration_Info_UEnum_ESynth1PatchSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynth1PatchSource.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynth1PatchSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynth1PatchSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynth1PatchDestination;
	static UEnum* ESynth1PatchDestination_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynth1PatchDestination, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynth1PatchDestination"));
		}
		return Z_Registration_Info_UEnum_ESynth1PatchDestination.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynth1PatchDestination>()
	{
		return ESynth1PatchDestination_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::Enumerators[] = {
		{ "ESynth1PatchDestination::Osc1Gain", (int64)ESynth1PatchDestination::Osc1Gain },
		{ "ESynth1PatchDestination::Osc1Frequency", (int64)ESynth1PatchDestination::Osc1Frequency },
		{ "ESynth1PatchDestination::Osc1Pulsewidth", (int64)ESynth1PatchDestination::Osc1Pulsewidth },
		{ "ESynth1PatchDestination::Osc2Gain", (int64)ESynth1PatchDestination::Osc2Gain },
		{ "ESynth1PatchDestination::Osc2Frequency", (int64)ESynth1PatchDestination::Osc2Frequency },
		{ "ESynth1PatchDestination::Osc2Pulsewidth", (int64)ESynth1PatchDestination::Osc2Pulsewidth },
		{ "ESynth1PatchDestination::FilterFrequency", (int64)ESynth1PatchDestination::FilterFrequency },
		{ "ESynth1PatchDestination::FilterQ", (int64)ESynth1PatchDestination::FilterQ },
		{ "ESynth1PatchDestination::Gain", (int64)ESynth1PatchDestination::Gain },
		{ "ESynth1PatchDestination::Pan", (int64)ESynth1PatchDestination::Pan },
		{ "ESynth1PatchDestination::LFO1Frequency", (int64)ESynth1PatchDestination::LFO1Frequency },
		{ "ESynth1PatchDestination::LFO1Gain", (int64)ESynth1PatchDestination::LFO1Gain },
		{ "ESynth1PatchDestination::LFO2Frequency", (int64)ESynth1PatchDestination::LFO2Frequency },
		{ "ESynth1PatchDestination::LFO2Gain", (int64)ESynth1PatchDestination::LFO2Gain },
		{ "ESynth1PatchDestination::Count", (int64)ESynth1PatchDestination::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynth1PatchDestination::Count" },
		{ "FilterFrequency.Name", "ESynth1PatchDestination::FilterFrequency" },
		{ "FilterQ.Name", "ESynth1PatchDestination::FilterQ" },
		{ "Gain.Name", "ESynth1PatchDestination::Gain" },
		{ "LFO1Frequency.Name", "ESynth1PatchDestination::LFO1Frequency" },
		{ "LFO1Gain.Name", "ESynth1PatchDestination::LFO1Gain" },
		{ "LFO2Frequency.Name", "ESynth1PatchDestination::LFO2Frequency" },
		{ "LFO2Gain.Name", "ESynth1PatchDestination::LFO2Gain" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "Osc1Frequency.Name", "ESynth1PatchDestination::Osc1Frequency" },
		{ "Osc1Gain.Name", "ESynth1PatchDestination::Osc1Gain" },
		{ "Osc1Pulsewidth.Name", "ESynth1PatchDestination::Osc1Pulsewidth" },
		{ "Osc2Frequency.Name", "ESynth1PatchDestination::Osc2Frequency" },
		{ "Osc2Gain.Name", "ESynth1PatchDestination::Osc2Gain" },
		{ "Osc2Pulsewidth.Name", "ESynth1PatchDestination::Osc2Pulsewidth" },
		{ "Pan.Name", "ESynth1PatchDestination::Pan" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynth1PatchDestination",
		"ESynth1PatchDestination",
		Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynth1PatchDestination()
	{
		if (!Z_Registration_Info_UEnum_ESynth1PatchDestination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynth1PatchDestination.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynth1PatchDestination_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynth1PatchDestination.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Synth1PatchCable;
class UScriptStruct* FSynth1PatchCable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Synth1PatchCable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Synth1PatchCable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynth1PatchCable, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("Synth1PatchCable"));
	}
	return Z_Registration_Info_UScriptStruct_Synth1PatchCable.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynth1PatchCable>()
{
	return FSynth1PatchCable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSynth1PatchCable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Depth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Destination_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynth1PatchCable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The patch depth (how much the modulator modulates the destination)\n" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "ToolTip", "The patch depth (how much the modulator modulates the destination)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth1PatchCable, Depth), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "Synth|Preset" },
		{ "Comment", "// The patch destination type\n" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
		{ "ToolTip", "The patch destination type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth1PatchCable, Destination), Z_Construct_UEnum_Synthesis_ESynth1PatchDestination, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_MetaData)) }; // 1965894871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewProp_Destination,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"Synth1PatchCable",
		sizeof(FSynth1PatchCable),
		alignof(FSynth1PatchCable),
		Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSynth1PatchCable()
	{
		if (!Z_Registration_Info_UScriptStruct_Synth1PatchCable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Synth1PatchCable.InnerSingleton, Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Synth1PatchCable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PatchId;
class UScriptStruct* FPatchId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PatchId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PatchId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPatchId, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("PatchId"));
	}
	return Z_Registration_Info_UScriptStruct_PatchId.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FPatchId>()
{
	return FPatchId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPatchId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchId_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPatchId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPatchId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/EpicSynth1Types.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPatchId, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPatchId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPatchId_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPatchId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"PatchId",
		sizeof(FPatchId),
		alignof(FPatchId),
		Z_Construct_UScriptStruct_FPatchId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPatchId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPatchId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPatchId()
	{
		if (!Z_Registration_Info_UScriptStruct_PatchId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PatchId.InnerSingleton, Z_Construct_UScriptStruct_FPatchId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PatchId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_Statics::EnumInfo[] = {
		{ ESynth1OscType_StaticEnum, TEXT("ESynth1OscType"), &Z_Registration_Info_UEnum_ESynth1OscType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 215143055U) },
		{ ESynthLFOType_StaticEnum, TEXT("ESynthLFOType"), &Z_Registration_Info_UEnum_ESynthLFOType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 920948669U) },
		{ ESynthLFOMode_StaticEnum, TEXT("ESynthLFOMode"), &Z_Registration_Info_UEnum_ESynthLFOMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2734725763U) },
		{ ESynthLFOPatchType_StaticEnum, TEXT("ESynthLFOPatchType"), &Z_Registration_Info_UEnum_ESynthLFOPatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2682292025U) },
		{ ESynthModEnvPatch_StaticEnum, TEXT("ESynthModEnvPatch"), &Z_Registration_Info_UEnum_ESynthModEnvPatch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 35778414U) },
		{ ESynthModEnvBiasPatch_StaticEnum, TEXT("ESynthModEnvBiasPatch"), &Z_Registration_Info_UEnum_ESynthModEnvBiasPatch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 712266394U) },
		{ ESynthFilterType_StaticEnum, TEXT("ESynthFilterType"), &Z_Registration_Info_UEnum_ESynthFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2638556475U) },
		{ ESynthFilterAlgorithm_StaticEnum, TEXT("ESynthFilterAlgorithm"), &Z_Registration_Info_UEnum_ESynthFilterAlgorithm, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 382610602U) },
		{ ESynthStereoDelayMode_StaticEnum, TEXT("ESynthStereoDelayMode"), &Z_Registration_Info_UEnum_ESynthStereoDelayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2197674480U) },
		{ ESynth1PatchSource_StaticEnum, TEXT("ESynth1PatchSource"), &Z_Registration_Info_UEnum_ESynth1PatchSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1022490417U) },
		{ ESynth1PatchDestination_StaticEnum, TEXT("ESynth1PatchDestination"), &Z_Registration_Info_UEnum_ESynth1PatchDestination, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1965894871U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_Statics::ScriptStructInfo[] = {
		{ FSynth1PatchCable::StaticStruct, Z_Construct_UScriptStruct_FSynth1PatchCable_Statics::NewStructOps, TEXT("Synth1PatchCable"), &Z_Registration_Info_UScriptStruct_Synth1PatchCable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSynth1PatchCable), 1329537834U) },
		{ FPatchId::StaticStruct, Z_Construct_UScriptStruct_FPatchId_Statics::NewStructOps, TEXT("PatchId"), &Z_Registration_Info_UScriptStruct_PatchId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPatchId), 3182888118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_3267033485(TEXT("/Script/Synthesis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_EpicSynth1Types_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
