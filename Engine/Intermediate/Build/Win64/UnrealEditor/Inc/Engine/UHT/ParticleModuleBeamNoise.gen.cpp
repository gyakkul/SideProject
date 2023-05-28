// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamNoise.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleBeamNoise() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamNoise();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleBeamNoise_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleBeamNoise::StaticRegisterNativesUParticleModuleBeamNoise()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleBeamNoise);
	UClass* Z_Construct_UClass_UParticleModuleBeamNoise_NoRegister()
	{
		return UParticleModuleBeamNoise::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleBeamNoise_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLowFreq_Enabled_MetaData[];
#endif
		static void NewProp_bLowFreq_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLowFreq_Enabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_LowRange_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frequency_LowRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseRangeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseRangeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNRScaleEmitterTime_MetaData[];
#endif
		static void NewProp_bNRScaleEmitterTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNRScaleEmitterTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmooth_MetaData[];
#endif
		static void NewProp_bSmooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLockRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseLockRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoiseLock_MetaData[];
#endif
		static void NewProp_bNoiseLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoiseLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOscillate_MetaData[];
#endif
		static void NewProp_bOscillate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOscillate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLockTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseLockTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseTension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNoiseTangents_MetaData[];
#endif
		static void NewProp_bUseNoiseTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNoiseTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTangentStrength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseTangentStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTessellation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NoiseTessellation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTargetNoise_MetaData[];
#endif
		static void NewProp_bTargetNoise_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrequencyDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrequencyDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNoiseScale_MetaData[];
#endif
		static void NewProp_bApplyNoiseScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleBeamNoise_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleBeamBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Noise" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bLowFreq_Enabled_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** Is low frequency noise enabled. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "Is low frequency noise enabled." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bLowFreq_Enabled_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bLowFreq_Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bLowFreq_Enabled = { "bLowFreq_Enabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bLowFreq_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bLowFreq_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bLowFreq_Enabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** The frequency of noise points. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The frequency of noise points." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, Frequency), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_LowRange_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** \n\x09 *\x09If not 0, then the frequency will select a random value in the range\n\x09 *\x09\x09[Frequency_LowRange..Frequency]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "If not 0, then the frequency will select a random value in the range\n        [Frequency_LowRange..Frequency]" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_LowRange = { "Frequency_LowRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, Frequency_LowRange), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_LowRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_LowRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRange_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** The noise point ranges. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The noise point ranges." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRange = { "NoiseRange", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseRange), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRange_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRangeScale_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** A scale factor that will be applied to the noise range. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "A scale factor that will be applied to the noise range." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRangeScale = { "NoiseRangeScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseRangeScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRangeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRangeScale_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNRScaleEmitterTime_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** \n\x09 *\x09If true,  the NoiseRangeScale will be grabbed based on the emitter time.\n\x09 *\x09If false, the NoiseRangeScale will be grabbed based on the particle time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "If true,  the NoiseRangeScale will be grabbed based on the emitter time.\nIf false, the NoiseRangeScale will be grabbed based on the particle time." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNRScaleEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bNRScaleEmitterTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNRScaleEmitterTime = { "bNRScaleEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNRScaleEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNRScaleEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNRScaleEmitterTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseSpeed_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** The speed with which to move each noise point. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The speed with which to move each noise point." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseSpeed = { "NoiseSpeed", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseSpeed), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseSpeed_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bSmooth_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** Whether the noise movement should be smooth or 'jerky'. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "Whether the noise movement should be smooth or 'jerky'." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bSmooth_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bSmooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bSmooth = { "bSmooth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bSmooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bSmooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bSmooth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockRadius_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** Default target-point information to use if the beam method is endpoint. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "Default target-point information to use if the beam method is endpoint." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockRadius = { "NoiseLockRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseLockRadius), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNoiseLock_MetaData[] = {
		{ "Comment", "/** INTERNAL - Whether the noise points should be locked. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "INTERNAL - Whether the noise points should be locked." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNoiseLock_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bNoiseLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNoiseLock = { "bNoiseLock", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNoiseLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNoiseLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNoiseLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bOscillate_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** Whether the noise points should be oscillate. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "Whether the noise points should be oscillate." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bOscillate_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bOscillate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bOscillate = { "bOscillate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bOscillate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bOscillate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bOscillate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockTime_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** How long the  noise points should be locked - 0.0 indicates forever. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "How long the  noise points should be locked - 0.0 indicates forever." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockTime = { "NoiseLockTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseLockTime), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTension_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** The tension to apply to the tessellated noise line. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The tension to apply to the tessellated noise line." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTension = { "NoiseTension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseTension), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bUseNoiseTangents_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** If true, calculate tangents at each noise point. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "If true, calculate tangents at each noise point." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bUseNoiseTangents_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bUseNoiseTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bUseNoiseTangents = { "bUseNoiseTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bUseNoiseTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bUseNoiseTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bUseNoiseTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTangentStrength_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** The strength of noise tangents, if enabled. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The strength of noise tangents, if enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTangentStrength = { "NoiseTangentStrength", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseTangentStrength), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTangentStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTangentStrength_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTessellation_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** The amount of tessellation between noise points. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The amount of tessellation between noise points." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTessellation = { "NoiseTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseTessellation), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTessellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTessellation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bTargetNoise_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** \n\x09 *\x09Whether to apply noise to the target point (or end of line in distance mode...)\n\x09 *\x09If true, the beam could potentially 'leave' the target...\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "Whether to apply noise to the target point (or end of line in distance mode...)\nIf true, the beam could potentially 'leave' the target..." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bTargetNoise_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bTargetNoise = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bTargetNoise = { "bTargetNoise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bTargetNoise_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bTargetNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bTargetNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_FrequencyDistance_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** \n\x09 *\x09The distance at which to deposit noise points.\n\x09 *\x09If 0.0, then use the static frequency value.\n\x09 *\x09If not, distribute noise points at the given distance, up to the static Frequency value.\n\x09 *\x09""At that point, evenly distribute them along the beam.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The distance at which to deposit noise points.\nIf 0.0, then use the static frequency value.\nIf not, distribute noise points at the given distance, up to the static Frequency value.\nAt that point, evenly distribute them along the beam." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_FrequencyDistance = { "FrequencyDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, FrequencyDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_FrequencyDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_FrequencyDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bApplyNoiseScale_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** If true, apply the noise scale to the beam. */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "If true, apply the noise scale to the beam." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bApplyNoiseScale_SetBit(void* Obj)
	{
		((UParticleModuleBeamNoise*)Obj)->bApplyNoiseScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bApplyNoiseScale = { "bApplyNoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleBeamNoise), &Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bApplyNoiseScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bApplyNoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bApplyNoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "LowFreq" },
		{ "Comment", "/** \n\x09 *\x09The scale factor to apply to noise range.\n\x09 *\x09The lookup value is determined by dividing the number of noise points present by the \n\x09 *\x09maximum number of noise points (Frequency).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Beam/ParticleModuleBeamNoise.h" },
		{ "ToolTip", "The scale factor to apply to noise range.\nThe lookup value is determined by dividing the number of noise points present by the\nmaximum number of noise points (Frequency)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleBeamNoise, NoiseScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseScale_MetaData)) }; // 2827880765
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleBeamNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bLowFreq_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_Frequency_LowRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseRangeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNRScaleEmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bSmooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bNoiseLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bOscillate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseLockTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bUseNoiseTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTangentStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseTessellation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bTargetNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_FrequencyDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_bApplyNoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleBeamNoise_Statics::NewProp_NoiseScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleBeamNoise_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleBeamNoise>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleBeamNoise_Statics::ClassParams = {
		&UParticleModuleBeamNoise::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleBeamNoise_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleBeamNoise_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleBeamNoise()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleBeamNoise.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleBeamNoise.OuterSingleton, Z_Construct_UClass_UParticleModuleBeamNoise_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleBeamNoise.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleBeamNoise>()
	{
		return UParticleModuleBeamNoise::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleBeamNoise);
	UParticleModuleBeamNoise::~UParticleModuleBeamNoise() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleBeamNoise, UParticleModuleBeamNoise::StaticClass, TEXT("UParticleModuleBeamNoise"), &Z_Registration_Info_UClass_UParticleModuleBeamNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleBeamNoise), 3027888755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_1900879697(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Beam_ParticleModuleBeamNoise_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
