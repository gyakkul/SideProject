// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneEulerTransformTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEulerTransformTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneEulerTransformTrack::StaticRegisterNativesUMovieSceneEulerTransformTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEulerTransformTrack);
	UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack_NoRegister()
	{
		return UMovieSceneEulerTransformTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of 3D euler transform properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneEulerTransformTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEulerTransformTrack.h" },
		{ "ToolTip", "Handles manipulation of 3D euler transform properties in a movie scene" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEulerTransformTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::ClassParams = {
		&UMovieSceneEulerTransformTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEulerTransformTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneEulerTransformTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEulerTransformTrack>()
	{
		return UMovieSceneEulerTransformTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEulerTransformTrack);
	UMovieSceneEulerTransformTrack::~UMovieSceneEulerTransformTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEulerTransformTrack, UMovieSceneEulerTransformTrack::StaticClass, TEXT("UMovieSceneEulerTransformTrack"), &Z_Registration_Info_UClass_UMovieSceneEulerTransformTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEulerTransformTrack), 859380343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_1419166358(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEulerTransformTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
