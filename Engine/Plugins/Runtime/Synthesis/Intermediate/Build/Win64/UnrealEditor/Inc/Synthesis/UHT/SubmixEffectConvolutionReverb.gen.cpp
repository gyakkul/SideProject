// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubmixEffects/SubmixEffectConvolutionReverb.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubmixEffectConvolutionReverb() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_UAudioImpulseResponse_NoRegister();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset();
	SYNTHESIS_API UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings;
class UScriptStruct* FSubmixEffectConvolutionReverbSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SubmixEffectConvolutionReverbSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSubmixEffectConvolutionReverbSettings>()
{
	return FSubmixEffectConvolutionReverbSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizationVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizationVolumeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WetVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WetVolumeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DryVolumeDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DryVolumeDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMixInputChannelFormatToImpulseResponseFormat_MetaData[];
#endif
		static void NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMixInputChannelFormatToImpulseResponseFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMixReverbOutputToOutputChannelFormat_MetaData[];
#endif
		static void NewProp_bMixReverbOutputToOutputChannelFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMixReverbOutputToOutputChannelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundRearChannelBleedDb_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundRearChannelBleedDb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertRearChannelBleedPhase_MetaData[];
#endif
		static void NewProp_bInvertRearChannelBleedPhase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertRearChannelBleedPhase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSurroundRearChannelFlip_MetaData[];
#endif
		static void NewProp_bSurroundRearChannelFlip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSurroundRearChannelFlip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurroundRearChannelBleedAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurroundRearChannelBleedAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImpulseResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowHardwareAcceleration_MetaData[];
#endif
		static void NewProp_AllowHardwareAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowHardwareAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectConvolutionReverbSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData[] = {
		{ "Comment", "/* Used to account for energy added by convolution with \"loud\" Impulse Responses. \n\x09 * This value is not directly editable in the editor because it is copied from the \n\x09 * associated UAudioImpulseResponse. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Used to account for energy added by convolution with \"loud\" Impulse Responses.\n       * This value is not directly editable in the editor because it is copied from the\n       * associated UAudioImpulseResponse." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb = { "NormalizationVolumeDb", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, NormalizationVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the wet signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the wet signal is mixed into the output, in Decibels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb = { "WetVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, WetVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "ClampMax", "0.0" },
		{ "ClampMin", "-96.0" },
		{ "Comment", "// Controls how much of the dry signal is mixed into the output, in Decibels\n" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Controls how much of the dry signal is mixed into the output, in Decibels" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb = { "DryVolumeDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, DryVolumeDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, input audio is directly routed to output audio with applying any effect. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, input audio is directly routed to output audio with applying any effect." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, the submix input audio is downmixed to match the IR asset audio channel\n\x09 * format. If false, the input audio's channels are matched to the IR assets\n\x09 * audio channels.\n\x09 */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, the submix input audio is downmixed to match the IR asset audio channel\n       * format. If false, the input audio's channels are matched to the IR assets\n       * audio channels." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->bMixInputChannelFormatToImpulseResponseFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat = { "bMixInputChannelFormatToImpulseResponseFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/* If true, the reverberated audio is upmixed or downmixed to match the submix \n\x09 * output audio format. If false, the reverberated audio's channels are matched\n\x09 * to the submixs output audio channels. \n\x09 */" },
		{ "EditCondition", "!bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, the reverberated audio is upmixed or downmixed to match the submix\n       * output audio format. If false, the reverberated audio's channels are matched\n       * to the submixs output audio channels." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->bMixReverbOutputToOutputChannelFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat = { "bMixReverbOutputToOutputChannelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb_MetaData[] = {
		{ "Category", "SubmixEffectPreset|Surround" },
		{ "ClampMax", "15.0" },
		{ "ClampMin", "-60.0" },
		{ "Comment", "/* Amount of audio to be sent to rear channels in quad/surround configurations */" },
		{ "DisplayName", "Surround Rear Channel Bleed (dB)" },
		{ "EditCondition", "bMixReverbOutputToOutputChannelFormat && !bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Amount of audio to be sent to rear channels in quad/surround configurations" },
		{ "UIMax", "15.0" },
		{ "UIMin", "-60.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb = { "SurroundRearChannelBleedDb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedDb), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_MetaData[] = {
		{ "Category", "SumixEffectPreset|Surround" },
		{ "Comment", "/* If true, rear channel bleed sends will have their phase inverted. */" },
		{ "EditCondition", "bMixReverbOutputToOutputChannelFormat && !bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, rear channel bleed sends will have their phase inverted." },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->bInvertRearChannelBleedPhase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase = { "bInvertRearChannelBleedPhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_MetaData[] = {
		{ "Category", "SubmixEffectPreset|Surround" },
		{ "Comment", "/* If true, send Surround Rear Channel Bleed Amount sends front left to back right and vice versa */" },
		{ "EditCondition", "bMixReverbOutputToOutputChannelFormat && !bBypass" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "If true, send Surround Rear Channel Bleed Amount sends front left to back right and vice versa" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->bSurroundRearChannelFlip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip = { "bSurroundRearChannelFlip", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount = { "SurroundRearChannelBleedAmount", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, SurroundRearChannelBleedAmount_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubmixEffectConvolutionReverbSettings, ImpulseResponse_DEPRECATED), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_SetBit(void* Obj)
	{
		((FSubmixEffectConvolutionReverbSettings*)Obj)->AllowHardwareAcceleration_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration = { "AllowHardwareAcceleration", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubmixEffectConvolutionReverbSettings), &Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_NormalizationVolumeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_WetVolumeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_DryVolumeDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bBypass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixInputChannelFormatToImpulseResponseFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bMixReverbOutputToOutputChannelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedDb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bInvertRearChannelBleedPhase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_bSurroundRearChannelFlip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_SurroundRearChannelBleedAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_ImpulseResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewProp_AllowHardwareAcceleration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		&NewStructOps,
		"SubmixEffectConvolutionReverbSettings",
		sizeof(FSubmixEffectConvolutionReverbSettings),
		alignof(FSubmixEffectConvolutionReverbSettings),
		Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(USubmixEffectConvolutionReverbPreset::execSetImpulseResponse)
	{
		P_GET_OBJECT(UAudioImpulseResponse,Z_Param_InImpulseResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImpulseResponse(Z_Param_InImpulseResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubmixEffectConvolutionReverbPreset::execSetSettings)
	{
		P_GET_STRUCT_REF(FSubmixEffectConvolutionReverbSettings,Z_Param_Out_InSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSettings(Z_Param_Out_InSettings);
		P_NATIVE_END;
	}
	void USubmixEffectConvolutionReverbPreset::StaticRegisterNativesUSubmixEffectConvolutionReverbPreset()
	{
		UClass* Class = USubmixEffectConvolutionReverbPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetImpulseResponse", &USubmixEffectConvolutionReverbPreset::execSetImpulseResponse },
			{ "SetSettings", &USubmixEffectConvolutionReverbPreset::execSetSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics
	{
		struct SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms
		{
			UAudioImpulseResponse* InImpulseResponse;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InImpulseResponse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse = { "InImpulseResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms, InImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::NewProp_InImpulseResponse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb impulse response */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb impulse response" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, nullptr, "SetImpulseResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::SubmixEffectConvolutionReverbPreset_eventSetImpulseResponse_Parms), Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics
	{
		struct SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms
		{
			FSubmixEffectConvolutionReverbSettings InSettings;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms, InSettings), Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings_MetaData)) }; // 1122544863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Effects" },
		{ "Comment", "/** Set the convolution reverb settings */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the convolution reverb settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, nullptr, "SetSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::SubmixEffectConvolutionReverbPreset_eventSetSettings_Parms), Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubmixEffectConvolutionReverbPreset);
	UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_NoRegister()
	{
		return USubmixEffectConvolutionReverbPreset::StaticClass();
	}
	struct Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseResponse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImpulseResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlockSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHardwareAcceleration_MetaData[];
#endif
		static void NewProp_bEnableHardwareAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHardwareAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundEffectSubmixPreset,
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetImpulseResponse, "SetImpulseResponse" }, // 1077547198
		{ &Z_Construct_UFunction_USubmixEffectConvolutionReverbPreset_SetSettings, "SetSettings" }, // 506134419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData[] = {
		{ "BlueprintSetter", "SetImpulseResponse" },
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** The impulse response used for convolution. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "The impulse response used for convolution." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse = { "ImpulseResponse", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, ImpulseResponse), Z_Construct_UClass_UAudioImpulseResponse_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData[] = {
		{ "BlueprintSetter", "SetSettings" },
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** ConvolutionReverbPreset Preset Settings. */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "ConvolutionReverbPreset Preset Settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, Settings), Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings_MetaData)) }; // 1122544863
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** Set the internal block size. This can effect latency and performance. Higher values will result in\n\x09 * lower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\n\x09 * on the interplay between audio engines buffer sizes and this effects block size. Generally, higher\n\x09 * values result in higher latency, and lower values result in lower latency. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Set the internal block size. This can effect latency and performance. Higher values will result in\nlower CPU costs while lower values will result higher CPU costs. Latency may be affected depending\non the interplay between audio engines buffer sizes and this effects block size. Generally, higher\nvalues result in higher latency, and lower values result in lower latency." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize = { "BlockSize", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubmixEffectConvolutionReverbPreset, BlockSize), Z_Construct_UEnum_Synthesis_ESubmixEffectConvolutionReverbBlockSize, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_MetaData)) }; // 3963133211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData[] = {
		{ "Category", "SubmixEffectPreset" },
		{ "Comment", "/** Opt into hardware acceleration of the convolution reverb (if available) */" },
		{ "ModuleRelativePath", "Classes/SubmixEffects/SubmixEffectConvolutionReverb.h" },
		{ "ToolTip", "Opt into hardware acceleration of the convolution reverb (if available)" },
	};
#endif
	void Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit(void* Obj)
	{
		((USubmixEffectConvolutionReverbPreset*)Obj)->bEnableHardwareAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration = { "bEnableHardwareAcceleration", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USubmixEffectConvolutionReverbPreset), &Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_ImpulseResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_BlockSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::NewProp_bEnableHardwareAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubmixEffectConvolutionReverbPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::ClassParams = {
		&USubmixEffectConvolutionReverbPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubmixEffectConvolutionReverbPreset()
	{
		if (!Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton, Z_Construct_UClass_USubmixEffectConvolutionReverbPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset.OuterSingleton;
	}
	template<> SYNTHESIS_API UClass* StaticClass<USubmixEffectConvolutionReverbPreset>()
	{
		return USubmixEffectConvolutionReverbPreset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubmixEffectConvolutionReverbPreset);
	USubmixEffectConvolutionReverbPreset::~USubmixEffectConvolutionReverbPreset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ScriptStructInfo[] = {
		{ FSubmixEffectConvolutionReverbSettings::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectConvolutionReverbSettings_Statics::NewStructOps, TEXT("SubmixEffectConvolutionReverbSettings"), &Z_Registration_Info_UScriptStruct_SubmixEffectConvolutionReverbSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectConvolutionReverbSettings), 1122544863U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubmixEffectConvolutionReverbPreset, USubmixEffectConvolutionReverbPreset::StaticClass, TEXT("USubmixEffectConvolutionReverbPreset"), &Z_Registration_Info_UClass_USubmixEffectConvolutionReverbPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubmixEffectConvolutionReverbPreset), 1795186760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_2165148072(TEXT("/Script/Synthesis"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectConvolutionReverb_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
