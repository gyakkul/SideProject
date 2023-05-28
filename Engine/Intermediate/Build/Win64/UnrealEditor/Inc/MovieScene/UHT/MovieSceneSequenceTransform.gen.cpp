// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneSequenceTransform.h"
#include "Evaluation/MovieSceneTimeTransform.h"
#include "Evaluation/MovieSceneTimeWarping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTransform() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeTransform();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTimeWarping();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter;
class UScriptStruct* FMovieSceneWarpCounter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWarpCounter, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneWarpCounter"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneWarpCounter>()
{
	return FMovieSceneWarpCounter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_WarpCounts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpCounts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpCounts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct that tracks warp counts in a way that works with the FMovieSceneTimeWarping struct.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Struct that tracks warp counts in a way that works with the FMovieSceneTimeWarping struct." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneWarpCounter>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_Inner = { "WarpCounts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts = { "WarpCounts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneWarpCounter, WarpCounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewProp_WarpCounts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneWarpCounter",
		sizeof(FMovieSceneWarpCounter),
		alignof(FMovieSceneWarpCounter),
		Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneWarpCounter()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform;
class UScriptStruct* FMovieSceneNestedSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneNestedSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneNestedSequenceTransform>()
{
	return FMovieSceneNestedSequenceTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Warping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Warping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Time transform information for a nested sequence.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time transform information for a nested sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneNestedSequenceTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * Linear time transform for this sub-sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Linear time transform for this sub-sequence." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform_MetaData)) }; // 2842723527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping_MetaData[] = {
		{ "Comment", "/**\n\x09 * Time warping information for this sub-sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Time warping information for this sub-sequence." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping = { "Warping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneNestedSequenceTransform, Warping), Z_Construct_UScriptStruct_FMovieSceneTimeWarping, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping_MetaData)) }; // 2522177663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_LinearTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewProp_Warping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneNestedSequenceTransform",
		sizeof(FMovieSceneNestedSequenceTransform),
		alignof(FMovieSceneNestedSequenceTransform),
		Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform;
class UScriptStruct* FMovieSceneSequenceTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceTransform>()
{
	return FMovieSceneSequenceTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NestedTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NestedTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NestedTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene sequence transform class that transforms from one time-space to another.\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
		{ "ToolTip", "Movie scene sequence transform class that transforms from one time-space to another." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform = { "LinearTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceTransform, LinearTransform), Z_Construct_UScriptStruct_FMovieSceneTimeTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform_MetaData)) }; // 2842723527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner = { "NestedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform, METADATA_PARAMS(nullptr, 0) }; // 1859716915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms = { "NestedTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSequenceTransform, NestedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_MetaData)) }; // 1859716915
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_LinearTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewProp_NestedTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceTransform",
		sizeof(FMovieSceneSequenceTransform),
		alignof(FMovieSceneSequenceTransform),
		Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneWarpCounter::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneWarpCounter_Statics::NewStructOps, TEXT("MovieSceneWarpCounter"), &Z_Registration_Info_UScriptStruct_MovieSceneWarpCounter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneWarpCounter), 2518664638U) },
		{ FMovieSceneNestedSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneNestedSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneNestedSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneNestedSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneNestedSequenceTransform), 1859716915U) },
		{ FMovieSceneSequenceTransform::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_Statics::NewStructOps, TEXT("MovieSceneSequenceTransform"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceTransform), 3038509274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_3966757379(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
