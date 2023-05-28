// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectMotionFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectMotionFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMotionFilterPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectMotionFilterPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource;
	static UEnum* ESourceEffectMotionFilterModSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectMotionFilterModSource"));
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectMotionFilterModSource>()
	{
		return ESourceEffectMotionFilterModSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::Enumerators[] = {
		{ "ESourceEffectMotionFilterModSource::DistanceFromListener", (int64)ESourceEffectMotionFilterModSource::DistanceFromListener },
		{ "ESourceEffectMotionFilterModSource::SpeedRelativeToListener", (int64)ESourceEffectMotionFilterModSource::SpeedRelativeToListener },
		{ "ESourceEffectMotionFilterModSource::SpeedOfSourceEmitter", (int64)ESourceEffectMotionFilterModSource::SpeedOfSourceEmitter },
		{ "ESourceEffectMotionFilterModSource::SpeedOfListener", (int64)ESourceEffectMotionFilterModSource::SpeedOfListener },
		{ "ESourceEffectMotionFilterModSource::SpeedOfAngleDelta", (int64)ESourceEffectMotionFilterModSource::SpeedOfAngleDelta },
		{ "ESourceEffectMotionFilterModSource::Count", (int64)ESourceEffectMotionFilterModSource::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectMotionFilterModSource::Count" },
		{ "DistanceFromListener.Comment", "// Uunits between Listener and Sound Source.\n" },
		{ "DistanceFromListener.Name", "ESourceEffectMotionFilterModSource::DistanceFromListener" },
		{ "DistanceFromListener.ToolTip", "Uunits between Listener and Sound Source." },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "SpeedOfAngleDelta.Comment", "// Degrees per second change in Angle of Source from Listener.\n" },
		{ "SpeedOfAngleDelta.Name", "ESourceEffectMotionFilterModSource::SpeedOfAngleDelta" },
		{ "SpeedOfAngleDelta.ToolTip", "Degrees per second change in Angle of Source from Listener." },
		{ "SpeedOfListener.Comment", "// Uunits per second change in world location of Listener.\n" },
		{ "SpeedOfListener.Name", "ESourceEffectMotionFilterModSource::SpeedOfListener" },
		{ "SpeedOfListener.ToolTip", "Uunits per second change in world location of Listener." },
		{ "SpeedOfSourceEmitter.Comment", "// Uunits per second change in world location of Sound Source.\n" },
		{ "SpeedOfSourceEmitter.Name", "ESourceEffectMotionFilterModSource::SpeedOfSourceEmitter" },
		{ "SpeedOfSourceEmitter.ToolTip", "Uunits per second change in world location of Sound Source." },
		{ "SpeedRelativeToListener.Comment", "// Uunits per second change in distance between Listener and Sound Source.\n" },
		{ "SpeedRelativeToListener.Name", "ESourceEffectMotionFilterModSource::SpeedRelativeToListener" },
		{ "SpeedRelativeToListener.ToolTip", "Uunits per second change in distance between Listener and Sound Source." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESourceEffectMotionFilterModSource",
		"ESourceEffectMotionFilterModSource",
		Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination;
	static UEnum* ESourceEffectMotionFilterModDestination_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectMotionFilterModDestination"));
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectMotionFilterModDestination>()
	{
		return ESourceEffectMotionFilterModDestination_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::Enumerators[] = {
		{ "ESourceEffectMotionFilterModDestination::FilterACutoffFrequency", (int64)ESourceEffectMotionFilterModDestination::FilterACutoffFrequency },
		{ "ESourceEffectMotionFilterModDestination::FilterAResonance", (int64)ESourceEffectMotionFilterModDestination::FilterAResonance },
		{ "ESourceEffectMotionFilterModDestination::FilterAOutputVolumeDB", (int64)ESourceEffectMotionFilterModDestination::FilterAOutputVolumeDB },
		{ "ESourceEffectMotionFilterModDestination::FilterBCutoffFrequency", (int64)ESourceEffectMotionFilterModDestination::FilterBCutoffFrequency },
		{ "ESourceEffectMotionFilterModDestination::FilterBResonance", (int64)ESourceEffectMotionFilterModDestination::FilterBResonance },
		{ "ESourceEffectMotionFilterModDestination::FilterBOutputVolumeDB", (int64)ESourceEffectMotionFilterModDestination::FilterBOutputVolumeDB },
		{ "ESourceEffectMotionFilterModDestination::FilterMix", (int64)ESourceEffectMotionFilterModDestination::FilterMix },
		{ "ESourceEffectMotionFilterModDestination::Count", (int64)ESourceEffectMotionFilterModDestination::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectMotionFilterModDestination::Count" },
		{ "FilterACutoffFrequency.Comment", "// Filter input frequencies range between 20.0f and 15000.0f.\n" },
		{ "FilterACutoffFrequency.Name", "ESourceEffectMotionFilterModDestination::FilterACutoffFrequency" },
		{ "FilterACutoffFrequency.ToolTip", "Filter input frequencies range between 20.0f and 15000.0f." },
		{ "FilterAOutputVolumeDB.Comment", "// Filter output dB range between 10.0f and -96.0f. Final Filter output is clamped to +6 dB, use positive values with caution.\n" },
		{ "FilterAOutputVolumeDB.DisplayName", "Filter A Output Volume (dB)" },
		{ "FilterAOutputVolumeDB.Name", "ESourceEffectMotionFilterModDestination::FilterAOutputVolumeDB" },
		{ "FilterAOutputVolumeDB.ToolTip", "Filter output dB range between 10.0f and -96.0f. Final Filter output is clamped to +6 dB, use positive values with caution." },
		{ "FilterAResonance.Comment", "// Filter input resonances range between 0.5f and 10.0f.\n" },
		{ "FilterAResonance.Name", "ESourceEffectMotionFilterModDestination::FilterAResonance" },
		{ "FilterAResonance.ToolTip", "Filter input resonances range between 0.5f and 10.0f." },
		{ "FilterBCutoffFrequency.Comment", "// Filter input frequencies range between 20.0f and 15000.0f.\n" },
		{ "FilterBCutoffFrequency.Name", "ESourceEffectMotionFilterModDestination::FilterBCutoffFrequency" },
		{ "FilterBCutoffFrequency.ToolTip", "Filter input frequencies range between 20.0f and 15000.0f." },
		{ "FilterBOutputVolumeDB.Comment", "// Filter output dB range between 10.0f and -96.0f. Final Filter output is clamped to +6 dB, use positive values with caution.\n" },
		{ "FilterBOutputVolumeDB.DisplayName", "Filter B Output Volume (dB)" },
		{ "FilterBOutputVolumeDB.Name", "ESourceEffectMotionFilterModDestination::FilterBOutputVolumeDB" },
		{ "FilterBOutputVolumeDB.ToolTip", "Filter output dB range between 10.0f and -96.0f. Final Filter output is clamped to +6 dB, use positive values with caution." },
		{ "FilterBResonance.Comment", "// Filter input resonances range between 0.5f and 10.0f.\n" },
		{ "FilterBResonance.Name", "ESourceEffectMotionFilterModDestination::FilterBResonance" },
		{ "FilterBResonance.ToolTip", "Filter input resonances range between 0.5f and 10.0f." },
		{ "FilterMix.Comment", "// Filter Mix values range from -1.0f (Filter A) and 1.0f (Filter B).\n" },
		{ "FilterMix.Name", "ESourceEffectMotionFilterModDestination::FilterMix" },
		{ "FilterMix.ToolTip", "Filter Mix values range from -1.0f (Filter A) and 1.0f (Filter B)." },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESourceEffectMotionFilterModDestination",
		"ESourceEffectMotionFilterModDestination",
		Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology;
	static UEnum* ESourceEffectMotionFilterTopology_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectMotionFilterTopology"));
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectMotionFilterTopology>()
	{
		return ESourceEffectMotionFilterTopology_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::Enumerators[] = {
		{ "ESourceEffectMotionFilterTopology::SerialMode", (int64)ESourceEffectMotionFilterTopology::SerialMode },
		{ "ESourceEffectMotionFilterTopology::ParallelMode", (int64)ESourceEffectMotionFilterTopology::ParallelMode },
		{ "ESourceEffectMotionFilterTopology::Count", (int64)ESourceEffectMotionFilterTopology::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectMotionFilterTopology::Count" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ParallelMode.Name", "ESourceEffectMotionFilterTopology::ParallelMode" },
		{ "SerialMode.Name", "ESourceEffectMotionFilterTopology::SerialMode" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESourceEffectMotionFilterTopology",
		"ESourceEffectMotionFilterTopology",
		Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit;
	static UEnum* ESourceEffectMotionFilterCircuit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectMotionFilterCircuit"));
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectMotionFilterCircuit>()
	{
		return ESourceEffectMotionFilterCircuit_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::Enumerators[] = {
		{ "ESourceEffectMotionFilterCircuit::OnePole", (int64)ESourceEffectMotionFilterCircuit::OnePole },
		{ "ESourceEffectMotionFilterCircuit::StateVariable", (int64)ESourceEffectMotionFilterCircuit::StateVariable },
		{ "ESourceEffectMotionFilterCircuit::Ladder", (int64)ESourceEffectMotionFilterCircuit::Ladder },
		{ "ESourceEffectMotionFilterCircuit::Count", (int64)ESourceEffectMotionFilterCircuit::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectMotionFilterCircuit::Count" },
		{ "Ladder.Name", "ESourceEffectMotionFilterCircuit::Ladder" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "OnePole.Name", "ESourceEffectMotionFilterCircuit::OnePole" },
		{ "StateVariable.Name", "ESourceEffectMotionFilterCircuit::StateVariable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESourceEffectMotionFilterCircuit",
		"ESourceEffectMotionFilterCircuit",
		Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceEffectMotionFilterType;
	static UEnum* ESourceEffectMotionFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESourceEffectMotionFilterType"));
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectMotionFilterType>()
	{
		return ESourceEffectMotionFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::Enumerators[] = {
		{ "ESourceEffectMotionFilterType::LowPass", (int64)ESourceEffectMotionFilterType::LowPass },
		{ "ESourceEffectMotionFilterType::HighPass", (int64)ESourceEffectMotionFilterType::HighPass },
		{ "ESourceEffectMotionFilterType::BandPass", (int64)ESourceEffectMotionFilterType::BandPass },
		{ "ESourceEffectMotionFilterType::BandStop", (int64)ESourceEffectMotionFilterType::BandStop },
		{ "ESourceEffectMotionFilterType::Count", (int64)ESourceEffectMotionFilterType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BandPass.Name", "ESourceEffectMotionFilterType::BandPass" },
		{ "BandStop.Name", "ESourceEffectMotionFilterType::BandStop" },
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESourceEffectMotionFilterType::Count" },
		{ "HighPass.Name", "ESourceEffectMotionFilterType::HighPass" },
		{ "LowPass.Name", "ESourceEffectMotionFilterType::LowPass" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESourceEffectMotionFilterType",
		"ESourceEffectMotionFilterType",
		Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType()
	{
		if (!Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.InnerSingleton, Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceEffectMotionFilterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings;
class UScriptStruct* FSourceEffectIndividualFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectIndividualFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectIndividualFilterSettings>()
{
	return FSourceEffectIndividualFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterCircuit_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterCircuit_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterCircuit;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutoffFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CutoffFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectIndividualFilterSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterCircuit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterCircuit_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The type of filter circuit to use.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The type of filter circuit to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterCircuit = { "FilterCircuit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectIndividualFilterSettings, FilterCircuit), Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterCircuit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterCircuit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterCircuit_MetaData)) }; // 2788277408
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The type of filter to use.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The type of filter to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectIndividualFilterSettings, FilterType), Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterType_MetaData)) }; // 2638665998
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_CutoffFrequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// The filter cutoff frequency\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The filter cutoff frequency" },
		{ "UIMax", "12000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_CutoffFrequency = { "CutoffFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectIndividualFilterSettings, CutoffFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_CutoffFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_CutoffFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// The filter resonance.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The filter resonance." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectIndividualFilterSettings, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterQ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterCircuit_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterCircuit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_CutoffFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewProp_FilterQ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectIndividualFilterSettings",
		sizeof(FSourceEffectIndividualFilterSettings),
		alignof(FSourceEffectIndividualFilterSettings),
		Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings;
class UScriptStruct* FSourceEffectMotionFilterModulationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectMotionFilterModulationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectMotionFilterModulationSettings>()
{
	return FSourceEffectMotionFilterModulationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModulationSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModulationSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationInputRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationInputRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationOutputMinimumRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationOutputMinimumRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationOutputMaximumRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationOutputMaximumRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateEaseMS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateEaseMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectMotionFilterModulationSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationSource_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The Modulation Source\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The Modulation Source" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationSource = { "ModulationSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterModulationSettings, ModulationSource), Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationSource_MetaData)) }; // 3481779575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationInputRange_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The Modulation Clamped Input Range\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The Modulation Clamped Input Range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationInputRange = { "ModulationInputRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterModulationSettings, ModulationInputRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationInputRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationInputRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMinimumRange_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The Modulation Random Minimum Output Range\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The Modulation Random Minimum Output Range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMinimumRange = { "ModulationOutputMinimumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterModulationSettings, ModulationOutputMinimumRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMinimumRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMinimumRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMaximumRange_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// The Modulation Random Maximum Output Range\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The Modulation Random Maximum Output Range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMaximumRange = { "ModulationOutputMaximumRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterModulationSettings, ModulationOutputMaximumRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMaximumRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMaximumRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_UpdateEaseMS_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Update Ease Speed in milliseconds\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "Update Ease Speed in milliseconds" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_UpdateEaseMS = { "UpdateEaseMS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterModulationSettings, UpdateEaseMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_UpdateEaseMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_UpdateEaseMS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationInputRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMinimumRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_ModulationOutputMaximumRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewProp_UpdateEaseMS,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectMotionFilterModulationSettings",
		sizeof(FSourceEffectMotionFilterModulationSettings),
		alignof(FSourceEffectMotionFilterModulationSettings),
		Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings;
class UScriptStruct* FSourceEffectMotionFilterSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectMotionFilterSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectMotionFilterSettings>()
{
	return FSourceEffectMotionFilterSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MotionFilterTopology_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionFilterTopology_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MotionFilterTopology;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionFilterMix_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionFilterMix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterASettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterASettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterBSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterBSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModulationMappings_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModulationMappings_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModulationMappings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulationMappings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ModulationMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryVolumeDb;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ========================================================================\n// FSourceEffectMotionFilterSettings\n// This is the source effect's setting struct. \n// ========================================================================\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "FSourceEffectMotionFilterSettings\nThis is the source effect's setting struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectMotionFilterSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterTopology_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterTopology_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// In Serial Mode, Filter A will process then Filter B will process; in Parallel mode, Filter A and Filter B will process the dry input seprately, then be mixed together afterward.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "In Serial Mode, Filter A will process then Filter B will process; in Parallel mode, Filter A and Filter B will process the dry input seprately, then be mixed together afterward." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterTopology = { "MotionFilterTopology", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterSettings, MotionFilterTopology), Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterTopology, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterTopology_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterTopology_MetaData)) }; // 1410281332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterMix_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Filter Mix controls the amount of each filter in the signal where -1.0f outputs Only Filter A, 0.0f is an equal balance between Filter A and B, and 1.0f outputs only Filter B. How this blend works depends on the Topology.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "Filter Mix controls the amount of each filter in the signal where -1.0f outputs Only Filter A, 0.0f is an equal balance between Filter A and B, and 1.0f outputs only Filter B. How this blend works depends on the Topology." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterMix = { "MotionFilterMix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterSettings, MotionFilterMix), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterMix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterMix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterASettings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Initial settings for Filter A\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "Initial settings for Filter A" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterASettings = { "FilterASettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterSettings, FilterASettings), Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterASettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterASettings_MetaData)) }; // 4200549630
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterBSettings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Initial settings for Filter B\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "Initial settings for Filter B" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterBSettings = { "FilterBSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterSettings, FilterBSettings), Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterBSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterBSettings_MetaData)) }; // 4200549630
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_ValueProp = { "ModulationMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings, METADATA_PARAMS(nullptr, 0) }; // 2620488468
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_Key_KeyProp = { "ModulationMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Synthesis_ESourceEffectMotionFilterModDestination, METADATA_PARAMS(nullptr, 0) }; // 1937148123
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Modulation Mappings\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "Modulation Mappings" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings = { "ModulationMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterSettings, ModulationMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_MetaData)) }; // 1937148123 2620488468
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_DryVolumeDb_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Dry volume pass-through in dB. \n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "Dry volume pass-through in dB." },
		{ "UIMax", "10.0" },
		{ "UIMin", "-96.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_DryVolumeDb = { "DryVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectMotionFilterSettings, DryVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_DryVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_DryVolumeDb_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterTopology_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterTopology,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_MotionFilterMix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterASettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_FilterBSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_ModulationMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewProp_DryVolumeDb,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectMotionFilterSettings",
		sizeof(FSourceEffectMotionFilterSettings),
		alignof(FSourceEffectMotionFilterSettings),
		Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectMotionFilterPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectMotionFilterSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectMotionFilterPreset::StaticRegisterNativesUSourceEffectMotionFilterPreset()
	{
		UClass* Class = USourceEffectMotionFilterPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectMotionFilterPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics
	{
		struct SourceEffectMotionFilterPreset_eventSetSettings_Parms
		{
			FSourceEffectMotionFilterSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectMotionFilterPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 2477005349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// Change settings of your effect from blueprints. Will broadcast changes to active instances.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "Change settings of your effect from blueprints. Will broadcast changes to active instances." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectMotionFilterPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::SourceEffectMotionFilterPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectMotionFilterPreset);
	UClass* Z_Construct_UClass_USourceEffectMotionFilterPreset_NoRegister()
	{
		return USourceEffectMotionFilterPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectMotionFilterPreset_SetSettings, "SetSettings" }, // 2342054487
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "Comment", "// ========================================================================\n// USourceEffectMotionFilterPreset\n// This code exposes your preset settings and effect class to the editor.\n// And allows for a handle to setting/updating effect settings dynamically.\n// ========================================================================\n" },
		{ "IncludePath", "SourceEffects/SourceEffectMotionFilter.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "USourceEffectMotionFilterPreset\nThis code exposes your preset settings and effect class to the editor.\nAnd allows for a handle to setting/updating effect settings dynamically." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "// The copy of the settings struct. Can't be written to in BP, but can be read.\n// Note that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectMotionFilter.h" },
		{ "ToolTip", "The copy of the settings struct. Can't be written to in BP, but can be read.\nNote that the value read in BP is the serialized settings, will not reflect dynamic changes made in BP." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectMotionFilterPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::NewProp_Settings_MetaData)) }; // 2477005349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectMotionFilterPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::ClassParams = {
		&USourceEffectMotionFilterPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectMotionFilterPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.OuterSingleton, Z_Construct_UClass_USourceEffectMotionFilterPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectMotionFilterPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectMotionFilterPreset>()
	{
		return USourceEffectMotionFilterPreset::StaticClass();
	}
	USourceEffectMotionFilterPreset::USourceEffectMotionFilterPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectMotionFilterPreset);
	USourceEffectMotionFilterPreset::~USourceEffectMotionFilterPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::EnumInfo[] = {
		{ ESourceEffectMotionFilterModSource_StaticEnum, TEXT("ESourceEffectMotionFilterModSource"), &Z_Registration_Info_UEnum_ESourceEffectMotionFilterModSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3481779575U) },
		{ ESourceEffectMotionFilterModDestination_StaticEnum, TEXT("ESourceEffectMotionFilterModDestination"), &Z_Registration_Info_UEnum_ESourceEffectMotionFilterModDestination, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1937148123U) },
		{ ESourceEffectMotionFilterTopology_StaticEnum, TEXT("ESourceEffectMotionFilterTopology"), &Z_Registration_Info_UEnum_ESourceEffectMotionFilterTopology, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1410281332U) },
		{ ESourceEffectMotionFilterCircuit_StaticEnum, TEXT("ESourceEffectMotionFilterCircuit"), &Z_Registration_Info_UEnum_ESourceEffectMotionFilterCircuit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2788277408U) },
		{ ESourceEffectMotionFilterType_StaticEnum, TEXT("ESourceEffectMotionFilterType"), &Z_Registration_Info_UEnum_ESourceEffectMotionFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2638665998U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectIndividualFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectIndividualFilterSettings_Statics::NewStructOps, TEXT("SourceEffectIndividualFilterSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectIndividualFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectIndividualFilterSettings), 4200549630U) },
		{ FSourceEffectMotionFilterModulationSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectMotionFilterModulationSettings_Statics::NewStructOps, TEXT("SourceEffectMotionFilterModulationSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterModulationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectMotionFilterModulationSettings), 2620488468U) },
		{ FSourceEffectMotionFilterSettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings_Statics::NewStructOps, TEXT("SourceEffectMotionFilterSettings"), &Z_Registration_Info_UScriptStruct_SourceEffectMotionFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectMotionFilterSettings), 2477005349U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectMotionFilterPreset, USourceEffectMotionFilterPreset::StaticClass, TEXT("USourceEffectMotionFilterPreset"), &Z_Registration_Info_UClass_USourceEffectMotionFilterPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectMotionFilterPreset), 1855336712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_1301164175(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectMotionFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
