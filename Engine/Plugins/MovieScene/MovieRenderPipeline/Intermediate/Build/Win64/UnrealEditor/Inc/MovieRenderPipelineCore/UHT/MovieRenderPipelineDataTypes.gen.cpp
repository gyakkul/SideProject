// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderPipelineDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieRenderPipelineDataTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineFormatArgs();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineOutputData();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics();
	MOVIERENDERPIPELINECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineShotOutputData();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieRenderPipelineState;
	static UEnum* EMovieRenderPipelineState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMovieRenderPipelineState"));
		}
		return Z_Registration_Info_UEnum_EMovieRenderPipelineState.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderPipelineState>()
	{
		return EMovieRenderPipelineState_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::Enumerators[] = {
		{ "EMovieRenderPipelineState::Uninitialized", (int64)EMovieRenderPipelineState::Uninitialized },
		{ "EMovieRenderPipelineState::ProducingFrames", (int64)EMovieRenderPipelineState::ProducingFrames },
		{ "EMovieRenderPipelineState::Finalize", (int64)EMovieRenderPipelineState::Finalize },
		{ "EMovieRenderPipelineState::Export", (int64)EMovieRenderPipelineState::Export },
		{ "EMovieRenderPipelineState::Finished", (int64)EMovieRenderPipelineState::Finished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* What is the current overall state of the Pipeline? States are processed in order from first to\n* last and all states will be hit (though there is no guarantee the state will not be transitioned\n* away from on the same frame it entered it). Used to help track overall progress and validate\n* code flow.\n*/" },
		{ "Export.Comment", "/** All outputs have finished writing to disk or otherwise processing. Additional exports that may have needed information about the produced file can now be run. */" },
		{ "Export.Name", "EMovieRenderPipelineState::Export" },
		{ "Export.ToolTip", "All outputs have finished writing to disk or otherwise processing. Additional exports that may have needed information about the produced file can now be run." },
		{ "Finalize.Comment", "/** All desired frames have been produced. Audio is already finalized. Outputs have a chance to finish long processing tasks. */" },
		{ "Finalize.Name", "EMovieRenderPipelineState::Finalize" },
		{ "Finalize.ToolTip", "All desired frames have been produced. Audio is already finalized. Outputs have a chance to finish long processing tasks." },
		{ "Finished.Comment", "/** The pipeline has been shut down. It is an error to shut it down again. */" },
		{ "Finished.Name", "EMovieRenderPipelineState::Finished" },
		{ "Finished.ToolTip", "The pipeline has been shut down. It is an error to shut it down again." },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ProducingFrames.Comment", "/** The pipeline has been initialized and is now controlling time and working on producing frames. */" },
		{ "ProducingFrames.Name", "EMovieRenderPipelineState::ProducingFrames" },
		{ "ProducingFrames.ToolTip", "The pipeline has been initialized and is now controlling time and working on producing frames." },
		{ "ToolTip", "What is the current overall state of the Pipeline? States are processed in order from first to\nlast and all states will be hit (though there is no guarantee the state will not be transitioned\naway from on the same frame it entered it). Used to help track overall progress and validate\ncode flow." },
		{ "Uninitialized.Comment", "/** The pipeline has not been initialized yet. Only valid operation is to call Initialize. */" },
		{ "Uninitialized.Name", "EMovieRenderPipelineState::Uninitialized" },
		{ "Uninitialized.ToolTip", "The pipeline has not been initialized yet. Only valid operation is to call Initialize." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMovieRenderPipelineState",
		"EMovieRenderPipelineState",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState()
	{
		if (!Z_Registration_Info_UEnum_EMovieRenderPipelineState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieRenderPipelineState.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderPipelineState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieRenderPipelineState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieRenderShotState;
	static UEnum* EMovieRenderShotState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMovieRenderShotState"));
		}
		return Z_Registration_Info_UEnum_EMovieRenderShotState.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMovieRenderShotState>()
	{
		return EMovieRenderShotState_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::Enumerators[] = {
		{ "EMovieRenderShotState::Uninitialized", (int64)EMovieRenderShotState::Uninitialized },
		{ "EMovieRenderShotState::WarmingUp", (int64)EMovieRenderShotState::WarmingUp },
		{ "EMovieRenderShotState::MotionBlur", (int64)EMovieRenderShotState::MotionBlur },
		{ "EMovieRenderShotState::Rendering", (int64)EMovieRenderShotState::Rendering },
		{ "EMovieRenderShotState::Finished", (int64)EMovieRenderShotState::Finished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* What is the current state of a shot? States are processed in order from first to last but not\n* all states are required, ie: WarmUp and MotionBlur can be disabled and the shot will never\n* pass through this state.\n*/" },
		{ "Finished.Comment", "/*\n\x09* The shot has produced all frames it will produce. No more evaluation should be\n\x09* done for this shot once it reaches this state.\n\x09*/" },
		{ "Finished.Name", "EMovieRenderShotState::Finished" },
		{ "Finished.ToolTip", "* The shot has produced all frames it will produce. No more evaluation should be\n* done for this shot once it reaches this state." },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "MotionBlur.Comment", "/*\n\x09* The shot is doing additional pre-roll for motion blur. No frames are being produced,\n\x09* but the rendering pipeline is being run to seed histories.\n\x09*/" },
		{ "MotionBlur.Name", "EMovieRenderShotState::MotionBlur" },
		{ "MotionBlur.ToolTip", "* The shot is doing additional pre-roll for motion blur. No frames are being produced,\n* but the rendering pipeline is being run to seed histories." },
		{ "Rendering.Comment", "/*\n\x09* The shot is working on producing frames and may be currently doing a sub-frame or\n\x09* a whole frame.\n\x09*/" },
		{ "Rendering.Name", "EMovieRenderShotState::Rendering" },
		{ "Rendering.ToolTip", "* The shot is working on producing frames and may be currently doing a sub-frame or\n* a whole frame." },
		{ "ToolTip", "What is the current state of a shot? States are processed in order from first to last but not\nall states are required, ie: WarmUp and MotionBlur can be disabled and the shot will never\npass through this state." },
		{ "Uninitialized.Comment", "/** The shot has not been initialized yet.*/" },
		{ "Uninitialized.Name", "EMovieRenderShotState::Uninitialized" },
		{ "Uninitialized.ToolTip", "The shot has not been initialized yet." },
		{ "WarmingUp.Comment", "/** The shot is warming up. Engine ticks are passing but no frames are being produced. */" },
		{ "WarmingUp.Name", "EMovieRenderShotState::WarmingUp" },
		{ "WarmingUp.ToolTip", "The shot is warming up. Engine ticks are passing but no frames are being produced." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMovieRenderShotState",
		"EMovieRenderShotState",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState()
	{
		if (!Z_Registration_Info_UEnum_EMovieRenderShotState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieRenderShotState.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMovieRenderShotState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieRenderShotState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier;
class UScriptStruct* FMoviePipelinePassIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelinePassIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelinePassIdentifier>()
{
	return FMoviePipelinePassIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CameraName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelinePassIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "// The name of the pass such as \"FinalImage\" or \"ObjectId\", etc.\n" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The name of the pass such as \"FinalImage\" or \"ObjectId\", etc." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelinePassIdentifier, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_CameraName_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "// The name of the camera that this pass is for. Stored here so we can differentiate between \n// multiple cameras within a single pass.\n" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The name of the camera that this pass is for. Stored here so we can differentiate between\nmultiple cameras within a single pass." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_CameraName = { "CameraName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelinePassIdentifier, CameraName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_CameraName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_CameraName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewProp_CameraName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelinePassIdentifier",
		sizeof(FMoviePipelinePassIdentifier),
		alignof(FMoviePipelinePassIdentifier),
		Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics;
class UScriptStruct* FMoviePipelineSegmentWorkMetrics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineSegmentWorkMetrics"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineSegmentWorkMetrics>()
{
	return FMoviePipelineSegmentWorkMetrics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SegmentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFrameIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputFrameIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalOutputFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalOutputFrameCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputSubSampleIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputSubSampleIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalSubSampleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalSubSampleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineWarmUpFrameIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EngineWarmUpFrameIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalEngineWarmUpFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalEngineWarmUpFrameCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineSegmentWorkMetrics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The name of the segment (if any) */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The name of the segment (if any)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName = { "SegmentName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, SegmentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** Index of the output frame we are working on right now. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Index of the output frame we are working on right now." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex = { "OutputFrameIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, OutputFrameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The number of output frames we expect to make for this segment. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The number of output frames we expect to make for this segment." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount = { "TotalOutputFrameCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, TotalOutputFrameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** Which temporal/spatial sub sample are we working on right now. This counts temporal, spatial, and tile samples to accurately reflect how much work is needed for this output frame. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Which temporal/spatial sub sample are we working on right now. This counts temporal, spatial, and tile samples to accurately reflect how much work is needed for this output frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex = { "OutputSubSampleIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, OutputSubSampleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The total number of samples we will have to build to render this output frame. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The total number of samples we will have to build to render this output frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount = { "TotalSubSampleCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, TotalSubSampleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The index of the engine warm up frame that we are working on. No rendering samples are produced for these. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The index of the engine warm up frame that we are working on. No rendering samples are produced for these." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex = { "EngineWarmUpFrameIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, EngineWarmUpFrameIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount_MetaData[] = {
		{ "Category", "Pipeline Segment" },
		{ "Comment", "/** The total number of engine warm up frames for this segment. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The total number of engine warm up frames for this segment." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount = { "TotalEngineWarmUpFrameCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineSegmentWorkMetrics, TotalEngineWarmUpFrameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_SegmentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputFrameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalOutputFrameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_OutputSubSampleIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalSubSampleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_EngineWarmUpFrameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewProp_TotalEngineWarmUpFrameCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineSegmentWorkMetrics",
		sizeof(FMoviePipelineSegmentWorkMetrics),
		alignof(FMoviePipelineSegmentWorkMetrics),
		Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoviePipelineShutterTiming;
	static UEnum* EMoviePipelineShutterTiming_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMoviePipelineShutterTiming"));
		}
		return Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineShutterTiming>()
	{
		return EMoviePipelineShutterTiming_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::Enumerators[] = {
		{ "EMoviePipelineShutterTiming::FrameOpen", (int64)EMoviePipelineShutterTiming::FrameOpen },
		{ "EMoviePipelineShutterTiming::FrameCenter", (int64)EMoviePipelineShutterTiming::FrameCenter },
		{ "EMoviePipelineShutterTiming::FrameClose", (int64)EMoviePipelineShutterTiming::FrameClose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FrameCenter.Name", "EMoviePipelineShutterTiming::FrameCenter" },
		{ "FrameClose.Name", "EMoviePipelineShutterTiming::FrameClose" },
		{ "FrameOpen.Name", "EMoviePipelineShutterTiming::FrameOpen" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMoviePipelineShutterTiming",
		"EMoviePipelineShutterTiming",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoviePipelineShutterTiming.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo;
class UScriptStruct* FMoviePipelineCameraCutInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineCameraCutInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineCameraCutInfo>()
{
	return FMoviePipelineCameraCutInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ToDo: Rename this to segment.\n" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "ToDo: Rename this to segment." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineCameraCutInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineCameraCutInfo",
		sizeof(FMoviePipelineCameraCutInfo),
		alignof(FMoviePipelineCameraCutInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs;
class UScriptStruct* FMoviePipelineFormatArgs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineFormatArgs"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineFormatArgs>()
{
	return FMoviePipelineFormatArgs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilenameArguments_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilenameArguments_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilenameArguments_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FilenameArguments;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InJob_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineFormatArgs>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments_ValueProp = { "FilenameArguments", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments_Key_KeyProp = { "FilenameArguments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** A set of Key/Value pairs for output filename format strings (without {}) and their values. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "A set of Key/Value pairs for output filename format strings (without {}) and their values." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments = { "FilenameArguments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFormatArgs, FilenameArguments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata_ValueProp = { "FileMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata_Key_KeyProp = { "FileMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** A set of Key/Value pairs for file metadata for file formats that support metadata. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "A set of Key/Value pairs for file metadata for file formats that support metadata." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata = { "FileMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFormatArgs, FileMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_InJob_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Which job is this for? Some settings are specific to the level sequence being rendered. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Which job is this for? Some settings are specific to the level sequence being rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_InJob = { "InJob", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFormatArgs, InJob), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_InJob_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_InJob_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FilenameArguments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_FileMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewProp_InJob,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineFormatArgs",
		sizeof(FMoviePipelineFormatArgs),
		alignof(FMoviePipelineFormatArgs),
		Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineFormatArgs()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams;
class UScriptStruct* FMoviePipelineFilenameResolveParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineFilenameResolveParams"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineFilenameResolveParams>()
{
	return FMoviePipelineFilenameResolveParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumberShot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumberShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumberRel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumberRel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumberShotRel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameNumberShotRel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CameraNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShotNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroPadFrameNumberCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZeroPadFrameNumberCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceRelativeFrameNumbers_MetaData[];
#endif
		static void NewProp_bForceRelativeFrameNumbers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRelativeFrameNumbers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameOverride;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormatOverrides_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormatOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormatOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileNameFormatOverrides;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FileMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitializationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitializationVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitializationVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Job_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Job;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ShotOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalFrameNumberOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AdditionalFrameNumberOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineFilenameResolveParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumber_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Frame Number for the Root (matching what you see in the Sequencer timeline. ie: If the Sequence PlaybackRange starts on 50, this value would be 50 on the first frame.*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Frame Number for the Root (matching what you see in the Sequencer timeline. ie: If the Sequence PlaybackRange starts on 50, this value would be 50 on the first frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumber = { "FrameNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, FrameNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShot_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Frame Number for the Shot (matching what you would see in Sequencer at the sub-sequence level. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Frame Number for the Shot (matching what you would see in Sequencer at the sub-sequence level." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShot = { "FrameNumberShot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, FrameNumberShot), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberRel_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Frame Number for the Root (relative to 0, not what you would see in the Sequencer timeline. ie: If sequence PlaybackRange starts on 50, this value would be 0 on the first frame. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Frame Number for the Root (relative to 0, not what you would see in the Sequencer timeline. ie: If sequence PlaybackRange starts on 50, this value would be 0 on the first frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberRel = { "FrameNumberRel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, FrameNumberRel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberRel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberRel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShotRel_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Frame Number for the Shot (relative to 0, not what you would see in the Sequencer timeline. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Frame Number for the Shot (relative to 0, not what you would see in the Sequencer timeline." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShotRel = { "FrameNumberShotRel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, FrameNumberShotRel), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShotRel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShotRel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_CameraNameOverride_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Name used by the {camera_name} format tag. If specified, this will override the camera name (which is normally pulled from the ShotOverride object). */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Name used by the {camera_name} format tag. If specified, this will override the camera name (which is normally pulled from the ShotOverride object)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_CameraNameOverride = { "CameraNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, CameraNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_CameraNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_CameraNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotNameOverride_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Name used by the {shot_name} format tag. If specified, this will override the shot name (which is normally pulled from the ShotOverride object) */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Name used by the {shot_name} format tag. If specified, this will override the shot name (which is normally pulled from the ShotOverride object)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotNameOverride = { "ShotNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, ShotNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** When converitng frame numbers to strings, how many digits should we pad them up to? ie: 5 => 0005 with a count of 4. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "When converitng frame numbers to strings, how many digits should we pad them up to? ie: 5 => 0005 with a count of 4." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount = { "ZeroPadFrameNumberCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, ZeroPadFrameNumberCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** If true, force format strings (like {frame_number}) to resolve using the relative version. Used when slow-mo is detected as frame numbers would overlap. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "If true, force format strings (like {frame_number}) to resolve using the relative version. Used when slow-mo is detected as frame numbers would overlap." },
	};
#endif
	void Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_SetBit(void* Obj)
	{
		((FMoviePipelineFilenameResolveParams*)Obj)->bForceRelativeFrameNumbers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers = { "bForceRelativeFrameNumbers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMoviePipelineFilenameResolveParams), &Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameOverride_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Optional. If specified this is the filename that will be used instead of automatically building it from the Job's Output Setting. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Optional. If specified this is the filename that will be used instead of automatically building it from the Job's Output Setting." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameOverride = { "FileNameOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, FileNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameOverride_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_ValueProp = { "FileNameFormatOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_Key_KeyProp = { "FileNameFormatOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** \n\x09* A map between \"{format}\" tokens and their values. These are applied after the auto-generated ones from the system,\n\x09* which allows the caller to override things like {.ext} depending or {render_pass} which have dummy names by default.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "A map between \"{format}\" tokens and their values. These are applied after the auto-generated ones from the system,\nwhich allows the caller to override things like {.ext} depending or {render_pass} which have dummy names by default." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides = { "FileNameFormatOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, FileNameFormatOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata_ValueProp = { "FileMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata_Key_KeyProp = { "FileMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** A key/value pair that maps metadata names to their values. Output is only supported in exr formats at the moment. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "A key/value pair that maps metadata names to their values. Output is only supported in exr formats at the moment." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata = { "FileMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, FileMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationTime_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** The initialization time for this job. Used to resolve time-based format arguments. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The initialization time for this job. Used to resolve time-based format arguments." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationTime = { "InitializationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, InitializationTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationVersion_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** The version for this job. Used to resolve version format arguments. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The version for this job. Used to resolve version format arguments." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationVersion = { "InitializationVersion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, InitializationVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_Job_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Required. This is the job all of the settings should be pulled from.*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Required. This is the job all of the settings should be pulled from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, Job), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_Job_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_Job_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotOverride_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Optional. If specified, settings will be pulled from this shot (if overriden by the shot). If null, always use the root configuration in the job. */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Optional. If specified, settings will be pulled from this shot (if overriden by the shot). If null, always use the root configuration in the job." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotOverride = { "ShotOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, ShotOverride), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_AdditionalFrameNumberOffset_MetaData[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Additional offset added onto the offset provided by the Output Settings in the Job. Required for some internal things (FCPXML). */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Additional offset added onto the offset provided by the Output Settings in the Job. Required for some internal things (FCPXML)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_AdditionalFrameNumberOffset = { "AdditionalFrameNumberOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineFilenameResolveParams, AdditionalFrameNumberOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_AdditionalFrameNumberOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_AdditionalFrameNumberOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FrameNumberShotRel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_CameraNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ZeroPadFrameNumberCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_bForceRelativeFrameNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileNameFormatOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_FileMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_InitializationVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_ShotOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewProp_AdditionalFrameNumberOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineFilenameResolveParams",
		sizeof(FMoviePipelineFilenameResolveParams),
		alignof(FMoviePipelineFilenameResolveParams),
		Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData;
class UScriptStruct* FMoviePipelineRenderPassOutputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineRenderPassOutputData"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineRenderPassOutputData>()
{
	return FMoviePipelineRenderPassOutputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineRenderPassOutputData>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewProp_FilePaths_Inner = { "FilePaths", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewProp_FilePaths_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewProp_FilePaths = { "FilePaths", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineRenderPassOutputData, FilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewProp_FilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewProp_FilePaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewProp_FilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewProp_FilePaths,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineRenderPassOutputData",
		sizeof(FMoviePipelineRenderPassOutputData),
		alignof(FMoviePipelineRenderPassOutputData),
		Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData;
class UScriptStruct* FMoviePipelineShotOutputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineShotOutputData"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineShotOutputData>()
{
	return FMoviePipelineShotOutputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shot_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Shot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderPassData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderPassData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPassData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RenderPassData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineShotOutputData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_Shot_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Which shot was this output data for? */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Which shot was this output data for?" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_Shot = { "Shot", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineShotOutputData, Shot), Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_Shot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_Shot_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData_ValueProp = { "RenderPassData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData, METADATA_PARAMS(nullptr, 0) }; // 3421417421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData_Key_KeyProp = { "RenderPassData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier, METADATA_PARAMS(nullptr, 0) }; // 1505022851
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** \n\x09* A mapping between render passes (such as 'FinalImage') and an array containing the files written for that shot.\n\x09* Will be multiple files if using image sequences.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "A mapping between render passes (such as 'FinalImage') and an array containing the files written for that shot.\nWill be multiple files if using image sequences." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData = { "RenderPassData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineShotOutputData, RenderPassData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData_MetaData)) }; // 1505022851 3421417421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_Shot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewProp_RenderPassData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineShotOutputData",
		sizeof(FMoviePipelineShotOutputData),
		alignof(FMoviePipelineShotOutputData),
		Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineShotOutputData()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoviePipelineOutputData;
class UScriptStruct* FMoviePipelineOutputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoviePipelineOutputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoviePipelineOutputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineOutputData, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("MoviePipelineOutputData"));
	}
	return Z_Registration_Info_UScriptStruct_MoviePipelineOutputData.OuterSingleton;
}
template<> MOVIERENDERPIPELINECORE_API UScriptStruct* StaticStruct<FMoviePipelineOutputData>()
{
	return FMoviePipelineOutputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Job_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Job;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShotData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Contains information about the to-disk output generated by a movie pipeline. This structure is used both for per-shot work finished\n* callbacks and for the final render finished callback. When used as a per-shot callback ShotData will only have one entry (for the\n* shot that was just finished), and for the final render callback it will have data for all shots that managed to render. Can be empty\n* if the job failed to produce any files.\n*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Contains information about the to-disk output generated by a movie pipeline. This structure is used both for per-shot work finished\ncallbacks and for the final render finished callback. When used as a per-shot callback ShotData will only have one entry (for the\nshot that was just finished), and for the final render callback it will have data for all shots that managed to render. Can be empty\nif the job failed to produce any files." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoviePipelineOutputData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Pipeline_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** \n\x09* The UMoviePipeline instance that generated this data. This is only provided as an id (in the event you were the one who created\n\x09* the UMoviePipeline instance. DO NOT CALL FUNCTIONS ON THIS (unless you know what you're doing)\n\x09*\n\x09* Provided here for backwards compatibility.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The UMoviePipeline instance that generated this data. This is only provided as an id (in the event you were the one who created\nthe UMoviePipeline instance. DO NOT CALL FUNCTIONS ON THIS (unless you know what you're doing)\n\nProvided here for backwards compatibility." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Pipeline = { "Pipeline", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineOutputData, Pipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Pipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Pipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Job_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Job the data is for. Job may still be in progress (if a shot callback) so be careful about modifying properties on it */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Job the data is for. Job may still be in progress (if a shot callback) so be careful about modifying properties on it" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineOutputData, Job), Z_Construct_UClass_UMoviePipelineExecutorJob_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Job_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Job_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Did the job succeed, or was it canceled early due to an error (such as failure to write file to disk)? */" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "Did the job succeed, or was it canceled early due to an error (such as failure to write file to disk)?" },
	};
#endif
	void Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FMoviePipelineOutputData*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMoviePipelineOutputData), &Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_ShotData_Inner = { "ShotData", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMoviePipelineShotOutputData, METADATA_PARAMS(nullptr, 0) }; // 1369084802
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_ShotData_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** \n\x09* The file data for each shot that was rendered. If no files were written this will be empty. If this is from the per-shot work\n\x09* finished callback it will only have one entry (for the just finished shot). Will not include shots that did not get rendered\n\x09* due to the pipeline encountering an error.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MovieRenderPipelineDataTypes.h" },
		{ "ToolTip", "The file data for each shot that was rendered. If no files were written this will be empty. If this is from the per-shot work\nfinished callback it will only have one entry (for the just finished shot). Will not include shots that did not get rendered\ndue to the pipeline encountering an error." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_ShotData = { "ShotData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMoviePipelineOutputData, ShotData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_ShotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_ShotData_MetaData)) }; // 1369084802
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Pipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_ShotData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewProp_ShotData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		&NewStructOps,
		"MoviePipelineOutputData",
		sizeof(FMoviePipelineOutputData),
		alignof(FMoviePipelineOutputData),
		Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMoviePipelineOutputData()
	{
		if (!Z_Registration_Info_UScriptStruct_MoviePipelineOutputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoviePipelineOutputData.InnerSingleton, Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MoviePipelineOutputData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_Statics::EnumInfo[] = {
		{ EMovieRenderPipelineState_StaticEnum, TEXT("EMovieRenderPipelineState"), &Z_Registration_Info_UEnum_EMovieRenderPipelineState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2853592429U) },
		{ EMovieRenderShotState_StaticEnum, TEXT("EMovieRenderShotState"), &Z_Registration_Info_UEnum_EMovieRenderShotState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 315016491U) },
		{ EMoviePipelineShutterTiming_StaticEnum, TEXT("EMoviePipelineShutterTiming"), &Z_Registration_Info_UEnum_EMoviePipelineShutterTiming, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1569748283U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_Statics::ScriptStructInfo[] = {
		{ FMoviePipelinePassIdentifier::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelinePassIdentifier_Statics::NewStructOps, TEXT("MoviePipelinePassIdentifier"), &Z_Registration_Info_UScriptStruct_MoviePipelinePassIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelinePassIdentifier), 1505022851U) },
		{ FMoviePipelineSegmentWorkMetrics::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineSegmentWorkMetrics_Statics::NewStructOps, TEXT("MoviePipelineSegmentWorkMetrics"), &Z_Registration_Info_UScriptStruct_MoviePipelineSegmentWorkMetrics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineSegmentWorkMetrics), 555666849U) },
		{ FMoviePipelineCameraCutInfo::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineCameraCutInfo_Statics::NewStructOps, TEXT("MoviePipelineCameraCutInfo"), &Z_Registration_Info_UScriptStruct_MoviePipelineCameraCutInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineCameraCutInfo), 187463611U) },
		{ FMoviePipelineFormatArgs::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineFormatArgs_Statics::NewStructOps, TEXT("MoviePipelineFormatArgs"), &Z_Registration_Info_UScriptStruct_MoviePipelineFormatArgs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineFormatArgs), 335077819U) },
		{ FMoviePipelineFilenameResolveParams::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams_Statics::NewStructOps, TEXT("MoviePipelineFilenameResolveParams"), &Z_Registration_Info_UScriptStruct_MoviePipelineFilenameResolveParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineFilenameResolveParams), 2963516526U) },
		{ FMoviePipelineRenderPassOutputData::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineRenderPassOutputData_Statics::NewStructOps, TEXT("MoviePipelineRenderPassOutputData"), &Z_Registration_Info_UScriptStruct_MoviePipelineRenderPassOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineRenderPassOutputData), 3421417421U) },
		{ FMoviePipelineShotOutputData::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineShotOutputData_Statics::NewStructOps, TEXT("MoviePipelineShotOutputData"), &Z_Registration_Info_UScriptStruct_MoviePipelineShotOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineShotOutputData), 1369084802U) },
		{ FMoviePipelineOutputData::StaticStruct, Z_Construct_UScriptStruct_FMoviePipelineOutputData_Statics::NewStructOps, TEXT("MoviePipelineOutputData"), &Z_Registration_Info_UScriptStruct_MoviePipelineOutputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoviePipelineOutputData), 3434139545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_2165210983(TEXT("/Script/MovieRenderPipelineCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderPipelineDataTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
