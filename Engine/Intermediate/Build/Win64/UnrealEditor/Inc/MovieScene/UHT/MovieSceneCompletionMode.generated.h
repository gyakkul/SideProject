// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneCompletionMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneCompletionMode_generated_h
#error "MovieSceneCompletionMode.generated.h already included, missing '#pragma once' in MovieSceneCompletionMode.h"
#endif
#define MOVIESCENE_MovieSceneCompletionMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneCompletionMode_h


#define FOREACH_ENUM_EMOVIESCENECOMPLETIONMODE(op) \
	op(EMovieSceneCompletionMode::KeepState) \
	op(EMovieSceneCompletionMode::RestoreState) \
	op(EMovieSceneCompletionMode::ProjectDefault) 

enum class EMovieSceneCompletionMode : uint8;
template<> struct TIsUEnumClass<EMovieSceneCompletionMode> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneCompletionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
