// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneTransformOriginSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTransformOriginSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneTransformOriginInstantiatorSystem::StaticRegisterNativesUMovieSceneTransformOriginInstantiatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTransformOriginInstantiatorSystem);
	UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_NoRegister()
	{
		return UMovieSceneTransformOriginInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneTransformOriginSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneTransformOriginSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTransformOriginInstantiatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::ClassParams = {
		&UMovieSceneTransformOriginInstantiatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformOriginInstantiatorSystem>()
	{
		return UMovieSceneTransformOriginInstantiatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOriginInstantiatorSystem);
	UMovieSceneTransformOriginInstantiatorSystem::~UMovieSceneTransformOriginInstantiatorSystem() {}
	void UMovieSceneTransformOriginSystem::StaticRegisterNativesUMovieSceneTransformOriginSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTransformOriginSystem);
	UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem_NoRegister()
	{
		return UMovieSceneTransformOriginSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneTransformOriginSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneTransformOriginSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTransformOriginSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::ClassParams = {
		&UMovieSceneTransformOriginSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTransformOriginSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneTransformOriginSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTransformOriginSystem>()
	{
		return UMovieSceneTransformOriginSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTransformOriginSystem);
	UMovieSceneTransformOriginSystem::~UMovieSceneTransformOriginSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTransformOriginInstantiatorSystem, UMovieSceneTransformOriginInstantiatorSystem::StaticClass, TEXT("UMovieSceneTransformOriginInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneTransformOriginInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTransformOriginInstantiatorSystem), 2474960850U) },
		{ Z_Construct_UClass_UMovieSceneTransformOriginSystem, UMovieSceneTransformOriginSystem::StaticClass, TEXT("UMovieSceneTransformOriginSystem"), &Z_Registration_Info_UClass_UMovieSceneTransformOriginSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTransformOriginSystem), 4263933533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_999327813(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneTransformOriginSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
