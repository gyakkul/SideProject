// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Evaluation/IMovieSceneCustomClockSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFrameTime;
struct FQualifiedFrameTime;
#ifdef MOVIESCENE_IMovieSceneCustomClockSource_generated_h
#error "IMovieSceneCustomClockSource.generated.h already included, missing '#pragma once' in IMovieSceneCustomClockSource.h"
#endif
#define MOVIESCENE_IMovieSceneCustomClockSource_generated_h

#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRequestCurrentTime); \
	DECLARE_FUNCTION(execOnStopPlaying); \
	DECLARE_FUNCTION(execOnStartPlaying); \
	DECLARE_FUNCTION(execOnTick);


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRequestCurrentTime); \
	DECLARE_FUNCTION(execOnStopPlaying); \
	DECLARE_FUNCTION(execOnStartPlaying); \
	DECLARE_FUNCTION(execOnTick);


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCustomClockSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCustomClockSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCustomClockSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCustomClockSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCustomClockSource(UMovieSceneCustomClockSource&&); \
	NO_API UMovieSceneCustomClockSource(const UMovieSceneCustomClockSource&); \
public: \
	NO_API virtual ~UMovieSceneCustomClockSource();


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCustomClockSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCustomClockSource(UMovieSceneCustomClockSource&&); \
	NO_API UMovieSceneCustomClockSource(const UMovieSceneCustomClockSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCustomClockSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCustomClockSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCustomClockSource) \
	NO_API virtual ~UMovieSceneCustomClockSource();


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMovieSceneCustomClockSource(); \
	friend struct Z_Construct_UClass_UMovieSceneCustomClockSource_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCustomClockSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCustomClockSource)


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMovieSceneCustomClockSource() {} \
public: \
	typedef UMovieSceneCustomClockSource UClassType; \
	typedef IMovieSceneCustomClockSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_INCLASS_IINTERFACE \
protected: \
	virtual ~IMovieSceneCustomClockSource() {} \
public: \
	typedef UMovieSceneCustomClockSource UClassType; \
	typedef IMovieSceneCustomClockSource ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_19_PROLOG
#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h_22_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENE_API UClass* StaticClass<class UMovieSceneCustomClockSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneCustomClockSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
