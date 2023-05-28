// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneFadeTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFadeTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFadeTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneFadeTrack::StaticRegisterNativesUMovieSceneFadeTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFadeTrack);
	UClass* Z_Construct_UClass_UMovieSceneFadeTrack_NoRegister()
	{
		return UMovieSceneFadeTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFadeTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFadeTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneFloatTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFadeTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track that controls a fade.\n */" },
		{ "IncludePath", "Tracks/MovieSceneFadeTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneFadeTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene track that controls a fade." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFadeTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFadeTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFadeTrack_Statics::ClassParams = {
		&UMovieSceneFadeTrack::StaticClass,
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
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFadeTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFadeTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFadeTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneFadeTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFadeTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneFadeTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneFadeTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFadeTrack>()
	{
		return UMovieSceneFadeTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFadeTrack);
	UMovieSceneFadeTrack::~UMovieSceneFadeTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFadeTrack, UMovieSceneFadeTrack::StaticClass, TEXT("UMovieSceneFadeTrack"), &Z_Registration_Info_UClass_UMovieSceneFadeTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFadeTrack), 2023248643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_3231052509(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneFadeTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
