// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieSceneEnumSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneEnumSection_generated_h
#error "MovieSceneEnumSection.generated.h already included, missing '#pragma once' in MovieSceneEnumSection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneEnumSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneEnumSection(); \
	friend struct Z_Construct_UClass_UMovieSceneEnumSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEnumSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEnumSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEnumSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneEnumSection(); \
	friend struct Z_Construct_UClass_UMovieSceneEnumSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneEnumSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieSceneEnumSection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneEnumSection*>(this); }


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEnumSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEnumSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEnumSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEnumSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEnumSection(UMovieSceneEnumSection&&); \
	MOVIESCENETRACKS_API UMovieSceneEnumSection(const UMovieSceneEnumSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEnumSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieSceneEnumSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieSceneEnumSection(UMovieSceneEnumSection&&); \
	MOVIESCENETRACKS_API UMovieSceneEnumSection(const UMovieSceneEnumSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieSceneEnumSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneEnumSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneEnumSection) \
	MOVIESCENETRACKS_API virtual ~UMovieSceneEnumSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_15_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneEnumSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneEnumSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
