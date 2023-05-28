// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Systems/MovieSceneDataLayerSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDataLayerSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDataLayerSystem::StaticRegisterNativesUMovieSceneDataLayerSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDataLayerSystem);
	UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem_NoRegister()
	{
		return UMovieSceneDataLayerSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that applies all data layer changes to the world\n */" },
		{ "IncludePath", "Systems/MovieSceneDataLayerSystem.h" },
		{ "ModuleRelativePath", "Private/Systems/MovieSceneDataLayerSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that applies all data layer changes to the world" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDataLayerSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::ClassParams = {
		&UMovieSceneDataLayerSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDataLayerSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneDataLayerSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDataLayerSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDataLayerSystem>()
	{
		return UMovieSceneDataLayerSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDataLayerSystem);
	UMovieSceneDataLayerSystem::~UMovieSceneDataLayerSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDataLayerSystem, UMovieSceneDataLayerSystem::StaticClass, TEXT("UMovieSceneDataLayerSystem"), &Z_Registration_Info_UClass_UMovieSceneDataLayerSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDataLayerSystem), 779012215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_1496152523(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneDataLayerSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
