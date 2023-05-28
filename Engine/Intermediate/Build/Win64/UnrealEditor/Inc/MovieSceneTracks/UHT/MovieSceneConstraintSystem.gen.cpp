// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneConstraintSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneConstraintSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstraintSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstraintSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneConstraintSystem::StaticRegisterNativesUMovieSceneConstraintSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneConstraintSystem);
	UClass* Z_Construct_UClass_UMovieSceneConstraintSystem_NoRegister()
	{
		return UMovieSceneConstraintSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneConstraintSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for propagating constraints to a bound object's FConstraintsManagerController.\n */" },
		{ "IncludePath", "Systems/MovieSceneConstraintSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneConstraintSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for propagating constraints to a bound object's FConstraintsManagerController." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneConstraintSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::ClassParams = {
		&UMovieSceneConstraintSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneConstraintSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneConstraintSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneConstraintSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneConstraintSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneConstraintSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneConstraintSystem>()
	{
		return UMovieSceneConstraintSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneConstraintSystem);
	UMovieSceneConstraintSystem::~UMovieSceneConstraintSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneConstraintSystem, UMovieSceneConstraintSystem::StaticClass, TEXT("UMovieSceneConstraintSystem"), &Z_Registration_Info_UClass_UMovieSceneConstraintSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneConstraintSystem), 571794525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_2524701030(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneConstraintSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
