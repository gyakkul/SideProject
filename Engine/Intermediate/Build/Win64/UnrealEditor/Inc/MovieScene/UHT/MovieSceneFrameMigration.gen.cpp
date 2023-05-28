// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneFrameMigration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFrameMigration() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFrameRange;
class UScriptStruct* FMovieSceneFrameRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFrameRange, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFrameRange"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFrameRange>()
{
	return FMovieSceneFrameRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Type used to convert from a FFloatRange to a TRange<FFrameNumber>\n */" },
		{ "ModuleRelativePath", "Public/MovieSceneFrameMigration.h" },
		{ "ToolTip", "Type used to convert from a FFloatRange to a TRange<FFrameNumber>" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFrameRange>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneFrameRange",
		sizeof(FMovieSceneFrameRange),
		alignof(FMovieSceneFrameRange),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFrameRange()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneFrameRange.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneFrameRange::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFrameRange_Statics::NewStructOps, TEXT("MovieSceneFrameRange"), &Z_Registration_Info_UScriptStruct_MovieSceneFrameRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFrameRange), 199181766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_4106081241(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneFrameMigration_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
