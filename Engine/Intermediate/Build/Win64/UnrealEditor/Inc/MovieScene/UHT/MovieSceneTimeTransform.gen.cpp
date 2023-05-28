// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneTimeTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTimeTransform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform;
class UScriptStruct* FMovieSceneTimeTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTimeTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneTimeTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneTimeTransform>()
{
	return FMovieSceneTimeTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene sequence transform class that transforms from one time-space to another.\n *\n * @note The transform can be thought of as the top row of a 2x2 matrix, where the bottom row is the identity:\n * \x09\x09\x09| TimeScale\x09Offset\x09|\n *\x09\x09\x09| 0\x09\x09\x09""1\x09\x09|\n *\n * As such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.\n *\n * Transforms apply time scale first, and then offset.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another.\n\n@note The transform can be thought of as the top row of a 2x2 matrix, where the bottom row is the identity:\n                    | TimeScale     Offset  |\n                    | 0                     1               |\n\nAs such, traditional matrix mathematics can be applied to transform between different sequence's time-spaces.\n\nTransforms apply time scale first, and then offset." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTimeTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale_MetaData[] = {
		{ "Comment", "/** The sequence's time scale (or play rate) */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "The sequence's time scale (or play rate)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale = { "TimeScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTimeTransform, TimeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "/** Scalar frame offset applied after the scale */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneTimeTransform.h" },
		{ "ToolTip", "Scalar frame offset applied after the scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTimeTransform, Offset), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_TimeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneTimeTransform",
		sizeof(FMovieSceneTimeTransform),
		alignof(FMovieSceneTimeTransform),
		Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneTimeTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTimeTransform_Statics::NewStructOps, TEXT("MovieSceneTimeTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneTimeTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTimeTransform), 2842723527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_1183355119(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneTimeTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
