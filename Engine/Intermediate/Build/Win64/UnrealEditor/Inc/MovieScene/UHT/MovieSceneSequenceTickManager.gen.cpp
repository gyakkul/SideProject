// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneSequenceTickManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSequenceTickManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneSequenceTickManager::StaticRegisterNativesUMovieSceneSequenceTickManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSequenceTickManager);
	UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager_NoRegister()
	{
		return UMovieSceneSequenceTickManager::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Global (one per-UWorld) manager object that manages ticking and updating any and all Sequencer-based\n * evaluations for the current frame, before any other actors are ticked.\n *\n * Ticking clients are registered based on their desired tick interval, and grouped together with other\n * clients that tick with the same interval (based on Sequencer.TickIntervalGroupingResolutionMs).\n * \n * Sequencer data is shared between all instances within the same group, allowing them to blend together.\n * Clients ticking at different intervals do not support blending with each other.\n */" },
		{ "IncludePath", "MovieSceneSequenceTickManager.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSequenceTickManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Global (one per-UWorld) manager object that manages ticking and updating any and all Sequencer-based\nevaluations for the current frame, before any other actors are ticked.\n\nTicking clients are registered based on their desired tick interval, and grouped together with other\nclients that tick with the same interval (based on Sequencer.TickIntervalGroupingResolutionMs).\n\nSequencer data is shared between all instances within the same group, allowing them to blend together.\nClients ticking at different intervals do not support blending with each other." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSequenceTickManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::ClassParams = {
		&UMovieSceneSequenceTickManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSequenceTickManager()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton, Z_Construct_UClass_UMovieSceneSequenceTickManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSequenceTickManager.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSequenceTickManager>()
	{
		return UMovieSceneSequenceTickManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSequenceTickManager);
	UMovieSceneSequenceTickManager::~UMovieSceneSequenceTickManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSequenceTickManager, UMovieSceneSequenceTickManager::StaticClass, TEXT("UMovieSceneSequenceTickManager"), &Z_Registration_Info_UClass_UMovieSceneSequenceTickManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSequenceTickManager), 3876720554U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_125978693(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSequenceTickManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
