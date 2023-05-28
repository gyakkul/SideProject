// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tracks/MovieSceneAudioTrack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneAudioTrack_generated_h
#error "MovieSceneAudioTrack.generated.h already included, missing '#pragma once' in MovieSceneAudioTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneAudioTrack_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAudioTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAudioTrack*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioTrack(UMovieSceneAudioTrack&&); \
	NO_API UMovieSceneAudioTrack(const UMovieSceneAudioTrack&); \
public: \
	NO_API virtual ~UMovieSceneAudioTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioTrack(UMovieSceneAudioTrack&&); \
	NO_API UMovieSceneAudioTrack(const UMovieSceneAudioTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioTrack) \
	NO_API virtual ~UMovieSceneAudioTrack();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_22_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneAudioTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneAudioTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
