// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSubmixSend.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundSubmixSend_generated_h
#error "SoundSubmixSend.generated.h already included, missing '#pragma once' in SoundSubmixSend.h"
#endif
#define ENGINE_SoundSubmixSend_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSubmixSpectralAnalysisBandSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundSubmixSpectralAnalysisBandSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_54_DELEGATE \
ENGINE_API void FOnSubmixEnvelopeBP_DelegateWrapper(const FScriptDelegate& OnSubmixEnvelopeBP, TArray<float> const& Envelope);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_56_DELEGATE \
ENGINE_API void FOnSubmixSpectralAnalysisBP_DelegateWrapper(const FScriptDelegate& OnSubmixSpectralAnalysisBP, TArray<float> const& Magnitude);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundSubmixSendInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundSubmixSendInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmixSend_h


#define FOREACH_ENUM_EAUDIOSPECTRUMBANDPRESETTYPE(op) \
	op(EAudioSpectrumBandPresetType::KickDrum) \
	op(EAudioSpectrumBandPresetType::SnareDrum) \
	op(EAudioSpectrumBandPresetType::Voice) \
	op(EAudioSpectrumBandPresetType::Cymbals) 

enum class EAudioSpectrumBandPresetType : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumBandPresetType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumBandPresetType>();

#define FOREACH_ENUM_EAUDIORECORDINGEXPORTTYPE(op) \
	op(EAudioRecordingExportType::SoundWave) \
	op(EAudioRecordingExportType::WavFile) 

enum class EAudioRecordingExportType : uint8;
template<> struct TIsUEnumClass<EAudioRecordingExportType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioRecordingExportType>();

#define FOREACH_ENUM_ESENDLEVELCONTROLMETHOD(op) \
	op(ESendLevelControlMethod::Linear) \
	op(ESendLevelControlMethod::CustomCurve) \
	op(ESendLevelControlMethod::Manual) 

enum class ESendLevelControlMethod : uint8;
template<> struct TIsUEnumClass<ESendLevelControlMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESendLevelControlMethod>();

#define FOREACH_ENUM_ESUBMIXSENDSTAGE(op) \
	op(ESubmixSendStage::PostDistanceAttenuation) \
	op(ESubmixSendStage::PreDistanceAttenuation) 

enum class ESubmixSendStage : uint8;
template<> struct TIsUEnumClass<ESubmixSendStage> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESubmixSendStage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
