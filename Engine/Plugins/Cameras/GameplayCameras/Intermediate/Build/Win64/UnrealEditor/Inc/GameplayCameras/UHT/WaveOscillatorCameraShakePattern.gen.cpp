// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveOscillatorCameraShakePattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveOscillatorCameraShakePattern() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UEnum* Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveOscillator();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType;
	static UEnum* EInitialWaveOscillatorOffsetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("EInitialWaveOscillatorOffsetType"));
		}
		return Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UEnum* StaticEnum<EInitialWaveOscillatorOffsetType>()
	{
		return EInitialWaveOscillatorOffsetType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::Enumerators[] = {
		{ "EInitialWaveOscillatorOffsetType::Random", (int64)EInitialWaveOscillatorOffsetType::Random },
		{ "EInitialWaveOscillatorOffsetType::Zero", (int64)EInitialWaveOscillatorOffsetType::Zero },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Shake start offset parameter. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "Random.Comment", "/** Start with random offset (default). */" },
		{ "Random.Name", "EInitialWaveOscillatorOffsetType::Random" },
		{ "Random.ToolTip", "Start with random offset (default)." },
		{ "ToolTip", "Shake start offset parameter." },
		{ "Zero.Comment", "/** Start with zero offset. */" },
		{ "Zero.Name", "EInitialWaveOscillatorOffsetType::Zero" },
		{ "Zero.ToolTip", "Start with zero offset." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		"EInitialWaveOscillatorOffsetType",
		"EInitialWaveOscillatorOffsetType",
		Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType()
	{
		if (!Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType.InnerSingleton, Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveOscillator;
class UScriptStruct* FWaveOscillator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveOscillator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveOscillator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveOscillator, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("WaveOscillator"));
	}
	return Z_Registration_Info_UScriptStruct_WaveOscillator.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FWaveOscillator>()
{
	return FWaveOscillator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveOscillator_Statics
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_InitialOffsetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialOffsetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialOffsetType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A wave oscillator for a single number. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "A wave oscillator for a single number." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveOscillator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Amplitude of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Amplitude of the sinusoidal oscillation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveOscillator, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Frequency of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Frequency of the sinusoidal oscillation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveOscillator, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_MetaData[] = {
		{ "Category", "Oscillation" },
		{ "Comment", "/** Defines how to begin the oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Defines how to begin the oscillation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType = { "InitialOffsetType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveOscillator, InitialOffsetType), Z_Construct_UEnum_GameplayCameras_EInitialWaveOscillatorOffsetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_MetaData)) }; // 12013822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveOscillator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewProp_InitialOffsetType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveOscillator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"WaveOscillator",
		sizeof(FWaveOscillator),
		alignof(FWaveOscillator),
		Z_Construct_UScriptStruct_FWaveOscillator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveOscillator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveOscillator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveOscillator()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveOscillator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveOscillator.InnerSingleton, Z_Construct_UScriptStruct_FWaveOscillator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveOscillator.InnerSingleton;
	}
	void UWaveOscillatorCameraShakePattern::StaticRegisterNativesUWaveOscillatorCameraShakePattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveOscillatorCameraShakePattern);
	UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern_NoRegister()
	{
		return UWaveOscillatorCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationAmplitudeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationAmplitudeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationFrequencyMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationFrequencyMultiplier;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAmplitudeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAmplitudeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationFrequencyMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationFrequencyMultiplier;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Location,Rotation,FOV,Timing" },
		{ "Comment", "/**\n * A camera shake that uses oscillations to move the camera.\n */" },
		{ "IncludePath", "WaveOscillatorCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera shake that uses oscillations to move the camera." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amplitude multiplier for all location oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all location oscillation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier = { "LocationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, LocationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Frequency multiplier for all location oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all location oscillation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier = { "LocationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, LocationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Oscillation in the X axis. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Oscillation in the X axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, X), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Oscillation in the Y axis. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Oscillation in the Y axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Y), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Oscillation in the Z axis. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Oscillation in the Z axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Z), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Amplitude multiplier for all rotation oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all rotation oscillation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier = { "RotationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, RotationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Frequency multiplier for all rotation oscillation */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all rotation oscillation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier = { "RotationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, RotationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Pitch oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Pitch oscillation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Pitch), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Yaw oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Yaw oscillation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Yaw), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Roll oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "Roll oscillation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, Roll), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll_MetaData)) }; // 2877888459
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "Comment", "/** FOV oscillation. */" },
		{ "ModuleRelativePath", "Public/WaveOscillatorCameraShakePattern.h" },
		{ "ToolTip", "FOV oscillation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveOscillatorCameraShakePattern, FOV), Z_Construct_UScriptStruct_FWaveOscillator, METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV_MetaData)) }; // 2877888459
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::NewProp_FOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveOscillatorCameraShakePattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::ClassParams = {
		&UWaveOscillatorCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveOscillatorCameraShakePattern()
	{
		if (!Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.OuterSingleton, Z_Construct_UClass_UWaveOscillatorCameraShakePattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UWaveOscillatorCameraShakePattern>()
	{
		return UWaveOscillatorCameraShakePattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveOscillatorCameraShakePattern);
	UWaveOscillatorCameraShakePattern::~UWaveOscillatorCameraShakePattern() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::EnumInfo[] = {
		{ EInitialWaveOscillatorOffsetType_StaticEnum, TEXT("EInitialWaveOscillatorOffsetType"), &Z_Registration_Info_UEnum_EInitialWaveOscillatorOffsetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 12013822U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::ScriptStructInfo[] = {
		{ FWaveOscillator::StaticStruct, Z_Construct_UScriptStruct_FWaveOscillator_Statics::NewStructOps, TEXT("WaveOscillator"), &Z_Registration_Info_UScriptStruct_WaveOscillator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveOscillator), 2877888459U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveOscillatorCameraShakePattern, UWaveOscillatorCameraShakePattern::StaticClass, TEXT("UWaveOscillatorCameraShakePattern"), &Z_Registration_Info_UClass_UWaveOscillatorCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveOscillatorCameraShakePattern), 1140606523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_2044091125(TEXT("/Script/GameplayCameras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_WaveOscillatorCameraShakePattern_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
