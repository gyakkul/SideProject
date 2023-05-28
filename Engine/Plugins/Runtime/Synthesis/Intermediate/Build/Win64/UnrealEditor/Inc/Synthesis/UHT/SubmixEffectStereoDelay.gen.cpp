// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/SubmixEffectStereoDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectStereoDelay() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings;
class UScriptStruct* FSubmixEffectStereoDelaySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectStereoDelaySettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectStereoDelaySettings>()
{
	return FSubmixEffectStereoDelaySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectStereoDelaySettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// What mode to set the stereo delay effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "What mode to set the stereo delay effect." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode = { "DelayMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayMode), Z_Construct_UEnum_Synthesis_EStereoDelaySourceEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_MetaData)) }; // 2161422296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "2000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The base amount of delay in the left and right channels of the delay line.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The base amount of delay in the left and right channels of the delay line." },
		{ "UIMax", "2000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec = { "DelayTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of audio to feedback into the delay line once the delay has been tapped.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The amount of audio to feedback into the delay line once the delay has been tapped." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, Feedback), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "-1.0" },
		{ "Comment", "// Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Delay spread for left and right channels. Allows left and right channels to have differential delay amounts. Useful for stereo channel decorrelation." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio = { "DelayRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DelayRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The amount of delay effect to mix with the dry input signal into the effect.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The amount of delay effect to mix with the dry input signal into the effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel = { "WetLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, WetLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The dry level of the effect\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "The dry level of the effect" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel = { "DryLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, DryLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// Whether or not to enable filtering\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Whether or not to enable filtering" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit(void* Obj)
	{
		((FSubmixEffectStereoDelaySettings*)Obj)->bFilterEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled = { "bFilterEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectStereoDelaySettings), &Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData[] = {
		{ "Category", "Delay" },
		{ "Comment", "// Filter type to feed feedback audio to\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Filter type to feed feedback audio to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType = { "FilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterType), Z_Construct_UEnum_Synthesis_EStereoDelayFiltertype, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_MetaData)) }; // 2260823892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "20000" },
		{ "ClampMin", "20.0" },
		{ "Comment", "// Cutoff frequency of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Cutoff frequency of the filter" },
		{ "UIMax", "20000" },
		{ "UIMin", "20.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency = { "FilterFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData[] = {
		{ "Category", "Delay" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.5" },
		{ "Comment", "// Q of the filter\n" },
		{ "EditCondition", "bFilterEnabled" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Q of the filter" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ = { "FilterQ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectStereoDelaySettings, FilterQ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_Feedback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DelayRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_WetLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_DryLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_bFilterEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewProp_FilterQ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectStereoDelaySettings",
		sizeof(FSubmixEffectStereoDelaySettings),
		alignof(FSubmixEffectStereoDelaySettings),
		Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectStereoDelayPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectStereoDelaySettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectStereoDelayPreset::StaticRegisterNativesUSubmixEffectStereoDelayPreset()
	{
		UClass* Class = USubmixEffectStereoDelayPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSettings", &USubmixEffectStereoDelayPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics
	{
		struct SubmixEffectStereoDelayPreset_eventSetSettings_Parms
		{
			FSubmixEffectStereoDelaySettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectStereoDelayPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 3141852759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects|Delay" },
		{ "Comment", "// Set all tap delay settings. This will replace any dynamically added or modified taps.\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "Set all tap delay settings. This will replace any dynamically added or modified taps." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectStereoDelayPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::SubmixEffectStereoDelayPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectStereoDelayPreset);
	UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset_NoRegister()
	{
		return USubmixEffectStereoDelayPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics
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
	UObject* (*const Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectStereoDelayPreset_SetSettings, "SetSettings" }, // 4092574283
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USubmixEffectDelayPreset\n// Class which processes audio streams and uses parameters defined in the preset class.\n// ========================================================================\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ToolTip", "USubmixEffectDelayPreset\nClass which processes audio streams and uses parameters defined in the preset class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectStereoDelay.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectStereoDelayPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings_MetaData)) }; // 3141852759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectStereoDelayPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::ClassParams = {
		&USubmixEffectStereoDelayPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectStereoDelayPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectStereoDelayPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectStereoDelayPreset>()
	{
		return USubmixEffectStereoDelayPreset::StaticClass();
	}
	USubmixEffectStereoDelayPreset::USubmixEffectStereoDelayPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectStereoDelayPreset);
	USubmixEffectStereoDelayPreset::~USubmixEffectStereoDelayPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectStereoDelaySettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectStereoDelaySettings_Statics::NewStructOps, TEXT("SubmixEffectStereoDelaySettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectStereoDelaySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectStereoDelaySettings), 3141852759U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectStereoDelayPreset, USubmixEffectStereoDelayPreset::StaticClass, TEXT("USubmixEffectStereoDelayPreset"), &Z_Registration_Info_UClass_USubmixEffectStereoDelayPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectStereoDelayPreset), 328152915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_867721034(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectStereoDelay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
