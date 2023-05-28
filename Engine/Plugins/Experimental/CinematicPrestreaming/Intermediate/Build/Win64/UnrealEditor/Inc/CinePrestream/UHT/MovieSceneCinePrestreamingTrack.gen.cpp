// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneCinePrestreamingTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinePrestreamingTrack() {}
// Cross Module References
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrack();
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CinematicPrestreaming();
// End Cross Module References
	void UMovieSceneCinePrestreamingTrack::StaticRegisterNativesUMovieSceneCinePrestreamingTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCinePrestreamingTrack);
	UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_NoRegister()
	{
		return UMovieSceneCinePrestreamingTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreaming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A track that controls playback of streaming triggers for some rendering systems.\n * This is to ensure that data is available before use where by default for systems like\n * virtual texture and nanite streaming is driven by what is already visible on screen.\n */" },
		{ "IncludePath", "Tracks/MovieSceneCinePrestreamingTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCinePrestreamingTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track that controls playback of streaming triggers for some rendering systems.\nThis is to ensure that data is available before use where by default for systems like\nvirtual texture and nanite streaming is driven by what is already visible on screen." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneCinePrestreamingTrack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinePrestreamingTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinePrestreamingTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::ClassParams = {
		&UMovieSceneCinePrestreamingTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneCinePrestreamingTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrack.OuterSingleton;
	}
	template<> CINEMATICPRESTREAMING_API UClass* StaticClass<UMovieSceneCinePrestreamingTrack>()
	{
		return UMovieSceneCinePrestreamingTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinePrestreamingTrack);
	UMovieSceneCinePrestreamingTrack::~UMovieSceneCinePrestreamingTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Tracks_MovieSceneCinePrestreamingTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Tracks_MovieSceneCinePrestreamingTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCinePrestreamingTrack, UMovieSceneCinePrestreamingTrack::StaticClass, TEXT("UMovieSceneCinePrestreamingTrack"), &Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCinePrestreamingTrack), 1679913621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Tracks_MovieSceneCinePrestreamingTrack_h_3544193481(TEXT("/Script/CinematicPrestreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Tracks_MovieSceneCinePrestreamingTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Public_Tracks_MovieSceneCinePrestreamingTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
