// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneEvaluationOperand.h"
#include "MovieSceneSequenceID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvaluationOperand() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand;
class UScriptStruct* FMovieSceneEvaluationOperand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvaluationOperand"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvaluationOperand>()
{
	return FMovieSceneEvaluationOperand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that describes an object that is to be animated. Used as an abstraction of the actual objects bound to object bindings.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "Structure that describes an object that is to be animated. Used as an abstraction of the actual objects bound to object bindings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvaluationOperand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID_MetaData[] = {
		{ "Comment", "/** A GUID relating to either a posessable, or a spawnable binding */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "A GUID relating to either a posessable, or a spawnable binding" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID = { "ObjectBindingID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationOperand, ObjectBindingID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** The ID of the sequence within which the object binding resides */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvaluationOperand.h" },
		{ "ToolTip", "The ID of the sequence within which the object binding resides" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEvaluationOperand, SequenceID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID_MetaData)) }; // 3213602762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_ObjectBindingID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewProp_SequenceID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvaluationOperand",
		sizeof(FMovieSceneEvaluationOperand),
		alignof(FMovieSceneEvaluationOperand),
		Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEvaluationOperand::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvaluationOperand_Statics::NewStructOps, TEXT("MovieSceneEvaluationOperand"), &Z_Registration_Info_UScriptStruct_MovieSceneEvaluationOperand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvaluationOperand), 2495798449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_3049377915(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvaluationOperand_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
