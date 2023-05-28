// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneFloatPerlinNoiseChannel.h"
#include "MovieSceneTracksComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatPerlinNoiseChannel() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneFloatPerlinNoiseChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneFloatPerlinNoiseChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel;
class UScriptStruct* FMovieSceneFloatPerlinNoiseChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneFloatPerlinNoiseChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneFloatPerlinNoiseChannel>()
{
	return FMovieSceneFloatPerlinNoiseChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatPerlinNoiseChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatPerlinNoiseChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The noise parameters */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatPerlinNoiseChannel.h" },
		{ "ToolTip", "The noise parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams = { "PerlinNoiseParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatPerlinNoiseChannel, PerlinNoiseParams), Z_Construct_UScriptStruct_FPerlinNoiseParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams_MetaData)) }; // 1230117869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewProp_PerlinNoiseParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneFloatPerlinNoiseChannel",
		sizeof(FMovieSceneFloatPerlinNoiseChannel),
		alignof(FMovieSceneFloatPerlinNoiseChannel),
		Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneFloatPerlinNoiseChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatPerlinNoiseChannel_Statics::NewStructOps, TEXT("MovieSceneFloatPerlinNoiseChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneFloatPerlinNoiseChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatPerlinNoiseChannel), 1841160406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_2217883759(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneFloatPerlinNoiseChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
