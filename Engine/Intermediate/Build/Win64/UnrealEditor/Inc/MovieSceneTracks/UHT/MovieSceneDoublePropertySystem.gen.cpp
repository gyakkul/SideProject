// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneDoublePropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDoublePropertySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneDoublePropertySystem::StaticRegisterNativesUMovieSceneDoublePropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDoublePropertySystem);
	UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem_NoRegister()
	{
		return UMovieSceneDoublePropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneDoublePropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneDoublePropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDoublePropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::ClassParams = {
		&UMovieSceneDoublePropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDoublePropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneDoublePropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneDoublePropertySystem>()
	{
		return UMovieSceneDoublePropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDoublePropertySystem);
	UMovieSceneDoublePropertySystem::~UMovieSceneDoublePropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDoublePropertySystem, UMovieSceneDoublePropertySystem::StaticClass, TEXT("UMovieSceneDoublePropertySystem"), &Z_Registration_Info_UClass_UMovieSceneDoublePropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDoublePropertySystem), 3298574880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_2095827717(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneDoublePropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
