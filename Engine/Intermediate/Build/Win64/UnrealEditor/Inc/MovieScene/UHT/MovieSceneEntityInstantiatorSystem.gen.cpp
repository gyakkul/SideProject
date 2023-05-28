// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneEntityInstantiatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntityInstantiatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneEntityInstantiatorSystem::StaticRegisterNativesUMovieSceneEntityInstantiatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEntityInstantiatorSystem);
	UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_NoRegister()
	{
		return UMovieSceneEntityInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneEntityInstantiatorSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntityInstantiatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEntityInstantiatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::ClassParams = {
		&UMovieSceneEntityInstantiatorSystem::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEntityInstantiatorSystem>()
	{
		return UMovieSceneEntityInstantiatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEntityInstantiatorSystem);
	UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem, UMovieSceneEntityInstantiatorSystem::StaticClass, TEXT("UMovieSceneEntityInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneEntityInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEntityInstantiatorSystem), 1969368986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_2814902689(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntityInstantiatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
