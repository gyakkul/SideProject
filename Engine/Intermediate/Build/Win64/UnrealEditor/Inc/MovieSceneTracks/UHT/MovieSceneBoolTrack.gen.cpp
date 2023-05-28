// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneBoolTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoolTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBoolTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneBoolTrack::StaticRegisterNativesUMovieSceneBoolTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoolTrack);
	UClass* Z_Construct_UClass_UMovieSceneBoolTrack_NoRegister()
	{
		return UMovieSceneBoolTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBoolTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBoolTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoolTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of float properties in a movie scene\n */" },
		{ "IncludePath", "Tracks/MovieSceneBoolTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneBoolTrack.h" },
		{ "ToolTip", "Handles manipulation of float properties in a movie scene" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneBoolTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneBoolTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBoolTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoolTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoolTrack_Statics::ClassParams = {
		&UMovieSceneBoolTrack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoolTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoolTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBoolTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneBoolTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBoolTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBoolTrack>()
	{
		return UMovieSceneBoolTrack::StaticClass();
	}
	UMovieSceneBoolTrack::UMovieSceneBoolTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoolTrack);
	UMovieSceneBoolTrack::~UMovieSceneBoolTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoolTrack, UMovieSceneBoolTrack::StaticClass, TEXT("UMovieSceneBoolTrack"), &Z_Registration_Info_UClass_UMovieSceneBoolTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoolTrack), 21003751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_2547037587(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneBoolTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
