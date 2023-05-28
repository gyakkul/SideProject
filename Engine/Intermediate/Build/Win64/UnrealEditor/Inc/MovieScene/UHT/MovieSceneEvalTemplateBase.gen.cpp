// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneEvalTemplateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTemplateBase() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct;
class UScriptStruct* FMovieSceneEmptyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEmptyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEmptyStruct>()
{
	return FMovieSceneEmptyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Empty struct used for serialization */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
		{ "ToolTip", "Empty struct used for serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEmptyStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEmptyStruct",
		sizeof(FMovieSceneEmptyStruct),
		alignof(FMovieSceneEmptyStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEmptyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase;
class UScriptStruct* FMovieSceneEvalTemplateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneEvalTemplateBase"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneEvalTemplateBase>()
{
	return FMovieSceneEvalTemplateBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base structure used for all movie scene evaluation templates\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneEvalTemplateBase.h" },
		{ "ToolTip", "Base structure used for all movie scene evaluation templates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEvalTemplateBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneEvalTemplateBase",
		sizeof(FMovieSceneEvalTemplateBase),
		alignof(FMovieSceneEvalTemplateBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEmptyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEmptyStruct_Statics::NewStructOps, TEXT("MovieSceneEmptyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneEmptyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEmptyStruct), 2562930747U) },
		{ FMovieSceneEvalTemplateBase::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEvalTemplateBase_Statics::NewStructOps, TEXT("MovieSceneEvalTemplateBase"), &Z_Registration_Info_UScriptStruct_MovieSceneEvalTemplateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEvalTemplateBase), 2362631927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_1383305764(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneEvalTemplateBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
