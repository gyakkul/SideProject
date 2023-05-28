// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Evaluation/IMovieSceneEvaluationHook.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneEvaluationHook() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneEvaluationHook::StaticRegisterNativesUMovieSceneEvaluationHook()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEvaluationHook);
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHook_NoRegister()
	{
		return UMovieSceneEvaluationHook::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEvaluationHook_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Evaluation/IMovieSceneEvaluationHook.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneEvaluationHook>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::ClassParams = {
		&UMovieSceneEvaluationHook::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEvaluationHook()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton, Z_Construct_UClass_UMovieSceneEvaluationHook_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEvaluationHook.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEvaluationHook>()
	{
		return UMovieSceneEvaluationHook::StaticClass();
	}
	UMovieSceneEvaluationHook::UMovieSceneEvaluationHook(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEvaluationHook);
	UMovieSceneEvaluationHook::~UMovieSceneEvaluationHook() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEvaluationHook, UMovieSceneEvaluationHook::StaticClass, TEXT("UMovieSceneEvaluationHook"), &Z_Registration_Info_UClass_UMovieSceneEvaluationHook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEvaluationHook), 2166578473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_2575110355(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Evaluation_IMovieSceneEvaluationHook_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
