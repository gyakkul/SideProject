// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/KeysAndChannels/MovieSceneScriptingChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneScriptingChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey();
	SEQUENCERSCRIPTING_API UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerScripting();
// End Cross Module References
	void UMovieSceneScriptingKey::StaticRegisterNativesUMovieSceneScriptingKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingKey);
	UClass* Z_Construct_UClass_UMovieSceneScriptingKey_NoRegister()
	{
		return UMovieSceneScriptingKey::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingChannel.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingChannel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingKey_Statics::ClassParams = {
		&UMovieSceneScriptingKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingKey()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingKey.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingKey.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingKey>()
	{
		return UMovieSceneScriptingKey::StaticClass();
	}
	UMovieSceneScriptingKey::UMovieSceneScriptingKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingKey);
	UMovieSceneScriptingKey::~UMovieSceneScriptingKey() {}
	void UMovieSceneScriptingChannel::StaticRegisterNativesUMovieSceneScriptingChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneScriptingChannel);
	UClass* Z_Construct_UClass_UMovieSceneScriptingChannel_NoRegister()
	{
		return UMovieSceneScriptingChannel::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneScriptingChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerScripting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KeysAndChannels/MovieSceneScriptingChannel.h" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingChannel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "Sequencer|Keys" },
		{ "ModuleRelativePath", "Private/KeysAndChannels/MovieSceneScriptingChannel.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneScriptingChannel, ChannelName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::NewProp_ChannelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::NewProp_ChannelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneScriptingChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::ClassParams = {
		&UMovieSceneScriptingChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneScriptingChannel()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneScriptingChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneScriptingChannel.OuterSingleton, Z_Construct_UClass_UMovieSceneScriptingChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneScriptingChannel.OuterSingleton;
	}
	template<> SEQUENCERSCRIPTING_API UClass* StaticClass<UMovieSceneScriptingChannel>()
	{
		return UMovieSceneScriptingChannel::StaticClass();
	}
	UMovieSceneScriptingChannel::UMovieSceneScriptingChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneScriptingChannel);
	UMovieSceneScriptingChannel::~UMovieSceneScriptingChannel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneScriptingKey, UMovieSceneScriptingKey::StaticClass, TEXT("UMovieSceneScriptingKey"), &Z_Registration_Info_UClass_UMovieSceneScriptingKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingKey), 1823937898U) },
		{ Z_Construct_UClass_UMovieSceneScriptingChannel, UMovieSceneScriptingChannel::StaticClass, TEXT("UMovieSceneScriptingChannel"), &Z_Registration_Info_UClass_UMovieSceneScriptingChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneScriptingChannel), 1257836000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_1932966376(TEXT("/Script/SequencerScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_SequencerScripting_Source_SequencerScripting_Private_KeysAndChannels_MovieSceneScriptingChannel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
