// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SourceEffects/SourceEffectStereoDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceEffectStereoDelay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStereoDelaySourceEffect;
	static UEnum* EStereoDelaySourceEffect_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EStereoDelaySourceEffect"));
		}
		return Z_Registration_Info_UEnum_EStereoDelaySourceEffect.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EStereoDelaySourceEffect>()
	{
		return EStereoDelaySourceEffect_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::Enumerators[] = {
		{ "EStereoDelaySourceEffect::Normal", (int64)EStereoDelaySourceEffect::Normal },
		{ "EStereoDelaySourceEffect::Cross", (int64)EStereoDelaySourceEffect::Cross },
		{ "EStereoDelaySourceEffect::PingPong", (int64)EStereoDelaySourceEffect::PingPong },
		{ "EStereoDelaySourceEffect::Count", (int64)EStereoDelaySourceEffect::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EStereoDelaySourceEffect::Count" },
		{ "Cross.Comment", "// Left input mixes right delay line output and feeds to right output.\n// Right input mixes with left delay line output and feeds to left output.\n" },
		{ "Cross.Name", "EStereoDelaySourceEffect::Cross" },
		{ "Cross.ToolTip", "Left input mixes right delay line output and feeds to right output.\nRight input mixes with left delay line output and feeds to left output." },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "Normal.Comment", "// Left input mixes with left delay line output and feeds to left output. \n// Right input mixes with right delay line output and feeds to right output.\n" },
		{ "Normal.Name", "EStereoDelaySourceEffect::Normal" },
		{ "Normal.ToolTip", "Left input mixes with left delay line output and feeds to left output.\nRight input mixes with right delay line output and feeds to right output." },
		{ "PingPong.Comment", "// Left input mixes with left delay line output and feeds to right output.\n// Right input mixes with right delay line output and feeds to left output.\n" },
		{ "PingPong.Name", "EStereoDelaySourceEffect::PingPong" },
		{ "PingPong.ToolTip", "Left input mixes with left delay line output and feeds to right output.\nRight input mixes with right delay line output and feeds to left output." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"EStereoDelaySourceEffect",
		"EStereoDelaySourceEffect",
		Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect()
	{
		if (!Z_Registration_Info_UEnum_EStereoDelaySourceEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStereoDelaySourceEffect.InnerSingleton, Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStereoDelaySourceEffect.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStereoDelayFiltertype;
	static UEnum* EStereoDelayFiltertype_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("EStereoDelayFiltertype"));
		}
		return Z_Registration_Info_UEnum_EStereoDelayFiltertype.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<EStereoDelayFiltertype>()
	{
		return EStereoDelayFiltertype_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::Enumerators[] = {
		{ "EStereoDelayFiltertype::Lowpass", (int64)EStereoDelayFiltertype::Lowpass },
		{ "EStereoDelayFiltertype::Highpass", (int64)EStereoDelayFiltertype::Highpass },
		{ "EStereoDelayFiltertype::Bandpass", (int64)EStereoDelayFiltertype::Bandpass },
		{ "EStereoDelayFiltertype::Notch", (int64)EStereoDelayFiltertype::Notch },
		{ "EStereoDelayFiltertype::Count", (int64)EStereoDelayFiltertype::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::Enum_MetaDataParams[] = {
		{ "Bandpass.Name", "EStereoDelayFiltertype::Bandpass" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Stereo delay filter types\n" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EStereoDelayFiltertype::Count" },
		{ "Highpass.Name", "EStereoDelayFiltertype::Highpass" },
		{ "Lowpass.Name", "EStereoDelayFiltertype::Lowpass" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "Notch.Name", "EStereoDelayFiltertype::Notch" },
		{ "ToolTip", "Stereo delay filter types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"EStereoDelayFiltertype",
		"EStereoDelayFiltertype",
		Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype()
	{
		if (!Z_Registration_Info_UEnum_EStereoDelayFiltertype.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStereoDelayFiltertype.InnerSingleton, Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStereoDelayFiltertype.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings;
class UScriptStruct* FSourceEffectStereoDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SourceEffectStereoDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSourceEffectStereoDelaySettings>()
{
	return FSourceEffectStereoDelaySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DelayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DelayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTimeMsec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTimeMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feedback_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feedback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFilterEnabled_MetaData[];
#endif
		static void NewProp_bFilterEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterQ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterQ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceEffectStereoDelaySettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// What mode to set the stereo delay effect.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "What mode to set the stereo delay effect." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode = { "DelayMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, DelayMode), Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData)) }; // 2161422296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The base amount of delay in the left and right channels of the delay line.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "The base amount of delay in the left and right channels of the delay line." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec = { "DelayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, DelayTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of audio to feedback into the delay line once the delay has been tapped.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "The amount of audio to feedback into the delay line once the delay has been tapped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio = { "DelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, DelayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of delay effect to mix with the dry input signal into the effect.\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "The amount of delay effect to mix with the dry input signal into the effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the effect\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "The dry level of the effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Whether or not to enable filtering\n" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "Whether or not to enable filtering" },
	};
#endif
	void Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit(void* Obj)
	{
		((FSourceEffectStereoDelaySettings*)Obj)->bFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled = { "bFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSourceEffectStereoDelaySettings), &Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "Comment", "// Filter type to feed feedback audio to\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "Filter type to feed feedback audio to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, FilterType), Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype, METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData)) }; // 2260823892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// Cutoff frequency of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "Cutoff frequency of the filter" },
		{ "UIMax", "20000" },
		{ "UIMin", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, FilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "SourceEffect|Preset" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// Q of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
		{ "ToolTip", "Q of the filter" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSourceEffectStereoDelaySettings, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DelayRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_WetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_DryLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewProp_FilterQ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SourceEffectStereoDelaySettings",
		sizeof(FSourceEffectStereoDelaySettings),
		alignof(FSourceEffectStereoDelaySettings),
		Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USourceEffectStereoDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSourceEffectStereoDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USourceEffectStereoDelayPreset::StaticRegisterNativesUSourceEffectStereoDelayPreset()
	{
		UClass* Class = USourceEffectStereoDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USourceEffectStereoDelayPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics
	{
		struct SourceEffectStereoDelayPreset_eventSetSettings_Parms
		{
			FSourceEffectStereoDelaySettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SourceEffectStereoDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1448150023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USourceEffectStereoDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::SourceEffectStereoDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceEffectStereoDelayPreset);
	UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset_NoRegister()
	{
		return USourceEffectStereoDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSourcePreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USourceEffectStereoDelayPreset_SetSettings, "SetSettings" }, // 3466274410
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AudioSourceEffect" },
		{ "IncludePath", "SourceEffects/SourceEffectStereoDelay.h" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Audio|Effects" },
		{ "ModuleRelativePath", "Classes/SourceEffects/SourceEffectStereoDelay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceEffectStereoDelayPreset, Settings), Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData)) }; // 1448150023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceEffectStereoDelayPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::ClassParams = {
		&USourceEffectStereoDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceEffectStereoDelayPreset()
	{
		if (!Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.OuterSingleton, Z_Construct_UClass_USourceEffectStereoDelayPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceEffectStereoDelayPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USourceEffectStereoDelayPreset>()
	{
		return USourceEffectStereoDelayPreset::StaticClass();
	}
	USourceEffectStereoDelayPreset::USourceEffectStereoDelayPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceEffectStereoDelayPreset);
	USourceEffectStereoDelayPreset::~USourceEffectStereoDelayPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::EnumInfo[] = {
		{ EStereoDelaySourceEffect_StaticEnum, TEXT("EStereoDelaySourceEffect"), &Z_Registration_Info_UEnum_EStereoDelaySourceEffect, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2161422296U) },
		{ EStereoDelayFiltertype_StaticEnum, TEXT("EStereoDelayFiltertype"), &Z_Registration_Info_UEnum_EStereoDelayFiltertype, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2260823892U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::ScriptStructInfo[] = {
		{ FSourceEffectStereoDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FSourceEffectStereoDelaySettings_Statics::NewStructOps, TEXT("SourceEffectStereoDelaySettings"), &Z_Registration_Info_UScriptStruct_SourceEffectStereoDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSourceEffectStereoDelaySettings), 1448150023U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceEffectStereoDelayPreset, USourceEffectStereoDelayPreset::StaticClass, TEXT("USourceEffectStereoDelayPreset"), &Z_Registration_Info_UClass_USourceEffectStereoDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceEffectStereoDelayPreset), 1438383146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_503349845(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectStereoDelay_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
