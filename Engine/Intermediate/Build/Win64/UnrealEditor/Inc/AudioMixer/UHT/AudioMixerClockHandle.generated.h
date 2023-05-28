// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Quartz/AudioMixerClockHandle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UQuartzClockHandle;
enum class EQuartzCommandQuantization : uint8;
struct FQuartzQuantizationBoundary;
struct FQuartzTransportTimeStamp;
#ifdef AUDIOMIXER_AudioMixerClockHandle_generated_h
#error "AudioMixerClockHandle.generated.h already included, missing '#pragma once' in AudioMixerClockHandle.h"
#endif
#define AUDIOMIXER_AudioMixerClockHandle_generated_h

#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBeatsPerMinute); \
	DECLARE_FUNCTION(execGetThirtySecondNotesPerMinute); \
	DECLARE_FUNCTION(execGetSecondsPerTick); \
	DECLARE_FUNCTION(execGetTicksPerSecond); \
	DECLARE_FUNCTION(execGetMillisecondsPerTick); \
	DECLARE_FUNCTION(execSetBeatsPerMinute); \
	DECLARE_FUNCTION(execSetThirtySecondNotesPerMinute); \
	DECLARE_FUNCTION(execSetSecondsPerTick); \
	DECLARE_FUNCTION(execSetTicksPerSecond); \
	DECLARE_FUNCTION(execSetMillisecondsPerTick); \
	DECLARE_FUNCTION(execUnsubscribeFromAllTimeDivisions); \
	DECLARE_FUNCTION(execUnsubscribeFromTimeDivision); \
	DECLARE_FUNCTION(execSubscribeToAllQuantizationEvents); \
	DECLARE_FUNCTION(execSubscribeToQuantizationEvent); \
	DECLARE_FUNCTION(execStartOtherClock); \
	DECLARE_FUNCTION(execGetEstimatedRunTime); \
	DECLARE_FUNCTION(execGetCurrentTimestamp); \
	DECLARE_FUNCTION(execGetDurationOfQuantizationTypeInSeconds); \
	DECLARE_FUNCTION(execIsClockRunning); \
	DECLARE_FUNCTION(execResetTransportQuantized); \
	DECLARE_FUNCTION(execResetTransport); \
	DECLARE_FUNCTION(execResumeClock); \
	DECLARE_FUNCTION(execPauseClock); \
	DECLARE_FUNCTION(execStopClock); \
	DECLARE_FUNCTION(execStartClock);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBeatsPerMinute); \
	DECLARE_FUNCTION(execGetThirtySecondNotesPerMinute); \
	DECLARE_FUNCTION(execGetSecondsPerTick); \
	DECLARE_FUNCTION(execGetTicksPerSecond); \
	DECLARE_FUNCTION(execGetMillisecondsPerTick); \
	DECLARE_FUNCTION(execSetBeatsPerMinute); \
	DECLARE_FUNCTION(execSetThirtySecondNotesPerMinute); \
	DECLARE_FUNCTION(execSetSecondsPerTick); \
	DECLARE_FUNCTION(execSetTicksPerSecond); \
	DECLARE_FUNCTION(execSetMillisecondsPerTick); \
	DECLARE_FUNCTION(execUnsubscribeFromAllTimeDivisions); \
	DECLARE_FUNCTION(execUnsubscribeFromTimeDivision); \
	DECLARE_FUNCTION(execSubscribeToAllQuantizationEvents); \
	DECLARE_FUNCTION(execSubscribeToQuantizationEvent); \
	DECLARE_FUNCTION(execStartOtherClock); \
	DECLARE_FUNCTION(execGetEstimatedRunTime); \
	DECLARE_FUNCTION(execGetCurrentTimestamp); \
	DECLARE_FUNCTION(execGetDurationOfQuantizationTypeInSeconds); \
	DECLARE_FUNCTION(execIsClockRunning); \
	DECLARE_FUNCTION(execResetTransportQuantized); \
	DECLARE_FUNCTION(execResetTransport); \
	DECLARE_FUNCTION(execResumeClock); \
	DECLARE_FUNCTION(execPauseClock); \
	DECLARE_FUNCTION(execStopClock); \
	DECLARE_FUNCTION(execStartClock);


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_ACCESSORS
#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuartzClockHandle(); \
	friend struct Z_Construct_UClass_UQuartzClockHandle_Statics; \
public: \
	DECLARE_CLASS(UQuartzClockHandle, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UQuartzClockHandle)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUQuartzClockHandle(); \
	friend struct Z_Construct_UClass_UQuartzClockHandle_Statics; \
public: \
	DECLARE_CLASS(UQuartzClockHandle, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AudioMixer"), NO_API) \
	DECLARE_SERIALIZER(UQuartzClockHandle)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuartzClockHandle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuartzClockHandle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuartzClockHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuartzClockHandle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuartzClockHandle(UQuartzClockHandle&&); \
	NO_API UQuartzClockHandle(const UQuartzClockHandle&); \
public:


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuartzClockHandle(UQuartzClockHandle&&); \
	NO_API UQuartzClockHandle(const UQuartzClockHandle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuartzClockHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuartzClockHandle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuartzClockHandle)


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_27_PROLOG
#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_INCLASS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMIXER_API UClass* StaticClass<class UQuartzClockHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioMixer_Public_Quartz_AudioMixerClockHandle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
