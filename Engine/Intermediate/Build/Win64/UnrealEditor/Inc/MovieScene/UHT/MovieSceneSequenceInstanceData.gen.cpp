// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/MovieSceneSequenceInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceInstanceData() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData;
class UScriptStruct* FMovieSceneSequenceInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceInstanceData>()
{
	return FMovieSceneSequenceInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract base class that defines instance data for sub sequences\n */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
		{ "ToolTip", "Abstract base class that defines instance data for sub sequences" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceInstanceData",
		sizeof(FMovieSceneSequenceInstanceData),
		alignof(FMovieSceneSequenceInstanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr;
class UScriptStruct* FMovieSceneSequenceInstanceDataPtr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneSequenceInstanceDataPtr"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneSequenceInstanceDataPtr>()
{
	return FMovieSceneSequenceInstanceDataPtr::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Evaluation/MovieSceneSequenceInstanceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSequenceInstanceDataPtr>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneSequenceInstanceDataPtr",
		sizeof(FMovieSceneSequenceInstanceDataPtr),
		alignof(FMovieSceneSequenceInstanceDataPtr),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneSequenceInstanceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceData_Statics::NewStructOps, TEXT("MovieSceneSequenceInstanceData"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceInstanceData), 3324097734U) },
		{ FMovieSceneSequenceInstanceDataPtr::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr_Statics::NewStructOps, TEXT("MovieSceneSequenceInstanceDataPtr"), &Z_Registration_Info_UScriptStruct_MovieSceneSequenceInstanceDataPtr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSequenceInstanceDataPtr), 1938979048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_1320516383(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_MovieSceneSequenceInstanceData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
