// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/Blending/MovieSceneBlendType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBlendType_generated_h
#error "MovieSceneBlendType.generated.h already included, missing '#pragma once' in MovieSceneBlendType.h"
#endif
#define MOVIESCENE_MovieSceneBlendType_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOptionalMovieSceneBlendType_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FOptionalMovieSceneBlendType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_Blending_MovieSceneBlendType_h


#define FOREACH_ENUM_EMOVIESCENEBLENDTYPE(op) \
	op(EMovieSceneBlendType::Invalid) \
	op(EMovieSceneBlendType::Absolute) \
	op(EMovieSceneBlendType::Additive) \
	op(EMovieSceneBlendType::Relative) \
	op(EMovieSceneBlendType::AdditiveFromBase) 

enum class EMovieSceneBlendType : uint8;
template<> struct TIsUEnumClass<EMovieSceneBlendType> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneBlendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
