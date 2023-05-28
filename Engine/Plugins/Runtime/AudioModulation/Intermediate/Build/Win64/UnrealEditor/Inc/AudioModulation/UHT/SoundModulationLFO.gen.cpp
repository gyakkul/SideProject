// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Generators/SoundModulationLFO.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundModulationLFO() {}
// Cross Module References
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGenerator();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorLFO();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGeneratorLFO_NoRegister();
	AUDIOMODULATION_API UEnum* Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape();
	AUDIOMODULATION_API UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationLFOParams();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundModulationLFOShape;
	static UEnum* ESoundModulationLFOShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundModulationLFOShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundModulationLFOShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("ESoundModulationLFOShape"));
		}
		return Z_Registration_Info_UEnum_ESoundModulationLFOShape.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UEnum* StaticEnum<ESoundModulationLFOShape>()
	{
		return ESoundModulationLFOShape_StaticEnum();
	}
	struct Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::Enumerators[] = {
		{ "ESoundModulationLFOShape::Sine", (int64)ESoundModulationLFOShape::Sine },
		{ "ESoundModulationLFOShape::UpSaw", (int64)ESoundModulationLFOShape::UpSaw },
		{ "ESoundModulationLFOShape::DownSaw", (int64)ESoundModulationLFOShape::DownSaw },
		{ "ESoundModulationLFOShape::Square", (int64)ESoundModulationLFOShape::Square },
		{ "ESoundModulationLFOShape::Triangle", (int64)ESoundModulationLFOShape::Triangle },
		{ "ESoundModulationLFOShape::Exponential", (int64)ESoundModulationLFOShape::Exponential },
		{ "ESoundModulationLFOShape::RandomSampleHold", (int64)ESoundModulationLFOShape::RandomSampleHold },
		{ "ESoundModulationLFOShape::COUNT", (int64)ESoundModulationLFOShape::COUNT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "COUNT.Hidden", "" },
		{ "COUNT.Name", "ESoundModulationLFOShape::COUNT" },
		{ "DownSaw.DisplayName", "Saw (Down)" },
		{ "DownSaw.Name", "ESoundModulationLFOShape::DownSaw" },
		{ "Exponential.DisplayName", "Exponential" },
		{ "Exponential.Name", "ESoundModulationLFOShape::Exponential" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "RandomSampleHold.DisplayName", "Random" },
		{ "RandomSampleHold.Name", "ESoundModulationLFOShape::RandomSampleHold" },
		{ "Sine.DisplayName", "Sine" },
		{ "Sine.Name", "ESoundModulationLFOShape::Sine" },
		{ "Square.DisplayName", "Square" },
		{ "Square.Name", "ESoundModulationLFOShape::Square" },
		{ "Triangle.DisplayName", "Triangle" },
		{ "Triangle.Name", "ESoundModulationLFOShape::Triangle" },
		{ "UpSaw.DisplayName", "Saw (Up)" },
		{ "UpSaw.Name", "ESoundModulationLFOShape::UpSaw" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		"ESoundModulationLFOShape",
		"ESoundModulationLFOShape",
		Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape()
	{
		if (!Z_Registration_Info_UEnum_ESoundModulationLFOShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundModulationLFOShape.InnerSingleton, Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundModulationLFOShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundModulationLFOParams;
class UScriptStruct* FSoundModulationLFOParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundModulationLFOParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundModulationLFOParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundModulationLFOParams, (UObject*)Z_Construct_UPackage__Script_AudioModulation(), TEXT("SoundModulationLFOParams"));
	}
	return Z_Registration_Info_UScriptStruct_SoundModulationLFOParams.OuterSingleton;
}
template<> AUDIOMODULATION_API UScriptStruct* StaticStruct<FSoundModulationLFOParams>()
{
	return FSoundModulationLFOParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExponentialFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExponentialFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundModulationLFOParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Shape_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Shape of oscillating waveform */" },
		{ "DisplayPriority", "20" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Shape of oscillating waveform" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationLFOParams, Shape), Z_Construct_UEnum_AudioModulation_ESoundModulationLFOShape, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Shape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Shape_MetaData)) }; // 3038779520
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_ExponentialFactor_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0.000001" },
		{ "Comment", "/** Factor increasing/decreasing curvature of exponential LFO shape. */" },
		{ "DisplayPriority", "21" },
		{ "EditCondition", "!bBypass && Shape == ESoundModulationLFOShape::Exponential" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Factor increasing/decreasing curvature of exponential LFO shape." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_ExponentialFactor = { "ExponentialFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationLFOParams, ExponentialFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_ExponentialFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_ExponentialFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Pulse width of square LFO shape. */" },
		{ "DisplayPriority", "21" },
		{ "EditCondition", "!bBypass && Shape == ESoundModulationLFOShape::Square" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Pulse width of square LFO shape." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationLFOParams, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amplitude of oscillator */" },
		{ "DisplayPriority", "30" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Amplitude of oscillator" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationLFOParams, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Frequency of oscillator */" },
		{ "DisplayPriority", "40" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Frequency of oscillator" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationLFOParams, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amplitude offset of oscillator */" },
		{ "DisplayPriority", "50" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Amplitude offset of oscillator" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationLFOParams, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Unit phase offset of oscillator */" },
		{ "DisplayPriority", "60" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Unit phase offset of oscillator" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundModulationLFOParams, Phase), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Phase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** Whether or not to loop the oscillation more than once */" },
		{ "DisplayPriority", "70" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "Whether or not to loop the oscillation more than once" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((FSoundModulationLFOParams*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSoundModulationLFOParams), &Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "Modulation" },
		{ "Comment", "/** If true, bypasses LFO bus from being modulated by parameters, patches, or mixed (LFO remains active and computed). */" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ToolTip", "If true, bypasses LFO bus from being modulated by parameters, patches, or mixed (LFO remains active and computed)." },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSoundModulationLFOParams*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSoundModulationLFOParams), &Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bBypass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Shape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Shape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_ExponentialFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_Phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewProp_bBypass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
		nullptr,
		&NewStructOps,
		"SoundModulationLFOParams",
		sizeof(FSoundModulationLFOParams),
		alignof(FSoundModulationLFOParams),
		Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundModulationLFOParams()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundModulationLFOParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundModulationLFOParams.InnerSingleton, Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundModulationLFOParams.InnerSingleton;
	}
	void USoundModulationGeneratorLFO::StaticRegisterNativesUSoundModulationGeneratorLFO()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundModulationGeneratorLFO);
	UClass* Z_Construct_UClass_USoundModulationGeneratorLFO_NoRegister()
	{
		return USoundModulationGeneratorLFO::StaticClass();
	}
	struct Z_Construct_UClass_USoundModulationGeneratorLFO_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulationGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Generators/SoundModulationLFO.h" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/Generators/SoundModulationLFO.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundModulationGeneratorLFO, Params), Z_Construct_UScriptStruct_FSoundModulationLFOParams, METADATA_PARAMS(Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::NewProp_Params_MetaData)) }; // 4167668202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundModulationGeneratorLFO>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::ClassParams = {
		&USoundModulationGeneratorLFO::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundModulationGeneratorLFO()
	{
		if (!Z_Registration_Info_UClass_USoundModulationGeneratorLFO.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundModulationGeneratorLFO.OuterSingleton, Z_Construct_UClass_USoundModulationGeneratorLFO_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundModulationGeneratorLFO.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundModulationGeneratorLFO>()
	{
		return USoundModulationGeneratorLFO::StaticClass();
	}
	USoundModulationGeneratorLFO::USoundModulationGeneratorLFO(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundModulationGeneratorLFO);
	USoundModulationGeneratorLFO::~USoundModulationGeneratorLFO() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::EnumInfo[] = {
		{ ESoundModulationLFOShape_StaticEnum, TEXT("ESoundModulationLFOShape"), &Z_Registration_Info_UEnum_ESoundModulationLFOShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3038779520U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::ScriptStructInfo[] = {
		{ FSoundModulationLFOParams::StaticStruct, Z_Construct_UScriptStruct_FSoundModulationLFOParams_Statics::NewStructOps, TEXT("SoundModulationLFOParams"), &Z_Registration_Info_UScriptStruct_SoundModulationLFOParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundModulationLFOParams), 4167668202U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundModulationGeneratorLFO, USoundModulationGeneratorLFO::StaticClass, TEXT("USoundModulationGeneratorLFO"), &Z_Registration_Info_UClass_USoundModulationGeneratorLFO, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundModulationGeneratorLFO), 3147494339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_4080745503(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_Generators_SoundModulationLFO_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
