// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovieRenderPipelineDataTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIERENDERPIPELINECORE_MovieRenderPipelineDataTypes_generated_h
#error "MovieRenderPipelineDataTypes.generated.h already included, missing '#pragma once' in MovieRenderPipelineDataTypes.h"
#endif
#define MOVIERENDERPIPELINECORE_MovieRenderPipelineDataTypes_generated_h

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelinePassIdentifier>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_419_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineSegmentWorkMetrics>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_476_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineCameraCutInfo>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_763_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineFormatArgs>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_786_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineFilenameResolveParams>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_1235_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineRenderPassOutputData>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_1244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineShotOutputData>();

#define FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_1292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics; \
	MOVIERENDERPIPELINECORE_API static class UScriptStruct* StaticStruct();


template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<struct FMoviePipelineOutputData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h


#define FOREACH_ENUM_EMOVIERENDERPIPELINESTATE(op) \
	op(EMovieRenderPipelineState::Uninitialized) \
	op(EMovieRenderPipelineState::ProducingFrames) \
	op(EMovieRenderPipelineState::Finalize) \
	op(EMovieRenderPipelineState::Export) \
	op(EMovieRenderPipelineState::Finished) 

enum class EMovieRenderPipelineState : uint8;
template<> struct TIsUEnumClass<EMovieRenderPipelineState> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderPipelineState>();

#define FOREACH_ENUM_EMOVIERENDERSHOTSTATE(op) \
	op(EMovieRenderShotState::Uninitialized) \
	op(EMovieRenderShotState::WarmingUp) \
	op(EMovieRenderShotState::MotionBlur) \
	op(EMovieRenderShotState::Rendering) \
	op(EMovieRenderShotState::Finished) 

enum class EMovieRenderShotState : uint8;
template<> struct TIsUEnumClass<EMovieRenderShotState> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderShotState>();

#define FOREACH_ENUM_EMOVIEPIPELINESHUTTERTIMING(op) \
	op(EMoviePipelineShutterTiming::FrameOpen) \
	op(EMoviePipelineShutterTiming::FrameCenter) \
	op(EMoviePipelineShutterTiming::FrameClose) 

enum class EMoviePipelineShutterTiming : uint8;
template<> struct TIsUEnumClass<EMoviePipelineShutterTiming> { enum { Value = true }; };
template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineShutterTiming>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
