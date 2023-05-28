// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneObjectPathChannel.h"
#include "Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPathChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue;
class UScriptStruct* FMovieSceneObjectPathChannelKeyValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectPathChannelKeyValue"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectPathChannelKeyValue>()
{
	return FMovieSceneObjectPathChannelKeyValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HardPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Key value type for object path channels that stores references to objects as both a hard and soft reference, to ensure compatability with both sub objects and async loading\n */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
		{ "ToolTip", "Key value type for object path channels that stores references to objects as both a hard and soft reference, to ensure compatability with both sub objects and async loading" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectPathChannelKeyValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr_MetaData[] = {
		{ "Comment", "/** Persistent storage of the object by path (which allows us to support cross-level actor references, for instance) */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
		{ "ToolTip", "Persistent storage of the object by path (which allows us to support cross-level actor references, for instance)" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr = { "SoftPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPathChannelKeyValue, SoftPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr_MetaData[] = {
		{ "Comment", "/** Hard reference to the loaded object - relevant for any asset type which also hints the async loader to efficiently load the asset in advance */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
		{ "ToolTip", "Hard reference to the loaded object - relevant for any asset type which also hints the async loader to efficiently load the asset in advance" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr = { "HardPtr", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPathChannelKeyValue, HardPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_SoftPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewProp_HardPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneObjectPathChannelKeyValue",
		sizeof(FMovieSceneObjectPathChannelKeyValue),
		alignof(FMovieSceneObjectPathChannelKeyValue),
		Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneObjectPathChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneObjectPathChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel;
class UScriptStruct* FMovieSceneObjectPathChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectPathChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectPathChannel>()
{
	return FMovieSceneObjectPathChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PropertyClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectPathChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPathChannel, PropertyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPathChannel, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue, METADATA_PARAMS(nullptr, 0) }; // 3638814530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_MetaData[] = {
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPathChannel, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_MetaData)) }; // 3638814530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPathChannel, DefaultValue), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue_MetaData)) }; // 3638814530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneObjectPathChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectPathChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_PropertyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewProp_KeyHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneObjectPathChannel",
		sizeof(FMovieSceneObjectPathChannel),
		alignof(FMovieSceneObjectPathChannel),
		Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneObjectPathChannelKeyValue::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannelKeyValue_Statics::NewStructOps, TEXT("MovieSceneObjectPathChannelKeyValue"), &Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannelKeyValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneObjectPathChannelKeyValue), 3638814530U) },
		{ FMovieSceneObjectPathChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel_Statics::NewStructOps, TEXT("MovieSceneObjectPathChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneObjectPathChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneObjectPathChannel), 3165347126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h_755636946(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneObjectPathChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
