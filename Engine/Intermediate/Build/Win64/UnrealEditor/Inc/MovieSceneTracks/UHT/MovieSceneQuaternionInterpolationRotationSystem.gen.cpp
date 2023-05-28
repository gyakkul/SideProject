// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneQuaternionInterpolationRotationSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneQuaternionInterpolationRotationSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneQuaternionInterpolationRotationSystem::StaticRegisterNativesUMovieSceneQuaternionInterpolationRotationSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneQuaternionInterpolationRotationSystem);
	UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_NoRegister()
	{
		return UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MovieSceneQuaternionInterpolationRotationSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneQuaternionInterpolationRotationSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneQuaternionInterpolationRotationSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::ClassParams = {
		&UMovieSceneQuaternionInterpolationRotationSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneQuaternionInterpolationRotationSystem>()
	{
		return UMovieSceneQuaternionInterpolationRotationSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneQuaternionInterpolationRotationSystem);
	UMovieSceneQuaternionInterpolationRotationSystem::~UMovieSceneQuaternionInterpolationRotationSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneQuaternionInterpolationRotationSystem, UMovieSceneQuaternionInterpolationRotationSystem::StaticClass, TEXT("UMovieSceneQuaternionInterpolationRotationSystem"), &Z_Registration_Info_UClass_UMovieSceneQuaternionInterpolationRotationSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneQuaternionInterpolationRotationSystem), 1287634196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_1547452564(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneQuaternionInterpolationRotationSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
