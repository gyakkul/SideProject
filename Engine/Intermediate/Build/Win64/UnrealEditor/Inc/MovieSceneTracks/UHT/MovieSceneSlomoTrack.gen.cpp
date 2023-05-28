// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneSlomoTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSlomoTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneSlomoTrack::StaticRegisterNativesUMovieSceneSlomoTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSlomoTrack);
	UClass* Z_Construct_UClass_UMovieSceneSlomoTrack_NoRegister()
	{
		return UMovieSceneSlomoTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSlomoTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneFloatTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track that controls a movie scene's world time dilation.\n */" },
		{ "IncludePath", "Tracks/MovieSceneSlomoTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneSlomoTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implements a movie scene track that controls a movie scene's world time dilation." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneSlomoTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSlomoTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::ClassParams = {
		&UMovieSceneSlomoTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSlomoTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneSlomoTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSlomoTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneSlomoTrack>()
	{
		return UMovieSceneSlomoTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSlomoTrack);
	UMovieSceneSlomoTrack::~UMovieSceneSlomoTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSlomoTrack, UMovieSceneSlomoTrack::StaticClass, TEXT("UMovieSceneSlomoTrack"), &Z_Registration_Info_UClass_UMovieSceneSlomoTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSlomoTrack), 3792084523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_3555914890(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneSlomoTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
