// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneComponentTransformSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneComponentTransformSystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneComponentTransformSystem::StaticRegisterNativesUMovieSceneComponentTransformSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneComponentTransformSystem);
	UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister()
	{
		return UMovieSceneComponentTransformSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneComponentTransformSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneComponentTransformSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentTransformSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::ClassParams = {
		&UMovieSceneComponentTransformSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentTransformSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneComponentTransformSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneComponentTransformSystem>()
	{
		return UMovieSceneComponentTransformSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentTransformSystem);
	UMovieSceneComponentTransformSystem::~UMovieSceneComponentTransformSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneComponentTransformSystem, UMovieSceneComponentTransformSystem::StaticClass, TEXT("UMovieSceneComponentTransformSystem"), &Z_Registration_Info_UClass_UMovieSceneComponentTransformSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneComponentTransformSystem), 3438212736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_2515624365(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneComponentTransformSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
