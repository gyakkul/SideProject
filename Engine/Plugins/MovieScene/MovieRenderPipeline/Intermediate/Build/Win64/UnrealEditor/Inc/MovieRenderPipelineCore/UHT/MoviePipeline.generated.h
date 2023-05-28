// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipeline;
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UTexture;
struct FDateTime;
struct FMoviePipelineOutputData;
#ifdef MOVIERENDERPIPELINECORE_MoviePipeline_generated_h
#error "MoviePipeline.generated.h already included, missing '#pragma once' in MoviePipeline.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipeline_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_38_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineFinished_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineFinished, UMoviePipeline* MoviePipeline, bool bFatalError);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_39_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineWorkFinished_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineWorkFinished, FMoviePipelineOutputData Results);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMoviePipelineFinishedImpl); \
	DECLARE_FUNCTION(execGetCurrentJob); \
	DECLARE_FUNCTION(execGetPreviewTexture); \
	DECLARE_FUNCTION(execGetPipelineMasterConfig); \
	DECLARE_FUNCTION(execGetPipelinePrimaryConfig); \
	DECLARE_FUNCTION(execSetInitializationTime); \
	DECLARE_FUNCTION(execGetInitializationTime); \
	DECLARE_FUNCTION(execIsShutdownRequested); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRequestShutdown); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMoviePipelineFinishedImpl); \
	DECLARE_FUNCTION(execGetCurrentJob); \
	DECLARE_FUNCTION(execGetPreviewTexture); \
	DECLARE_FUNCTION(execGetPipelineMasterConfig); \
	DECLARE_FUNCTION(execGetPipelinePrimaryConfig); \
	DECLARE_FUNCTION(execSetInitializationTime); \
	DECLARE_FUNCTION(execGetInitializationTime); \
	DECLARE_FUNCTION(execIsShutdownRequested); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execRequestShutdown); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipeline(); \
	friend struct Z_Construct_UClass_UMoviePipeline_Statics; \
public: \
	DECLARE_CLASS(UMoviePipeline, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipeline)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipeline(); \
	friend struct Z_Construct_UClass_UMoviePipeline_Statics; \
public: \
	DECLARE_CLASS(UMoviePipeline, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipeline)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipeline(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipeline) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipeline); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipeline(UMoviePipeline&&); \
	NO_API UMoviePipeline(const UMoviePipeline&); \
public: \
	NO_API virtual ~UMoviePipeline();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipeline(UMoviePipeline&&); \
	NO_API UMoviePipeline(const UMoviePipeline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipeline) \
	NO_API virtual ~UMoviePipeline();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_41_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipeline>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_RPC_WRAPPERS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineCustomTimeStep(); \
	friend struct Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineCustomTimeStep)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineCustomTimeStep(); \
	friend struct Z_Construct_UClass_UMoviePipelineCustomTimeStep_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineCustomTimeStep, UEngineCustomTimeStep, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineCustomTimeStep)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineCustomTimeStep) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCustomTimeStep); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineCustomTimeStep(UMoviePipelineCustomTimeStep&&); \
	NO_API UMoviePipelineCustomTimeStep(const UMoviePipelineCustomTimeStep&); \
public: \
	NO_API virtual ~UMoviePipelineCustomTimeStep();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineCustomTimeStep(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineCustomTimeStep(UMoviePipelineCustomTimeStep&&); \
	NO_API UMoviePipelineCustomTimeStep(const UMoviePipelineCustomTimeStep&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineCustomTimeStep); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineCustomTimeStep); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineCustomTimeStep) \
	NO_API virtual ~UMoviePipelineCustomTimeStep();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_521_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h_524_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineCustomTimeStep>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
