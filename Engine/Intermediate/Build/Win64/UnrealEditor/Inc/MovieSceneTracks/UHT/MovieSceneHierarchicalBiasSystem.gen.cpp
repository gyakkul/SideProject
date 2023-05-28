// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneHierarchicalBiasSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneHierarchicalBiasSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneHierarchicalBiasSystem::StaticRegisterNativesUMovieSceneHierarchicalBiasSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneHierarchicalBiasSystem);
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_NoRegister()
	{
		return UMovieSceneHierarchicalBiasSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneHierarchicalBiasSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneHierarchicalBiasSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHierarchicalBiasSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::ClassParams = {
		&UMovieSceneHierarchicalBiasSystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneHierarchicalBiasSystem>()
	{
		return UMovieSceneHierarchicalBiasSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHierarchicalBiasSystem);
	UMovieSceneHierarchicalBiasSystem::~UMovieSceneHierarchicalBiasSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneHierarchicalBiasSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneHierarchicalBiasSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneHierarchicalBiasSystem, UMovieSceneHierarchicalBiasSystem::StaticClass, TEXT("UMovieSceneHierarchicalBiasSystem"), &Z_Registration_Info_UClass_UMovieSceneHierarchicalBiasSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneHierarchicalBiasSystem), 112107242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneHierarchicalBiasSystem_h_3755670846(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneHierarchicalBiasSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneHierarchicalBiasSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
