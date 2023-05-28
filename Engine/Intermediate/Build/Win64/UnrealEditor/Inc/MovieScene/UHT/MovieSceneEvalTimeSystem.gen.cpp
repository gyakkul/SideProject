// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneEvalTimeSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEvalTimeSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvalTimeSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneEvalTimeSystem::StaticRegisterNativesUMovieSceneEvalTimeSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEvalTimeSystem);
	UClass* Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister()
	{
		return UMovieSceneEvalTimeSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneEvalTimeSystem.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEvalTimeSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEvalTimeSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::ClassParams = {
		&UMovieSceneEvalTimeSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEvalTimeSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneEvalTimeSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEvalTimeSystem>()
	{
		return UMovieSceneEvalTimeSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEvalTimeSystem);
	UMovieSceneEvalTimeSystem::~UMovieSceneEvalTimeSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEvalTimeSystem, UMovieSceneEvalTimeSystem::StaticClass, TEXT("UMovieSceneEvalTimeSystem"), &Z_Registration_Info_UClass_UMovieSceneEvalTimeSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEvalTimeSystem), 4209628014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_2834275406(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEvalTimeSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
