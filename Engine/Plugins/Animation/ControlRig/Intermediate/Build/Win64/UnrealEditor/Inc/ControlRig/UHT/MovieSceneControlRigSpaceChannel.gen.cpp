// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneControlRigSpaceChannel.h"
#include "Channels/MovieSceneChannelData.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigSpaceChannel() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType;
	static UEnum* EMovieSceneControlRigSpaceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EMovieSceneControlRigSpaceType"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EMovieSceneControlRigSpaceType>()
	{
		return EMovieSceneControlRigSpaceType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enumerators[] = {
		{ "EMovieSceneControlRigSpaceType::Parent", (int64)EMovieSceneControlRigSpaceType::Parent },
		{ "EMovieSceneControlRigSpaceType::World", (int64)EMovieSceneControlRigSpaceType::World },
		{ "EMovieSceneControlRigSpaceType::ControlRig", (int64)EMovieSceneControlRigSpaceType::ControlRig },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ControlRig.Name", "EMovieSceneControlRigSpaceType::ControlRig" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "Parent.Name", "EMovieSceneControlRigSpaceType::Parent" },
		{ "World.Name", "EMovieSceneControlRigSpaceType::World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EMovieSceneControlRigSpaceType",
		"EMovieSceneControlRigSpaceType",
		Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.InnerSingleton, Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey;
class UScriptStruct* FMovieSceneControlRigSpaceBaseKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("MovieSceneControlRigSpaceBaseKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMovieSceneControlRigSpaceBaseKey>()
{
	return FMovieSceneControlRigSpaceBaseKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpaceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpaceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigElement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRigElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneControlRigSpaceBaseKey>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType = { "SpaceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigSpaceBaseKey, SpaceType), Z_Construct_UEnum_ControlRig_EMovieSceneControlRigSpaceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType_MetaData)) }; // 2477438806
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_ControlRigElement_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_ControlRigElement = { "ControlRigElement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigSpaceBaseKey, ControlRigElement), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_ControlRigElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_ControlRigElement_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_SpaceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewProp_ControlRigElement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"MovieSceneControlRigSpaceBaseKey",
		sizeof(FMovieSceneControlRigSpaceBaseKey),
		alignof(FMovieSceneControlRigSpaceBaseKey),
		Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneControlRigSpaceChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneControlRigSpaceChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel;
class UScriptStruct* FMovieSceneControlRigSpaceChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("MovieSceneControlRigSpaceChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FMovieSceneControlRigSpaceChannel>()
{
	return FMovieSceneControlRigSpaceChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A curve of spaces */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "A curve of spaces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneControlRigSpaceChannel>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Sorted array of key times */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "Sorted array of key times" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigSpaceChannel, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey, METADATA_PARAMS(nullptr, 0) }; // 1984215352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigSpaceChannel, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues_MetaData)) }; // 1984215352
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigSpaceChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneControlRigSpaceChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewProp_KeyHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneControlRigSpaceChannel",
		sizeof(FMovieSceneControlRigSpaceChannel),
		alignof(FMovieSceneControlRigSpaceChannel),
		Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::EnumInfo[] = {
		{ EMovieSceneControlRigSpaceType_StaticEnum, TEXT("EMovieSceneControlRigSpaceType"), &Z_Registration_Info_UEnum_EMovieSceneControlRigSpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2477438806U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneControlRigSpaceBaseKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey_Statics::NewStructOps, TEXT("MovieSceneControlRigSpaceBaseKey"), &Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceBaseKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneControlRigSpaceBaseKey), 1984215352U) },
		{ FMovieSceneControlRigSpaceChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel_Statics::NewStructOps, TEXT("MovieSceneControlRigSpaceChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneControlRigSpaceChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneControlRigSpaceChannel), 695891447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_2884736009(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigSpaceChannel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
