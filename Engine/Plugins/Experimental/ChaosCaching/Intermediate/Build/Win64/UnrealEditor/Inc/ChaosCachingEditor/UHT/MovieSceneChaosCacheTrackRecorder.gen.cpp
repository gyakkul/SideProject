// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneChaosCacheTrackRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneChaosCacheTrackRecorder() {}
// Cross Module References
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder();
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_NoRegister();
	TAKETRACKRECORDERS_API UClass* Z_Construct_UClass_UMovieSceneTrackRecorder();
	UPackage* Z_Construct_UPackage__Script_ChaosCachingEditor();
// End Cross Module References
	void UMovieSceneChaosCacheTrackRecorder::StaticRegisterNativesUMovieSceneChaosCacheTrackRecorder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneChaosCacheTrackRecorder);
	UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_NoRegister()
	{
		return UMovieSceneChaosCacheTrackRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackRecorder,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCachingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Track recorder implementation for the chaos cache\n*/" },
		{ "IncludePath", "Sequencer/MovieSceneChaosCacheTrackRecorder.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneChaosCacheTrackRecorder.h" },
		{ "ToolTip", "Track recorder implementation for the chaos cache" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneChaosCacheTrackRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics::ClassParams = {
		&UMovieSceneChaosCacheTrackRecorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneChaosCacheTrackRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneChaosCacheTrackRecorder.OuterSingleton, Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneChaosCacheTrackRecorder.OuterSingleton;
	}
	template<> CHAOSCACHINGEDITOR_API UClass* StaticClass<UMovieSceneChaosCacheTrackRecorder>()
	{
		return UMovieSceneChaosCacheTrackRecorder::StaticClass();
	}
	UMovieSceneChaosCacheTrackRecorder::UMovieSceneChaosCacheTrackRecorder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneChaosCacheTrackRecorder);
	UMovieSceneChaosCacheTrackRecorder::~UMovieSceneChaosCacheTrackRecorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_MovieSceneChaosCacheTrackRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_MovieSceneChaosCacheTrackRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder, UMovieSceneChaosCacheTrackRecorder::StaticClass, TEXT("UMovieSceneChaosCacheTrackRecorder"), &Z_Registration_Info_UClass_UMovieSceneChaosCacheTrackRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneChaosCacheTrackRecorder), 1216725543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_MovieSceneChaosCacheTrackRecorder_h_890137368(TEXT("/Script/ChaosCachingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_MovieSceneChaosCacheTrackRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_MovieSceneChaosCacheTrackRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
