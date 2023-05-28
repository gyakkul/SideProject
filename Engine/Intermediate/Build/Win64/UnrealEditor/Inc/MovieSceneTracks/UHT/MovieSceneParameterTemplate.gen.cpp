// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "Sections/MovieSceneParameterSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneParameterTemplate() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FBoolParameterNameAndCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FColorParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterNameAndCurve();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FTransformParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterNameAndCurves();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneParameterSectionTemplate>() == std::is_polymorphic<FMovieSceneEvalTemplate>(), "USTRUCT FMovieSceneParameterSectionTemplate cannot be polymorphic unless super FMovieSceneEvalTemplate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate;
class UScriptStruct* FMovieSceneParameterSectionTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneParameterSectionTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneParameterSectionTemplate>()
{
	return FMovieSceneParameterSectionTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scalars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Scalars;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bools;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector2Ds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector2Ds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vector2Ds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Template that performs evaluation of parameter sections */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "Template that performs evaluation of parameter sections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneParameterSectionTemplate>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_Inner = { "Scalars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScalarParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3082588753
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_MetaData[] = {
		{ "Comment", "/** The scalar parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The scalar parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars = { "Scalars", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Scalars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_MetaData)) }; // 3082588753
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_Inner = { "Bools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoolParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3256949391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_MetaData[] = {
		{ "Comment", "/** The bool parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The bool parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools = { "Bools", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Bools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_MetaData)) }; // 3256949391
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_Inner = { "Vector2Ds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2DParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 2184921026
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_MetaData[] = {
		{ "Comment", "/** The vector parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds = { "Vector2Ds", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Vector2Ds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_MetaData)) }; // 2184921026
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_Inner = { "Vectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVectorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 3977757910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_MetaData[] = {
		{ "Comment", "/** The vector parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The vector parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors = { "Vectors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Vectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_MetaData)) }; // 3977757910
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColorParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 2994182939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_MetaData[] = {
		{ "Comment", "/** The color parameter names and their associated curves. */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
		{ "ToolTip", "The color parameter names and their associated curves." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_MetaData)) }; // 2994182939
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransformParameterNameAndCurves, METADATA_PARAMS(nullptr, 0) }; // 1433004261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneParameterTemplate.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneParameterSectionTemplate, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_MetaData)) }; // 1433004261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Scalars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Bools,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vector2Ds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Vectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Colors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewProp_Transforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneEvalTemplate,
		&NewStructOps,
		"MovieSceneParameterSectionTemplate",
		sizeof(FMovieSceneParameterSectionTemplate),
		alignof(FMovieSceneParameterSectionTemplate),
		Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneParameterSectionTemplate::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneParameterSectionTemplate_Statics::NewStructOps, TEXT("MovieSceneParameterSectionTemplate"), &Z_Registration_Info_UScriptStruct_MovieSceneParameterSectionTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneParameterSectionTemplate), 336032293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h_2323014382(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Evaluation_MovieSceneParameterTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
