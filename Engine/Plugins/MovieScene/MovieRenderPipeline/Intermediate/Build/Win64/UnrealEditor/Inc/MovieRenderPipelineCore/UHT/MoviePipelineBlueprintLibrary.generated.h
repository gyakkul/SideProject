// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MoviePipelineBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevelSequence;
class UMoviePipeline;
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;
class UMoviePipelinePrimaryConfig;
class UMoviePipelineQueue;
class UMoviePipelineSetting;
class UMovieSceneSequence;
class UObject;
enum class EMovieRenderPipelineState : uint8;
enum class EMovieRenderShotState : uint8;
struct FDateTime;
struct FFrameNumber;
struct FMoviePipelineFilenameResolveParams;
struct FMoviePipelineFormatArgs;
struct FMoviePipelineSegmentWorkMetrics;
struct FTimecode;
struct FTimespan;
#ifdef MOVIERENDERPIPELINECORE_MoviePipelineBlueprintLibrary_generated_h
#error "MoviePipelineBlueprintLibrary.generated.h already included, missing '#pragma once' in MoviePipelineBlueprintLibrary.h"
#endif
#define MOVIERENDERPIPELINECORE_MoviePipelineBlueprintLibrary_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_SPARSE_DATA
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMoviePipelineEngineChangelistLabel); \
	DECLARE_FUNCTION(execGetCurrentExecutorShot); \
	DECLARE_FUNCTION(execGetCurrentSequence); \
	DECLARE_FUNCTION(execFindOrGetDefaultSettingForShot); \
	DECLARE_FUNCTION(execGetEffectiveOutputResolution); \
	DECLARE_FUNCTION(execResolveVersionNumber); \
	DECLARE_FUNCTION(execUpdateJobShotListFromSequence); \
	DECLARE_FUNCTION(execLoadManifestFileFromString); \
	DECLARE_FUNCTION(execGetMapPackageName); \
	DECLARE_FUNCTION(execGetCurrentAperture); \
	DECLARE_FUNCTION(execGetCurrentFocalLength); \
	DECLARE_FUNCTION(execGetCurrentFocusDistance); \
	DECLARE_FUNCTION(execGetCurrentShotFrameNumber); \
	DECLARE_FUNCTION(execGetCurrentShotTimecode); \
	DECLARE_FUNCTION(execGetMasterFrameNumber); \
	DECLARE_FUNCTION(execGetRootFrameNumber); \
	DECLARE_FUNCTION(execGetMasterTimecode); \
	DECLARE_FUNCTION(execGetRootTimecode); \
	DECLARE_FUNCTION(execGetCompletionPercentage); \
	DECLARE_FUNCTION(execGetCurrentSegmentWorkMetrics); \
	DECLARE_FUNCTION(execGetOverallSegmentCounts); \
	DECLARE_FUNCTION(execGetCurrentSegmentName); \
	DECLARE_FUNCTION(execGetOverallOutputFrames); \
	DECLARE_FUNCTION(execGetJobAuthor); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execGetCurrentSegmentState); \
	DECLARE_FUNCTION(execGetPipelineState); \
	DECLARE_FUNCTION(execGetJobInitializationTime); \
	DECLARE_FUNCTION(execGetEstimatedTimeRemaining); \
	DECLARE_FUNCTION(execResolveFilenameFormatArguments); \
	DECLARE_FUNCTION(execDuplicateSequence);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMoviePipelineEngineChangelistLabel); \
	DECLARE_FUNCTION(execGetCurrentExecutorShot); \
	DECLARE_FUNCTION(execGetCurrentSequence); \
	DECLARE_FUNCTION(execFindOrGetDefaultSettingForShot); \
	DECLARE_FUNCTION(execGetEffectiveOutputResolution); \
	DECLARE_FUNCTION(execResolveVersionNumber); \
	DECLARE_FUNCTION(execUpdateJobShotListFromSequence); \
	DECLARE_FUNCTION(execLoadManifestFileFromString); \
	DECLARE_FUNCTION(execGetMapPackageName); \
	DECLARE_FUNCTION(execGetCurrentAperture); \
	DECLARE_FUNCTION(execGetCurrentFocalLength); \
	DECLARE_FUNCTION(execGetCurrentFocusDistance); \
	DECLARE_FUNCTION(execGetCurrentShotFrameNumber); \
	DECLARE_FUNCTION(execGetCurrentShotTimecode); \
	DECLARE_FUNCTION(execGetMasterFrameNumber); \
	DECLARE_FUNCTION(execGetRootFrameNumber); \
	DECLARE_FUNCTION(execGetMasterTimecode); \
	DECLARE_FUNCTION(execGetRootTimecode); \
	DECLARE_FUNCTION(execGetCompletionPercentage); \
	DECLARE_FUNCTION(execGetCurrentSegmentWorkMetrics); \
	DECLARE_FUNCTION(execGetOverallSegmentCounts); \
	DECLARE_FUNCTION(execGetCurrentSegmentName); \
	DECLARE_FUNCTION(execGetOverallOutputFrames); \
	DECLARE_FUNCTION(execGetJobAuthor); \
	DECLARE_FUNCTION(execGetJobName); \
	DECLARE_FUNCTION(execGetCurrentSegmentState); \
	DECLARE_FUNCTION(execGetPipelineState); \
	DECLARE_FUNCTION(execGetJobInitializationTime); \
	DECLARE_FUNCTION(execGetEstimatedTimeRemaining); \
	DECLARE_FUNCTION(execResolveFilenameFormatArguments); \
	DECLARE_FUNCTION(execDuplicateSequence);


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_ACCESSORS
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoviePipelineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMoviePipelineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UMoviePipelineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieRenderPipelineCore"), NO_API) \
	DECLARE_SERIALIZER(UMoviePipelineBlueprintLibrary)


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineBlueprintLibrary(UMoviePipelineBlueprintLibrary&&); \
	NO_API UMoviePipelineBlueprintLibrary(const UMoviePipelineBlueprintLibrary&); \
public: \
	NO_API virtual ~UMoviePipelineBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoviePipelineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoviePipelineBlueprintLibrary(UMoviePipelineBlueprintLibrary&&); \
	NO_API UMoviePipelineBlueprintLibrary(const UMoviePipelineBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoviePipelineBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoviePipelineBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoviePipelineBlueprintLibrary) \
	NO_API virtual ~UMoviePipelineBlueprintLibrary();


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_15_PROLOG
#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_INCLASS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_SPARSE_DATA \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_ACCESSORS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<class UMoviePipelineBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
