// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneTransformTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneTransformTrack_generated_h
#error "MovieSceneTransformTrack.generated.h already included, missing '#pragma once' in MovieSceneTransformTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneTransformTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneTransformTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneTransformTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTransformTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneTransformTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneTransformTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneTransformTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneTransformTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneTransformTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneTransformTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTransformTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTransformTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTransformTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneTransformTrack(UMovieSceneTransformTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneTransformTrack(const UMovieSceneTransformTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTransformTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneTransformTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneTransformTrack(UMovieSceneTransformTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneTransformTrack(const UMovieSceneTransformTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneTransformTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneTransformTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneTransformTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneTransformTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneTransformTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneTransformTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneTransformTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
