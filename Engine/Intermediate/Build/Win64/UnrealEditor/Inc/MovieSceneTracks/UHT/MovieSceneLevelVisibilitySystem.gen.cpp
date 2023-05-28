// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Systems/MovieSceneLevelVisibilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLevelVisibilitySystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneLevelVisibilitySystem::StaticRegisterNativesUMovieSceneLevelVisibilitySystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLevelVisibilitySystem);
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_NoRegister()
	{
		return UMovieSceneLevelVisibilitySystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneLevelVisibilitySystem.h" },
		{ "ModuleRelativePath", "Private/Systems/MovieSceneLevelVisibilitySystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneLevelVisibilitySystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1390211309
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLevelVisibilitySystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::ClassParams = {
		&UMovieSceneLevelVisibilitySystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.OuterSingleton, Z_Construct_UClass_UMovieSceneLevelVisibilitySystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneLevelVisibilitySystem>()
	{
		return UMovieSceneLevelVisibilitySystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLevelVisibilitySystem);
	UMovieSceneLevelVisibilitySystem::~UMovieSceneLevelVisibilitySystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLevelVisibilitySystem, UMovieSceneLevelVisibilitySystem::StaticClass, TEXT("UMovieSceneLevelVisibilitySystem"), &Z_Registration_Info_UClass_UMovieSceneLevelVisibilitySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLevelVisibilitySystem), 3908123089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_3958787888(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Private_Systems_MovieSceneLevelVisibilitySystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
