// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneStringChannel.h"
#include "Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneStringChannel() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneStringChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneStringChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneStringChannel;
class UScriptStruct* FMovieSceneStringChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneStringChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneStringChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneStringChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneStringChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneStringChannel>()
{
	return FMovieSceneStringChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[];
#endif
		static void NewProp_bHasDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneStringChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneStringChannel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneStringChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneStringChannel, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Values_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneStringChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneStringChannel, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Values_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value used when there are no keys */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneStringChannel.h" },
		{ "ToolTip", "Default value used when there are no keys" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneStringChannel, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_bHasDefaultValue_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneStringChannel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FMovieSceneStringChannel*)Obj)->bHasDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneStringChannel), &Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_bHasDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_bHasDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneStringChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneStringChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_bHasDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewProp_KeyHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneStringChannel",
		sizeof(FMovieSceneStringChannel),
		alignof(FMovieSceneStringChannel),
		Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneStringChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneStringChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneStringChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneStringChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneStringChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneStringChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneStringChannel_Statics::NewStructOps, TEXT("MovieSceneStringChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneStringChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneStringChannel), 2536368632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneStringChannel_h_240410656(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneStringChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneStringChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
