// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSequence.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMovieSceneObjectBindingID;
struct FMovieSceneTimecodeSource;
#ifdef MOVIESCENE_MovieSceneSequence_generated_h
#error "MovieSceneSequence.generated.h already included, missing '#pragma once' in MovieSceneSequence.h"
#endif
#define MOVIESCENE_MovieSceneSequence_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEarliestTimecodeSource); \
	DECLARE_FUNCTION(execFindBindingsByTag); \
	DECLARE_FUNCTION(execFindBindingByTag);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEarliestTimecodeSource); \
	DECLARE_FUNCTION(execFindBindingsByTag); \
	DECLARE_FUNCTION(execFindBindingByTag);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ACCESSORS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSequence, MOVIESCENE_API)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequence(); \
	friend struct Z_Construct_UClass_UMovieSceneSequence_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequence, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSequence) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSequence(); \
	friend struct Z_Construct_UClass_UMovieSceneSequence_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequence, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSequence) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSequence(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequence) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequence); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSequence(UMovieSceneSequence&&); \
	MOVIESCENE_API UMovieSceneSequence(const UMovieSceneSequence&); \
public: \
	MOVIESCENE_API virtual ~UMovieSceneSequence();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSequence(UMovieSceneSequence&&); \
	MOVIESCENE_API UMovieSceneSequence(const UMovieSceneSequence&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSequence); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequence); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequence) \
	MOVIESCENE_API virtual ~UMovieSceneSequence();


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_55_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h_61_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSequence>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequence_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
