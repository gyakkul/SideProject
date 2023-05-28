// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMovieSceneBlendType : uint8;
enum class EMovieSceneCompletionMode : uint8;
struct FColor;
struct FOptionalMovieSceneBlendType;
#ifdef MOVIESCENE_MovieSceneSection_generated_h
#error "MovieSceneSection.generated.h already included, missing '#pragma once' in MovieSceneSection.h"
#endif
#define MOVIESCENE_MovieSceneSection_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSectionEvalOptions_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneSectionEvalOptions>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneEasingSettings_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneEasingSettings>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneTimecodeSource_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


template<> MOVIESCENE_API UScriptStruct* StaticStruct<struct FMovieSceneTimecodeSource>();

#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetColorTint); \
	DECLARE_FUNCTION(execSetColorTint); \
	DECLARE_FUNCTION(execGetPostRollFrames); \
	DECLARE_FUNCTION(execSetPostRollFrames); \
	DECLARE_FUNCTION(execGetPreRollFrames); \
	DECLARE_FUNCTION(execSetPreRollFrames); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execGetOverlapPriority); \
	DECLARE_FUNCTION(execSetOverlapPriority); \
	DECLARE_FUNCTION(execGetRowIndex); \
	DECLARE_FUNCTION(execSetRowIndex); \
	DECLARE_FUNCTION(execSetBlendType); \
	DECLARE_FUNCTION(execGetBlendType); \
	DECLARE_FUNCTION(execSetCompletionMode); \
	DECLARE_FUNCTION(execGetCompletionMode);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetColorTint); \
	DECLARE_FUNCTION(execSetColorTint); \
	DECLARE_FUNCTION(execGetPostRollFrames); \
	DECLARE_FUNCTION(execSetPostRollFrames); \
	DECLARE_FUNCTION(execGetPreRollFrames); \
	DECLARE_FUNCTION(execSetPreRollFrames); \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execSetIsLocked); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execGetOverlapPriority); \
	DECLARE_FUNCTION(execSetOverlapPriority); \
	DECLARE_FUNCTION(execGetRowIndex); \
	DECLARE_FUNCTION(execSetRowIndex); \
	DECLARE_FUNCTION(execSetBlendType); \
	DECLARE_FUNCTION(execGetBlendType); \
	DECLARE_FUNCTION(execSetCompletionMode); \
	DECLARE_FUNCTION(execGetCompletionMode);


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ACCESSORS
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneSection, MOVIESCENE_API)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSection, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSection) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSection(); \
	friend struct Z_Construct_UClass_UMovieSceneSection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSection, UMovieSceneSignedObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), MOVIESCENE_API) \
	DECLARE_SERIALIZER(UMovieSceneSection) \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSection(UMovieSceneSection&&); \
	MOVIESCENE_API UMovieSceneSection(const UMovieSceneSection&); \
public:


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOVIESCENE_API UMovieSceneSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOVIESCENE_API UMovieSceneSection(UMovieSceneSection&&); \
	MOVIESCENE_API UMovieSceneSection(const UMovieSceneSection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOVIESCENE_API, UMovieSceneSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSection); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSection)


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_248_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_INCLASS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h_252_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneSection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
