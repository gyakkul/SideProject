// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneDoubleTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoubleTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoubleTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDoubleTrack::StaticRegisterNativesUMovieSceneDoubleTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoubleTrack);
	UClass* Z_Construct_UClass_UMovieSceneDoubleTrack_NoRegister()
	{
		return UMovieSceneDoubleTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDoubleTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of double properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneDoubleTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneDoubleTrack.h" },
		{ "ToolTip", "Handles manipulation of double properties in a movie scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoubleTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::ClassParams = {
		&UMovieSceneDoubleTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDoubleTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneDoubleTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDoubleTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoubleTrack>()
	{
		return UMovieSceneDoubleTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoubleTrack);
	UMovieSceneDoubleTrack::~UMovieSceneDoubleTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDoubleTrack, UMovieSceneDoubleTrack::StaticClass, TEXT("UMovieSceneDoubleTrack"), &Z_Registration_Info_UClass_UMovieSceneDoubleTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoubleTrack), 4211559459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_993085608(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDoubleTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
