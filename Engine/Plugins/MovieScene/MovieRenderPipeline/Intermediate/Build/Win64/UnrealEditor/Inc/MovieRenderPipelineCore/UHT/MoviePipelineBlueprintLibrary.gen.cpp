// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineBlueprintLibrary.h"
#include "MovieRenderPipelineDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineFormatArgs();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetMoviePipelineEngineChangelistLabel)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetMoviePipelineEngineChangelistLabel(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentExecutorShot)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineExecutorShot**)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentExecutorShot(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentSequence)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentSequence(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execFindOrGetDefaultSettingForShot)
	{
		P_GET_OBJECT(UClass,Z_Param_InSettingType);
		P_GET_OBJECT(UMoviePipelinePrimaryConfig,Z_Param_InPrimaryConfig);
		P_GET_OBJECT(UMoviePipelineExecutorShot,Z_Param_InShot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineSetting**)Z_Param__Result=UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot(Z_Param_InSettingType,Z_Param_InPrimaryConfig,Z_Param_InShot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetEffectiveOutputResolution)
	{
		P_GET_OBJECT(UMoviePipelinePrimaryConfig,Z_Param_InPrimaryConfig);
		P_GET_OBJECT(UMoviePipelineExecutorShot,Z_Param_InPipelineExecutorShot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution(Z_Param_InPrimaryConfig,Z_Param_InPipelineExecutorShot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execResolveVersionNumber)
	{
		P_GET_STRUCT(FMoviePipelineFilenameResolveParams,Z_Param_InParams);
		P_GET_UBOOL(Z_Param_bGetNextVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMoviePipelineBlueprintLibrary::ResolveVersionNumber(Z_Param_InParams,Z_Param_bGetNextVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execUpdateJobShotListFromSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_GET_UBOOL_REF(Z_Param_Out_bShotsChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence(Z_Param_InSequence,Z_Param_InJob,Z_Param_Out_bShotsChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execLoadManifestFileFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InManifestFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineQueue**)Z_Param__Result=UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(Z_Param_InManifestFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetMapPackageName)
	{
		P_GET_OBJECT(UMoviePipelineExecutorJob,Z_Param_InJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetMapPackageName(Z_Param_InJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentAperture)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentAperture(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentFocalLength)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentFocusDistance)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentShotFrameNumber)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentShotTimecode)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetMasterFrameNumber)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetMasterFrameNumber(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetRootFrameNumber)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameNumber*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetRootFrameNumber(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetMasterTimecode)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetMasterTimecode(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetRootTimecode)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimecode*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetRootTimecode(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCompletionPercentage)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InPipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCompletionPercentage(Z_Param_InPipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentSegmentWorkMetrics)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMoviePipelineSegmentWorkMetrics*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetOverallSegmentCounts)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrentIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts(Z_Param_InMoviePipeline,Z_Param_Out_OutCurrentIndex,Z_Param_Out_OutTotalCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentSegmentName)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutOuterName);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutInnerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::GetCurrentSegmentName(Z_Param_InMoviePipeline,Z_Param_Out_OutOuterName,Z_Param_Out_OutInnerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetOverallOutputFrames)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCurrentIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutTotalCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::GetOverallOutputFrames(Z_Param_InMoviePipeline,Z_Param_Out_OutCurrentIndex,Z_Param_Out_OutTotalCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetJobAuthor)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetJobAuthor(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetJobName)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetJobName(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetCurrentSegmentState)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieRenderShotState*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetPipelineState)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InPipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMovieRenderPipelineState*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetPipelineState(Z_Param_InPipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetJobInitializationTime)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InMoviePipeline);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetJobInitializationTime(Z_Param_InMoviePipeline);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execGetEstimatedTimeRemaining)
	{
		P_GET_OBJECT(UMoviePipeline,Z_Param_InPipeline);
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_OutEstimate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining(Z_Param_InPipeline,Z_Param_Out_OutEstimate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execResolveFilenameFormatArguments)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFormatString);
		P_GET_STRUCT_REF(FMoviePipelineFilenameResolveParams,Z_Param_Out_InParams);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFinalPath);
		P_GET_STRUCT_REF(FMoviePipelineFormatArgs,Z_Param_Out_OutMergedFormatArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments(Z_Param_InFormatString,Z_Param_Out_InParams,Z_Param_Out_OutFinalPath,Z_Param_Out_OutMergedFormatArgs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineBlueprintLibrary::execDuplicateSequence)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_OBJECT(UMovieSceneSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMovieSceneSequence**)Z_Param__Result=UMoviePipelineBlueprintLibrary::DuplicateSequence(Z_Param_Outer,Z_Param_InSequence);
		P_NATIVE_END;
	}
	void UMoviePipelineBlueprintLibrary::StaticRegisterNativesUMoviePipelineBlueprintLibrary()
	{
		UClass* Class = UMoviePipelineBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DuplicateSequence", &UMoviePipelineBlueprintLibrary::execDuplicateSequence },
			{ "FindOrGetDefaultSettingForShot", &UMoviePipelineBlueprintLibrary::execFindOrGetDefaultSettingForShot },
			{ "GetCompletionPercentage", &UMoviePipelineBlueprintLibrary::execGetCompletionPercentage },
			{ "GetCurrentAperture", &UMoviePipelineBlueprintLibrary::execGetCurrentAperture },
			{ "GetCurrentExecutorShot", &UMoviePipelineBlueprintLibrary::execGetCurrentExecutorShot },
			{ "GetCurrentFocalLength", &UMoviePipelineBlueprintLibrary::execGetCurrentFocalLength },
			{ "GetCurrentFocusDistance", &UMoviePipelineBlueprintLibrary::execGetCurrentFocusDistance },
			{ "GetCurrentSegmentName", &UMoviePipelineBlueprintLibrary::execGetCurrentSegmentName },
			{ "GetCurrentSegmentState", &UMoviePipelineBlueprintLibrary::execGetCurrentSegmentState },
			{ "GetCurrentSegmentWorkMetrics", &UMoviePipelineBlueprintLibrary::execGetCurrentSegmentWorkMetrics },
			{ "GetCurrentSequence", &UMoviePipelineBlueprintLibrary::execGetCurrentSequence },
			{ "GetCurrentShotFrameNumber", &UMoviePipelineBlueprintLibrary::execGetCurrentShotFrameNumber },
			{ "GetCurrentShotTimecode", &UMoviePipelineBlueprintLibrary::execGetCurrentShotTimecode },
			{ "GetEffectiveOutputResolution", &UMoviePipelineBlueprintLibrary::execGetEffectiveOutputResolution },
			{ "GetEstimatedTimeRemaining", &UMoviePipelineBlueprintLibrary::execGetEstimatedTimeRemaining },
			{ "GetJobAuthor", &UMoviePipelineBlueprintLibrary::execGetJobAuthor },
			{ "GetJobInitializationTime", &UMoviePipelineBlueprintLibrary::execGetJobInitializationTime },
			{ "GetJobName", &UMoviePipelineBlueprintLibrary::execGetJobName },
			{ "GetMapPackageName", &UMoviePipelineBlueprintLibrary::execGetMapPackageName },
			{ "GetMasterFrameNumber", &UMoviePipelineBlueprintLibrary::execGetMasterFrameNumber },
			{ "GetMasterTimecode", &UMoviePipelineBlueprintLibrary::execGetMasterTimecode },
			{ "GetMoviePipelineEngineChangelistLabel", &UMoviePipelineBlueprintLibrary::execGetMoviePipelineEngineChangelistLabel },
			{ "GetOverallOutputFrames", &UMoviePipelineBlueprintLibrary::execGetOverallOutputFrames },
			{ "GetOverallSegmentCounts", &UMoviePipelineBlueprintLibrary::execGetOverallSegmentCounts },
			{ "GetPipelineState", &UMoviePipelineBlueprintLibrary::execGetPipelineState },
			{ "GetRootFrameNumber", &UMoviePipelineBlueprintLibrary::execGetRootFrameNumber },
			{ "GetRootTimecode", &UMoviePipelineBlueprintLibrary::execGetRootTimecode },
			{ "LoadManifestFileFromString", &UMoviePipelineBlueprintLibrary::execLoadManifestFileFromString },
			{ "ResolveFilenameFormatArguments", &UMoviePipelineBlueprintLibrary::execResolveFilenameFormatArguments },
			{ "ResolveVersionNumber", &UMoviePipelineBlueprintLibrary::execResolveVersionNumber },
			{ "UpdateJobShotListFromSequence", &UMoviePipelineBlueprintLibrary::execUpdateJobShotListFromSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms
		{
			UObject* Outer;
			UMovieSceneSequence* InSequence;
			UMovieSceneSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms, InSequence), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms, ReturnValue), Z_Construct_UClass_UMovieSceneSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Duplicates the specified sequence using a medium depth copy. Standard duplication will only duplicate\n\x09* the top level Sequence (since shots and sub-sequences are other standalone assets) so this function\n\x09* recursively duplicates the given sequence, shot and subsequence and then fixes up the references to\n\x09* point to newly duplicated sequences.\n\x09*\n\x09* Use at your own risk. Some features may not work when duplicated (complex object binding arrangements,\n\x09* blueprint GetSequenceBinding nodes, etc.) but can be useful when wanting to create a bunch of variations\n\x09* with minor differences (such as swapping out an actor, track, etc.)\n\x09*\n\x09* This does not duplicate any assets that the sequence points to outside of Shots/Subsequences.\n\x09*\n\x09* @param\x09Outer\x09\x09- The Outer of the newly duplicated object. Leave null for TransientPackage();\n\x09* @param\x09InSequence\x09- The sequence to recursively duplicate.\n\x09* @return\x09\x09\x09\x09- The duplicated sequence, or null if no sequence was provided to duplicate.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Duplicates the specified sequence using a medium depth copy. Standard duplication will only duplicate\nthe top level Sequence (since shots and sub-sequences are other standalone assets) so this function\nrecursively duplicates the given sequence, shot and subsequence and then fixes up the references to\npoint to newly duplicated sequences.\n\nUse at your own risk. Some features may not work when duplicated (complex object binding arrangements,\nblueprint GetSequenceBinding nodes, etc.) but can be useful when wanting to create a bunch of variations\nwith minor differences (such as swapping out an actor, track, etc.)\n\nThis does not duplicate any assets that the sequence points to outside of Shots/Subsequences.\n\n@param        Outer           - The Outer of the newly duplicated object. Leave null for TransientPackage();\n@param        InSequence      - The sequence to recursively duplicate.\n@return                               - The duplicated sequence, or null if no sequence was provided to duplicate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "DuplicateSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::MoviePipelineBlueprintLibrary_eventDuplicateSequence_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventFindOrGetDefaultSettingForShot_Parms
		{
			TSubclassOf<UMoviePipelineSetting>  InSettingType;
			const UMoviePipelinePrimaryConfig* InPrimaryConfig;
			const UMoviePipelineExecutorShot* InShot;
			UMoviePipelineSetting* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InSettingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPrimaryConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPrimaryConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InShot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InSettingType = { "InSettingType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventFindOrGetDefaultSettingForShot_Parms, InSettingType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InPrimaryConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InPrimaryConfig = { "InPrimaryConfig", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventFindOrGetDefaultSettingForShot_Parms, InPrimaryConfig), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InPrimaryConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InPrimaryConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InShot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InShot = { "InShot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventFindOrGetDefaultSettingForShot_Parms, InShot), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InShot_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventFindOrGetDefaultSettingForShot_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InSettingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InPrimaryConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_InShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Allows access to a setting of provided type for specific shot. */" },
		{ "DeterminesOutputType", "InSettingType" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Allows access to a setting of provided type for specific shot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "FindOrGetDefaultSettingForShot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::MoviePipelineBlueprintLibrary_eventFindOrGetDefaultSettingForShot_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms
		{
			const UMoviePipeline* InPipeline;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_InPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Gets the completion percent of the Pipeline in 0-1 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Gets the completion percent of the Pipeline in 0-1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCompletionPercentage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::MoviePipelineBlueprintLibrary_eventGetCompletionPercentage_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentAperture_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentAperture_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentAperture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentAperture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentAperture_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentExecutorShot_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			UMoviePipelineExecutorShot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentExecutorShot_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentExecutorShot_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentExecutorShot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentExecutorShot_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentFocalLength_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentFocalLength_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentFocalLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentFocalLength_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentFocusDistance_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentFocusDistance_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentFocusDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentFocusDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentFocusDistance_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms
		{
			UMoviePipeline* InMoviePipeline;
			FText OutOuterName;
			FText OutInnerName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutOuterName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutInnerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_OutOuterName = { "OutOuterName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms, OutOuterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_OutInnerName = { "OutInnerName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms, OutInnerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_OutOuterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::NewProp_OutInnerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentSegmentName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentSegmentName_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms
		{
			UMoviePipeline* InMoviePipeline;
			EMovieRenderShotState ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState, METADATA_PARAMS(nullptr, 0) }; // 315016491
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentSegmentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentSegmentState_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FMoviePipelineSegmentWorkMetrics ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms, ReturnValue), Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics, METADATA_PARAMS(nullptr, 0) }; // 555666849
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentSegmentWorkMetrics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentSegmentWorkMetrics_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentSequence_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			ULevelSequence* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSequence_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentSequence_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FFrameNumber ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentShotFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentShotFrameNumber_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FTimecode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetCurrentShotTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::MoviePipelineBlueprintLibrary_eventGetCurrentShotTimecode_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetEffectiveOutputResolution_Parms
		{
			UMoviePipelinePrimaryConfig* InPrimaryConfig;
			UMoviePipelineExecutorShot* InPipelineExecutorShot;
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPrimaryConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipelineExecutorShot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InPrimaryConfig = { "InPrimaryConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEffectiveOutputResolution_Parms, InPrimaryConfig), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InPipelineExecutorShot = { "InPipelineExecutorShot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEffectiveOutputResolution_Parms, InPipelineExecutorShot), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEffectiveOutputResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InPrimaryConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_InPipelineExecutorShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** In case of Overscan percentage being higher than 0 we render additional pixels. This function returns the resolution with overscan taken into account. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "In case of Overscan percentage being higher than 0 we render additional pixels. This function returns the resolution with overscan taken into account." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetEffectiveOutputResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::MoviePipelineBlueprintLibrary_eventGetEffectiveOutputResolution_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms
		{
			const UMoviePipeline* InPipeline;
			FTimespan OutEstimate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEstimate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_OutEstimate = { "OutEstimate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms, OutEstimate), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms), &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_InPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_OutEstimate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the estimated amount of time remaining for the current pipeline. Based on looking at the total\n\x09* amount of samples to render vs. how many have been completed so far. Inaccurate when Time Dilation\n\x09* is used, and gets more accurate over the course of the render.\n\x09*\n\x09* @param\x09InPipeline\x09The pipeline to get the time estimate from.\n\x09* @param\x09OutEstimate\x09The resulting estimate, or FTimespan() if estimate is not valid.\n\x09* @return\x09\x09\x09\x09True if a valid estimate can be calculated, or false if it is not ready yet (ie: not enough samples rendered)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Get the estimated amount of time remaining for the current pipeline. Based on looking at the total\namount of samples to render vs. how many have been completed so far. Inaccurate when Time Dilation\nis used, and gets more accurate over the course of the render.\n\n@param        InPipeline      The pipeline to get the time estimate from.\n@param        OutEstimate     The resulting estimate, or FTimespan() if estimate is not valid.\n@return                               True if a valid estimate can be calculated, or false if it is not ready yet (ie: not enough samples rendered)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetEstimatedTimeRemaining", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::MoviePipelineBlueprintLibrary_eventGetEstimatedTimeRemaining_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms
		{
			UMoviePipeline* InMoviePipeline;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetJobAuthor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::MoviePipelineBlueprintLibrary_eventGetJobAuthor_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FDateTime ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetJobInitializationTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::MoviePipelineBlueprintLibrary_eventGetJobInitializationTime_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetJobName_Parms
		{
			UMoviePipeline* InMoviePipeline;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobName_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetJobName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetJobName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::MoviePipelineBlueprintLibrary_eventGetJobName_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetMapPackageName_Parms
		{
			UMoviePipelineExecutorJob* InJob;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMapPackageName_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMapPackageName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::NewProp_InJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Get the package name for the map in this job. The level travel command requires the package path and not the asset path. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Get the package name for the map in this job. The level travel command requires the package path and not the asset path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetMapPackageName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::MoviePipelineBlueprintLibrary_eventGetMapPackageName_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FFrameNumber ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetMasterFrameNumber is deprecated. Please GetRootFrameNumber instead" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetMasterFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::MoviePipelineBlueprintLibrary_eventGetMasterFrameNumber_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FTimecode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetMasterTimecode is deprecated. Please use GetRootTimecode instead" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetMasterTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::MoviePipelineBlueprintLibrary_eventGetMasterTimecode_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetMoviePipelineEngineChangelistLabel_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMoviePipelineEngineChangelistLabel_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetMoviePipelineEngineChangelistLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Get a string to represent the Changelist Number for the burn in. This can be driven by a Modular Feature if you want to permanently replace it with different information. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Get a string to represent the Changelist Number for the burn in. This can be driven by a Modular Feature if you want to permanently replace it with different information." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetMoviePipelineEngineChangelistLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::MoviePipelineBlueprintLibrary_eventGetMoviePipelineEngineChangelistLabel_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			int32 OutCurrentIndex;
			int32 OutTotalCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutCurrentIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutTotalCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutCurrentIndex = { "OutCurrentIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms, OutCurrentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutTotalCount = { "OutTotalCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms, OutTotalCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutCurrentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::NewProp_OutTotalCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetOverallOutputFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::MoviePipelineBlueprintLibrary_eventGetOverallOutputFrames_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			int32 OutCurrentIndex;
			int32 OutTotalCount;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutCurrentIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutTotalCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutCurrentIndex = { "OutCurrentIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms, OutCurrentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutTotalCount = { "OutTotalCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms, OutTotalCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutCurrentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::NewProp_OutTotalCount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetOverallSegmentCounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::MoviePipelineBlueprintLibrary_eventGetOverallSegmentCounts_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms
		{
			const UMoviePipeline* InPipeline;
			EMovieRenderPipelineState ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPipeline;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline = { "InPipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms, InPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms, ReturnValue), Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState, METADATA_PARAMS(nullptr, 0) }; // 2853592429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_InPipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Get the current state of the specified Pipeline. See EMovieRenderPipelineState for more detail about each state.\n\x09*\n\x09* @param\x09InPipeline\x09The pipeline to get the state for.\n\x09* @return\x09\x09\x09\x09""Current State.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Get the current state of the specified Pipeline. See EMovieRenderPipelineState for more detail about each state.\n\n@param        InPipeline      The pipeline to get the state for.\n@return                               Current State." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetPipelineState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::MoviePipelineBlueprintLibrary_eventGetPipelineState_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventGetRootFrameNumber_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FFrameNumber ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetRootFrameNumber_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetRootFrameNumber_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetRootFrameNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::MoviePipelineBlueprintLibrary_eventGetRootFrameNumber_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct MoviePipelineBlueprintLibrary_eventGetRootTimecode_Parms
		{
			const UMoviePipeline* InMoviePipeline;
			FTimecode ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMoviePipeline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::NewProp_InMoviePipeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::NewProp_InMoviePipeline = { "InMoviePipeline", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetRootTimecode_Parms, InMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::NewProp_InMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::NewProp_InMoviePipeline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventGetRootTimecode_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::NewProp_InMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "GetRootTimecode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::MoviePipelineBlueprintLibrary_eventGetRootTimecode_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventLoadManifestFileFromString_Parms
		{
			FString InManifestFilePath;
			UMoviePipelineQueue* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InManifestFilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InManifestFilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::NewProp_InManifestFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::NewProp_InManifestFilePath = { "InManifestFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventLoadManifestFileFromString_Parms, InManifestFilePath), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::NewProp_InManifestFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::NewProp_InManifestFilePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventLoadManifestFileFromString_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::NewProp_InManifestFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Loads the specified manifest file and converts it into an UMoviePipelineQueue. Use in combination with SaveQueueToManifestFile. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Loads the specified manifest file and converts it into an UMoviePipelineQueue. Use in combination with SaveQueueToManifestFile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "LoadManifestFileFromString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::MoviePipelineBlueprintLibrary_eventLoadManifestFileFromString_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventResolveFilenameFormatArguments_Parms
		{
			FString InFormatString;
			FMoviePipelineFilenameResolveParams InParams;
			FString OutFinalPath;
			FMoviePipelineFormatArgs OutMergedFormatArgs;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFormatString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InFormatString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutFinalPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutMergedFormatArgs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString = { "InFormatString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, InFormatString), METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, InParams), Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams_MetaData)) }; // 2963516526
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_OutFinalPath = { "OutFinalPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, OutFinalPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_OutMergedFormatArgs = { "OutMergedFormatArgs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventResolveFilenameFormatArguments_Parms, OutMergedFormatArgs), Z_Construct_UScriptStruct_FMoviePipelineFormatArgs, METADATA_PARAMS(nullptr, 0) }; // 335077819
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InFormatString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_InParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_OutFinalPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::NewProp_OutMergedFormatArgs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Resolves the provided InFormatString by converting {format_strings} into settings provided by the primary config.\n\x09* @param\x09InFormatString\x09\x09""A format string (in the form of \"{format_key1}_{format_key2}\") to resolve.\n\x09* @param\x09InParams\x09\x09\x09The parameters to resolve the format string with. See FMoviePipelineFilenameResolveParams properties for details. \n\x09*\x09\x09\x09\x09\x09\x09\x09\x09""Expected that you fill out all of the parameters so that they can be used to resolve strings, otherwise default\n\x09*\x09\x09\x09\x09\x09\x09\x09\x09values may be used.\n\x09* @param\x09OutFinalPath\x09\x09The final filepath based on a combination of the format string and the Resolve Params.\n\x09* @return\x09OutMergedFormatArgs\x09""A merged set of Key/Value pairs for both Filename Arguments and Metadata that merges all the sources.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Resolves the provided InFormatString by converting {format_strings} into settings provided by the primary config.\n@param        InFormatString          A format string (in the form of \"{format_key1}_{format_key2}\") to resolve.\n@param        InParams                        The parameters to resolve the format string with. See FMoviePipelineFilenameResolveParams properties for details.\n                                                              Expected that you fill out all of the parameters so that they can be used to resolve strings, otherwise default\n                                                              values may be used.\n@param        OutFinalPath            The final filepath based on a combination of the format string and the Resolve Params.\n@return       OutMergedFormatArgs     A merged set of Key/Value pairs for both Filename Arguments and Metadata that merges all the sources." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "ResolveFilenameFormatArguments", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::MoviePipelineBlueprintLibrary_eventResolveFilenameFormatArguments_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventResolveVersionNumber_Parms
		{
			FMoviePipelineFilenameResolveParams InParams;
			bool bGetNextVersion;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParams;
		static void NewProp_bGetNextVersion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGetNextVersion;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_InParams = { "InParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventResolveVersionNumber_Parms, InParams), Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams, METADATA_PARAMS(nullptr, 0) }; // 2963516526
	void Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_bGetNextVersion_SetBit(void* Obj)
	{
		((MoviePipelineBlueprintLibrary_eventResolveVersionNumber_Parms*)Obj)->bGetNextVersion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_bGetNextVersion = { "bGetNextVersion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineBlueprintLibrary_eventResolveVersionNumber_Parms), &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_bGetNextVersion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventResolveVersionNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_InParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_bGetNextVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**  If version number is manually specified by the Job, returns that. Otherwise search the Output Directory for the highest version already existing (and increment it by one if bGetNextVersion is true). */" },
		{ "CPP_Default_bGetNextVersion", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "If version number is manually specified by the Job, returns that. Otherwise search the Output Directory for the highest version already existing (and increment it by one if bGetNextVersion is true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "ResolveVersionNumber", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::MoviePipelineBlueprintLibrary_eventResolveVersionNumber_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics
	{
		struct MoviePipelineBlueprintLibrary_eventUpdateJobShotListFromSequence_Parms
		{
			ULevelSequence* InSequence;
			UMoviePipelineExecutorJob* InJob;
			bool bShotsChanged;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InJob;
		static void NewProp_bShotsChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShotsChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventUpdateJobShotListFromSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBlueprintLibrary_eventUpdateJobShotListFromSequence_Parms, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_bShotsChanged_SetBit(void* Obj)
	{
		((MoviePipelineBlueprintLibrary_eventUpdateJobShotListFromSequence_Parms*)Obj)->bShotsChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_bShotsChanged = { "bShotsChanged", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineBlueprintLibrary_eventUpdateJobShotListFromSequence_Parms), &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_bShotsChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_InSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_InJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::NewProp_bShotsChanged,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Scan the provided sequence in the job to see which camera cut sections we would try to render and update the job's shotlist. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ToolTip", "Scan the provided sequence in the job to see which camera cut sections we would try to render and update the job's shotlist." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBlueprintLibrary, nullptr, "UpdateJobShotListFromSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::MoviePipelineBlueprintLibrary_eventUpdateJobShotListFromSequence_Parms), Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineBlueprintLibrary);
	UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary_NoRegister()
	{
		return UMoviePipelineBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_DuplicateSequence, "DuplicateSequence" }, // 3103522849
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_FindOrGetDefaultSettingForShot, "FindOrGetDefaultSettingForShot" }, // 2834574315
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCompletionPercentage, "GetCompletionPercentage" }, // 2284326841
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentAperture, "GetCurrentAperture" }, // 3789717108
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentExecutorShot, "GetCurrentExecutorShot" }, // 3521219334
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocalLength, "GetCurrentFocalLength" }, // 315421783
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentFocusDistance, "GetCurrentFocusDistance" }, // 661399601
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentName, "GetCurrentSegmentName" }, // 3613908977
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentState, "GetCurrentSegmentState" }, // 1327159290
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSegmentWorkMetrics, "GetCurrentSegmentWorkMetrics" }, // 3511250812
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentSequence, "GetCurrentSequence" }, // 1023727515
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotFrameNumber, "GetCurrentShotFrameNumber" }, // 924883544
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetCurrentShotTimecode, "GetCurrentShotTimecode" }, // 1957809279
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEffectiveOutputResolution, "GetEffectiveOutputResolution" }, // 672238777
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetEstimatedTimeRemaining, "GetEstimatedTimeRemaining" }, // 4164423235
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobAuthor, "GetJobAuthor" }, // 1797031394
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobInitializationTime, "GetJobInitializationTime" }, // 2348874608
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetJobName, "GetJobName" }, // 1625041175
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMapPackageName, "GetMapPackageName" }, // 2878498835
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterFrameNumber, "GetMasterFrameNumber" }, // 2476435013
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMasterTimecode, "GetMasterTimecode" }, // 3531245937
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetMoviePipelineEngineChangelistLabel, "GetMoviePipelineEngineChangelistLabel" }, // 1609376023
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallOutputFrames, "GetOverallOutputFrames" }, // 3242880223
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetOverallSegmentCounts, "GetOverallSegmentCounts" }, // 3254378145
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetPipelineState, "GetPipelineState" }, // 2825714588
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootFrameNumber, "GetRootFrameNumber" }, // 1555877538
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_GetRootTimecode, "GetRootTimecode" }, // 384340068
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_LoadManifestFileFromString, "LoadManifestFileFromString" }, // 2998556518
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveFilenameFormatArguments, "ResolveFilenameFormatArguments" }, // 2095304947
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_ResolveVersionNumber, "ResolveVersionNumber" }, // 2055156750
		{ &Z_Construct_UFunction_UMoviePipelineBlueprintLibrary_UpdateJobShotListFromSequence, "UpdateJobShotListFromSequence" }, // 3464818308
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipelineBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineBlueprintLibrary.h" },
		{ "ScriptName", "MoviePipelineLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::ClassParams = {
		&UMoviePipelineBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineBlueprintLibrary>()
	{
		return UMoviePipelineBlueprintLibrary::StaticClass();
	}
	UMoviePipelineBlueprintLibrary::UMoviePipelineBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineBlueprintLibrary);
	UMoviePipelineBlueprintLibrary::~UMoviePipelineBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineBlueprintLibrary, UMoviePipelineBlueprintLibrary::StaticClass, TEXT("UMoviePipelineBlueprintLibrary"), &Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineBlueprintLibrary), 1215067286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_3042834150(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
