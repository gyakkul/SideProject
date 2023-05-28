// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneGroomCacheTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneGroomCacheTrack() {}
// Cross Module References
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void UMovieSceneGroomCacheTrack::StaticRegisterNativesUMovieSceneGroomCacheTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneGroomCacheTrack);
	UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack_NoRegister()
	{
		return UMovieSceneGroomCacheTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of GroomCache\n */" },
		{ "IncludePath", "MovieSceneGroomCacheTrack.h" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheTrack.h" },
		{ "ToolTip", "Handles animation of GroomCache" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneGroomCacheTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneGroomCacheTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::NewProp_AnimationSections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneGroomCacheTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneGroomCacheTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::ClassParams = {
		&UMovieSceneGroomCacheTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneGroomCacheTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneGroomCacheTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UMovieSceneGroomCacheTrack>()
	{
		return UMovieSceneGroomCacheTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneGroomCacheTrack);
	UMovieSceneGroomCacheTrack::~UMovieSceneGroomCacheTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneGroomCacheTrack, UMovieSceneGroomCacheTrack::StaticClass, TEXT("UMovieSceneGroomCacheTrack"), &Z_Registration_Info_UClass_UMovieSceneGroomCacheTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneGroomCacheTrack), 1176891457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_161933427(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_MovieSceneGroomCacheTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
