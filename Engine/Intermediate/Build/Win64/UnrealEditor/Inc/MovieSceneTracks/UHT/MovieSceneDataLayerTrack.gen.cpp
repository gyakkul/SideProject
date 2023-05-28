// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneDataLayerTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDataLayerTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDataLayerTrack::StaticRegisterNativesUMovieSceneDataLayerTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDataLayerTrack);
	UClass* Z_Construct_UClass_UMovieSceneDataLayerTrack_NoRegister()
	{
		return UMovieSceneDataLayerTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A track that controls loading, unloading and visibility of data layers\n */" },
		{ "IncludePath", "Tracks/MovieSceneDataLayerTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneDataLayerTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A track that controls loading, unloading and visibility of data layers" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneDataLayerTrack.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDataLayerTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::NewProp_Sections,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDataLayerTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::ClassParams = {
		&UMovieSceneDataLayerTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::PropPointers),
		0,
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDataLayerTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneDataLayerTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDataLayerTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDataLayerTrack>()
	{
		return UMovieSceneDataLayerTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDataLayerTrack);
	UMovieSceneDataLayerTrack::~UMovieSceneDataLayerTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDataLayerTrack, UMovieSceneDataLayerTrack::StaticClass, TEXT("UMovieSceneDataLayerTrack"), &Z_Registration_Info_UClass_UMovieSceneDataLayerTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDataLayerTrack), 186363401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h_1873547541(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneDataLayerTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
