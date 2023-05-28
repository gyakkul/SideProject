// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneIntegerTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneIntegerTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneIntegerTrack::StaticRegisterNativesUMovieSceneIntegerTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneIntegerTrack);
	UClass* Z_Construct_UClass_UMovieSceneIntegerTrack_NoRegister()
	{
		return UMovieSceneIntegerTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneIntegerTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of integer properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneIntegerTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneIntegerTrack.h" },
		{ "ToolTip", "Handles manipulation of integer properties in a movie scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneIntegerTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::ClassParams = {
		&UMovieSceneIntegerTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneIntegerTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneIntegerTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneIntegerTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneIntegerTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneIntegerTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneIntegerTrack>()
	{
		return UMovieSceneIntegerTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneIntegerTrack);
	UMovieSceneIntegerTrack::~UMovieSceneIntegerTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneIntegerTrack, UMovieSceneIntegerTrack::StaticClass, TEXT("UMovieSceneIntegerTrack"), &Z_Registration_Info_UClass_UMovieSceneIntegerTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneIntegerTrack), 11086244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_2648799500(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneIntegerTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
