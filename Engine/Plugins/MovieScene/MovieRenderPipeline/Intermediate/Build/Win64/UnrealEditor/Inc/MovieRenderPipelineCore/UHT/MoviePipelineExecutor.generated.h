// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineExecutor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UMoviePipeline;
class UMoviePipelineExecutorBase;
class UMoviePipelineQueue;
class UObject;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineExecutor_generated_h
#error "MoviePipelineExecutor.generated.h already included, missing '#pragma once' in MoviePipelineExecutor.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineExecutor_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_20_DELEGATE \
MOVIERENDERPIPELINECORE_API void FOnMoviePipelineExecutorFinished_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorFinished, UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_23_DELEGATE \
MOVIERENDERPIPELINECORE_API void FOnMoviePipelineExecutorErrored_DelegateWrapper(const FMulticastScriptDelegate& OnMoviePipelineExecutorErrored, UMoviePipelineExecutorBase* PipelineExecutor, UMoviePipeline* PipelineWithError, bool bIsFatal, const FText& ErrorText);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_26_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineSocketMessageRecieved_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineSocketMessageRecieved, const FString& Message);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_29_DELEGATE \
MOVIERENDERPIPELINECORE_API void FMoviePipelineHttpResponseRecieved_DelegateWrapper(const FMulticastScriptDelegate& MoviePipelineHttpResponseRecieved, int32 RequestIndex, int32 ResponseCode, const FString& Message);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_RPC_WRAPPERS \
	virtual void CancelAllJobs_Implementation(); \
	virtual void CancelCurrentJob_Implementation(); \
	virtual float GetStatusProgress_Implementation() const; \
	virtual void SetStatusProgress_Implementation(const float InProgress); \
	virtual FString GetStatusMessage_Implementation() const; \
	virtual void SetStatusMessage_Implementation(const FString& InStatus); \
	virtual void OnBeginFrame_Implementation(); \
	virtual bool IsRendering_Implementation() const; \
	virtual void Execute_Implementation(UMoviePipelineQueue* InPipelineQueue); \
 \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execIsSocketConnected); \
	DECLARE_FUNCTION(execSendSocketMessage); \
	DECLARE_FUNCTION(execDisconnectSocket); \
	DECLARE_FUNCTION(execConnectSocket); \
	DECLARE_FUNCTION(execOnExecutorErroredImpl); \
	DECLARE_FUNCTION(execOnExecutorFinishedImpl); \
	DECLARE_FUNCTION(execSetMoviePipelineClass); \
	DECLARE_FUNCTION(execCancelAllJobs); \
	DECLARE_FUNCTION(execCancelCurrentJob); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage); \
	DECLARE_FUNCTION(execOnBeginFrame); \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendHTTPRequest); \
	DECLARE_FUNCTION(execIsSocketConnected); \
	DECLARE_FUNCTION(execSendSocketMessage); \
	DECLARE_FUNCTION(execDisconnectSocket); \
	DECLARE_FUNCTION(execConnectSocket); \
	DECLARE_FUNCTION(execOnExecutorErroredImpl); \
	DECLARE_FUNCTION(execOnExecutorFinishedImpl); \
	DECLARE_FUNCTION(execSetMoviePipelineClass); \
	DECLARE_FUNCTION(execCancelAllJobs); \
	DECLARE_FUNCTION(execCancelCurrentJob); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage); \
	DECLARE_FUNCTION(execOnBeginFrame); \
	DECLARE_FUNCTION(execIsRendering); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorBase(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorBase_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorBase(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorBase_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorBase)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineExecutorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineExecutorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorBase(UMoviePipelineExecutorBase&&); \
	NO_API UMoviePipelineExecutorBase(const UMoviePipelineExecutorBase&); \
public: \
	NO_API virtual ~UMoviePipelineExecutorBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorBase(UMoviePipelineExecutorBase&&); \
	NO_API UMoviePipelineExecutorBase(const UMoviePipelineExecutorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineExecutorBase) \
	NO_API virtual ~UMoviePipelineExecutorBase();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_43_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineExecutorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineExecutor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
