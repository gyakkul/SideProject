// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneCachedTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCachedTrack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachedTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneCachedTrack::StaticRegisterNativesUMovieSceneCachedTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCachedTrack);
	UClass* Z_Construct_UClass_UMovieSceneCachedTrack_NoRegister()
	{
		return UMovieSceneCachedTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCachedTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCachedTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCachedTrack_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCachedTrack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCachedTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneCachedTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCachedTrack_Statics::ClassParams = {
		&UMovieSceneCachedTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCachedTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCachedTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCachedTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCachedTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCachedTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCachedTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCachedTrack.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneCachedTrack>()
	{
		return UMovieSceneCachedTrack::StaticClass();
	}
	UMovieSceneCachedTrack::UMovieSceneCachedTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCachedTrack);
	UMovieSceneCachedTrack::~UMovieSceneCachedTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCachedTrack, UMovieSceneCachedTrack::StaticClass, TEXT("UMovieSceneCachedTrack"), &Z_Registration_Info_UClass_UMovieSceneCachedTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCachedTrack), 2241321401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_2881926715(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Tracks_MovieSceneCachedTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
