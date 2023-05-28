// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneSequenceTickInterval.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickInterval() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval;
class UScriptStruct* FMovieSceneSequenceTickInterval::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceTickInterval"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceTickInterval>()
{
	return FMovieSceneSequenceTickInterval::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickIntervalSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickIntervalSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationBudgetMicroseconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EvaluationBudgetMicroseconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickWhenPaused_MetaData[];
#endif
		static void NewProp_bTickWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRounding_MetaData[];
#endif
		static void NewProp_bAllowRounding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRounding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Structure defining a concrete tick interval for a Sequencer based evaluation\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickInterval.h" },
		{ "ToolTip", "Structure defining a concrete tick interval for a Sequencer based evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceTickInterval>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_TickIntervalSeconds_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Defines the rate at which the sequence should update, in seconds */" },
		{ "DisplayName", "Tick Interval" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickInterval.h" },
		{ "ToolTip", "Defines the rate at which the sequence should update, in seconds" },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_TickIntervalSeconds = { "TickIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceTickInterval, TickIntervalSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_TickIntervalSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_TickIntervalSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_EvaluationBudgetMicroseconds_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Defines an approximate budget for evaluation of this sequence (and any other sequences with the same tick interval) */" },
		{ "DisplayName", "Evaluation Budget" },
		{ "ForceUnits", "us" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickInterval.h" },
		{ "ToolTip", "Defines an approximate budget for evaluation of this sequence (and any other sequences with the same tick interval)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_EvaluationBudgetMicroseconds = { "EvaluationBudgetMicroseconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceTickInterval, EvaluationBudgetMicroseconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_EvaluationBudgetMicroseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_EvaluationBudgetMicroseconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** When true, the sequence will continue to tick and progress even when the world is paused */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickInterval.h" },
		{ "ToolTip", "When true, the sequence will continue to tick and progress even when the world is paused" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused_SetBit(void* Obj)
	{
		((FMovieSceneSequenceTickInterval*)Obj)->bTickWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused = { "bTickWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneSequenceTickInterval), &Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** When true, allow the sequence to be grouped with other sequences based on Sequencer.TickIntervalGroupingResolutionMs. Otherwise the interval will be used precisely. */" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickInterval.h" },
		{ "ToolTip", "When true, allow the sequence to be grouped with other sequences based on Sequencer.TickIntervalGroupingResolutionMs. Otherwise the interval will be used precisely." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding_SetBit(void* Obj)
	{
		((FMovieSceneSequenceTickInterval*)Obj)->bAllowRounding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding = { "bAllowRounding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneSequenceTickInterval), &Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_TickIntervalSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_EvaluationBudgetMicroseconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bTickWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewProp_bAllowRounding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceTickInterval",
		sizeof(FMovieSceneSequenceTickInterval),
		alignof(FMovieSceneSequenceTickInterval),
		Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSequenceTickInterval::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval_Statics::NewStructOps, TEXT("MovieSceneSequenceTickInterval"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceTickInterval, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceTickInterval), 734968219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h_2139003613(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickInterval_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
