// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneBytePropertySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBytePropertySystem() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBytePropertySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBytePropertySystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertySystem();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneBytePropertySystem::StaticRegisterNativesUMovieSceneBytePropertySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBytePropertySystem);
	UClass* Z_Construct_UClass_UMovieSceneBytePropertySystem_NoRegister()
	{
		return UMovieSceneBytePropertySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneBytePropertySystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneBytePropertySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBytePropertySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics::ClassParams = {
		&UMovieSceneBytePropertySystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBytePropertySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBytePropertySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBytePropertySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneBytePropertySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBytePropertySystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBytePropertySystem>()
	{
		return UMovieSceneBytePropertySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBytePropertySystem);
	UMovieSceneBytePropertySystem::~UMovieSceneBytePropertySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBytePropertySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBytePropertySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBytePropertySystem, UMovieSceneBytePropertySystem::StaticClass, TEXT("UMovieSceneBytePropertySystem"), &Z_Registration_Info_UClass_UMovieSceneBytePropertySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBytePropertySystem), 2305758752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBytePropertySystem_h_3196652573(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBytePropertySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBytePropertySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
