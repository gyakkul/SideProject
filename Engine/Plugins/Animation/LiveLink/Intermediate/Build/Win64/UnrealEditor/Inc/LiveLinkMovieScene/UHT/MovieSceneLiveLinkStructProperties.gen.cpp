// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/MovieSceneLiveLinkStructProperties.h"
#include "Channels/MovieSceneBoolChannel.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "Channels/MovieSceneStringChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkStructProperties() {}
// Cross Module References
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPropertyData();
	LIVELINKMOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBoolChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneStringChannel();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkPropertyData;
class UScriptStruct* FLiveLinkPropertyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPropertyData, (UObject*)Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("LiveLinkPropertyData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FLiveLinkPropertyData>()
{
	return FLiveLinkPropertyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolChannel;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ByteChannel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteChannel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ByteChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkPropertyData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPropertyData, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_Inner = { "FloatChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel = { "FloatChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPropertyData, FloatChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_Inner = { "StringChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneStringChannel, METADATA_PARAMS(nullptr, 0) }; // 2536368632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel = { "StringChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPropertyData, StringChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_MetaData)) }; // 2536368632
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_Inner = { "IntegerChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(nullptr, 0) }; // 2921625975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel = { "IntegerChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPropertyData, IntegerChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_MetaData)) }; // 2921625975
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_Inner = { "BoolChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBoolChannel, METADATA_PARAMS(nullptr, 0) }; // 2252890828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel = { "BoolChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPropertyData, BoolChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_MetaData)) }; // 2252890828
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_Inner = { "ByteChannel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(nullptr, 0) }; // 3302488198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel = { "ByteChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkPropertyData, ByteChannel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_MetaData)) }; // 3302488198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_FloatChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_StringChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_IntegerChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_BoolChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewProp_ByteChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
		nullptr,
		&NewStructOps,
		"LiveLinkPropertyData",
		sizeof(FLiveLinkPropertyData),
		alignof(FLiveLinkPropertyData),
		Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkPropertyData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkPropertyData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData;
class UScriptStruct* FLiveLinkSubSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubSectionData, (UObject*)Z_Construct_UPackage__Script_LiveLinkMovieScene(), TEXT("LiveLinkSubSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.OuterSingleton;
}
template<> LIVELINKMOVIESCENE_API UScriptStruct* StaticStruct<FLiveLinkSubSectionData>()
{
	return FLiveLinkSubSectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubSectionData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkPropertyData, METADATA_PARAMS(nullptr, 0) }; // 3481408081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkStructProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubSectionData, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_MetaData)) }; // 3481408081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewProp_Properties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
		nullptr,
		&NewStructOps,
		"LiveLinkSubSectionData",
		sizeof(FLiveLinkSubSectionData),
		alignof(FLiveLinkSubSectionData),
		Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubSectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkPropertyData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkPropertyData_Statics::NewStructOps, TEXT("LiveLinkPropertyData"), &Z_Registration_Info_UScriptStruct_LiveLinkPropertyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkPropertyData), 3481408081U) },
		{ FLiveLinkSubSectionData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubSectionData_Statics::NewStructOps, TEXT("LiveLinkSubSectionData"), &Z_Registration_Info_UScriptStruct_LiveLinkSubSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubSectionData), 30763294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_1505698936(TEXT("/Script/LiveLinkMovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkStructProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
