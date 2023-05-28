// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneMotionVectorSimulationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMotionVectorSimulationSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneMotionVectorSimulationSystem::StaticRegisterNativesUMovieSceneMotionVectorSimulationSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMotionVectorSimulationSystem);
	UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister()
	{
		return UMovieSceneMotionVectorSimulationSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "Systems/MovieSceneMotionVectorSimulationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMotionVectorSimulationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMotionVectorSimulationSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::ClassParams = {
		&UMovieSceneMotionVectorSimulationSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMotionVectorSimulationSystem>()
	{
		return UMovieSceneMotionVectorSimulationSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMotionVectorSimulationSystem);
	UMovieSceneMotionVectorSimulationSystem::~UMovieSceneMotionVectorSimulationSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem, UMovieSceneMotionVectorSimulationSystem::StaticClass, TEXT("UMovieSceneMotionVectorSimulationSystem"), &Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMotionVectorSimulationSystem), 2016967699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_187572608(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMotionVectorSimulationSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
