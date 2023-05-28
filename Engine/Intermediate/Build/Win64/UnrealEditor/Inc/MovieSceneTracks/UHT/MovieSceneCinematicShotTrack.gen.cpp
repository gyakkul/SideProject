// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneCinematicShotTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinematicShotTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSubTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCinematicShotTrack::StaticRegisterNativesUMovieSceneCinematicShotTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCinematicShotTrack);
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister()
	{
		return UMovieSceneCinematicShotTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSubTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A track that holds consecutive sub sequences.\n*/" },
		{ "IncludePath", "Tracks/MovieSceneCinematicShotTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCinematicShotTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track that holds consecutive sub sequences." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinematicShotTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::ClassParams = {
		&UMovieSceneCinematicShotTrack::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCinematicShotTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCinematicShotTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCinematicShotTrack>()
	{
		return UMovieSceneCinematicShotTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinematicShotTrack);
	UMovieSceneCinematicShotTrack::~UMovieSceneCinematicShotTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCinematicShotTrack, UMovieSceneCinematicShotTrack::StaticClass, TEXT("UMovieSceneCinematicShotTrack"), &Z_Registration_Info_UClass_UMovieSceneCinematicShotTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCinematicShotTrack), 3447861231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_3408636521(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneCinematicShotTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
