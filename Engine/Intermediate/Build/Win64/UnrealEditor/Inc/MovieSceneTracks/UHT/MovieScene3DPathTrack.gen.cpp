// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieScene3DPathTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DPathTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScene3DPathTrack::StaticRegisterNativesUMovieScene3DPathTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DPathTrack);
	UClass* Z_Construct_UClass_UMovieScene3DPathTrack_NoRegister()
	{
		return UMovieScene3DPathTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DPathTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DPathTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of path tracks in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieScene3DPathTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieScene3DPathTrack.h" },
		{ "ToolTip", "Handles manipulation of path tracks in a movie scene" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene3DPathTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DPathTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DPathTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DPathTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DPathTrack_Statics::ClassParams = {
		&UMovieScene3DPathTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DPathTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DPathTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton, Z_Construct_UClass_UMovieScene3DPathTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DPathTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DPathTrack>()
	{
		return UMovieScene3DPathTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DPathTrack);
	UMovieScene3DPathTrack::~UMovieScene3DPathTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DPathTrack, UMovieScene3DPathTrack::StaticClass, TEXT("UMovieScene3DPathTrack"), &Z_Registration_Info_UClass_UMovieScene3DPathTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DPathTrack), 2219963835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_2082207587(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieScene3DPathTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
