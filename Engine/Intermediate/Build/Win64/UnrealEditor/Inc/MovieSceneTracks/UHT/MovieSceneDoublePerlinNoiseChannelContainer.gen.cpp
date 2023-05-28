// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneDoublePerlinNoiseChannelContainer.h"
#include "Channels/MovieSceneDoublePerlinNoiseChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoublePerlinNoiseChannelContainer() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideContainer();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDoublePerlinNoiseChannelContainer::StaticRegisterNativesUMovieSceneDoublePerlinNoiseChannelContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoublePerlinNoiseChannelContainer);
	UClass* Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_NoRegister()
	{
		return UMovieSceneDoublePerlinNoiseChannelContainer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerlinNoiseChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinNoiseChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneChannelOverrideContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Double Perlin Noise" },
		{ "IncludePath", "Channels/MovieSceneDoublePerlinNoiseChannelContainer.h" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoublePerlinNoiseChannelContainer.h" },
		{ "ToolTip", "Override a channel to use double perlin noise" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::NewProp_PerlinNoiseChannel_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneDoublePerlinNoiseChannelContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::NewProp_PerlinNoiseChannel = { "PerlinNoiseChannel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDoublePerlinNoiseChannelContainer, PerlinNoiseChannel), Z_Construct_UScriptStruct_FMovieSceneDoublePerlinNoiseChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::NewProp_PerlinNoiseChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::NewProp_PerlinNoiseChannel_MetaData)) }; // 1697302382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::NewProp_PerlinNoiseChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoublePerlinNoiseChannelContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::ClassParams = {
		&UMovieSceneDoublePerlinNoiseChannelContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.OuterSingleton, Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoublePerlinNoiseChannelContainer>()
	{
		return UMovieSceneDoublePerlinNoiseChannelContainer::StaticClass();
	}
	UMovieSceneDoublePerlinNoiseChannelContainer::UMovieSceneDoublePerlinNoiseChannelContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoublePerlinNoiseChannelContainer);
	UMovieSceneDoublePerlinNoiseChannelContainer::~UMovieSceneDoublePerlinNoiseChannelContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannelContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannelContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDoublePerlinNoiseChannelContainer, UMovieSceneDoublePerlinNoiseChannelContainer::StaticClass, TEXT("UMovieSceneDoublePerlinNoiseChannelContainer"), &Z_Registration_Info_UClass_UMovieSceneDoublePerlinNoiseChannelContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoublePerlinNoiseChannelContainer), 3423880451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannelContainer_h_929620380(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannelContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Channels_MovieSceneDoublePerlinNoiseChannelContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
