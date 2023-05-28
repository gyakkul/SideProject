// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/MovieSceneSegment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneSegment_generated_h
#error "MovieSceneSegment.generated.h already included, missing '#pragma once' in MovieSceneSegment.h"
#endif
#define MOVIESCENE_MovieSceneSegment_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSegmentIdentifier_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSegmentIdentifier>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSectionEvaluationData_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FSectionEvaluationData>();

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSegment_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSegment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSegment_h


#define FOREACH_ENUM_ESECTIONEVALUATIONFLAGS(op) \
	op(ESectionEvaluationFlags::None) \
	op(ESectionEvaluationFlags::PreRoll) \
	op(ESectionEvaluationFlags::PostRoll) 

enum class ESectionEvaluationFlags : uint8;
template<> struct TIsUEnumClass<ESectionEvaluationFlags> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<ESectionEvaluationFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
