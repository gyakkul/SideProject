// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectDynamicsProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectDynamicsProcessor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType;
	static UEnum* ESourceEffectDynamicsProcessorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectDynamicsProcessorType"));
		}
		return Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectDynamicsProcessorType>()
	{
		return ESourceEffectDynamicsProcessorType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enumerators[] = {
		{ "ESourceEffectDynamicsProcessorType::Compressor", (int64)ESourceEffectDynamicsProcessorType::Compressor },
		{ "ESourceEffectDynamicsProcessorType::Limiter", (int64)ESourceEffectDynamicsProcessorType::Limiter },
		{ "ESourceEffectDynamicsProcessorType::Expander", (int64)ESourceEffectDynamicsProcessorType::Expander },
		{ "ESourceEffectDynamicsProcessorType::Gate", (int64)ESourceEffectDynamicsProcessorType::Gate },
		{ "ESourceEffectDynamicsProcessorType::UpwardsCompressor", (int64)ESourceEffectDynamicsProcessorType::UpwardsCompressor },
		{ "ESourceEffectDynamicsProcessorType::Count", (int64)ESourceEffectDynamicsProcessorType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compressor.Name", "ESourceEffectDynamicsProcessorType::Compressor" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectDynamicsProcessorType::Count" },
		{ "Expander.Name", "ESourceEffectDynamicsProcessorType::Expander" },
		{ "Gate.Name", "ESourceEffectDynamicsProcessorType::Gate" },
		{ "Limiter.Name", "ESourceEffectDynamicsProcessorType::Limiter" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UpwardsCompressor.Name", "ESourceEffectDynamicsProcessorType::UpwardsCompressor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESourceEffectDynamicsProcessorType",
		"ESourceEffectDynamicsProcessorType",
		Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode;
	static UEnum* ESourceEffectDynamicsPeakMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectDynamicsPeakMode"));
		}
		return Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectDynamicsPeakMode>()
	{
		return ESourceEffectDynamicsPeakMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enumerators[] = {
		{ "ESourceEffectDynamicsPeakMode::MeanSquared", (int64)ESourceEffectDynamicsPeakMode::MeanSquared },
		{ "ESourceEffectDynamicsPeakMode::RootMeanSquared", (int64)ESourceEffectDynamicsPeakMode::RootMeanSquared },
		{ "ESourceEffectDynamicsPeakMode::Peak", (int64)ESourceEffectDynamicsPeakMode::Peak },
		{ "ESourceEffectDynamicsPeakMode::Count", (int64)ESourceEffectDynamicsPeakMode::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectDynamicsPeakMode::Count" },
		{ "MeanSquared.Name", "ESourceEffectDynamicsPeakMode::MeanSquared" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "Peak.Name", "ESourceEffectDynamicsPeakMode::Peak" },
		{ "RootMeanSquared.Name", "ESourceEffectDynamicsPeakMode::RootMeanSquared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESourceEffectDynamicsPeakMode",
		"ESourceEffectDynamicsPeakMode",
		Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings;
class UScriptStruct* FSourceEffectDynamicsProcessorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectDynamicsProcessorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectDynamicsProcessorSettings>()
{
	return FSourceEffectDynamicsProcessorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputGainDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputGainDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStereoLinked_MetaData[];
#endif
		static void NewProp_bStereoLinked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStereoLinked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnalogMode_MetaData[];
#endif
		static void NewProp_bAnalogMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalogMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectDynamicsProcessorSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType = { "DynamicsProcessorType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, DynamicsProcessorType), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsProcessorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_MetaData)) }; // 2983708888
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode = { "PeakMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, PeakMode), Z_Construct_UEnum_Synthesis_ESourceEffectDynamicsPeakMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_MetaData)) }; // 2972494660
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "50.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec = { "LookAheadMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, LookAheadMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "300.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "20.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "5000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-60.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb = { "ThresholdDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, ThresholdDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb = { "KneeBandwidthDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, KneeBandwidthDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "-12.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "-12.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb = { "InputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, InputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb = { "OutputGainDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectDynamicsProcessorSettings, OutputGainDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_SetBit(void* Obj)
	{
		((FSourceEffectDynamicsProcessorSettings*)Obj)->bStereoLinked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked = { "bStereoLinked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSourceEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit(void* Obj)
	{
		((FSourceEffectDynamicsProcessorSettings*)Obj)->bAnalogMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode = { "bAnalogMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSourceEffectDynamicsProcessorSettings), &Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_DynamicsProcessorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_PeakMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_LookAheadMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_AttackTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_ThresholdDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_KneeBandwidthDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_InputGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_OutputGainDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bStereoLinked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewProp_bAnalogMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectDynamicsProcessorSettings",
		sizeof(FSourceEffectDynamicsProcessorSettings),
		alignof(FSourceEffectDynamicsProcessorSettings),
		Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectDynamicsProcessorPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectDynamicsProcessorSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectDynamicsProcessorPreset::StaticRegisterNativesUSourceEffectDynamicsProcessorPreset()
	{
		UClass* Class = USourceEffectDynamicsProcessorPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectDynamicsProcessorPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics
	{
		struct SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms
		{
			FSourceEffectDynamicsProcessorSettings InSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2493372045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectDynamicsProcessorPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::SourceEffectDynamicsProcessorPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectDynamicsProcessorPreset);
	UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_NoRegister()
	{
		return USourceEffectDynamicsProcessorPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectDynamicsProcessorPreset_SetSettings, "SetSettings" }, // 2705771725
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectDynamicsProcessor.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectDynamicsProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectDynamicsProcessorPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings_MetaData)) }; // 2493372045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectDynamicsProcessorPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::ClassParams = {
		&USourceEffectDynamicsProcessorPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectDynamicsProcessorPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton, Z_Construct_UClass_USourceEffectDynamicsProcessorPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectDynamicsProcessorPreset>()
	{
		return USourceEffectDynamicsProcessorPreset::StaticClass();
	}
	USourceEffectDynamicsProcessorPreset::USourceEffectDynamicsProcessorPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectDynamicsProcessorPreset);
	USourceEffectDynamicsProcessorPreset::~USourceEffectDynamicsProcessorPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::EnumInfo[] = {
		{ ESourceEffectDynamicsProcessorType_StaticEnum, TEXT("ESourceEffectDynamicsProcessorType"), &Z_Registration_Info_UEnum_ESourceEffectDynamicsProcessorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2983708888U) },
		{ ESourceEffectDynamicsPeakMode_StaticEnum, TEXT("ESourceEffectDynamicsPeakMode"), &Z_Registration_Info_UEnum_ESourceEffectDynamicsPeakMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2972494660U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectDynamicsProcessorSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectDynamicsProcessorSettings_Statics::NewStructOps, TEXT("SourceEffectDynamicsProcessorSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectDynamicsProcessorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectDynamicsProcessorSettings), 2493372045U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectDynamicsProcessorPreset, USourceEffectDynamicsProcessorPreset::StaticClass, TEXT("USourceEffectDynamicsProcessorPreset"), &Z_Registration_Info_UClass_USourceEffectDynamicsProcessorPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectDynamicsProcessorPreset), 2614195973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_3852928587(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectDynamicsProcessor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
