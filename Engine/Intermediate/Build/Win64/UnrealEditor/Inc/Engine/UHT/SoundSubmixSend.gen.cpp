// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixSend() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESendLevelControlMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubmixSendStage();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType;
	static UEnum* EAudioSpectrumBandPresetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioSpectrumBandPresetType"));
		}
		return Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumBandPresetType>()
	{
		return EAudioSpectrumBandPresetType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enumerators[] = {
		{ "EAudioSpectrumBandPresetType::KickDrum", (int64)EAudioSpectrumBandPresetType::KickDrum },
		{ "EAudioSpectrumBandPresetType::SnareDrum", (int64)EAudioSpectrumBandPresetType::SnareDrum },
		{ "EAudioSpectrumBandPresetType::Voice", (int64)EAudioSpectrumBandPresetType::Voice },
		{ "EAudioSpectrumBandPresetType::Cymbals", (int64)EAudioSpectrumBandPresetType::Cymbals },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cymbals.Comment", "/** Band which contains frequencies generally related to cymbals. */" },
		{ "Cymbals.Name", "EAudioSpectrumBandPresetType::Cymbals" },
		{ "Cymbals.ToolTip", "Band which contains frequencies generally related to cymbals." },
		{ "KickDrum.Comment", "/** Band which contains frequencies generally related to kick drums. */" },
		{ "KickDrum.Name", "EAudioSpectrumBandPresetType::KickDrum" },
		{ "KickDrum.ToolTip", "Band which contains frequencies generally related to kick drums." },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "SnareDrum.Comment", "/** Band which contains frequencies generally related to snare drums. */" },
		{ "SnareDrum.Name", "EAudioSpectrumBandPresetType::SnareDrum" },
		{ "SnareDrum.ToolTip", "Band which contains frequencies generally related to snare drums." },
		{ "Voice.Comment", "/** Band which contains frequencies generally related to vocals. */" },
		{ "Voice.Name", "EAudioSpectrumBandPresetType::Voice" },
		{ "Voice.ToolTip", "Band which contains frequencies generally related to vocals." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAudioSpectrumBandPresetType",
		"EAudioSpectrumBandPresetType",
		Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType()
	{
		if (!Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton, Z_Construct_UEnum_Engine_EAudioSpectrumBandPresetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings;
class UScriptStruct* FSoundSubmixSpectralAnalysisBandSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSpectralAnalysisBandSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSpectralAnalysisBandSettings>()
{
	return FSoundSubmixSpectralAnalysisBandSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BandFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BandFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimeMsec_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackTimeMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReleaseTimeMsec_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReleaseTimeMsec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSpectralAnalysisBandSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMax", "20000.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "// The frequency band for the magnitude to analyze\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The frequency band for the magnitude to analyze" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency = { "BandFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, BandFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The attack time for the FFT band interpolation for delegate callback\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The attack time for the FFT band interpolation for delegate callback" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec = { "AttackTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, AttackTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The release time for the FFT band interpolation for delegate callback\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The release time for the FFT band interpolation for delegate callback" },
		{ "UIMax", "10000.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec = { "ReleaseTimeMsec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, ReleaseTimeMsec), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor_MetaData[] = {
		{ "Category", "SubmixSpectralAnalysis" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// The ratio of the bandwidth divided by the center frequency. Only used when the spectral analysis type is set to Constant Q.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The ratio of the bandwidth divided by the center frequency. Only used when the spectral analysis type is set to Constant Q." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor = { "QFactor", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSpectralAnalysisBandSettings, QFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_BandFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_AttackTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_ReleaseTimeMsec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewProp_QFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundSubmixSpectralAnalysisBandSettings",
		sizeof(FSoundSubmixSpectralAnalysisBandSettings),
		alignof(FSoundSubmixSpectralAnalysisBandSettings),
		Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.InnerSingleton, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms
		{
			TArray<float> Envelope;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Envelope_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Envelope_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Envelope;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner = { "Envelope", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope = { "Envelope", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnSubmixEnvelopeBP_Parms, Envelope), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::NewProp_Envelope,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixEnvelopeBP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::_Script_Engine_eventOnSubmixEnvelopeBP_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixEnvelopeBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSubmixEnvelopeBP_DelegateWrapper(const FScriptDelegate& OnSubmixEnvelopeBP, TArray<float> const& Envelope)
{
	struct _Script_Engine_eventOnSubmixEnvelopeBP_Parms
	{
		TArray<float> Envelope;
	};
	_Script_Engine_eventOnSubmixEnvelopeBP_Parms Parms;
	Parms.Envelope=Envelope;
	OnSubmixEnvelopeBP.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms
		{
			TArray<float> Magnitude;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Magnitude;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_Inner = { "Magnitude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms, Magnitude), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::NewProp_Magnitude,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnSubmixSpectralAnalysisBP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms), Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnSubmixSpectralAnalysisBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSubmixSpectralAnalysisBP_DelegateWrapper(const FScriptDelegate& OnSubmixSpectralAnalysisBP, TArray<float> const& Magnitude)
{
	struct _Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms
	{
		TArray<float> Magnitude;
	};
	_Script_Engine_eventOnSubmixSpectralAnalysisBP_Parms Parms;
	Parms.Magnitude=Magnitude;
	OnSubmixSpectralAnalysisBP.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioRecordingExportType;
	static UEnum* EAudioRecordingExportType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAudioRecordingExportType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAudioRecordingExportType"));
		}
		return Z_Registration_Info_UEnum_EAudioRecordingExportType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAudioRecordingExportType>()
	{
		return EAudioRecordingExportType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enumerators[] = {
		{ "EAudioRecordingExportType::SoundWave", (int64)EAudioRecordingExportType::SoundWave },
		{ "EAudioRecordingExportType::WavFile", (int64)EAudioRecordingExportType::WavFile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "SoundWave.Comment", "// Exports a USoundWave.\n" },
		{ "SoundWave.Name", "EAudioRecordingExportType::SoundWave" },
		{ "SoundWave.ToolTip", "Exports a USoundWave." },
		{ "WavFile.Comment", "// Exports a WAV file.\n" },
		{ "WavFile.Name", "EAudioRecordingExportType::WavFile" },
		{ "WavFile.ToolTip", "Exports a WAV file." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAudioRecordingExportType",
		"EAudioRecordingExportType",
		Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAudioRecordingExportType()
	{
		if (!Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton, Z_Construct_UEnum_Engine_EAudioRecordingExportType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioRecordingExportType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESendLevelControlMethod;
	static UEnum* ESendLevelControlMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESendLevelControlMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESendLevelControlMethod"));
		}
		return Z_Registration_Info_UEnum_ESendLevelControlMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESendLevelControlMethod>()
	{
		return ESendLevelControlMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enumerators[] = {
		{ "ESendLevelControlMethod::Linear", (int64)ESendLevelControlMethod::Linear },
		{ "ESendLevelControlMethod::CustomCurve", (int64)ESendLevelControlMethod::CustomCurve },
		{ "ESendLevelControlMethod::Manual", (int64)ESendLevelControlMethod::Manual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomCurve.Comment", "// A send based on a supplied curve\n" },
		{ "CustomCurve.Name", "ESendLevelControlMethod::CustomCurve" },
		{ "CustomCurve.ToolTip", "A send based on a supplied curve" },
		{ "Linear.Comment", "// A send based on linear interpolation between a distance range and send-level range\n" },
		{ "Linear.Name", "ESendLevelControlMethod::Linear" },
		{ "Linear.ToolTip", "A send based on linear interpolation between a distance range and send-level range" },
		{ "Manual.Comment", "// A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)\n" },
		{ "Manual.Name", "ESendLevelControlMethod::Manual" },
		{ "Manual.ToolTip", "A manual send level (Uses the specified constant send level value. Useful for 2D sounds.)" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESendLevelControlMethod",
		"ESendLevelControlMethod",
		Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESendLevelControlMethod()
	{
		if (!Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton, Z_Construct_UEnum_Engine_ESendLevelControlMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESendLevelControlMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubmixSendStage;
	static UEnum* ESubmixSendStage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESubmixSendStage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESubmixSendStage"));
		}
		return Z_Registration_Info_UEnum_ESubmixSendStage.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESubmixSendStage>()
	{
		return ESubmixSendStage_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESubmixSendStage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enumerators[] = {
		{ "ESubmixSendStage::PostDistanceAttenuation", (int64)ESubmixSendStage::PostDistanceAttenuation },
		{ "ESubmixSendStage::PreDistanceAttenuation", (int64)ESubmixSendStage::PreDistanceAttenuation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "PostDistanceAttenuation.Comment", "// Whether to do the send pre distance attenuation\n" },
		{ "PostDistanceAttenuation.Name", "ESubmixSendStage::PostDistanceAttenuation" },
		{ "PostDistanceAttenuation.ToolTip", "Whether to do the send pre distance attenuation" },
		{ "PreDistanceAttenuation.Comment", "// Whether to do the send post distance attenuation\n" },
		{ "PreDistanceAttenuation.Name", "ESubmixSendStage::PreDistanceAttenuation" },
		{ "PreDistanceAttenuation.ToolTip", "Whether to do the send post distance attenuation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESubmixSendStage",
		"ESubmixSendStage",
		Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESubmixSendStage()
	{
		if (!Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton, Z_Construct_UEnum_Engine_ESubmixSendStage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubmixSendStage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo;
class UScriptStruct* FSoundSubmixSendInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixSendInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SoundSubmixSendInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSoundSubmixSendInfo>()
{
	return FSoundSubmixSendInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SendLevelControlMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevelControlMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SendLevelControlMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SendStage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendStage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SendStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableManualSendClamp_MetaData[];
#endif
		static void NewProp_DisableManualSendClamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableManualSendClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSendDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSendDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomSendLevelCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomSendLevelCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Class used to send audio to submixes from USoundBase\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Class used to send audio to submixes from USoundBase" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixSendInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "/*\n\x09\x09Manual: Use Send Level only\n\x09\x09Linear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\n\x09\x09""Custom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Manual: Use Send Level only\nLinear: Interpolate between Min and Max Send Levels based on listener distance (between Distance Min and Distance Max)\nCustom Curve: Use the float curve to map Send Level to distance (0.0-1.0 on curve maps to Distance Min - Distance Max)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod = { "SendLevelControlMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, SendLevelControlMethod), Z_Construct_UEnum_Engine_ESendLevelControlMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_MetaData)) }; // 2357652881
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "/** Defines at what mix stage the send should happen.*/" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Defines at what mix stage the send should happen." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage = { "SendStage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, SendStage), Z_Construct_UEnum_Engine_ESubmixSendStage, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_MetaData)) }; // 1953525498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The submix to send the audio to\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The submix to send the audio to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount of audio to send\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount of audio to send" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel = { "SendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, SendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_DisableManualSendClamp_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// Whether to disable the 0-1 clamp for manual SendLevel control\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "Whether to disable the 0-1 clamp for manual SendLevel control" },
	};
#endif
	void Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_DisableManualSendClamp_SetBit(void* Obj)
	{
		((FSoundSubmixSendInfo*)Obj)->DisableManualSendClamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_DisableManualSendClamp = { "DisableManualSendClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSoundSubmixSendInfo), &Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_DisableManualSendClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_DisableManualSendClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_DisableManualSendClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the min send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the min send distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel = { "MinSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, MinSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The amount to send to master when sound is located at a distance equal to value specified in the max send distance.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The amount to send to master when sound is located at a distance equal to value specified in the max send distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel = { "MaxSendLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, MaxSendLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The min distance to send to the master\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The min distance to send to the master" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance = { "MinSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, MinSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The max distance to send to the master\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The max distance to send to the master" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance = { "MaxSendDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, MaxSendDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData[] = {
		{ "Category", "SubmixSend" },
		{ "Comment", "// The custom reverb send curve to use for distance-based send level.\n" },
		{ "ModuleRelativePath", "Classes/Sound/SoundSubmixSend.h" },
		{ "ToolTip", "The custom reverb send curve to use for distance-based send level." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve = { "CustomSendLevelCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundSubmixSendInfo, CustomSendLevelCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevelControlMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_SendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_DisableManualSendClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MinSendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_MaxSendDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewProp_CustomSendLevelCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SoundSubmixSendInfo",
		sizeof(FSoundSubmixSendInfo),
		alignof(FSoundSubmixSendInfo),
		Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixSendInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.InnerSingleton, Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::EnumInfo[] = {
		{ EAudioSpectrumBandPresetType_StaticEnum, TEXT("EAudioSpectrumBandPresetType"), &Z_Registration_Info_UEnum_EAudioSpectrumBandPresetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2146996583U) },
		{ EAudioRecordingExportType_StaticEnum, TEXT("EAudioRecordingExportType"), &Z_Registration_Info_UEnum_EAudioRecordingExportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3384381609U) },
		{ ESendLevelControlMethod_StaticEnum, TEXT("ESendLevelControlMethod"), &Z_Registration_Info_UEnum_ESendLevelControlMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2357652881U) },
		{ ESubmixSendStage_StaticEnum, TEXT("ESubmixSendStage"), &Z_Registration_Info_UEnum_ESubmixSendStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1953525498U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::ScriptStructInfo[] = {
		{ FSoundSubmixSpectralAnalysisBandSettings::StaticStruct, Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics::NewStructOps, TEXT("SoundSubmixSpectralAnalysisBandSettings"), &Z_Registration_Info_UScriptStruct_SoundSubmixSpectralAnalysisBandSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSubmixSpectralAnalysisBandSettings), 3766543794U) },
		{ FSoundSubmixSendInfo::StaticStruct, Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics::NewStructOps, TEXT("SoundSubmixSendInfo"), &Z_Registration_Info_UScriptStruct_SoundSubmixSendInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSubmixSendInfo), 3442815224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_507196038(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
