// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieSceneCaptureEnvironment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMovieSceneAudioCaptureProtocolBase;
class UMovieSceneImageCaptureProtocolBase;
#ifdef MOVIESCENECAPTURE_MovieSceneCaptureEnvironment_generated_h
#error "MovieSceneCaptureEnvironment.generated.h already included, missing '#pragma once' in MovieSceneCaptureEnvironment.h"
#endif
#define MOVIESCENECAPTURE_MovieSceneCaptureEnvironment_generated_h

#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindAudioCaptureProtocol); \
	DECLARE_FUNCTION(execFindImageCaptureProtocol); \
	DECLARE_FUNCTION(execIsCaptureInProgress); \
	DECLARE_FUNCTION(execGetCaptureElapsedTime); \
	DECLARE_FUNCTION(execGetCaptureFrameNumber);


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindAudioCaptureProtocol); \
	DECLARE_FUNCTION(execFindImageCaptureProtocol); \
	DECLARE_FUNCTION(execIsCaptureInProgress); \
	DECLARE_FUNCTION(execGetCaptureElapsedTime); \
	DECLARE_FUNCTION(execGetCaptureFrameNumber);


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureEnvironment(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureEnvironment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureEnvironment)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneCaptureEnvironment(); \
	friend struct Z_Construct_UClass_UMovieSceneCaptureEnvironment_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneCaptureEnvironment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneCaptureEnvironment)


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCaptureEnvironment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureEnvironment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCaptureEnvironment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureEnvironment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCaptureEnvironment(UMovieSceneCaptureEnvironment&&); \
	NO_API UMovieSceneCaptureEnvironment(const UMovieSceneCaptureEnvironment&); \
public: \
	NO_API virtual ~UMovieSceneCaptureEnvironment();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneCaptureEnvironment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneCaptureEnvironment(UMovieSceneCaptureEnvironment&&); \
	NO_API UMovieSceneCaptureEnvironment(const UMovieSceneCaptureEnvironment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneCaptureEnvironment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneCaptureEnvironment); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneCaptureEnvironment) \
	NO_API virtual ~UMovieSceneCaptureEnvironment();


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_13_PROLOG
#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENECAPTURE_API UClass* StaticClass<class UMovieSceneCaptureEnvironment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieSceneCapture_Public_MovieSceneCaptureEnvironment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
