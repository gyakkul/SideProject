// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneAudioSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundBase;
struct FFrameNumber;
#ifdef MOVIESCENETRACKS_MovieSceneAudioSection_generated_h
#error "MovieSceneAudioSection.generated.h already included, missing '#pragma once' in MovieSceneAudioSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneAudioSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execSetStartOffset); \
	DECLARE_FUNCTION(execGetSound); \
	DECLARE_FUNCTION(execSetSound);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execSetStartOffset); \
	DECLARE_FUNCTION(execGetSound); \
	DECLARE_FUNCTION(execSetSound);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneAudioSection, NO_API)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioSection(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioSection) \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioSection(UMovieSceneAudioSection&&); \
	NO_API UMovieSceneAudioSection(const UMovieSceneAudioSection&); \
public: \
	NO_API virtual ~UMovieSceneAudioSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioSection(UMovieSceneAudioSection&&); \
	NO_API UMovieSceneAudioSection(const UMovieSceneAudioSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioSection) \
	NO_API virtual ~UMovieSceneAudioSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_23_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneAudioSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneAudioSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneAudioSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
