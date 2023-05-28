// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneRootInstantiatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneRootInstantiatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRootInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneRootInstantiatorSystem::StaticRegisterNativesUMovieSceneRootInstantiatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneRootInstantiatorSystem);
	UClass* Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_NoRegister()
	{
		return UMovieSceneRootInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneRootInstantiatorSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneRootInstantiatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneRootInstantiatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::ClassParams = {
		&UMovieSceneRootInstantiatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneRootInstantiatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneRootInstantiatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneRootInstantiatorSystem>()
	{
		return UMovieSceneRootInstantiatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneRootInstantiatorSystem);
	UMovieSceneRootInstantiatorSystem::~UMovieSceneRootInstantiatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneRootInstantiatorSystem, UMovieSceneRootInstantiatorSystem::StaticClass, TEXT("UMovieSceneRootInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneRootInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneRootInstantiatorSystem), 3242255643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_3978933548(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneRootInstantiatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
