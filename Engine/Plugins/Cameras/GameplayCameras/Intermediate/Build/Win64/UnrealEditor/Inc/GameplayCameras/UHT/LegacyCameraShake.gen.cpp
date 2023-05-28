// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LegacyCameraShake.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyCameraShake() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShake();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShake_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset();
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FFOscillator();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FROscillator();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FVOscillator();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UCameraAnimationSequence_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakePattern_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOscillatorWaveform;
	static UEnum* EOscillatorWaveform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOscillatorWaveform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOscillatorWaveform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EOscillatorWaveform"));
		}
		return Z_Registration_Info_UEnum_EOscillatorWaveform.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EOscillatorWaveform>()
	{
		return EOscillatorWaveform_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::Enumerators[] = {
		{ "EOscillatorWaveform::SineWave", (int64)EOscillatorWaveform::SineWave },
		{ "EOscillatorWaveform::PerlinNoise", (int64)EOscillatorWaveform::PerlinNoise },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Types of waveforms that can be used for camera shake oscillators */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "PerlinNoise.Comment", "/** Perlin noise */" },
		{ "PerlinNoise.Name", "EOscillatorWaveform::PerlinNoise" },
		{ "PerlinNoise.ToolTip", "Perlin noise" },
		{ "SineWave.Comment", "/** A sinusoidal wave */" },
		{ "SineWave.Name", "EOscillatorWaveform::SineWave" },
		{ "SineWave.ToolTip", "A sinusoidal wave" },
		{ "ToolTip", "Types of waveforms that can be used for camera shake oscillators" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		"EOscillatorWaveform",
		"EOscillatorWaveform",
		Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform()
	{
		if (!Z_Registration_Info_UEnum_EOscillatorWaveform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOscillatorWaveform.InnerSingleton, Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOscillatorWaveform.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInitialOscillatorOffset;
	static UEnum* EInitialOscillatorOffset_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInitialOscillatorOffset.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInitialOscillatorOffset.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EInitialOscillatorOffset"));
		}
		return Z_Registration_Info_UEnum_EInitialOscillatorOffset.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EInitialOscillatorOffset>()
	{
		return EInitialOscillatorOffset_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::Enumerators[] = {
		{ "EOO_OffsetRandom", (int64)EOO_OffsetRandom },
		{ "EOO_OffsetZero", (int64)EOO_OffsetZero },
		{ "EOO_MAX", (int64)EOO_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Shake start offset parameter */" },
		{ "EOO_MAX.Name", "EOO_MAX" },
		{ "EOO_OffsetRandom.Comment", "/** Start with random offset (default). */" },
		{ "EOO_OffsetRandom.DisplayName", "Random" },
		{ "EOO_OffsetRandom.Name", "EOO_OffsetRandom" },
		{ "EOO_OffsetRandom.ToolTip", "Start with random offset (default)." },
		{ "EOO_OffsetZero.Comment", "/** Start with zero offset. */" },
		{ "EOO_OffsetZero.DisplayName", "Zero" },
		{ "EOO_OffsetZero.Name", "EOO_OffsetZero" },
		{ "EOO_OffsetZero.ToolTip", "Start with zero offset." },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Shake start offset parameter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		"EInitialOscillatorOffset",
		"EInitialOscillatorOffset",
		Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset()
	{
		if (!Z_Registration_Info_UEnum_EInitialOscillatorOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInitialOscillatorOffset.InnerSingleton, Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInitialOscillatorOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOscillator;
class UScriptStruct* FFOscillator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOscillator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOscillator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFOscillator, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("FOscillator"));
	}
	return Z_Registration_Info_UScriptStruct_FOscillator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FFOscillator>()
{
	return FFOscillator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFOscillator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialOffset_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Waveform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Waveform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Waveform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines oscillation of a single number. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Defines oscillation of a single number." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFOscillator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Amplitude of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Amplitude of the sinusoidal oscillation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFOscillator, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Frequency of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Frequency of the sinusoidal oscillation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFOscillator, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Defines how to begin (either at zero, or at a randomized value. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Defines how to begin (either at zero, or at a randomized value." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset = { "InitialOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFOscillator, InitialOffset), Z_Construct_UEnum_GameplayCameras_EInitialOscillatorOffset, METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset_MetaData)) }; // 2220902440
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData[] = {
		{ "Category", "FOscillator" },
		{ "Comment", "/** Type of waveform to use for oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Type of waveform to use for oscillation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform = { "Waveform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFOscillator, Waveform), Z_Construct_UEnum_GameplayCameras_EOscillatorWaveform, METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_MetaData)) }; // 2857382825
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_InitialOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFOscillator_Statics::NewProp_Waveform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"FOscillator",
		sizeof(FFOscillator),
		alignof(FFOscillator),
		Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFOscillator()
	{
		if (!Z_Registration_Info_UScriptStruct_FOscillator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOscillator.InnerSingleton, Z_Construct_UScriptStruct_FFOscillator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FOscillator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ROscillator;
class UScriptStruct* FROscillator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ROscillator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ROscillator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FROscillator, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("ROscillator"));
	}
	return Z_Registration_Info_UScriptStruct_ROscillator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FROscillator>()
{
	return FROscillator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FROscillator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines FRotator oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Defines FRotator oscillation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FROscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FROscillator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "Comment", "/** Pitch oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Pitch oscillation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FROscillator, Pitch), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch_MetaData)) }; // 3143699565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "Comment", "/** Yaw oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Yaw oscillation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FROscillator, Yaw), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw_MetaData)) }; // 3143699565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "ROscillator" },
		{ "Comment", "/** Roll oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Roll oscillation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FROscillator, Roll), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll_MetaData)) }; // 3143699565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FROscillator_Statics::NewProp_Roll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FROscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"ROscillator",
		sizeof(FROscillator),
		alignof(FROscillator),
		Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FROscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FROscillator()
	{
		if (!Z_Registration_Info_UScriptStruct_ROscillator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ROscillator.InnerSingleton, Z_Construct_UScriptStruct_FROscillator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ROscillator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VOscillator;
class UScriptStruct* FVOscillator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VOscillator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VOscillator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVOscillator, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("VOscillator"));
	}
	return Z_Registration_Info_UScriptStruct_VOscillator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FVOscillator>()
{
	return FVOscillator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVOscillator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines FVector oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Defines FVector oscillation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVOscillator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "Comment", "/** Oscillation in the X axis. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Oscillation in the X axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVOscillator, X), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X_MetaData)) }; // 3143699565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "Comment", "/** Oscillation in the Y axis. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Oscillation in the Y axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVOscillator, Y), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y_MetaData)) }; // 3143699565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "VOscillator" },
		{ "Comment", "/** Oscillation in the Z axis. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Oscillation in the Z axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVOscillator, Z), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z_MetaData)) }; // 3143699565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVOscillator_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"VOscillator",
		sizeof(FVOscillator),
		alignof(FVOscillator),
		Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVOscillator()
	{
		if (!Z_Registration_Info_UScriptStruct_VOscillator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VOscillator.InnerSingleton, Z_Construct_UScriptStruct_FVOscillator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VOscillator.InnerSingleton;
	}
	DEFINE_FUNCTION(ULegacyCameraShake::execStartLegacyCameraShakeFromSource)
	{
		P_GET_OBJECT(APlayerCameraManager,Z_Param_PlayerCameraManager);
		P_GET_OBJECT(UClass,Z_Param_ShakeClass);
		P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULegacyCameraShake**)Z_Param__Result=ULegacyCameraShake::StartLegacyCameraShakeFromSource(Z_Param_PlayerCameraManager,Z_Param_ShakeClass,Z_Param_SourceComponent,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULegacyCameraShake::execStartLegacyCameraShake)
	{
		P_GET_OBJECT(APlayerCameraManager,Z_Param_PlayerCameraManager);
		P_GET_OBJECT(UClass,Z_Param_ShakeClass);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULegacyCameraShake**)Z_Param__Result=ULegacyCameraShake::StartLegacyCameraShake(Z_Param_PlayerCameraManager,Z_Param_ShakeClass,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULegacyCameraShake::execReceiveIsFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceiveIsFinished_Implementation();
		P_NATIVE_END;
	}
	struct LegacyCameraShake_eventBlueprintUpdateCameraShake_Parms
	{
		float DeltaTime;
		float Alpha;
		FMinimalViewInfo POV;
		FMinimalViewInfo ModifiedPOV;
	};
	struct LegacyCameraShake_eventReceiveIsFinished_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		LegacyCameraShake_eventReceiveIsFinished_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct LegacyCameraShake_eventReceivePlayShake_Parms
	{
		float Scale;
	};
	struct LegacyCameraShake_eventReceiveStopShake_Parms
	{
		bool bImmediately;
	};
	static FName NAME_ULegacyCameraShake_BlueprintUpdateCameraShake = FName(TEXT("BlueprintUpdateCameraShake"));
	void ULegacyCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, FMinimalViewInfo const& POV, FMinimalViewInfo& ModifiedPOV)
	{
		LegacyCameraShake_eventBlueprintUpdateCameraShake_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.Alpha=Alpha;
		Parms.POV=POV;
		Parms.ModifiedPOV=ModifiedPOV;
		ProcessEvent(FindFunctionChecked(NAME_ULegacyCameraShake_BlueprintUpdateCameraShake),&Parms);
		ModifiedPOV=Parms.ModifiedPOV;
	}
	static FName NAME_ULegacyCameraShake_ReceiveIsFinished = FName(TEXT("ReceiveIsFinished"));
	bool ULegacyCameraShake::ReceiveIsFinished() const
	{
		LegacyCameraShake_eventReceiveIsFinished_Parms Parms;
		const_cast<ULegacyCameraShake*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULegacyCameraShake_ReceiveIsFinished),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ULegacyCameraShake_ReceivePlayShake = FName(TEXT("ReceivePlayShake"));
	void ULegacyCameraShake::ReceivePlayShake(float Scale)
	{
		LegacyCameraShake_eventReceivePlayShake_Parms Parms;
		Parms.Scale=Scale;
		ProcessEvent(FindFunctionChecked(NAME_ULegacyCameraShake_ReceivePlayShake),&Parms);
	}
	static FName NAME_ULegacyCameraShake_ReceiveStopShake = FName(TEXT("ReceiveStopShake"));
	void ULegacyCameraShake::ReceiveStopShake(bool bImmediately)
	{
		LegacyCameraShake_eventReceiveStopShake_Parms Parms;
		Parms.bImmediately=bImmediately ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ULegacyCameraShake_ReceiveStopShake),&Parms);
	}
	void ULegacyCameraShake::StaticRegisterNativesULegacyCameraShake()
	{
		UClass* Class = ULegacyCameraShake::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveIsFinished", &ULegacyCameraShake::execReceiveIsFinished },
			{ "StartLegacyCameraShake", &ULegacyCameraShake::execStartLegacyCameraShake },
			{ "StartLegacyCameraShakeFromSource", &ULegacyCameraShake::execStartLegacyCameraShakeFromSource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedPOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventBlueprintUpdateCameraShake_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventBlueprintUpdateCameraShake_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventBlueprintUpdateCameraShake_Parms, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV_MetaData)) }; // 1056960465
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_ModifiedPOV = { "ModifiedPOV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventBlueprintUpdateCameraShake_Parms, ModifiedPOV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) }; // 1056960465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_POV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::NewProp_ModifiedPOV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Called every tick to let the shake modify the point of view */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Called every tick to let the shake modify the point of view" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegacyCameraShake, nullptr, "BlueprintUpdateCameraShake", nullptr, nullptr, sizeof(LegacyCameraShake_eventBlueprintUpdateCameraShake_Parms), Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LegacyCameraShake_eventReceiveIsFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LegacyCameraShake_eventReceiveIsFinished_Parms), &Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Called to allow a shake to decide when it's finished playing. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Called to allow a shake to decide when it's finished playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegacyCameraShake, nullptr, "ReceiveIsFinished", nullptr, nullptr, sizeof(LegacyCameraShake_eventReceiveIsFinished_Parms), Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventReceivePlayShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::NewProp_Scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Called when the shake starts playing */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Called when the shake starts playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegacyCameraShake, nullptr, "ReceivePlayShake", nullptr, nullptr, sizeof(LegacyCameraShake_eventReceivePlayShake_Parms), Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics
	{
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((LegacyCameraShake_eventReceiveStopShake_Parms*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LegacyCameraShake_eventReceiveStopShake_Parms), &Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::NewProp_bImmediately,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/**\n\x09 * Called when the shake is explicitly stopped.\n\x09 * @param bImmediatly\x09\x09If true, shake stops right away regardless of blend out settings. If false, shake may blend out according to its settings.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Called when the shake is explicitly stopped.\n@param bImmediatly           If true, shake stops right away regardless of blend out settings. If false, shake may blend out according to its settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegacyCameraShake, nullptr, "ReceiveStopShake", nullptr, nullptr, sizeof(LegacyCameraShake_eventReceiveStopShake_Parms), Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics
	{
		struct LegacyCameraShake_eventStartLegacyCameraShake_Parms
		{
			APlayerCameraManager* PlayerCameraManager;
			TSubclassOf<ULegacyCameraShake>  ShakeClass;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			ULegacyCameraShake* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShake_Parms, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShake_Parms, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULegacyCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShake_Parms, ReturnValue), Z_Construct_UClass_ULegacyCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_PlayerCameraManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_UserPlaySpaceRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/**\n\x09 * Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a legacy camera shake,\n\x09 * which some BP logic often uses directly to set oscillator/anim properties.\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a legacy camera shake,\nwhich some BP logic often uses directly to set oscillator/anim properties." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegacyCameraShake, nullptr, "StartLegacyCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::LegacyCameraShake_eventStartLegacyCameraShake_Parms), Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics
	{
		struct LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms
		{
			APlayerCameraManager* PlayerCameraManager;
			TSubclassOf<ULegacyCameraShake>  ShakeClass;
			UCameraShakeSourceComponent* SourceComponent;
			float Scale;
			ECameraShakePlaySpace PlaySpace;
			FRotator UserPlaySpaceRot;
			ULegacyCameraShake* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULegacyCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(nullptr, 0) }; // 1413967709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms, ReturnValue), Z_Construct_UClass_ULegacyCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_PlayerCameraManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_UserPlaySpaceRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera Shakes" },
		{ "Comment", "/**\n\x09 * Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a legacy camera shake,\n\x09 * which some BP logic often uses directly to set oscillator/anim properties.\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Backwards compatible method used by core BP redirectors. This is needed because the return value is specifically a legacy camera shake,\nwhich some BP logic often uses directly to set oscillator/anim properties." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegacyCameraShake, nullptr, "StartLegacyCameraShakeFromSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::LegacyCameraShake_eventStartLegacyCameraShakeFromSource_Parms), Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyCameraShake);
	UClass* Z_Construct_UClass_ULegacyCameraShake_NoRegister()
	{
		return ULegacyCameraShake::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyCameraShake_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OscillationDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OscillationBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillationBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotOscillation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotOscillation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocOscillation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocOscillation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVOscillation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FOVOscillation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimBlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlendOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimBlendOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomAnimSegmentDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomAnimSegmentDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomAnimSegment_MetaData[];
#endif
		static void NewProp_bRandomAnimSegment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomAnimSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OscillatorTimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OscillatorTimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceShakePattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SequenceShakePattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyCameraShake_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULegacyCameraShake_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULegacyCameraShake_BlueprintUpdateCameraShake, "BlueprintUpdateCameraShake" }, // 951042938
		{ &Z_Construct_UFunction_ULegacyCameraShake_ReceiveIsFinished, "ReceiveIsFinished" }, // 775023817
		{ &Z_Construct_UFunction_ULegacyCameraShake_ReceivePlayShake, "ReceivePlayShake" }, // 3849490260
		{ &Z_Construct_UFunction_ULegacyCameraShake_ReceiveStopShake, "ReceiveStopShake" }, // 2226752656
		{ &Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShake, "StartLegacyCameraShake" }, // 955841920
		{ &Z_Construct_UFunction_ULegacyCameraShake_StartLegacyCameraShakeFromSource, "StartLegacyCameraShakeFromSource" }, // 2506694558
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Legacy camera shake which can do either oscillation or run camera anims.\n */" },
		{ "HideCategories", "CameraShakePattern" },
		{ "IncludePath", "LegacyCameraShake.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Legacy camera shake which can do either oscillation or run camera anims." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationDuration_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Duration in seconds of current screen shake. Less than 0 means indefinite, 0 means no oscillation. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Duration in seconds of current screen shake. Less than 0 means indefinite, 0 means no oscillation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationDuration = { "OscillationDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, OscillationDuration), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration of the blend-in, where the oscillation scales from 0 to 1. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Duration of the blend-in, where the oscillation scales from 0 to 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendInTime = { "OscillationBlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, OscillationBlendInTime), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Duration of the blend-out, where the oscillation scales from 1 to 0. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Duration of the blend-out, where the oscillation scales from 1 to 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendOutTime = { "OscillationBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, OscillationBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RotOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Rotational oscillation */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Rotational oscillation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RotOscillation = { "RotOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, RotOscillation), Z_Construct_UScriptStruct_FROscillator, METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RotOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RotOscillation_MetaData)) }; // 1909440285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_LocOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Positional oscillation */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Positional oscillation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_LocOscillation = { "LocOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, LocOscillation), Z_Construct_UScriptStruct_FVOscillator, METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_LocOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_LocOscillation_MetaData)) }; // 3130939132
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_FOVOscillation_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** FOV oscillation */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "FOV oscillation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_FOVOscillation = { "FOVOscillation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, FOVOscillation), Z_Construct_UScriptStruct_FFOscillator, METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_FOVOscillation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_FOVOscillation_MetaData)) }; // 3143699565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Scalar defining how fast to play the anim. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Scalar defining how fast to play the anim." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, AnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimScale_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar defining how \"intense\" to play the anim. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Scalar defining how \"intense\" to play the anim." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimScale = { "AnimScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, AnimScale), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendInTime_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-in time. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Linear blend-in time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendInTime = { "AnimBlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, AnimBlendInTime), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Linear blend-out time. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Linear blend-out time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendOutTime = { "AnimBlendOutTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, AnimBlendOutTime), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** When bRandomAnimSegment is true, this defines how long the anim should play. */" },
		{ "editcondition", "bRandomAnimSegment" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "When bRandomAnimSegment is true, this defines how long the anim should play." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RandomAnimSegmentDuration = { "RandomAnimSegmentDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, RandomAnimSegmentDuration), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RandomAnimSegmentDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "Comment", "/** Source camera animation sequence to play. Can be null. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Source camera animation sequence to play. Can be null." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, AnimSequence), Z_Construct_UClass_UCameraAnimationSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData[] = {
		{ "Category", "AnimShake" },
		{ "Comment", "/**\n\x09* If true, play a random snippet of the animation of length Duration.  Implies bLoop and bRandomStartTime = true for the AnimSequence.\n\x09* If false, play the full anim once, non-looped. Useful for getting variety out of a single looped AnimSequence asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "If true, play a random snippet of the animation of length Duration.  Implies bLoop and bRandomStartTime = true for the AnimSequence.\nIf false, play the full anim once, non-looped. Useful for getting variety out of a single looped AnimSequence asset." },
	};
#endif
	void Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_bRandomAnimSegment_SetBit(void* Obj)
	{
		((ULegacyCameraShake*)Obj)->bRandomAnimSegment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_bRandomAnimSegment = { "bRandomAnimSegment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULegacyCameraShake), &Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_bRandomAnimSegment_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_bRandomAnimSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Time remaining for oscillation shakes. Less than 0.f means shake infinitely. */" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Time remaining for oscillation shakes. Less than 0.f means shake infinitely." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillatorTimeRemaining = { "OscillatorTimeRemaining", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, OscillatorTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillatorTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_SequenceShakePattern_MetaData[] = {
		{ "Comment", "/** Sequence shake pattern for when using a sequence instead of a camera anim */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Sequence shake pattern for when using a sequence instead of a camera anim" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_SequenceShakePattern = { "SequenceShakePattern", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULegacyCameraShake, SequenceShakePattern), Z_Construct_UClass_USequenceCameraShakePattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_SequenceShakePattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_SequenceShakePattern_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULegacyCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillationBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RotOscillation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_LocOscillation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_FOVOscillation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimBlendOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_RandomAnimSegmentDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_bRandomAnimSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_OscillatorTimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULegacyCameraShake_Statics::NewProp_SequenceShakePattern,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyCameraShake_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyCameraShake>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyCameraShake_Statics::ClassParams = {
		&ULegacyCameraShake::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULegacyCameraShake_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShake_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShake_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyCameraShake()
	{
		if (!Z_Registration_Info_UClass_ULegacyCameraShake.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyCameraShake.OuterSingleton, Z_Construct_UClass_ULegacyCameraShake_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyCameraShake.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<ULegacyCameraShake>()
	{
		return ULegacyCameraShake::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyCameraShake);
	ULegacyCameraShake::~ULegacyCameraShake() {}
	void ULegacyCameraShakePattern::StaticRegisterNativesULegacyCameraShakePattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyCameraShakePattern);
	UClass* Z_Construct_UClass_ULegacyCameraShakePattern_NoRegister()
	{
		return ULegacyCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shake pattern for the ULegacyCameraShake class.\n *\n * It doesn't do anything because, for backwards compatibility reasons, all the data\n * was left on the shake class itself... so this pattern delegates everything back\n * to the owner shake.\n */" },
		{ "IncludePath", "LegacyCameraShake.h" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Shake pattern for the ULegacyCameraShake class.\n\nIt doesn't do anything because, for backwards compatibility reasons, all the data\nwas left on the shake class itself... so this pattern delegates everything back\nto the owner shake." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyCameraShakePattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyCameraShakePattern_Statics::ClassParams = {
		&ULegacyCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x041010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyCameraShakePattern()
	{
		if (!Z_Registration_Info_UClass_ULegacyCameraShakePattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyCameraShakePattern.OuterSingleton, Z_Construct_UClass_ULegacyCameraShakePattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyCameraShakePattern.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<ULegacyCameraShakePattern>()
	{
		return ULegacyCameraShakePattern::StaticClass();
	}
	ULegacyCameraShakePattern::ULegacyCameraShakePattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyCameraShakePattern);
	ULegacyCameraShakePattern::~ULegacyCameraShakePattern() {}
	DEFINE_FUNCTION(ULegacyCameraShakeFunctionLibrary::execConv_LegacyCameraShake)
	{
		P_GET_OBJECT(UCameraShakeBase,Z_Param_CameraShake);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULegacyCameraShake**)Z_Param__Result=ULegacyCameraShakeFunctionLibrary::Conv_LegacyCameraShake(Z_Param_CameraShake);
		P_NATIVE_END;
	}
	void ULegacyCameraShakeFunctionLibrary::StaticRegisterNativesULegacyCameraShakeFunctionLibrary()
	{
		UClass* Class = ULegacyCameraShakeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_LegacyCameraShake", &ULegacyCameraShakeFunctionLibrary::execConv_LegacyCameraShake },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics
	{
		struct LegacyCameraShakeFunctionLibrary_eventConv_LegacyCameraShake_Parms
		{
			UCameraShakeBase* CameraShake;
			ULegacyCameraShake* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraShake;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::NewProp_CameraShake = { "CameraShake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShakeFunctionLibrary_eventConv_LegacyCameraShake_Parms, CameraShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LegacyCameraShakeFunctionLibrary_eventConv_LegacyCameraShake_Parms, ReturnValue), Z_Construct_UClass_ULegacyCameraShake_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::NewProp_CameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Camera Shakes" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary, nullptr, "Conv_LegacyCameraShake", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::LegacyCameraShakeFunctionLibrary_eventConv_LegacyCameraShake_Parms), Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyCameraShakeFunctionLibrary);
	UClass* Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_NoRegister()
	{
		return ULegacyCameraShakeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake, "Conv_LegacyCameraShake" }, // 2677389188
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library for autocasting from a base camera shake to a legacy camera shake.\n * This prevents breaking Blueprints now that APlayerCameraManager::StartCameraShake returns the base class.\n */" },
		{ "IncludePath", "LegacyCameraShake.h" },
		{ "ModuleRelativePath", "Public/LegacyCameraShake.h" },
		{ "ToolTip", "Blueprint function library for autocasting from a base camera shake to a legacy camera shake.\nThis prevents breaking Blueprints now that APlayerCameraManager::StartCameraShake returns the base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyCameraShakeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::ClassParams = {
		&ULegacyCameraShakeFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.OuterSingleton, Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<ULegacyCameraShakeFunctionLibrary>()
	{
		return ULegacyCameraShakeFunctionLibrary::StaticClass();
	}
	ULegacyCameraShakeFunctionLibrary::ULegacyCameraShakeFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyCameraShakeFunctionLibrary);
	ULegacyCameraShakeFunctionLibrary::~ULegacyCameraShakeFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::EnumInfo[] = {
		{ EOscillatorWaveform_StaticEnum, TEXT("EOscillatorWaveform"), &Z_Registration_Info_UEnum_EOscillatorWaveform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2857382825U) },
		{ EInitialOscillatorOffset_StaticEnum, TEXT("EInitialOscillatorOffset"), &Z_Registration_Info_UEnum_EInitialOscillatorOffset, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2220902440U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::ScriptStructInfo[] = {
		{ FFOscillator::StaticStruct, Z_Construct_UScriptStruct_FFOscillator_Statics::NewStructOps, TEXT("FOscillator"), &Z_Registration_Info_UScriptStruct_FOscillator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFOscillator), 3143699565U) },
		{ FROscillator::StaticStruct, Z_Construct_UScriptStruct_FROscillator_Statics::NewStructOps, TEXT("ROscillator"), &Z_Registration_Info_UScriptStruct_ROscillator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FROscillator), 1909440285U) },
		{ FVOscillator::StaticStruct, Z_Construct_UScriptStruct_FVOscillator_Statics::NewStructOps, TEXT("VOscillator"), &Z_Registration_Info_UScriptStruct_VOscillator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVOscillator), 3130939132U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULegacyCameraShake, ULegacyCameraShake::StaticClass, TEXT("ULegacyCameraShake"), &Z_Registration_Info_UClass_ULegacyCameraShake, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyCameraShake), 3859862983U) },
		{ Z_Construct_UClass_ULegacyCameraShakePattern, ULegacyCameraShakePattern::StaticClass, TEXT("ULegacyCameraShakePattern"), &Z_Registration_Info_UClass_ULegacyCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyCameraShakePattern), 2180235070U) },
		{ Z_Construct_UClass_ULegacyCameraShakeFunctionLibrary, ULegacyCameraShakeFunctionLibrary::StaticClass, TEXT("ULegacyCameraShakeFunctionLibrary"), &Z_Registration_Info_UClass_ULegacyCameraShakeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyCameraShakeFunctionLibrary), 2466268230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_890889427(TEXT("/Script/GameplayCameras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_LegacyCameraShake_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
