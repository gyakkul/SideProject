// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneEventChannel.h"
#include "Channels/MovieSceneChannelData.h"
#include "Channels/MovieSceneEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventChannel() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneEventChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneEventChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventChannel;
class UScriptStruct* FMovieSceneEventChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventChannel>()
{
	return FMovieSceneEventChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventChannel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Array of times for each key */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
		{ "ToolTip", "Array of times for each key" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneEvent, METADATA_PARAMS(nullptr, 0) }; // 3632963668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues_MetaData)) }; // 3632963668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneEventChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewProp_KeyHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneEventChannel",
		sizeof(FMovieSceneEventChannel),
		alignof(FMovieSceneEventChannel),
		Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEventChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEventChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventChannel_Statics::NewStructOps, TEXT("MovieSceneEventChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneEventChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventChannel), 2838253818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_860732812(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneEventChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
