// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneFwd.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneFwd_generated_h
#error "MovieSceneFwd.generated.h already included, missing '#pragma once' in MovieSceneFwd.h"
#endif
#define MOVIESCENE_MovieSceneFwd_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFwd_h


#define FOREACH_ENUM_EMOVIESCENEPLAYERSTATUS(op) \
	op(EMovieScenePlayerStatus::Stopped) \
	op(EMovieScenePlayerStatus::Playing) \
	op(EMovieScenePlayerStatus::Scrubbing) \
	op(EMovieScenePlayerStatus::Jumping) \
	op(EMovieScenePlayerStatus::Stepping) \
	op(EMovieScenePlayerStatus::Paused) 

namespace EMovieScenePlayerStatus { enum Type : int; }
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieScenePlayerStatus::Type>();

#define FOREACH_ENUM_EMOVIESCENEEVALUATIONTYPE(op) \
	op(EMovieSceneEvaluationType::FrameLocked) \
	op(EMovieSceneEvaluationType::WithSubFrames) 

enum class EMovieSceneEvaluationType : uint8;
template<> struct TIsUEnumClass<EMovieSceneEvaluationType> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneEvaluationType>();

#define FOREACH_ENUM_EUPDATECLOCKSOURCE(op) \
	op(EUpdateClockSource::Tick) \
	op(EUpdateClockSource::Platform) \
	op(EUpdateClockSource::Audio) \
	op(EUpdateClockSource::RelativeTimecode) \
	op(EUpdateClockSource::Timecode) \
	op(EUpdateClockSource::PlayEveryFrame) \
	op(EUpdateClockSource::Custom) 

enum class EUpdateClockSource : uint8;
template<> struct TIsUEnumClass<EUpdateClockSource> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EUpdateClockSource>();

#define FOREACH_ENUM_EMOVIESCENESEQUENCEFLAGS(op) \
	op(EMovieSceneSequenceFlags::None) \
	op(EMovieSceneSequenceFlags::Volatile) \
	op(EMovieSceneSequenceFlags::BlockingEvaluation) \
	op(EMovieSceneSequenceFlags::DynamicWeighting) \
	op(EMovieSceneSequenceFlags::InheritedFlags) 

enum class EMovieSceneSequenceFlags : uint8;
template<> struct TIsUEnumClass<EMovieSceneSequenceFlags> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneSequenceFlags>();

#define FOREACH_ENUM_EMOVIESCENESERVERCLIENTMASK(op) \
	op(EMovieSceneServerClientMask::None) \
	op(EMovieSceneServerClientMask::Server) \
	op(EMovieSceneServerClientMask::Client) \
	op(EMovieSceneServerClientMask::All) 

enum class EMovieSceneServerClientMask : uint8;
template<> struct TIsUEnumClass<EMovieSceneServerClientMask> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneServerClientMask>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
