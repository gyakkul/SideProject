// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneEvaluationKey.h"
#include "Evaluation/MovieSceneTrackIdentifier.h"
#include "MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationKey() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey;
class UScriptStruct* FMovieSceneEvaluationKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationKey>()
{
	return FMovieSceneEvaluationKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Keyable struct that represents a particular entity within an evaluation template (either a section/template or a track) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "Keyable struct that represents a particular entity within an evaluation template (either a section/template or a track)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** ID of the sequence that the entity is contained within */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "ID of the sequence that the entity is contained within" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationKey, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SequenceID_MetaData)) }; // 3213602762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_TrackIdentifier_MetaData[] = {
		{ "Comment", "/** ID of the track this key relates to */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "ID of the track this key relates to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_TrackIdentifier = { "TrackIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationKey, TrackIdentifier), Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_TrackIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_TrackIdentifier_MetaData)) }; // 2461206580
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SectionIndex_MetaData[] = {
		{ "Comment", "/** Index of the section template within the track this key relates to (or -1 where this key relates to a track) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationKey.h" },
		{ "ToolTip", "Index of the section template within the track this key relates to (or -1 where this key relates to a track)" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationKey, SectionIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SectionIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SectionIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SequenceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_TrackIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewProp_SectionIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationKey",
		sizeof(FMovieSceneEvaluationKey),
		alignof(FMovieSceneEvaluationKey),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationKey()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEvaluationKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationKey_Statics::NewStructOps, TEXT("MovieSceneEvaluationKey"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationKey), 397694718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_4222758472(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationKey_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
