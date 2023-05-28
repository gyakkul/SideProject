// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/QuartzQuantizationUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQuartzCommandDelegateSubType : uint8;
enum class EQuartzCommandQuantization : uint8;
#ifdef ENGINE_QuartzQuantizationUtilities_generated_h
#error "QuartzQuantizationUtilities.generated.h already included, missing '#pragma once' in QuartzQuantizationUtilities.h"
#endif
#define ENGINE_QuartzQuantizationUtilities_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuartzPulseOverrideStep_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQuartzPulseOverrideStep>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuartzTimeSignature_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQuartzTimeSignature>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuartzTransportTimeStamp_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQuartzTransportTimeStamp>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_219_DELEGATE \
ENGINE_API void FOnQuartzMetronomeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnQuartzMetronomeEvent, FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_220_DELEGATE \
ENGINE_API void FOnQuartzMetronomeEventBP_DelegateWrapper(const FScriptDelegate& OnQuartzMetronomeEventBP, FName ClockName, EQuartzCommandQuantization QuantizationType, int32 NumBars, int32 Beat, float BeatFraction);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_222_DELEGATE \
ENGINE_API void FOnQuartzCommandEvent_DelegateWrapper(const FMulticastScriptDelegate& OnQuartzCommandEvent, EQuartzCommandDelegateSubType EventType, FName Name);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_223_DELEGATE \
ENGINE_API void FOnQuartzCommandEventBP_DelegateWrapper(const FScriptDelegate& OnQuartzCommandEventBP, EQuartzCommandDelegateSubType EventType, FName Name);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuartzClockSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQuartzClockSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h_486_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuartzQuantizationBoundary_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FQuartzQuantizationBoundary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_QuartzQuantizationUtilities_h


#define FOREACH_ENUM_EQUARTZCOMMANDQUANTIZATION(op) \
	op(EQuartzCommandQuantization::Bar) \
	op(EQuartzCommandQuantization::Beat) \
	op(EQuartzCommandQuantization::ThirtySecondNote) \
	op(EQuartzCommandQuantization::SixteenthNote) \
	op(EQuartzCommandQuantization::EighthNote) \
	op(EQuartzCommandQuantization::QuarterNote) \
	op(EQuartzCommandQuantization::HalfNote) \
	op(EQuartzCommandQuantization::WholeNote) \
	op(EQuartzCommandQuantization::DottedSixteenthNote) \
	op(EQuartzCommandQuantization::DottedEighthNote) \
	op(EQuartzCommandQuantization::DottedQuarterNote) \
	op(EQuartzCommandQuantization::DottedHalfNote) \
	op(EQuartzCommandQuantization::DottedWholeNote) \
	op(EQuartzCommandQuantization::SixteenthNoteTriplet) \
	op(EQuartzCommandQuantization::EighthNoteTriplet) \
	op(EQuartzCommandQuantization::QuarterNoteTriplet) \
	op(EQuartzCommandQuantization::HalfNoteTriplet) \
	op(EQuartzCommandQuantization::Tick) \
	op(EQuartzCommandQuantization::Count) \
	op(EQuartzCommandQuantization::None) 

enum class EQuartzCommandQuantization : uint8;
template<> struct TIsUEnumClass<EQuartzCommandQuantization> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandQuantization>();

#define FOREACH_ENUM_EQUARTZTIMESIGNATUREQUANTIZATION(op) \
	op(EQuartzTimeSignatureQuantization::HalfNote) \
	op(EQuartzTimeSignatureQuantization::QuarterNote) \
	op(EQuartzTimeSignatureQuantization::EighthNote) \
	op(EQuartzTimeSignatureQuantization::SixteenthNote) \
	op(EQuartzTimeSignatureQuantization::ThirtySecondNote) \
	op(EQuartzTimeSignatureQuantization::Count) 

enum class EQuartzTimeSignatureQuantization : uint8;
template<> struct TIsUEnumClass<EQuartzTimeSignatureQuantization> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EQuartzTimeSignatureQuantization>();

#define FOREACH_ENUM_EQUARTZDELEGATETYPE(op) \
	op(EQuartzDelegateType::MetronomeTick) \
	op(EQuartzDelegateType::CommandEvent) \
	op(EQuartzDelegateType::Count) 

enum class EQuartzDelegateType : uint8;
template<> struct TIsUEnumClass<EQuartzDelegateType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EQuartzDelegateType>();

#define FOREACH_ENUM_EQUARZTQUANTIZATIONREFERENCE(op) \
	op(EQuarztQuantizationReference::BarRelative) \
	op(EQuarztQuantizationReference::TransportRelative) \
	op(EQuarztQuantizationReference::CurrentTimeRelative) \
	op(EQuarztQuantizationReference::Count) 

enum class EQuarztQuantizationReference : uint8;
template<> struct TIsUEnumClass<EQuarztQuantizationReference> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EQuarztQuantizationReference>();

#define FOREACH_ENUM_EQUARTZCOMMANDDELEGATESUBTYPE(op) \
	op(EQuartzCommandDelegateSubType::CommandOnFailedToQueue) \
	op(EQuartzCommandDelegateSubType::CommandOnQueued) \
	op(EQuartzCommandDelegateSubType::CommandOnCanceled) \
	op(EQuartzCommandDelegateSubType::CommandOnAboutToStart) \
	op(EQuartzCommandDelegateSubType::CommandOnStarted) \
	op(EQuartzCommandDelegateSubType::Count) 

enum class EQuartzCommandDelegateSubType : uint8;
template<> struct TIsUEnumClass<EQuartzCommandDelegateSubType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandDelegateSubType>();

#define FOREACH_ENUM_EQUARTZCOMMANDTYPE(op) \
	op(EQuartzCommandType::PlaySound) \
	op(EQuartzCommandType::QueueSoundToPlay) \
	op(EQuartzCommandType::RetriggerSound) \
	op(EQuartzCommandType::TickRateChange) \
	op(EQuartzCommandType::TransportReset) \
	op(EQuartzCommandType::StartOtherClock) \
	op(EQuartzCommandType::Custom) 

enum class EQuartzCommandType : uint8;
template<> struct TIsUEnumClass<EQuartzCommandType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EQuartzCommandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
