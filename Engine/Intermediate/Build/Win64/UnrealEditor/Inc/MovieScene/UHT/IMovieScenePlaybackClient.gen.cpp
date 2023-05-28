// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IMovieScenePlaybackClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieScenePlaybackClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieScenePlaybackClient::StaticRegisterNativesUMovieScenePlaybackClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePlaybackClient);
	UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister()
	{
		return UMovieScenePlaybackClient::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePlaybackClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePlaybackClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IMovieScenePlaybackClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePlaybackClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieScenePlaybackClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePlaybackClient_Statics::ClassParams = {
		&UMovieScenePlaybackClient::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePlaybackClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePlaybackClient()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePlaybackClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePlaybackClient.OuterSingleton, Z_Construct_UClass_UMovieScenePlaybackClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePlaybackClient.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieScenePlaybackClient>()
	{
		return UMovieScenePlaybackClient::StaticClass();
	}
	UMovieScenePlaybackClient::UMovieScenePlaybackClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePlaybackClient);
	UMovieScenePlaybackClient::~UMovieScenePlaybackClient() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePlaybackClient, UMovieScenePlaybackClient::StaticClass, TEXT("UMovieScenePlaybackClient"), &Z_Registration_Info_UClass_UMovieScenePlaybackClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePlaybackClient), 1288736840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_3632391545(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_IMovieScenePlaybackClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
