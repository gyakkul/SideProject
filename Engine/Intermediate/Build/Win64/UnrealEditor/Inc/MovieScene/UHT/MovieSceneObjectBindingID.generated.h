// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneObjectBindingID.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneObjectBindingID_generated_h
#error "MovieSceneObjectBindingID.generated.h already included, missing '#pragma once' in MovieSceneObjectBindingID.h"
#endif
#define MOVIESCENE_MovieSceneObjectBindingID_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_199_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneObjectBindingID>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h


#define FOREACH_ENUM_EMOVIESCENEOBJECTBINDINGSPACE(op) \
	op(EMovieSceneObjectBindingSpace::Local) \
	op(EMovieSceneObjectBindingSpace::Root) \
	op(EMovieSceneObjectBindingSpace::Unused) 

enum class EMovieSceneObjectBindingSpace : uint8;
template<> struct TIsUEnumClass<EMovieSceneObjectBindingSpace> { enum { Value = true }; };
template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneObjectBindingSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
