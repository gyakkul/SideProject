// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GerstnerWaterWaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGerstnerWaterWaves() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaves();
	WATER_API UClass* Z_Construct_UClass_UGerstnerWaterWaves_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterWaves();
	WATER_API UEnum* Z_Construct_UEnum_Water_EWaveSpectrumType();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FGerstnerWave();
	WATER_API UScriptStruct* Z_Construct_UScriptStruct_FGerstnerWaveOctave();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GerstnerWave;
class UScriptStruct* FGerstnerWave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GerstnerWave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GerstnerWave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGerstnerWave, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("GerstnerWave"));
	}
	return Z_Registration_Info_UScriptStruct_GerstnerWave.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FGerstnerWave>()
{
	return FGerstnerWave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGerstnerWave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Steepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Steepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WKA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WKA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Q_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Q;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PhaseOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Raw wave parameters for one gerstner wave */" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "ToolTip", "Raw wave parameters for one gerstner wave" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGerstnerWave>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveLength_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveLength = { "WaveLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, WaveLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Steepness_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Steepness = { "Steepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, Steepness), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Steepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Steepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveVector = { "WaveVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, WaveVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveSpeed = { "WaveSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, WaveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WKA_MetaData[] = {
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WKA = { "WKA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, WKA), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WKA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WKA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Q_MetaData[] = {
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Q = { "Q", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, Q), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Q_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Q_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_PhaseOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_PhaseOffset = { "PhaseOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWave, PhaseOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_PhaseOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_PhaseOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGerstnerWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Steepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WaveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_WKA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_Q,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewProp_PhaseOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGerstnerWave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"GerstnerWave",
		sizeof(FGerstnerWave),
		alignof(FGerstnerWave),
		Z_Construct_UScriptStruct_FGerstnerWave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGerstnerWave()
	{
		if (!Z_Registration_Info_UScriptStruct_GerstnerWave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GerstnerWave.InnerSingleton, Z_Construct_UScriptStruct_FGerstnerWave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GerstnerWave.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GerstnerWaveOctave;
class UScriptStruct* FGerstnerWaveOctave::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GerstnerWaveOctave.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GerstnerWaveOctave.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGerstnerWaveOctave, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("GerstnerWaveOctave"));
	}
	return Z_Registration_Info_UScriptStruct_GerstnerWaveOctave.OuterSingleton;
}
template<> WATER_API UScriptStruct* StaticStruct<FGerstnerWaveOctave>()
{
	return FGerstnerWaveOctave::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainDirection_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MainDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpreadAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUniformSpread_MetaData[];
#endif
		static void NewProp_bUniformSpread_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformSpread;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGerstnerWaveOctave>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_NumWaves_MetaData[] = {
		{ "Category", "Octave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_NumWaves = { "NumWaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWaveOctave, NumWaves), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_NumWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_NumWaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_AmplitudeScale_MetaData[] = {
		{ "Category", "Octave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_AmplitudeScale = { "AmplitudeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWaveOctave, AmplitudeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_AmplitudeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_AmplitudeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_MainDirection_MetaData[] = {
		{ "Category", "Octave | Direction" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_MainDirection = { "MainDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWaveOctave, MainDirection), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_MainDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_MainDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_SpreadAngle_MetaData[] = {
		{ "Category", "Octave | Direction" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_SpreadAngle = { "SpreadAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGerstnerWaveOctave, SpreadAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_SpreadAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_SpreadAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_bUniformSpread_MetaData[] = {
		{ "Category", "Octave | Direction" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_bUniformSpread_SetBit(void* Obj)
	{
		((FGerstnerWaveOctave*)Obj)->bUniformSpread = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_bUniformSpread = { "bUniformSpread", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGerstnerWaveOctave), &Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_bUniformSpread_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_bUniformSpread_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_bUniformSpread_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_NumWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_AmplitudeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_MainDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_SpreadAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewProp_bUniformSpread,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		&NewStructOps,
		"GerstnerWaveOctave",
		sizeof(FGerstnerWaveOctave),
		alignof(FGerstnerWaveOctave),
		Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGerstnerWaveOctave()
	{
		if (!Z_Registration_Info_UScriptStruct_GerstnerWaveOctave.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GerstnerWaveOctave.InnerSingleton, Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GerstnerWaveOctave.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveSpectrumType;
	static UEnum* EWaveSpectrumType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaveSpectrumType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaveSpectrumType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Water_EWaveSpectrumType, (UObject*)Z_Construct_UPackage__Script_Water(), TEXT("EWaveSpectrumType"));
		}
		return Z_Registration_Info_UEnum_EWaveSpectrumType.OuterSingleton;
	}
	template<> WATER_API UEnum* StaticEnum<EWaveSpectrumType>()
	{
		return EWaveSpectrumType_StaticEnum();
	}
	struct Z_Construct_UEnum_Water_EWaveSpectrumType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::Enumerators[] = {
		{ "EWaveSpectrumType::Phillips", (int64)EWaveSpectrumType::Phillips },
		{ "EWaveSpectrumType::PiersonMoskowitz", (int64)EWaveSpectrumType::PiersonMoskowitz },
		{ "EWaveSpectrumType::JONSWAP", (int64)EWaveSpectrumType::JONSWAP },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::Enum_MetaDataParams[] = {
		{ "JONSWAP.DisplayName", "JONSWAP" },
		{ "JONSWAP.Name", "EWaveSpectrumType::JONSWAP" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "Phillips.DisplayName", "Phillips" },
		{ "Phillips.Name", "EWaveSpectrumType::Phillips" },
		{ "PiersonMoskowitz.DisplayName", "Pierson-Moskowitz" },
		{ "PiersonMoskowitz.Name", "EWaveSpectrumType::PiersonMoskowitz" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Water,
		nullptr,
		"EWaveSpectrumType",
		"EWaveSpectrumType",
		Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Water_EWaveSpectrumType()
	{
		if (!Z_Registration_Info_UEnum_EWaveSpectrumType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveSpectrumType.InnerSingleton, Z_Construct_UEnum_Water_EWaveSpectrumType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaveSpectrumType.InnerSingleton;
	}
	DEFINE_FUNCTION(UGerstnerWaterWaveGeneratorBase::execGenerateGerstnerWaves)
	{
		P_GET_TARRAY_REF(FGerstnerWave,Z_Param_Out_OutWaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateGerstnerWaves_Implementation(Z_Param_Out_OutWaves);
		P_NATIVE_END;
	}
	struct GerstnerWaterWaveGeneratorBase_eventGenerateGerstnerWaves_Parms
	{
		TArray<FGerstnerWave> OutWaves;
	};
	static FName NAME_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves = FName(TEXT("GenerateGerstnerWaves"));
	void UGerstnerWaterWaveGeneratorBase::GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves) const
	{
		GerstnerWaterWaveGeneratorBase_eventGenerateGerstnerWaves_Parms Parms;
		Parms.OutWaves=OutWaves;
		const_cast<UGerstnerWaterWaveGeneratorBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves),&Parms);
		OutWaves=Parms.OutWaves;
	}
	void UGerstnerWaterWaveGeneratorBase::StaticRegisterNativesUGerstnerWaterWaveGeneratorBase()
	{
		UClass* Class = UGerstnerWaterWaveGeneratorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateGerstnerWaves", &UGerstnerWaterWaveGeneratorBase::execGenerateGerstnerWaves },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWaves_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::NewProp_OutWaves_Inner = { "OutWaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGerstnerWave, METADATA_PARAMS(nullptr, 0) }; // 3519870895
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::NewProp_OutWaves = { "OutWaves", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GerstnerWaterWaveGeneratorBase_eventGenerateGerstnerWaves_Parms, OutWaves), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3519870895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::NewProp_OutWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::NewProp_OutWaves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Generation" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase, nullptr, "GenerateGerstnerWaves", nullptr, nullptr, sizeof(GerstnerWaterWaveGeneratorBase_eventGenerateGerstnerWaves_Parms), Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGerstnerWaterWaveGeneratorBase);
	UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_NoRegister()
	{
		return UGerstnerWaterWaveGeneratorBase::StaticClass();
	}
	struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGerstnerWaterWaveGeneratorBase_GenerateGerstnerWaves, "GenerateGerstnerWaves" }, // 2820660827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n\x09""Base class for the gerstner water wave generation. This can be overridden by either C++ classes or Blueprint classes.\n\x09Simply implement GenerateGerstnerWaves (or GenerateGerstnerWaves_Implementation in C++) to return the set of waves to be used. Waves will automatically be sorted based on wave length.\n*/" },
		{ "IncludePath", "GerstnerWaterWaves.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "ToolTip", "Base class for the gerstner water wave generation. This can be overridden by either C++ classes or Blueprint classes.\nSimply implement GenerateGerstnerWaves (or GenerateGerstnerWaves_Implementation in C++) to return the set of waves to be used. Waves will automatically be sorted based on wave length." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGerstnerWaterWaveGeneratorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::ClassParams = {
		&UGerstnerWaterWaveGeneratorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase()
	{
		if (!Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorBase.OuterSingleton, Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorBase.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UGerstnerWaterWaveGeneratorBase>()
	{
		return UGerstnerWaterWaveGeneratorBase::StaticClass();
	}
	UGerstnerWaterWaveGeneratorBase::UGerstnerWaterWaveGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGerstnerWaterWaveGeneratorBase);
	UGerstnerWaterWaveGeneratorBase::~UGerstnerWaterWaveGeneratorBase() {}
	void UGerstnerWaterWaveGeneratorSimple::StaticRegisterNativesUGerstnerWaterWaveGeneratorSimple()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGerstnerWaterWaveGeneratorSimple);
	UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_NoRegister()
	{
		return UGerstnerWaterWaveGeneratorSimple::StaticClass();
	}
	struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumWaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Randomness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Randomness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWavelength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWavelength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWavelength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWavelength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WavelengthFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WavelengthFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAmplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmplitudeFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmplitudeFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindAngleDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindAngleDeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionAngularSpreadDeg_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionAngularSpreadDeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallWaveSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmallWaveSteepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeWaveSteepness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LargeWaveSteepness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteepnessFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteepnessFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Default implementation of a gerstner wave generator using a simple custom range based set of parameters to generate waves.\n*/" },
		{ "IncludePath", "GerstnerWaterWaves.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "ToolTip", "Default implementation of a gerstner wave generator using a simple custom range based set of parameters to generate waves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_NumWaves_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "128" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_NumWaves = { "NumWaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, NumWaves), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_NumWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_NumWaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, Seed), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Randomness_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Randomness = { "Randomness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, Randomness), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Randomness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Randomness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinWavelength_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "10000.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinWavelength = { "MinWavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, MinWavelength), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinWavelength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinWavelength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxWavelength_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "10000.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxWavelength = { "MaxWavelength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, MaxWavelength), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxWavelength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxWavelength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WavelengthFalloff_MetaData[] = {
		{ "Category", "Wavelengths" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WavelengthFalloff = { "WavelengthFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, WavelengthFalloff), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WavelengthFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WavelengthFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinAmplitude_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0.000100" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinAmplitude = { "MinAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, MinAmplitude), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxAmplitude_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0.000100" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "1000.000000" },
		{ "UIMin", "0.000100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxAmplitude = { "MaxAmplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, MaxAmplitude), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxAmplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxAmplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_AmplitudeFalloff_MetaData[] = {
		{ "Category", "Amplitude" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_AmplitudeFalloff = { "AmplitudeFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, AmplitudeFalloff), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_AmplitudeFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_AmplitudeFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WindAngleDeg_MetaData[] = {
		{ "Category", "Directions" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "DisplayName", "Dominant Wind Angle" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WindAngleDeg = { "WindAngleDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, WindAngleDeg), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WindAngleDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WindAngleDeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_DirectionAngularSpreadDeg_MetaData[] = {
		{ "Category", "Directions" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Direction Angular Spread" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMin", "0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_DirectionAngularSpreadDeg = { "DirectionAngularSpreadDeg", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, DirectionAngularSpreadDeg), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_DirectionAngularSpreadDeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_DirectionAngularSpreadDeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SmallWaveSteepness_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SmallWaveSteepness = { "SmallWaveSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, SmallWaveSteepness), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SmallWaveSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SmallWaveSteepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_LargeWaveSteepness_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_LargeWaveSteepness = { "LargeWaveSteepness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, LargeWaveSteepness), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_LargeWaveSteepness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_LargeWaveSteepness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SteepnessFalloff_MetaData[] = {
		{ "Category", "Steepness" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "UIMax", "100.000000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SteepnessFalloff = { "SteepnessFalloff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSimple, SteepnessFalloff), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SteepnessFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SteepnessFalloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_NumWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_Randomness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinWavelength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxWavelength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WavelengthFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MinAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_MaxAmplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_AmplitudeFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_WindAngleDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_DirectionAngularSpreadDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SmallWaveSteepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_LargeWaveSteepness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::NewProp_SteepnessFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGerstnerWaterWaveGeneratorSimple>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::ClassParams = {
		&UGerstnerWaterWaveGeneratorSimple::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple()
	{
		if (!Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSimple.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSimple.OuterSingleton, Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSimple.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UGerstnerWaterWaveGeneratorSimple>()
	{
		return UGerstnerWaterWaveGeneratorSimple::StaticClass();
	}
	UGerstnerWaterWaveGeneratorSimple::UGerstnerWaterWaveGeneratorSimple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGerstnerWaterWaveGeneratorSimple);
	UGerstnerWaterWaveGeneratorSimple::~UGerstnerWaterWaveGeneratorSimple() {}
	void UGerstnerWaterWaveGeneratorSpectrum::StaticRegisterNativesUGerstnerWaterWaveGeneratorSpectrum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGerstnerWaterWaveGeneratorSpectrum);
	UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_NoRegister()
	{
		return UGerstnerWaterWaveGeneratorSpectrum::StaticClass();
	}
	struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpectrumType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpectrumType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpectrumType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Octaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Octaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Octaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n\x09""Default implementation of a gerstner wave generator using known wave spectra from oceanology. \n\x09""Edited using octaves, where each octave is a set of waves with 2x longer wave length than the previous octave\n*/" },
		{ "IncludePath", "GerstnerWaterWaves.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
		{ "ToolTip", "Default implementation of a gerstner wave generator using known wave spectra from oceanology.\nEdited using octaves, where each octave is a set of waves with 2x longer wave length than the previous octave" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_SpectrumType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_SpectrumType_MetaData[] = {
		{ "Category", "Wave Parameters" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_SpectrumType = { "SpectrumType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSpectrum, SpectrumType), Z_Construct_UEnum_Water_EWaveSpectrumType, METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_SpectrumType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_SpectrumType_MetaData)) }; // 3599812958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_Octaves_Inner = { "Octaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGerstnerWaveOctave, METADATA_PARAMS(nullptr, 0) }; // 3924218553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_Octaves_MetaData[] = {
		{ "Category", "Wave Parameters" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_Octaves = { "Octaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaveGeneratorSpectrum, Octaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_Octaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_Octaves_MetaData)) }; // 3924218553
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_SpectrumType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_SpectrumType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_Octaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::NewProp_Octaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGerstnerWaterWaveGeneratorSpectrum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::ClassParams = {
		&UGerstnerWaterWaveGeneratorSpectrum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::PropPointers),
		0,
		0x040810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum()
	{
		if (!Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSpectrum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSpectrum.OuterSingleton, Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSpectrum.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UGerstnerWaterWaveGeneratorSpectrum>()
	{
		return UGerstnerWaterWaveGeneratorSpectrum::StaticClass();
	}
	UGerstnerWaterWaveGeneratorSpectrum::UGerstnerWaterWaveGeneratorSpectrum(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGerstnerWaterWaveGeneratorSpectrum);
	UGerstnerWaterWaveGeneratorSpectrum::~UGerstnerWaterWaveGeneratorSpectrum() {}
	void UGerstnerWaterWaves::StaticRegisterNativesUGerstnerWaterWaves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGerstnerWaterWaves);
	UClass* Z_Construct_UClass_UGerstnerWaterWaves_NoRegister()
	{
		return UGerstnerWaterWaves::StaticClass();
	}
	struct Z_Construct_UClass_UGerstnerWaterWaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GerstnerWaveGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GerstnerWaveGenerator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GerstnerWaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GerstnerWaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GerstnerWaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaveHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWaveHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGerstnerWaterWaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterWaves,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaves_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GerstnerWaterWaves.h" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaveGenerator_MetaData[] = {
		{ "Category", "Waves" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaveGenerator = { "GerstnerWaveGenerator", nullptr, (EPropertyFlags)0x001600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaves, GerstnerWaveGenerator), Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaveGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaveGenerator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaves_Inner = { "GerstnerWaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGerstnerWave, METADATA_PARAMS(nullptr, 0) }; // 3519870895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaves_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaves = { "GerstnerWaves", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaves, GerstnerWaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaves_MetaData)) }; // 3519870895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_MaxWaveHeight_MetaData[] = {
		{ "Category", "Wave" },
		{ "ModuleRelativePath", "Public/GerstnerWaterWaves.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_MaxWaveHeight = { "MaxWaveHeight", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGerstnerWaterWaves, MaxWaveHeight), METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_MaxWaveHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_MaxWaveHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGerstnerWaterWaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaveGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_GerstnerWaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGerstnerWaterWaves_Statics::NewProp_MaxWaveHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGerstnerWaterWaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGerstnerWaterWaves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGerstnerWaterWaves_Statics::ClassParams = {
		&UGerstnerWaterWaves::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGerstnerWaterWaves_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaves_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGerstnerWaterWaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGerstnerWaterWaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGerstnerWaterWaves()
	{
		if (!Z_Registration_Info_UClass_UGerstnerWaterWaves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGerstnerWaterWaves.OuterSingleton, Z_Construct_UClass_UGerstnerWaterWaves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGerstnerWaterWaves.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UGerstnerWaterWaves>()
	{
		return UGerstnerWaterWaves::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGerstnerWaterWaves);
	UGerstnerWaterWaves::~UGerstnerWaterWaves() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::EnumInfo[] = {
		{ EWaveSpectrumType_StaticEnum, TEXT("EWaveSpectrumType"), &Z_Registration_Info_UEnum_EWaveSpectrumType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3599812958U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::ScriptStructInfo[] = {
		{ FGerstnerWave::StaticStruct, Z_Construct_UScriptStruct_FGerstnerWave_Statics::NewStructOps, TEXT("GerstnerWave"), &Z_Registration_Info_UScriptStruct_GerstnerWave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGerstnerWave), 3519870895U) },
		{ FGerstnerWaveOctave::StaticStruct, Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics::NewStructOps, TEXT("GerstnerWaveOctave"), &Z_Registration_Info_UScriptStruct_GerstnerWaveOctave, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGerstnerWaveOctave), 3924218553U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase, UGerstnerWaterWaveGeneratorBase::StaticClass, TEXT("UGerstnerWaterWaveGeneratorBase"), &Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGerstnerWaterWaveGeneratorBase), 1195859454U) },
		{ Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple, UGerstnerWaterWaveGeneratorSimple::StaticClass, TEXT("UGerstnerWaterWaveGeneratorSimple"), &Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSimple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGerstnerWaterWaveGeneratorSimple), 1272023363U) },
		{ Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum, UGerstnerWaterWaveGeneratorSpectrum::StaticClass, TEXT("UGerstnerWaterWaveGeneratorSpectrum"), &Z_Registration_Info_UClass_UGerstnerWaterWaveGeneratorSpectrum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGerstnerWaterWaveGeneratorSpectrum), 1300865592U) },
		{ Z_Construct_UClass_UGerstnerWaterWaves, UGerstnerWaterWaves::StaticClass, TEXT("UGerstnerWaterWaves"), &Z_Registration_Info_UClass_UGerstnerWaterWaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGerstnerWaterWaves), 3324035540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_1213748402(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
