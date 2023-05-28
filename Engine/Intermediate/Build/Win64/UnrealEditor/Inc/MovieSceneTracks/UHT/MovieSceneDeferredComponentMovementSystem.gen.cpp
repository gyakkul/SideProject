// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneDeferredComponentMovementSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDeferredComponentMovementSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDeferredComponentMovementSystem::StaticRegisterNativesUMovieSceneDeferredComponentMovementSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDeferredComponentMovementSystem);
	UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister()
	{
		return UMovieSceneDeferredComponentMovementSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that maintains a FScopedMovementUpdate for any USceneComponent that has an\n * animated transform or attachment for the duration of the evaluation to avoid repeatedly\n * updating child transforms and/or overlaps.\n * \n * This system can be enabled/disabled using the cvar Sequencer.DeferMovementUpdates (is disabled by default)\n * Output logging options are controlled by Sequencer.OutputDeferredMovementMode which is useful for tracking\n * how many components are being moved in any given frame.\n *\n * This system runs in the Initialization and Evaluaion phases:\n *     Initialization: Gathers and initializes deferred movement for any AttachParent components that need (un)link\n *     Evaluation: Gathers and initializes deferred movement for any Component Transforms; queues up an event trigger to be executed at the end of the phase\n *     Finalization: Applys all pending movement updates in reverse order\n */" },
		{ "IncludePath", "Systems/MovieSceneDeferredComponentMovementSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneDeferredComponentMovementSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that maintains a FScopedMovementUpdate for any USceneComponent that has an\nanimated transform or attachment for the duration of the evaluation to avoid repeatedly\nupdating child transforms and/or overlaps.\n\nThis system can be enabled/disabled using the cvar Sequencer.DeferMovementUpdates (is disabled by default)\nOutput logging options are controlled by Sequencer.OutputDeferredMovementMode which is useful for tracking\nhow many components are being moved in any given frame.\n\nThis system runs in the Initialization and Evaluaion phases:\n    Initialization: Gathers and initializes deferred movement for any AttachParent components that need (un)link\n    Evaluation: Gathers and initializes deferred movement for any Component Transforms; queues up an event trigger to be executed at the end of the phase\n    Finalization: Applys all pending movement updates in reverse order" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDeferredComponentMovementSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::ClassParams = {
		&UMovieSceneDeferredComponentMovementSystem::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDeferredComponentMovementSystem>()
	{
		return UMovieSceneDeferredComponentMovementSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDeferredComponentMovementSystem);
	UMovieSceneDeferredComponentMovementSystem::~UMovieSceneDeferredComponentMovementSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem, UMovieSceneDeferredComponentMovementSystem::StaticClass, TEXT("UMovieSceneDeferredComponentMovementSystem"), &Z_Registration_Info_UClass_UMovieSceneDeferredComponentMovementSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDeferredComponentMovementSystem), 650157931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_3177103821(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDeferredComponentMovementSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
