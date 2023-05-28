// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneDoublePerlinNoiseChannel.h"
#include "MovieSceneTracksComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoublePerlinNoiseChannel() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneDoublePerlinNoiseChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneDoublePerlinNoiseChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel;
class UScriptStruct* FMovieSceneDoublePerlinNoiseChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDoublePerlinNoiseChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDoublePerlinNoiseChannel>()
{
	return FMovieSceneDoublePerlinNoiseChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerlinNoiseParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinNoiseParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoublePerlinNoiseChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDoublePerlinNoiseChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The noise parameters */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoublePerlinNoiseChannel.h" },
		{ "ToolTip", "The noise parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams = { "PerlinNoiseParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneDoublePerlinNoiseChannel, PerlinNoiseParams), Z_Construct_UScriptStruct_FPerlinNoiseParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams_MetaData)) }; // 1230117869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneDoublePerlinNoiseChannel",
		sizeof(FMovieSceneDoublePerlinNoiseChannel),
		alignof(FMovieSceneDoublePerlinNoiseChannel),
		Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneDoublePerlinNoiseChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel_Statics::NewStructOps, TEXT("MovieSceneDoublePerlinNoiseChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneDoublePerlinNoiseChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDoublePerlinNoiseChannel), 1697302382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_2479414475(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
