// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PerlinNoiseCameraShakePattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerlinNoiseCameraShakePattern() {}
// Cross Module References
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern_NoRegister();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_USimpleCameraShakePattern();
	GAMEPLAYCAMERAS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseShaker();
	UPackage* Z_Construct_UPackage__Script_GameplayCameras();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerlinNoiseShaker;
class UScriptStruct* FPerlinNoiseShaker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerlinNoiseShaker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerlinNoiseShaker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseShaker, (UObject*)Z_Construct_UPackage__Script_GameplayCameras(), TEXT("PerlinNoiseShaker"));
	}
	return Z_Registration_Info_UScriptStruct_PerlinNoiseShaker.OuterSingleton;
}
template<> GAMEPLAYCAMERAS_API UScriptStruct* StaticStruct<FPerlinNoiseShaker>()
{
	return FPerlinNoiseShaker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A perlin noise shaker for a single number. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "A perlin noise shaker for a single number." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerlinNoiseShaker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "PerlinNoise" },
		{ "Comment", "/** Amplitude of the perlin noise. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Amplitude of the perlin noise." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerlinNoiseShaker, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "PerlinNoise" },
		{ "Comment", "/** Frequency of the sinusoidal oscillation. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Frequency of the sinusoidal oscillation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerlinNoiseShaker, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewProp_Frequency,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
		nullptr,
		&NewStructOps,
		"PerlinNoiseShaker",
		sizeof(FPerlinNoiseShaker),
		alignof(FPerlinNoiseShaker),
		Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseShaker()
	{
		if (!Z_Registration_Info_UScriptStruct_PerlinNoiseShaker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerlinNoiseShaker.InnerSingleton, Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerlinNoiseShaker.InnerSingleton;
	}
	void UPerlinNoiseCameraShakePattern::StaticRegisterNativesUPerlinNoiseCameraShakePattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPerlinNoiseCameraShakePattern);
	UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern_NoRegister()
	{
		return UPerlinNoiseCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics
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
	UObject* (*const Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleCameraShakePattern,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayCameras,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Location,Rotation,FOV,Timing" },
		{ "Comment", "/**\n * A camera shake that uses Perlin noise to shake the camera.\n */" },
		{ "IncludePath", "PerlinNoiseCameraShakePattern.h" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A camera shake that uses Perlin noise to shake the camera." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Amplitude multiplier for all location shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all location shake" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier = { "LocationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, LocationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Frequency multiplier for all location shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all location shake" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier = { "LocationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, LocationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Shake in the X axis. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Shake in the X axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, X), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X_MetaData)) }; // 4278322993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Shake in the Y axis. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Shake in the Y axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Y), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y_MetaData)) }; // 4278322993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Shake in the Z axis. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Shake in the Z axis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Z), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z_MetaData)) }; // 4278322993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Amplitude multiplier for all rotation shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Amplitude multiplier for all rotation shake" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier = { "RotationAmplitudeMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, RotationAmplitudeMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Frequency multiplier for all rotation shake */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Frequency multiplier for all rotation shake" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier = { "RotationFrequencyMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, RotationFrequencyMultiplier), METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Pitch shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Pitch shake." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Pitch), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch_MetaData)) }; // 4278322993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Yaw shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Yaw shake." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Yaw), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw_MetaData)) }; // 4278322993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Roll shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "Roll shake." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, Roll), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll_MetaData)) }; // 4278322993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "FOV" },
		{ "Comment", "/** FOV shake. */" },
		{ "ModuleRelativePath", "Public/PerlinNoiseCameraShakePattern.h" },
		{ "ToolTip", "FOV shake." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPerlinNoiseCameraShakePattern, FOV), Z_Construct_UScriptStruct_FPerlinNoiseShaker, METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV_MetaData)) }; // 4278322993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_LocationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationAmplitudeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_RotationFrequencyMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::NewProp_FOV,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerlinNoiseCameraShakePattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::ClassParams = {
		&UPerlinNoiseCameraShakePattern::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerlinNoiseCameraShakePattern()
	{
		if (!Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.OuterSingleton, Z_Construct_UClass_UPerlinNoiseCameraShakePattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern.OuterSingleton;
	}
	template<> GAMEPLAYCAMERAS_API UClass* StaticClass<UPerlinNoiseCameraShakePattern>()
	{
		return UPerlinNoiseCameraShakePattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerlinNoiseCameraShakePattern);
	UPerlinNoiseCameraShakePattern::~UPerlinNoiseCameraShakePattern() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_Statics::ScriptStructInfo[] = {
		{ FPerlinNoiseShaker::StaticStruct, Z_Construct_UScriptStruct_FPerlinNoiseShaker_Statics::NewStructOps, TEXT("PerlinNoiseShaker"), &Z_Registration_Info_UScriptStruct_PerlinNoiseShaker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerlinNoiseShaker), 4278322993U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPerlinNoiseCameraShakePattern, UPerlinNoiseCameraShakePattern::StaticClass, TEXT("UPerlinNoiseCameraShakePattern"), &Z_Registration_Info_UClass_UPerlinNoiseCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPerlinNoiseCameraShakePattern), 866103229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_3079922808(TEXT("/Script/GameplayCameras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Cameras_GameplayCameras_Source_GameplayCameras_Public_PerlinNoiseCameraShakePattern_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
