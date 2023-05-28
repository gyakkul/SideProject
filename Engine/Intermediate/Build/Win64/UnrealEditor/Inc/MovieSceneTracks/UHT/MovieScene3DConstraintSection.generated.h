// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sections/MovieScene3DConstraintSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
#ifdef MOVIESCENETRACKS_MovieScene3DConstraintSection_generated_h
#error "MovieScene3DConstraintSection.generated.h already included, missing '#pragma once' in MovieScene3DConstraintSection.h"
#endif
#define MOVIESCENETRACKS_MovieScene3DConstraintSection_generated_h

#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetConstraintBindingID); \
	DECLARE_FUNCTION(execGetConstraintBindingID);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetConstraintBindingID); \
	DECLARE_FUNCTION(execGetConstraintBindingID);


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieScene3DConstraintSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DConstraintSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DConstraintSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMovieScene3DConstraintSection(); \
	friend struct Z_Construct_UClass_UMovieScene3DConstraintSection_Statics; \
public: \
	DECLARE_CLASS(UMovieScene3DConstraintSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), MOVIESCENETRACKS_API) \
	DECLARE_SERIALIZER(UMovieScene3DConstraintSection)


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DConstraintSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DConstraintSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DConstraintSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(UMovieScene3DConstraintSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const UMovieScene3DConstraintSection&); \
public: \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DConstraintSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(UMovieScene3DConstraintSection&&); \
	MOVIESCENETRACKS_API UMovieScene3DConstraintSection(const UMovieScene3DConstraintSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENETRACKS_API, UMovieScene3DConstraintSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieScene3DConstraintSection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieScene3DConstraintSection) \
	MOVIESCENETRACKS_API virtual ~UMovieScene3DConstraintSection();


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_27_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieScene3DConstraintSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieScene3DConstraintSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DConstraintSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
