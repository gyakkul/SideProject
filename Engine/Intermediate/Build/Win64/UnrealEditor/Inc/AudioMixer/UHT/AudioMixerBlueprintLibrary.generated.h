// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMixerBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class UObject;
class USoundCue;
class USoundEffectSourcePresetChain;
class USoundEffectSubmixPreset;
class USoundSubmix;
class USoundWave;
enum class EAudioRecordingExportType : uint8;
enum class EAudioSpectrumBandPresetType : uint8;
enum class EAudioSpectrumType : uint8;
enum class EFFTPeakInterpolationMethod : uint8;
enum class EFFTSize : uint8;
enum class EFFTWindowType : uint8;
enum class EMusicalNoteName : uint8;
struct FAudioOutputDeviceInfo;
struct FSoundSubmixSpectralAnalysisBandSettings;
struct FSourceEffectChainEntry;
struct FSwapAudioOutputResult;
#ifdef AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h
#error "AudioMixerBlueprintLibrary.generated.h already included, missing '#pragma once' in AudioMixerBlueprintLibrary.h"
#endif
#define AUDIOMIXER_AudioMixerBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_23_DELEGATE \
AUDIOMIXER_API void FOnSoundLoadComplete_DelegateWrapper(const FScriptDelegate& OnSoundLoadComplete, const USoundWave* LoadedSoundWave, bool WasCancelled);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSwapAudioOutputResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FSwapAudioOutputResult>();

#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioOutputDeviceInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOMIXER_API UScriptStruct* StaticStruct<struct FAudioOutputDeviceInfo>();

#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_200_DELEGATE \
AUDIOMIXER_API void FOnAudioOutputDevicesObtained_DelegateWrapper(const FScriptDelegate& OnAudioOutputDevicesObtained, TArray<FAudioOutputDeviceInfo> const& AvailableDevices);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_205_DELEGATE \
AUDIOMIXER_API void FOnMainAudioOutputDeviceObtained_DelegateWrapper(const FScriptDelegate& OnMainAudioOutputDeviceObtained, const FString& CurrentDevice);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_210_DELEGATE \
AUDIOMIXER_API void FOnCompletedDeviceSwap_DelegateWrapper(const FScriptDelegate& OnCompletedDeviceSwap, FSwapAudioOutputResult const& SwapResult);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwapAudioOutputDevice); \
	DECLARE_FUNCTION(execGetCurrentAudioOutputDeviceName); \
	DECLARE_FUNCTION(execGetAvailableAudioOutputDevices); \
	DECLARE_FUNCTION(execIsAudioBusActive); \
	DECLARE_FUNCTION(execStopAudioBus); \
	DECLARE_FUNCTION(execStartAudioBus); \
	DECLARE_FUNCTION(execTrimAudioCache); \
	DECLARE_FUNCTION(execPrimeSoundCueForPlayback); \
	DECLARE_FUNCTION(execPrimeSoundForPlayback); \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain); \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry); \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain); \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain); \
	DECLARE_FUNCTION(execGetPhaseForFrequencies); \
	DECLARE_FUNCTION(execGetMagnitudeForFrequencies); \
	DECLARE_FUNCTION(execMakePresetSpectralAnalysisBandSettings); \
	DECLARE_FUNCTION(execMakeFullSpectrumSpectralAnalysisBandSettings); \
	DECLARE_FUNCTION(execMakeMusicalSpectralAnalysisBandSettings); \
	DECLARE_FUNCTION(execStopAnalyzingOutput); \
	DECLARE_FUNCTION(execStartAnalyzingOutput); \
	DECLARE_FUNCTION(execResumeRecordingOutput); \
	DECLARE_FUNCTION(execPauseRecordingOutput); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput); \
	DECLARE_FUNCTION(execClearSubmixEffectChainOverride); \
	DECLARE_FUNCTION(execSetSubmixEffectChainOverride); \
	DECLARE_FUNCTION(execClearSubmixEffects); \
	DECLARE_FUNCTION(execReplaceSubmixEffect); \
	DECLARE_FUNCTION(execReplaceSoundEffectSubmix); \
	DECLARE_FUNCTION(execRemoveSubmixEffectAtIndex); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPresetAtIndex); \
	DECLARE_FUNCTION(execRemoveSubmixEffect); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPreset); \
	DECLARE_FUNCTION(execAddSubmixEffect); \
	DECLARE_FUNCTION(execClearMasterSubmixEffects); \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect); \
	DECLARE_FUNCTION(execAddMasterSubmixEffect); \
	DECLARE_FUNCTION(execConv_AudioOutputDeviceInfoToString);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwapAudioOutputDevice); \
	DECLARE_FUNCTION(execGetCurrentAudioOutputDeviceName); \
	DECLARE_FUNCTION(execGetAvailableAudioOutputDevices); \
	DECLARE_FUNCTION(execIsAudioBusActive); \
	DECLARE_FUNCTION(execStopAudioBus); \
	DECLARE_FUNCTION(execStartAudioBus); \
	DECLARE_FUNCTION(execTrimAudioCache); \
	DECLARE_FUNCTION(execPrimeSoundCueForPlayback); \
	DECLARE_FUNCTION(execPrimeSoundForPlayback); \
	DECLARE_FUNCTION(execGetNumberOfEntriesInSourceEffectChain); \
	DECLARE_FUNCTION(execSetBypassSourceEffectChainEntry); \
	DECLARE_FUNCTION(execRemoveSourceEffectFromPresetChain); \
	DECLARE_FUNCTION(execAddSourceEffectToPresetChain); \
	DECLARE_FUNCTION(execGetPhaseForFrequencies); \
	DECLARE_FUNCTION(execGetMagnitudeForFrequencies); \
	DECLARE_FUNCTION(execMakePresetSpectralAnalysisBandSettings); \
	DECLARE_FUNCTION(execMakeFullSpectrumSpectralAnalysisBandSettings); \
	DECLARE_FUNCTION(execMakeMusicalSpectralAnalysisBandSettings); \
	DECLARE_FUNCTION(execStopAnalyzingOutput); \
	DECLARE_FUNCTION(execStartAnalyzingOutput); \
	DECLARE_FUNCTION(execResumeRecordingOutput); \
	DECLARE_FUNCTION(execPauseRecordingOutput); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput); \
	DECLARE_FUNCTION(execClearSubmixEffectChainOverride); \
	DECLARE_FUNCTION(execSetSubmixEffectChainOverride); \
	DECLARE_FUNCTION(execClearSubmixEffects); \
	DECLARE_FUNCTION(execReplaceSubmixEffect); \
	DECLARE_FUNCTION(execReplaceSoundEffectSubmix); \
	DECLARE_FUNCTION(execRemoveSubmixEffectAtIndex); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPresetAtIndex); \
	DECLARE_FUNCTION(execRemoveSubmixEffect); \
	DECLARE_FUNCTION(execRemoveSubmixEffectPreset); \
	DECLARE_FUNCTION(execAddSubmixEffect); \
	DECLARE_FUNCTION(execClearMasterSubmixEffects); \
	DECLARE_FUNCTION(execRemoveMasterSubmixEffect); \
	DECLARE_FUNCTION(execAddMasterSubmixEffect); \
	DECLARE_FUNCTION(execConv_AudioOutputDeviceInfoToString);


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_ACCESSORS
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMixerBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAudioMixerBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAudioMixerBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UAudioMixerBlueprintLibrary)


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public: \
	NO_API virtual ~UAudioMixerBlueprintLibrary();


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMixerBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMixerBlueprintLibrary(UAudioMixerBlueprintLibrary&&); \
	NO_API UAudioMixerBlueprintLibrary(const UAudioMixerBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMixerBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMixerBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMixerBlueprintLibrary) \
	NO_API virtual ~UAudioMixerBlueprintLibrary();


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_212_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h_215_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UAudioMixerBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_AudioMixerBlueprintLibrary_h


#define FOREACH_ENUM_EMUSICALNOTENAME(op) \
	op(EMusicalNoteName::C) \
	op(EMusicalNoteName::Db) \
	op(EMusicalNoteName::D) \
	op(EMusicalNoteName::Eb) \
	op(EMusicalNoteName::E) \
	op(EMusicalNoteName::F) \
	op(EMusicalNoteName::Gb) \
	op(EMusicalNoteName::G) \
	op(EMusicalNoteName::Ab) \
	op(EMusicalNoteName::A) \
	op(EMusicalNoteName::Bb) \
	op(EMusicalNoteName::B) 

enum class EMusicalNoteName : uint8;
template<> struct TIsUEnumClass<EMusicalNoteName> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<EMusicalNoteName>();

#define FOREACH_ENUM_EAUDIOMIXERSTREAMDATAFORMATTYPE(op) \
	op(EAudioMixerStreamDataFormatType::Unknown) \
	op(EAudioMixerStreamDataFormatType::Float) \
	op(EAudioMixerStreamDataFormatType::Int16) \
	op(EAudioMixerStreamDataFormatType::Unsupported) 

enum class EAudioMixerStreamDataFormatType : uint8;
template<> struct TIsUEnumClass<EAudioMixerStreamDataFormatType> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioMixerStreamDataFormatType>();

#define FOREACH_ENUM_EAUDIOMIXERCHANNELTYPE(op) \
	op(EAudioMixerChannelType::FrontLeft) \
	op(EAudioMixerChannelType::FrontRight) \
	op(EAudioMixerChannelType::FrontCenter) \
	op(EAudioMixerChannelType::LowFrequency) \
	op(EAudioMixerChannelType::BackLeft) \
	op(EAudioMixerChannelType::BackRight) \
	op(EAudioMixerChannelType::FrontLeftOfCenter) \
	op(EAudioMixerChannelType::FrontRightOfCenter) \
	op(EAudioMixerChannelType::BackCenter) \
	op(EAudioMixerChannelType::SideLeft) \
	op(EAudioMixerChannelType::SideRight) \
	op(EAudioMixerChannelType::TopCenter) \
	op(EAudioMixerChannelType::TopFrontLeft) \
	op(EAudioMixerChannelType::TopFrontCenter) \
	op(EAudioMixerChannelType::TopFrontRight) \
	op(EAudioMixerChannelType::TopBackLeft) \
	op(EAudioMixerChannelType::TopBackCenter) \
	op(EAudioMixerChannelType::TopBackRight) \
	op(EAudioMixerChannelType::Unknown) \
	op(EAudioMixerChannelType::ChannelTypeCount) \
	op(EAudioMixerChannelType::DefaultChannel) 

enum class EAudioMixerChannelType : uint8;
template<> struct TIsUEnumClass<EAudioMixerChannelType> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<EAudioMixerChannelType>();

#define FOREACH_ENUM_ESWAPAUDIOOUTPUTDEVICERESULTSTATE(op) \
	op(ESwapAudioOutputDeviceResultState::Failure) \
	op(ESwapAudioOutputDeviceResultState::Success) \
	op(ESwapAudioOutputDeviceResultState::None) 

enum class ESwapAudioOutputDeviceResultState : uint8;
template<> struct TIsUEnumClass<ESwapAudioOutputDeviceResultState> { enum { Value = true }; };
template<> AUDIOMIXER_API UEnum* StaticEnum<ESwapAudioOutputDeviceResultState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
