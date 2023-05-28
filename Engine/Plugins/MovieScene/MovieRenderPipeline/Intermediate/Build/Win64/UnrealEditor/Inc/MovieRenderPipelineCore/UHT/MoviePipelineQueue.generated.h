// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineQueue.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMoviePipelineExecutorJob;
class UMoviePipelinePrimaryConfig;
class UMoviePipelineQueue;
class UMoviePipelineShotConfig;
struct FSoftObjectPath;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineQueue_generated_h
#error "MoviePipelineQueue.generated.h already included, missing '#pragma once' in MoviePipelineQueue.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineQueue_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineSidecarCamera_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineSidecarCamera>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_RPC_WRAPPERS \
	virtual float GetStatusProgress_Implementation() const; \
	virtual void SetStatusProgress_Implementation(const float InProgress); \
	virtual FString GetStatusMessage_Implementation() const; \
	virtual void SetStatusMessage_Implementation(const FString& InStatus); \
 \
	DECLARE_FUNCTION(execGetCameraName); \
	DECLARE_FUNCTION(execShouldRender); \
	DECLARE_FUNCTION(execGetShotOverridePresetOrigin); \
	DECLARE_FUNCTION(execGetShotOverrideConfiguration); \
	DECLARE_FUNCTION(execSetShotOverridePresetOrigin); \
	DECLARE_FUNCTION(execSetShotOverrideConfiguration); \
	DECLARE_FUNCTION(execAllocateNewShotOverrideConfig); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCameraName); \
	DECLARE_FUNCTION(execShouldRender); \
	DECLARE_FUNCTION(execGetShotOverridePresetOrigin); \
	DECLARE_FUNCTION(execGetShotOverrideConfiguration); \
	DECLARE_FUNCTION(execSetShotOverridePresetOrigin); \
	DECLARE_FUNCTION(execSetShotOverrideConfiguration); \
	DECLARE_FUNCTION(execAllocateNewShotOverrideConfig); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorShot(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorShot_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorShot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorShot)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorShot(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorShot_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorShot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorShot)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineExecutorShot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineExecutorShot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorShot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorShot(UMoviePipelineExecutorShot&&); \
	NO_API UMoviePipelineExecutorShot(const UMoviePipelineExecutorShot&); \
public: \
	NO_API virtual ~UMoviePipelineExecutorShot();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorShot(UMoviePipelineExecutorShot&&); \
	NO_API UMoviePipelineExecutorShot(const UMoviePipelineExecutorShot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorShot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorShot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineExecutorShot) \
	NO_API virtual ~UMoviePipelineExecutorShot();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_45_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineExecutorShot>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_RPC_WRAPPERS \
	virtual void OnDuplicated_Implementation(); \
	virtual bool IsEnabled_Implementation() const; \
	virtual void SetIsEnabled_Implementation(bool bInEnabled); \
	virtual bool IsConsumed_Implementation() const; \
	virtual void SetConsumed_Implementation(bool bInConsumed); \
	virtual float GetStatusProgress_Implementation() const; \
	virtual void SetStatusProgress_Implementation(const float InProgress); \
	virtual FString GetStatusMessage_Implementation() const; \
	virtual void SetStatusMessage_Implementation(const FString& InStatus); \
 \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execGetConfiguration); \
	DECLARE_FUNCTION(execGetPresetOrigin); \
	DECLARE_FUNCTION(execSetPresetOrigin); \
	DECLARE_FUNCTION(execOnDuplicated); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execIsConsumed); \
	DECLARE_FUNCTION(execSetConsumed); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execSetConfiguration); \
	DECLARE_FUNCTION(execGetConfiguration); \
	DECLARE_FUNCTION(execGetPresetOrigin); \
	DECLARE_FUNCTION(execSetPresetOrigin); \
	DECLARE_FUNCTION(execOnDuplicated); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetIsEnabled); \
	DECLARE_FUNCTION(execIsConsumed); \
	DECLARE_FUNCTION(execSetConsumed); \
	DECLARE_FUNCTION(execGetStatusProgress); \
	DECLARE_FUNCTION(execSetStatusProgress); \
	DECLARE_FUNCTION(execGetStatusMessage); \
	DECLARE_FUNCTION(execSetStatusMessage);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorJob(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorJob_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorJob)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineExecutorJob(); \
	friend struct Z_Construct_UClass_UMoviePipelineExecutorJob_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineExecutorJob, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineExecutorJob)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineExecutorJob(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineExecutorJob) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorJob); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorJob(UMoviePipelineExecutorJob&&); \
	NO_API UMoviePipelineExecutorJob(const UMoviePipelineExecutorJob&); \
public: \
	NO_API virtual ~UMoviePipelineExecutorJob();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineExecutorJob(UMoviePipelineExecutorJob&&); \
	NO_API UMoviePipelineExecutorJob(const UMoviePipelineExecutorJob&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineExecutorJob); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineExecutorJob); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineExecutorJob) \
	NO_API virtual ~UMoviePipelineExecutorJob();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_196_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineExecutorJob>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetJobIndex); \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execSetQueueOrigin); \
	DECLARE_FUNCTION(execGetQueueOrigin); \
	DECLARE_FUNCTION(execGetJobs); \
	DECLARE_FUNCTION(execDuplicateJob); \
	DECLARE_FUNCTION(execDeleteAllJobs); \
	DECLARE_FUNCTION(execDeleteJob); \
	DECLARE_FUNCTION(execAllocateNewJob);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetJobIndex); \
	DECLARE_FUNCTION(execCopyFrom); \
	DECLARE_FUNCTION(execSetQueueOrigin); \
	DECLARE_FUNCTION(execGetQueueOrigin); \
	DECLARE_FUNCTION(execGetJobs); \
	DECLARE_FUNCTION(execDuplicateJob); \
	DECLARE_FUNCTION(execDeleteAllJobs); \
	DECLARE_FUNCTION(execDeleteJob); \
	DECLARE_FUNCTION(execAllocateNewJob);


#if WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsDirty); \
	DECLARE_FUNCTION(execIsDirty);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsDirty); \
	DECLARE_FUNCTION(execIsDirty);


#else
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueue(); \
	friend struct Z_Construct_UClass_UMoviePipelineQueue_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineQueue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineQueue)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineQueue(); \
	friend struct Z_Construct_UClass_UMoviePipelineQueue_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineQueue, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineQueue)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineQueue(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineQueue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineQueue(UMoviePipelineQueue&&); \
	NO_API UMoviePipelineQueue(const UMoviePipelineQueue&); \
public: \
	NO_API virtual ~UMoviePipelineQueue();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineQueue(UMoviePipelineQueue&&); \
	NO_API UMoviePipelineQueue(const UMoviePipelineQueue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineQueue); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineQueue); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMoviePipelineQueue) \
	NO_API virtual ~UMoviePipelineQueue();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_455_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h_458_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineQueue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineQueue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
