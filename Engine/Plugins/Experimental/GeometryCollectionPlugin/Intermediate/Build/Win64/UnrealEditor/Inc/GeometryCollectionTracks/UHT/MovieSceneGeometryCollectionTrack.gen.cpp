// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneGeometryCollectionTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCollectionTrack() {}
// Cross Module References
	GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionTrack();
	GEOMETRYCOLLECTIONTRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionTracks();
// End Cross Module References
	void UMovieSceneGeometryCollectionTrack::StaticRegisterNativesUMovieSceneGeometryCollectionTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGeometryCollectionTrack);
	UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_NoRegister()
	{
		return UMovieSceneGeometryCollectionTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationSections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneGeometryCollectionTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTrack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneGeometryCollectionTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGeometryCollectionTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::NewProp_AnimationSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::NewProp_AnimationSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::NewProp_AnimationSections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneGeometryCollectionTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGeometryCollectionTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::ClassParams = {
		&UMovieSceneGeometryCollectionTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGeometryCollectionTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneGeometryCollectionTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONTRACKS_API UClass* StaticClass<UMovieSceneGeometryCollectionTrack>()
	{
		return UMovieSceneGeometryCollectionTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGeometryCollectionTrack);
	UMovieSceneGeometryCollectionTrack::~UMovieSceneGeometryCollectionTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGeometryCollectionTrack, UMovieSceneGeometryCollectionTrack::StaticClass, TEXT("UMovieSceneGeometryCollectionTrack"), &Z_Registration_Info_UClass_UMovieSceneGeometryCollectionTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGeometryCollectionTrack), 876878307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_258454065(TEXT("/Script/GeometryCollectionTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionTracks_Public_MovieSceneGeometryCollectionTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
