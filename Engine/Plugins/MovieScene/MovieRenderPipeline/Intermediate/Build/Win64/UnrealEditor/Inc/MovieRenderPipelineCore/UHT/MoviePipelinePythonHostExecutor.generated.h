// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelinePythonHostExecutor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineQueue;
class UWorld;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelinePythonHostExecutor_generated_h
#error "MoviePipelinePythonHostExecutor.generated.h already included, missing '#pragma once' in MoviePipelinePythonHostExecutor.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelinePythonHostExecutor_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_RPC_WRAPPERS \
	virtual void OnMapLoad_Implementation(UWorld* InWorld); \
	virtual void ExecuteDelayed_Implementation(UMoviePipelineQueue* InPipelineQueue); \
 \
	DECLARE_FUNCTION(execGetLastLoadedWorld); \
	DECLARE_FUNCTION(execOnMapLoad); \
	DECLARE_FUNCTION(execExecuteDelayed);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastLoadedWorld); \
	DECLARE_FUNCTION(execOnMapLoad); \
	DECLARE_FUNCTION(execExecuteDelayed);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelinePythonHostExecutor(); \
	friend struct Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelinePythonHostExecutor, UMoviePipelineExecutorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelinePythonHostExecutor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelinePythonHostExecutor(); \
	friend struct Z_Construct_UClass_UMoviePipelinePythonHostExecutor_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelinePythonHostExecutor, UMoviePipelineExecutorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelinePythonHostExecutor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelinePythonHostExecutor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelinePythonHostExecutor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelinePythonHostExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelinePythonHostExecutor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelinePythonHostExecutor(UMoviePipelinePythonHostExecutor&&); \
	NO_API UMoviePipelinePythonHostExecutor(const UMoviePipelinePythonHostExecutor&); \
public: \
	NO_API virtual ~UMoviePipelinePythonHostExecutor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelinePythonHostExecutor(UMoviePipelinePythonHostExecutor&&); \
	NO_API UMoviePipelinePythonHostExecutor(const UMoviePipelinePythonHostExecutor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelinePythonHostExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelinePythonHostExecutor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelinePythonHostExecutor) \
	NO_API virtual ~UMoviePipelinePythonHostExecutor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_16_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelinePythonHostExecutor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelinePythonHostExecutor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
