// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AudioComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioBus;
class UObject;
class UQuartzClockHandle;
class USoundBase;
class USoundModulatorBase;
class USoundSourceBus;
class USoundSubmixBase;
class USoundWave;
enum class EAudioComponentPlayState : uint8;
enum class EAudioFaderCurve : uint8;
enum class EModulationDestination : uint8;
enum class EModulationRouting : uint8;
struct FQuartzQuantizationBoundary;
struct FSoundAttenuationSettings;
struct FSoundWaveEnvelopeDataPerSound;
struct FSoundWaveSpectralData;
struct FSoundWaveSpectralDataPerSound;
struct FSubtitleCue;
#ifdef ENGINE_AudioComponent_generated_h
#error "AudioComponent.generated.h already included, missing '#pragma once' in AudioComponent.h"
#endif
#define ENGINE_AudioComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_62_DELEGATE \
ENGINE_API void FOnAudioFinished_DelegateWrapper(const FMulticastScriptDelegate& OnAudioFinished);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_68_DELEGATE \
ENGINE_API void FOnQueueSubtitles_DelegateWrapper(const FScriptDelegate& OnQueueSubtitles, TArray<FSubtitleCue> const& Subtitles, float CueDuration);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_71_DELEGATE \
ENGINE_API void FOnAudioPlayStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlayStateChanged, EAudioComponentPlayState PlayState);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_77_DELEGATE \
ENGINE_API void FOnAudioVirtualizationChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVirtualizationChanged, bool bIsVirtualized);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_86_DELEGATE \
ENGINE_API void FOnAudioPlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnAudioPlaybackPercent, const USoundWave* PlayingSoundWave, const float PlaybackPercent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_95_DELEGATE \
ENGINE_API void FOnAudioSingleEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioSingleEnvelopeValue, const USoundWave* PlayingSoundWave, const float EnvelopeValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_104_DELEGATE \
ENGINE_API void FOnAudioMultiEnvelopeValue_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMultiEnvelopeValue, const float AverageEnvelopeValue, const float MaxEnvelope, const int32 NumWaveInstances);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioComponentParam_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAudioParameter Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioComponentParam>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInitialActiveSoundParams(); \
	friend struct Z_Construct_UClass_UInitialActiveSoundParams_Statics; \
public: \
	DECLARE_CLASS(UInitialActiveSoundParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInitialActiveSoundParams)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_INCLASS \
private: \
	static void StaticRegisterNativesUInitialActiveSoundParams(); \
	friend struct Z_Construct_UClass_UInitialActiveSoundParams_Statics; \
public: \
	DECLARE_CLASS(UInitialActiveSoundParams, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInitialActiveSoundParams)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInitialActiveSoundParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitialActiveSoundParams) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInitialActiveSoundParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitialActiveSoundParams); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInitialActiveSoundParams(UInitialActiveSoundParams&&); \
	NO_API UInitialActiveSoundParams(const UInitialActiveSoundParams&); \
public: \
	NO_API virtual ~UInitialActiveSoundParams();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInitialActiveSoundParams(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInitialActiveSoundParams(UInitialActiveSoundParams&&); \
	NO_API UInitialActiveSoundParams(const UInitialActiveSoundParams&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInitialActiveSoundParams); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInitialActiveSoundParams); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInitialActiveSoundParams) \
	NO_API virtual ~UInitialActiveSoundParams();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_164_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_167_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InitialActiveSoundParams."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInitialActiveSoundParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAudioBusSendPostEffect); \
	DECLARE_FUNCTION(execSetAudioBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execPlayQuantized); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execGetModulators); \
	DECLARE_FUNCTION(execSetModulationRouting); \
	DECLARE_FUNCTION(execGetCookedEnvelopeDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedEnvelopeData); \
	DECLARE_FUNCTION(execGetCookedFFTDataForAllPlayingSounds); \
	DECLARE_FUNCTION(execGetCookedFFTData); \
	DECLARE_FUNCTION(execHasCookedAmplitudeEnvelopeData); \
	DECLARE_FUNCTION(execHasCookedFFTData); \
	DECLARE_FUNCTION(execSetOutputToBusOnly); \
	DECLARE_FUNCTION(execSetLowPassFilterFrequency); \
	DECLARE_FUNCTION(execSetLowPassFilterEnabled); \
	DECLARE_FUNCTION(execSetAudioBusSendPostEffect); \
	DECLARE_FUNCTION(execSetAudioBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPostEffect); \
	DECLARE_FUNCTION(execSetSourceBusSendPreEffect); \
	DECLARE_FUNCTION(execSetSubmixSend); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetUISound); \
	DECLARE_FUNCTION(execSetPitchMultiplier); \
	DECLARE_FUNCTION(execSetVolumeMultiplier); \
	DECLARE_FUNCTION(execSetWaveParameter); \
	DECLARE_FUNCTION(execAdjustVolume); \
	DECLARE_FUNCTION(execGetPlayState); \
	DECLARE_FUNCTION(execIsVirtualized); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execStopDelayed); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetFloatParameter); \
	DECLARE_FUNCTION(execSetIntParameter); \
	DECLARE_FUNCTION(execSetBoolParameter); \
	DECLARE_FUNCTION(execPlayQuantized); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execSetSound);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct Z_Construct_UClass_UAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_INCLASS \
private: \
	static void StaticRegisterNativesUAudioComponent(); \
	friend struct Z_Construct_UClass_UAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAudioComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UAudioComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public: \
	NO_API virtual ~UAudioComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioComponent(UAudioComponent&&); \
	NO_API UAudioComponent(const UAudioComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioComponent) \
	NO_API virtual ~UAudioComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_185_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h_188_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AudioComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_AudioComponent_h


#define FOREACH_ENUM_EAUDIOCOMPONENTPLAYSTATE(op) \
	op(EAudioComponentPlayState::Playing) \
	op(EAudioComponentPlayState::Stopped) \
	op(EAudioComponentPlayState::Paused) \
	op(EAudioComponentPlayState::FadingIn) \
	op(EAudioComponentPlayState::FadingOut) \
	op(EAudioComponentPlayState::Count) 

enum class EAudioComponentPlayState : uint8;
template<> struct TIsUEnumClass<EAudioComponentPlayState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioComponentPlayState>();

#define FOREACH_ENUM_EAUDIOFADERCURVE(op) \
	op(EAudioFaderCurve::Linear) \
	op(EAudioFaderCurve::Logarithmic) \
	op(EAudioFaderCurve::SCurve) \
	op(EAudioFaderCurve::Sin) \
	op(EAudioFaderCurve::Count) 

enum class EAudioFaderCurve : uint8;
template<> struct TIsUEnumClass<EAudioFaderCurve> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioFaderCurve>();

#define FOREACH_ENUM_EMODULATIONDESTINATION(op) \
	op(EModulationDestination::Volume) \
	op(EModulationDestination::Pitch) \
	op(EModulationDestination::Lowpass) \
	op(EModulationDestination::Highpass) \
	op(EModulationDestination::Count) 

enum class EModulationDestination : uint8;
template<> struct TIsUEnumClass<EModulationDestination> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EModulationDestination>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
