// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneActorReferenceTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneActorReferenceTrack::StaticRegisterNativesUMovieSceneActorReferenceTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneActorReferenceTrack);
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack_NoRegister()
	{
		return UMovieSceneActorReferenceTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of actor reference properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneActorReferenceTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneActorReferenceTrack.h" },
		{ "ToolTip", "Handles manipulation of actor reference properties in a movie scene" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneActorReferenceTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneActorReferenceTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::ClassParams = {
		&UMovieSceneActorReferenceTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneActorReferenceTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneActorReferenceTrack>()
	{
		return UMovieSceneActorReferenceTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneActorReferenceTrack);
	UMovieSceneActorReferenceTrack::~UMovieSceneActorReferenceTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneActorReferenceTrack, UMovieSceneActorReferenceTrack::StaticClass, TEXT("UMovieSceneActorReferenceTrack"), &Z_Registration_Info_UClass_UMovieSceneActorReferenceTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneActorReferenceTrack), 968867204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_2847454803(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneActorReferenceTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
