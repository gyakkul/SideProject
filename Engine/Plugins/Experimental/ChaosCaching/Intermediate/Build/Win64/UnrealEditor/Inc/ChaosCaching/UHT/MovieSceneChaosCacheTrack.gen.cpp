// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Sequencer/MovieSceneChaosCacheTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChaosCacheTrack() {}
// Cross Module References
	CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrack();
	CHAOSCACHING_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosCaching();
// End Cross Module References
	void UMovieSceneChaosCacheTrack::StaticRegisterNativesUMovieSceneChaosCacheTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneChaosCacheTrack);
	UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrack_NoRegister()
	{
		return UMovieSceneChaosCacheTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics
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
	UObject* (*const Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCaching,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of ChaosCache\n */" },
		{ "IncludePath", "Chaos/Sequencer/MovieSceneChaosCacheTrack.h" },
		{ "ModuleRelativePath", "Public/Chaos/Sequencer/MovieSceneChaosCacheTrack.h" },
		{ "ToolTip", "Handles animation of ChaosCache" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::NewProp_AnimationSections_Inner = { "AnimationSections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::NewProp_AnimationSections_MetaData[] = {
		{ "Comment", "/** List of all animation sections */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Chaos/Sequencer/MovieSceneChaosCacheTrack.h" },
		{ "ToolTip", "List of all animation sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::NewProp_AnimationSections = { "AnimationSections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneChaosCacheTrack, AnimationSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::NewProp_AnimationSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::NewProp_AnimationSections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::NewProp_AnimationSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::NewProp_AnimationSections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneChaosCacheTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneChaosCacheTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::ClassParams = {
		&UMovieSceneChaosCacheTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneChaosCacheTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack.OuterSingleton;
	}
	template<> CHAOSCACHING_API UClass* StaticClass<UMovieSceneChaosCacheTrack>()
	{
		return UMovieSceneChaosCacheTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneChaosCacheTrack);
	UMovieSceneChaosCacheTrack::~UMovieSceneChaosCacheTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneChaosCacheTrack, UMovieSceneChaosCacheTrack::StaticClass, TEXT("UMovieSceneChaosCacheTrack"), &Z_Registration_Info_UClass_UMovieSceneChaosCacheTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneChaosCacheTrack), 2446850279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_2056019877(TEXT("/Script/ChaosCaching"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_Sequencer_MovieSceneChaosCacheTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
