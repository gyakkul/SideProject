// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneGeometryCacheTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGeometryCacheTrack() {}
// Cross Module References
	GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheTrack();
	GEOMETRYCACHETRACKS_API UClass* Z_Construct_UClass_UMovieSceneGeometryCacheTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCacheTracks();
// End Cross Module References
	void UMovieSceneGeometryCacheTrack::StaticRegisterNativesUMovieSceneGeometryCacheTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGeometryCacheTrack);
	UClass* Z_Construct_UClass_UMovieSceneGeometryCacheTrack_NoRegister()
	{
		return UMovieSceneGeometryCacheTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCacheTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneGeometryCacheTrack.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheTrack.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MovieSceneGeometryCacheTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGeometryCacheTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::NewProp_AnimationSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::NewProp_AnimationSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::NewProp_AnimationSections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneGeometryCacheTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGeometryCacheTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::ClassParams = {
		&UMovieSceneGeometryCacheTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGeometryCacheTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneGeometryCacheTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack.OuterSingleton;
	}
	template<> GEOMETRYCACHETRACKS_API UClass* StaticClass<UMovieSceneGeometryCacheTrack>()
	{
		return UMovieSceneGeometryCacheTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGeometryCacheTrack);
	UMovieSceneGeometryCacheTrack::~UMovieSceneGeometryCacheTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGeometryCacheTrack, UMovieSceneGeometryCacheTrack::StaticClass, TEXT("UMovieSceneGeometryCacheTrack"), &Z_Registration_Info_UClass_UMovieSceneGeometryCacheTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGeometryCacheTrack), 274781698U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_3201804189(TEXT("/Script/GeometryCacheTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCacheTracks_Classes_MovieSceneGeometryCacheTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
