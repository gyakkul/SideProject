// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelinePIEExecutor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineExecutorJob;
struct FDateTime;
#ifdef MOVIERENDERPIPELINEEDITOR_MoviePipelinePIEExecutor_generated_h
#error "MoviePipelinePIEExecutor.generated.h already included, missing '#pragma once' in MoviePipelinePIEExecutor.h"
#endif
#define MOVIERENDERPIPELINEEDITOR_MoviePipelinePIEExecutor_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_14_DELEGATE \
MOVIERENDERPIPELINEEDITOR_API void FOnMoviePipelineIndividualJobFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineIndividualJobFinished, UMoviePipelineExecutorJob* FinishedJob, bool bSuccess);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_18_DELEGATE \
MOVIERENDERPIPELINEEDITOR_API void FOnMoviePipelineIndividualJobStarted_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineIndividualJobStarted, UMoviePipelineExecutorJob* StartedJob);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsRenderingOffscreen); \
	DECLARE_FUNCTION(execSetIsRenderingOffscreen); \
	DECLARE_FUNCTION(execSetInitializationTime);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsRenderingOffscreen); \
	DECLARE_FUNCTION(execSetIsRenderingOffscreen); \
	DECLARE_FUNCTION(execSetInitializationTime);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelinePIEExecutor(); \
	friend struct Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelinePIEExecutor, UMoviePipelineLinearExecutorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelinePIEExecutor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelinePIEExecutor(); \
	friend struct Z_Construct_UClass_UMoviePipelinePIEExecutor_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelinePIEExecutor, UMoviePipelineLinearExecutorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineEditor"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelinePIEExecutor)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelinePIEExecutor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelinePIEExecutor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelinePIEExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelinePIEExecutor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelinePIEExecutor(UMoviePipelinePIEExecutor&&); \
	NO_API UMoviePipelinePIEExecutor(const UMoviePipelinePIEExecutor&); \
public: \
	NO_API virtual ~UMoviePipelinePIEExecutor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelinePIEExecutor(UMoviePipelinePIEExecutor&&); \
	NO_API UMoviePipelinePIEExecutor(const UMoviePipelinePIEExecutor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelinePIEExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelinePIEExecutor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelinePIEExecutor) \
	NO_API virtual ~UMoviePipelinePIEExecutor();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_26_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<class UMoviePipelinePIEExecutor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelinePIEExecutor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
