// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneBoolSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENE_MovieSceneBoolSection_generated_h
#error "MovieSceneBoolSection.generated.h already included, missing '#pragma once' in MovieSceneBoolSection.h"
#endif
#define MOVIESCENE_MovieSceneBoolSection_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ACCESSORS
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneBoolSection, MOVIESCENE_API)


#else
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ARCHIVESERIALIZER
#endif
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneBoolSection(); \
	friend struct Z_Construct_UClass_UMovieSceneBoolSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBoolSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBoolSection) \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneBoolSection(); \
	friend struct Z_Construct_UClass_UMovieSceneBoolSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneBoolSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneBoolSection) \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneBoolSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoolSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBoolSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoolSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneBoolSection(UMovieSceneBoolSection&&); \
	MOVIESCENE_API UMovieSceneBoolSection(const UMovieSceneBoolSection&); \
public: \
	MOVIESCENE_API virtual ~UMovieSceneBoolSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneBoolSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneBoolSection(UMovieSceneBoolSection&&); \
	MOVIESCENE_API UMovieSceneBoolSection(const UMovieSceneBoolSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneBoolSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneBoolSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneBoolSection) \
	MOVIESCENE_API virtual ~UMovieSceneBoolSection();


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_20_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneBoolSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneBoolSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Sections_MovieSceneBoolSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
