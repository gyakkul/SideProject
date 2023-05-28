// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MotoSynthPreset.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotoSynthPreset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthPreset();
	MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthPreset_NoRegister();
	MOTOSYNTH_API UClass* Z_Construct_UClass_UMotoSynthSource_NoRegister();
	MOTOSYNTH_API UScriptStruct* Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings();
	UPackage* Z_Construct_UPackage__Script_MotoSynth();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings;
class UScriptStruct* FMotoSynthRuntimeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings, (UObject*)Z_Construct_UPackage__Script_MotoSynth(), TEXT("MotoSynthRuntimeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings.OuterSingleton;
}
template<> MOTOSYNTH_API UScriptStruct* StaticStruct<FMotoSynthRuntimeSettings>()
{
	return FMotoSynthRuntimeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSynthToneEnabled_MetaData[];
#endif
		static void NewProp_bSynthToneEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynthToneEnabled;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SynthToneVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SynthToneFilterFrequency;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneVolumeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthToneVolumeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneFilterFrequencyRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthToneFilterFrequencyRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSynthToneEnvelopeEnabled_MetaData[];
#endif
		static void NewProp_bSynthToneEnvelopeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynthToneEnvelopeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneAttackTimeMsecRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthToneAttackTimeMsecRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneAttackCurveRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthToneAttackCurveRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneDecayTimeMsecRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthToneDecayTimeMsecRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthToneDecayCurveRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SynthToneDecayCurveRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SynthOctaveShift_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SynthOctaveShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoiseEnabled_MetaData[];
#endif
		static void NewProp_bNoiseEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoiseEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseVolumeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseVolumeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoiseEnvelopeEnabled_MetaData[];
#endif
		static void NewProp_bNoiseEnvelopeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoiseEnvelopeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLPFRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLPFRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseAttackTimeMsecRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseAttackTimeMsecRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseAttackCurveRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseAttackCurveRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseDecayTimeMsecRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseDecayTimeMsecRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseDecayCurveRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseDecayCurveRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGranularEngineEnabled_MetaData[];
#endif
		static void NewProp_bGranularEngineEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGranularEngineEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GranularEngineVolume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GranularEngineVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GranularEnginePitchScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GranularEnginePitchScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplesToCrossfadeBetweenGrains_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplesToCrossfadeBetweenGrains;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumGrainTableEntriesPerGrain_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumGrainTableEntriesPerGrain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrainTableRandomOffsetForConstantRPMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GrainTableRandomOffsetForConstantRPMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrainCrossfadeSamplesForConstantRPMs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GrainCrossfadeSamplesForConstantRPMs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AccelerationSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecelerationSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DecelerationSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStereoWidenerEnabled_MetaData[];
#endif
		static void NewProp_bStereoWidenerEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStereoWidenerEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoDelayMsec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoDelayMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoFeedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoFeedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoWidenerWetlevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoWidenerWetlevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoWidenerDryLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoWidenerDryLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoWidenerDelayRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoWidenerDelayRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStereoWidenerFilterEnabled_MetaData[];
#endif
		static void NewProp_bStereoWidenerFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStereoWidenerFilterEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoWidenerFilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoWidenerFilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoWidenerFilterQ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StereoWidenerFilterQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotoSynthRuntimeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnabled_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// If the synth tone is enabled\n" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "If the synth tone is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnabled_SetBit(void* Obj)
	{
		((FMotoSynthRuntimeSettings*)Obj)->bSynthToneEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnabled = { "bSynthToneEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotoSynthRuntimeSettings), &Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnabled_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolume = { "SynthToneVolume", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneVolume_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequency = { "SynthToneFilterFrequency", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneFilterFrequency_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequency_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolumeRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// The volume of the synth tone\x09""between min and max RPM\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "The volume of the synth tone   between min and max RPM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolumeRange = { "SynthToneVolumeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneVolumeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolumeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolumeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequencyRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// The filter frequency of the synth tone between min/max RPM\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "The filter frequency of the synth tone between min/max RPM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequencyRange = { "SynthToneFilterFrequencyRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneFilterFrequencyRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequencyRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequencyRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnvelopeEnabled_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Enable the synth tone envelope generator\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Enable the synth tone envelope generator" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnvelopeEnabled_SetBit(void* Obj)
	{
		((FMotoSynthRuntimeSettings*)Obj)->bSynthToneEnvelopeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnvelopeEnabled = { "bSynthToneEnvelopeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotoSynthRuntimeSettings), &Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnvelopeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnvelopeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnvelopeEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackTimeMsecRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Synth tone envelope attack time in milliseconds between min/max RPM\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Synth tone envelope attack time in milliseconds between min/max RPM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackTimeMsecRange = { "SynthToneAttackTimeMsecRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneAttackTimeMsecRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackTimeMsecRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackTimeMsecRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackCurveRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Synth tone envelope attack curve.  1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth.\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Synth tone envelope attack curve.  1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackCurveRange = { "SynthToneAttackCurveRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneAttackCurveRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackCurveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackCurveRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayTimeMsecRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Synth tone decay time in milliseconds\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Synth tone decay time in milliseconds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayTimeMsecRange = { "SynthToneDecayTimeMsecRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneDecayTimeMsecRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayTimeMsecRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayTimeMsecRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayCurveRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Synth tone envelope decay curve.  1.0 = linear decay, < 1.0 exponential decay, > 1.0 logarithmic decay.\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Synth tone envelope decay curve.  1.0 = linear decay, < 1.0 exponential decay, > 1.0 logarithmic decay." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayCurveRange = { "SynthToneDecayCurveRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthToneDecayCurveRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayCurveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayCurveRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthOctaveShift_MetaData[] = {
		{ "Category", "Synth" },
		{ "ClampMax", "3" },
		{ "ClampMin", "-3" },
		{ "Comment", "// Octave shift of the synth\n" },
		{ "EditCondition", "bSynthToneEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Octave shift of the synth" },
		{ "UIMax", "3" },
		{ "UIMin", "-3" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthOctaveShift = { "SynthOctaveShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, SynthOctaveShift), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthOctaveShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthOctaveShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnabled_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// If the noise generator enabled\n" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "If the noise generator enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnabled_SetBit(void* Obj)
	{
		((FMotoSynthRuntimeSettings*)Obj)->bNoiseEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnabled = { "bNoiseEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotoSynthRuntimeSettings), &Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseVolumeRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// The volume of the noise source\n" },
		{ "EditCondition", "bNoiseEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "The volume of the noise source" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseVolumeRange = { "NoiseVolumeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NoiseVolumeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseVolumeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseVolumeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnvelopeEnabled_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// If the noise generator has the envelope enabled\n" },
		{ "EditCondition", "bNoiseEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "If the noise generator has the envelope enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnvelopeEnabled_SetBit(void* Obj)
	{
		((FMotoSynthRuntimeSettings*)Obj)->bNoiseEnvelopeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnvelopeEnabled = { "bNoiseEnvelopeEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotoSynthRuntimeSettings), &Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnvelopeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnvelopeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnvelopeEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseLPFRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// The filter frequency of the noise generator between min/max RPM\n" },
		{ "EditCondition", "bNoiseEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "The filter frequency of the noise generator between min/max RPM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseLPFRange = { "NoiseLPFRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NoiseLPFRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseLPFRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseLPFRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackTimeMsecRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Noise envelope attack time in milliseconds between min/max RPM\n" },
		{ "EditCondition", "bNoiseEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Noise envelope attack time in milliseconds between min/max RPM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackTimeMsecRange = { "NoiseAttackTimeMsecRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NoiseAttackTimeMsecRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackTimeMsecRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackTimeMsecRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackCurveRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Noise envelope attack curve.  1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth.\n" },
		{ "EditCondition", "bNoiseEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Noise envelope attack curve.  1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackCurveRange = { "NoiseAttackCurveRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NoiseAttackCurveRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackCurveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackCurveRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayTimeMsecRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Noise envelope attack time in milliseconds between min/max RPM\n" },
		{ "EditCondition", "bNoiseEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Noise envelope attack time in milliseconds between min/max RPM" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayTimeMsecRange = { "NoiseDecayTimeMsecRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NoiseDecayTimeMsecRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayTimeMsecRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayTimeMsecRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayCurveRange_MetaData[] = {
		{ "Category", "Synth" },
		{ "Comment", "// Noise envelope attack curve between min/max RPM.  1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth.\n" },
		{ "EditCondition", "bNoiseEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Noise envelope attack curve between min/max RPM.  1.0 = linear growth, < 1.0 logorithmic growth, > 1.0 exponential growth." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayCurveRange = { "NoiseDecayCurveRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NoiseDecayCurveRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayCurveRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayCurveRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bGranularEngineEnabled_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "Comment", "// If the granular engine is enabled\n" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "If the granular engine is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bGranularEngineEnabled_SetBit(void* Obj)
	{
		((FMotoSynthRuntimeSettings*)Obj)->bGranularEngineEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bGranularEngineEnabled = { "bGranularEngineEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotoSynthRuntimeSettings), &Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bGranularEngineEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bGranularEngineEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bGranularEngineEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEngineVolume_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The volume of the granular engine\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "The volume of the granular engine" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEngineVolume = { "GranularEngineVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, GranularEngineVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEngineVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEngineVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEnginePitchScale_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// The pitch scale of the granular engine\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "The pitch scale of the granular engine" },
		{ "UIMin", "0.001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEnginePitchScale = { "GranularEnginePitchScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, GranularEnginePitchScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEnginePitchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEnginePitchScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumSamplesToCrossfadeBetweenGrains_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "ClampMin", "0" },
		{ "Comment", "// The volume of the granular engine\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "The volume of the granular engine" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumSamplesToCrossfadeBetweenGrains = { "NumSamplesToCrossfadeBetweenGrains", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NumSamplesToCrossfadeBetweenGrains), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumSamplesToCrossfadeBetweenGrains_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumSamplesToCrossfadeBetweenGrains_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumGrainTableEntriesPerGrain_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "ClampMax", "20" },
		{ "ClampMin", "1" },
		{ "Comment", "// How many grain-table entries to use per runtime grain\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "How many grain-table entries to use per runtime grain" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumGrainTableEntriesPerGrain = { "NumGrainTableEntriesPerGrain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, NumGrainTableEntriesPerGrain), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumGrainTableEntriesPerGrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumGrainTableEntriesPerGrain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainTableRandomOffsetForConstantRPMs_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Comment", "// Random grain table offset for cases where RPM is constant. Allows random shuffling of grains to avoid a robotic sound.\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Random grain table offset for cases where RPM is constant. Allows random shuffling of grains to avoid a robotic sound." },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainTableRandomOffsetForConstantRPMs = { "GrainTableRandomOffsetForConstantRPMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, GrainTableRandomOffsetForConstantRPMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainTableRandomOffsetForConstantRPMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainTableRandomOffsetForConstantRPMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainCrossfadeSamplesForConstantRPMs_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of samples to cross fade grains when on a constant-RPM state. More crossfaded samples can reduce the robotic sound.\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Number of samples to cross fade grains when on a constant-RPM state. More crossfaded samples can reduce the robotic sound." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainCrossfadeSamplesForConstantRPMs = { "GrainCrossfadeSamplesForConstantRPMs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, GrainCrossfadeSamplesForConstantRPMs), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainCrossfadeSamplesForConstantRPMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainCrossfadeSamplesForConstantRPMs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_AccelerationSource_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "Comment", "// Motosynth source to use for granular engine acceleration\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Motosynth source to use for granular engine acceleration" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_AccelerationSource = { "AccelerationSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, AccelerationSource), Z_Construct_UClass_UMotoSynthSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_AccelerationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_AccelerationSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_DecelerationSource_MetaData[] = {
		{ "Category", "Granular Engine" },
		{ "Comment", "// Motosynth source to use for granular engine deceleration\n" },
		{ "EditCondition", "bGranularEngineEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Motosynth source to use for granular engine deceleration" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_DecelerationSource = { "DecelerationSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, DecelerationSource), Z_Construct_UClass_UMotoSynthSource_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_DecelerationSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_DecelerationSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerEnabled_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// If the stereo widener is enabled\n" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "If the stereo widener is enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerEnabled_SetBit(void* Obj)
	{
		((FMotoSynthRuntimeSettings*)Obj)->bStereoWidenerEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerEnabled = { "bStereoWidenerEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotoSynthRuntimeSettings), &Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoDelayMsec_MetaData[] = {
		{ "Category", "Effects" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// If the stereo widener is enabled\n" },
		{ "EditCondition", "bStereoWidenerEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "If the stereo widener is enabled" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoDelayMsec = { "StereoDelayMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, StereoDelayMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoDelayMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoDelayMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoFeedback_MetaData[] = {
		{ "Category", "Effects" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Amount of feedback for stereo widener\n" },
		{ "EditCondition", "bStereoWidenerEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Amount of feedback for stereo widener" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoFeedback = { "StereoFeedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, StereoFeedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoFeedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoFeedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerWetlevel_MetaData[] = {
		{ "Category", "Effects" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Wet level of stereo delay used for stereo widener\n" },
		{ "EditCondition", "bStereoWidenerEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Wet level of stereo delay used for stereo widener" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerWetlevel = { "StereoWidenerWetlevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, StereoWidenerWetlevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerWetlevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerWetlevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDryLevel_MetaData[] = {
		{ "Category", "Effects" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Dry level of stereo delay used for stereo widener\n" },
		{ "EditCondition", "bStereoWidenerEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Dry level of stereo delay used for stereo widener" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDryLevel = { "StereoWidenerDryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, StereoWidenerDryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDryLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDelayRatio_MetaData[] = {
		{ "Category", "Effects" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Delay ratio of left/right channels for stereo widener effect\n" },
		{ "EditCondition", "bStereoWidenerEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Delay ratio of left/right channels for stereo widener effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDelayRatio = { "StereoWidenerDelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, StereoWidenerDelayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDelayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDelayRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerFilterEnabled_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// Delay ratio of left/right channels for stereo widener effect\n" },
		{ "EditCondition", "bStereoWidenerEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Delay ratio of left/right channels for stereo widener effect" },
	};
#endif
	void Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerFilterEnabled_SetBit(void* Obj)
	{
		((FMotoSynthRuntimeSettings*)Obj)->bStereoWidenerFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerFilterEnabled = { "bStereoWidenerFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMotoSynthRuntimeSettings), &Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerFilterEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterFrequency_MetaData[] = {
		{ "Category", "Effects" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// Delay ratio of left/right channels for stereo widener effect\n" },
		{ "EditCondition", "bStereoWidenerEnabled && bStereoWidenerFilterEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Delay ratio of left/right channels for stereo widener effect" },
		{ "UIMax", "20000.0" },
		{ "UIMin", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterFrequency = { "StereoWidenerFilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, StereoWidenerFilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterQ_MetaData[] = {
		{ "Category", "Effects" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Delay ratio of left/right channels for stereo widener effect\n" },
		{ "EditCondition", "bStereoWidenerEnabled && bStereoWidenerFilterEnabled" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Delay ratio of left/right channels for stereo widener effect" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterQ = { "StereoWidenerFilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotoSynthRuntimeSettings, StereoWidenerFilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterQ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnabled,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequency,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneVolumeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneFilterFrequencyRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bSynthToneEnvelopeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackTimeMsecRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneAttackCurveRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayTimeMsecRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthToneDecayCurveRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_SynthOctaveShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseVolumeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bNoiseEnvelopeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseLPFRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackTimeMsecRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseAttackCurveRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayTimeMsecRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NoiseDecayCurveRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bGranularEngineEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEngineVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GranularEnginePitchScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumSamplesToCrossfadeBetweenGrains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_NumGrainTableEntriesPerGrain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainTableRandomOffsetForConstantRPMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_GrainCrossfadeSamplesForConstantRPMs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_AccelerationSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_DecelerationSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoDelayMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoFeedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerWetlevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDryLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerDelayRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_bStereoWidenerFilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewProp_StereoWidenerFilterQ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotoSynth,
		nullptr,
		&NewStructOps,
		"MotoSynthRuntimeSettings",
		sizeof(FMotoSynthRuntimeSettings),
		alignof(FMotoSynthRuntimeSettings),
		Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings.InnerSingleton, Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UMotoSynthPreset::execDumpRuntimeMemoryUsage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpRuntimeMemoryUsage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotoSynthPreset::execStopEnginePreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEnginePreview();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotoSynthPreset::execStartEnginePreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEnginePreview();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UMotoSynthPreset::StaticRegisterNativesUMotoSynthPreset()
	{
#if WITH_EDITOR
		UClass* Class = UMotoSynthPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DumpRuntimeMemoryUsage", &UMotoSynthPreset::execDumpRuntimeMemoryUsage },
			{ "StartEnginePreview", &UMotoSynthPreset::execStartEnginePreview },
			{ "StopEnginePreview", &UMotoSynthPreset::execStopEnginePreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Memory" },
		{ "Comment", "// Dumps memory usage of the preset (i.e. of the source assets)\n" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Dumps memory usage of the preset (i.e. of the source assets)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotoSynthPreset, nullptr, "DumpRuntimeMemoryUsage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Engine Preview" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotoSynthPreset, nullptr, "StartEnginePreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Engine Preview" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotoSynthPreset, nullptr, "StopEnginePreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotoSynthPreset);
	UClass* Z_Construct_UClass_UMotoSynthPreset_NoRegister()
	{
		return UMotoSynthPreset::StaticClass();
	}
	struct Z_Construct_UClass_UMotoSynthPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnginePreviewRPMCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnginePreviewRPMCurve;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotoSynthPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotoSynth,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotoSynthPreset_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMotoSynthPreset_DumpRuntimeMemoryUsage, "DumpRuntimeMemoryUsage" }, // 199900129
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMotoSynthPreset_StartEnginePreview, "StartEnginePreview" }, // 1459288780
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMotoSynthPreset_StopEnginePreview, "StopEnginePreview" }, // 388805120
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Synth" },
		{ "Comment", "/** \n* Asset used to store moto synth preset data.\n*/" },
		{ "IncludePath", "MotoSynthPreset.h" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Asset used to store moto synth preset data." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_EnginePreviewRPMCurve_MetaData[] = {
		{ "Category", "Engine Preview" },
		{ "Comment", "// Engine preview RPM curve\n" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ToolTip", "Engine preview RPM curve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_EnginePreviewRPMCurve = { "EnginePreviewRPMCurve", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthPreset, EnginePreviewRPMCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_EnginePreviewRPMCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_EnginePreviewRPMCurve_MetaData)) }; // 1477693291
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "MotoSynthSettings" },
		{ "ModuleRelativePath", "Public/MotoSynthPreset.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotoSynthPreset, Settings), Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings, METADATA_PARAMS(Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_Settings_MetaData)) }; // 1101377837
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotoSynthPreset_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_EnginePreviewRPMCurve,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotoSynthPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotoSynthPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotoSynthPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotoSynthPreset_Statics::ClassParams = {
		&UMotoSynthPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMotoSynthPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotoSynthPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotoSynthPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotoSynthPreset()
	{
		if (!Z_Registration_Info_UClass_UMotoSynthPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotoSynthPreset.OuterSingleton, Z_Construct_UClass_UMotoSynthPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotoSynthPreset.OuterSingleton;
	}
	template<> MOTOSYNTH_API UClass* StaticClass<UMotoSynthPreset>()
	{
		return UMotoSynthPreset::StaticClass();
	}
	UMotoSynthPreset::UMotoSynthPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotoSynthPreset);
	UMotoSynthPreset::~UMotoSynthPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_Statics::ScriptStructInfo[] = {
		{ FMotoSynthRuntimeSettings::StaticStruct, Z_Construct_UScriptStruct_FMotoSynthRuntimeSettings_Statics::NewStructOps, TEXT("MotoSynthRuntimeSettings"), &Z_Registration_Info_UScriptStruct_MotoSynthRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotoSynthRuntimeSettings), 1101377837U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotoSynthPreset, UMotoSynthPreset::StaticClass, TEXT("UMotoSynthPreset"), &Z_Registration_Info_UClass_UMotoSynthPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotoSynthPreset), 2879970313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_183251993(TEXT("/Script/MotoSynth"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MotoSynth_Source_MotoSynth_Public_MotoSynthPreset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
