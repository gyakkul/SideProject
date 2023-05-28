// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneCameraShakeSourceTriggerChannel.h"
#include "Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger;
class UScriptStruct* FMovieSceneCameraShakeSourceTrigger::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSourceTrigger"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSourceTrigger>()
{
	return FMovieSceneCameraShakeSourceTrigger::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceTrigger>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Class of the camera shake to play */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Class of the camera shake to play" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Scalar that affects shake intensity */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Scalar that affects shake intensity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, PlayScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_MetaData)) }; // 1413967709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace = { "UserDefinedPlaySpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTrigger, UserDefinedPlaySpace), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlayScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewProp_UserDefinedPlaySpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneCameraShakeSourceTrigger",
		sizeof(FMovieSceneCameraShakeSourceTrigger),
		alignof(FMovieSceneCameraShakeSourceTrigger),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneCameraShakeSourceTriggerChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneCameraShakeSourceTriggerChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel;
class UScriptStruct* FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSourceTriggerChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSourceTriggerChannel>()
{
	return FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSourceTriggerChannel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Array of times for each key */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Array of times for each key" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTriggerChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger, METADATA_PARAMS(nullptr, 0) }; // 3727092023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTriggerChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_MetaData)) }; // 3727092023
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneCameraShakeSourceTriggerChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSourceTriggerChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewProp_KeyHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneCameraShakeSourceTriggerChannel",
		sizeof(FMovieSceneCameraShakeSourceTriggerChannel),
		alignof(FMovieSceneCameraShakeSourceTriggerChannel),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneCameraShakeSourceTriggerChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneCameraShakeSourceTriggerChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCameraShakeSourceTrigger::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTrigger_Statics::NewStructOps, TEXT("MovieSceneCameraShakeSourceTrigger"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeSourceTrigger), 3727092023U) },
		{ FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel_Statics::NewStructOps, TEXT("MovieSceneCameraShakeSourceTriggerChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSourceTriggerChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeSourceTriggerChannel), 3409623264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneCameraShakeSourceTriggerChannel_h_3385755876(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneCameraShakeSourceTriggerChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneCameraShakeSourceTriggerChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
