// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineQueueEngineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UMoviePipelineExecutorBase;
class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;
class UMovieRenderDebugWidget;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineQueueEngineSubsystem_generated_h
#error "MoviePipelineQueueEngineSubsystem.generated.h already included, missing '#pragma once' in MoviePipelineQueueEngineSubsystem.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineQueueEngineSubsystem_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenderJob); \
	DECLARE_FUNCTION(execAllocateJob); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execRenderQueueWithExecutorInstance); \
	DECLARE_FUNCTION(execRenderQueueWithExecutor); \
	DECLARE_FUNCTION(execGetActiveExecutor); \
	DECLARE_FUNCTION(execGetQueue);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenderJob); \
	DECLARE_FUNCTION(execAllocateJob); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execRenderQueueWithExecutorInstance); \
	DECLARE_FUNCTION(execRenderQueueWithExecutor); \
	DECLARE_FUNCTION(execGetActiveExecutor); \
	DECLARE_FUNCTION(execGetQueue);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueueEngineSubsystem(); \
	friend struct Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineQueueEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineQueueEngineSubsystem)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueueEngineSubsystem(); \
	friend struct Z_Construct_UClass_UMoviePipelineQueueEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineQueueEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineQueueEngineSubsystem)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineQueueEngineSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineQueueEngineSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineQueueEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueueEngineSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineQueueEngineSubsystem(UMoviePipelineQueueEngineSubsystem&&); \
	NO_API UMoviePipelineQueueEngineSubsystem(const UMoviePipelineQueueEngineSubsystem&); \
public: \
	NO_API virtual ~UMoviePipelineQueueEngineSubsystem();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineQueueEngineSubsystem(UMoviePipelineQueueEngineSubsystem&&); \
	NO_API UMoviePipelineQueueEngineSubsystem(const UMoviePipelineQueueEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineQueueEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueueEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineQueueEngineSubsystem) \
	NO_API virtual ~UMoviePipelineQueueEngineSubsystem();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_21_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineQueueEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueueEngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
