// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneBaseValueEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBaseValueEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneBaseValueEvaluatorSystem::StaticRegisterNativesUMovieSceneBaseValueEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBaseValueEvaluatorSystem);
	UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_NoRegister()
	{
		return UMovieSceneBaseValueEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that is responsible for evaluating base values, for \"additive from base\" blending.\n */" },
		{ "IncludePath", "Systems/MovieSceneBaseValueEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneBaseValueEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that is responsible for evaluating base values, for \"additive from base\" blending." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBaseValueEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::ClassParams = {
		&UMovieSceneBaseValueEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneBaseValueEvaluatorSystem>()
	{
		return UMovieSceneBaseValueEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBaseValueEvaluatorSystem);
	UMovieSceneBaseValueEvaluatorSystem::~UMovieSceneBaseValueEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBaseValueEvaluatorSystem, UMovieSceneBaseValueEvaluatorSystem::StaticClass, TEXT("UMovieSceneBaseValueEvaluatorSystem"), &Z_Registration_Info_UClass_UMovieSceneBaseValueEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBaseValueEvaluatorSystem), 2028502518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_2687741795(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneBaseValueEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
