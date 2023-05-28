// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneEvaluationTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneEvaluationTrack_generated_h
#error "MovieSceneEvaluationTrack.generated.h already included, missing '#pragma once' in MovieSceneEvaluationTrack.h"
#endif
#define MOVIESCENE_MovieSceneEvaluationTrack_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEvaluationTrack_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEvaluationTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationTrack_h


#define FOREACH_ENUM_EEVALUATIONMETHOD(op) \
	op(EEvaluationMethod::Static) \
	op(EEvaluationMethod::Swept) 

enum class EEvaluationMethod : uint8;
template<> struct TIsUEnumClass<EEvaluationMethod> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EEvaluationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
