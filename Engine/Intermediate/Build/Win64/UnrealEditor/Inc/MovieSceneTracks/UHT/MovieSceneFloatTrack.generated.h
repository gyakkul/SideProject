// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneFloatTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneFloatTrack_generated_h
#error "MovieSceneFloatTrack.generated.h already included, missing '#pragma once' in MovieSceneFloatTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneFloatTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneFloatTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneFloatTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFloatTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneFloatTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneFloatTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneFloatTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneFloatTrack, UMovieScenePropertyTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneFloatTrack)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneFloatTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFloatTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneFloatTrack(UMovieSceneFloatTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneFloatTrack(const UMovieSceneFloatTrack&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneFloatTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneFloatTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneFloatTrack(UMovieSceneFloatTrack&&); \
	MOVIESCENETRACKS_API UMovieSceneFloatTrack(const UMovieSceneFloatTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneFloatTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneFloatTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneFloatTrack) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneFloatTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_14_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneFloatTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneFloatTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFloatTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
