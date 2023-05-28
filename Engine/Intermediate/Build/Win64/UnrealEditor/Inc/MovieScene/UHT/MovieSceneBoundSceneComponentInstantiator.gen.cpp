// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneBoundSceneComponentInstantiator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBoundSceneComponentInstantiator() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneBoundSceneComponentInstantiator::StaticRegisterNativesUMovieSceneBoundSceneComponentInstantiator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBoundSceneComponentInstantiator);
	UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_NoRegister()
	{
		return UMovieSceneBoundSceneComponentInstantiator::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneBoundSceneComponentInstantiator.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneBoundSceneComponentInstantiator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBoundSceneComponentInstantiator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::ClassParams = {
		&UMovieSceneBoundSceneComponentInstantiator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton, Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBoundSceneComponentInstantiator>()
	{
		return UMovieSceneBoundSceneComponentInstantiator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBoundSceneComponentInstantiator);
	UMovieSceneBoundSceneComponentInstantiator::~UMovieSceneBoundSceneComponentInstantiator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBoundSceneComponentInstantiator, UMovieSceneBoundSceneComponentInstantiator::StaticClass, TEXT("UMovieSceneBoundSceneComponentInstantiator"), &Z_Registration_Info_UClass_UMovieSceneBoundSceneComponentInstantiator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBoundSceneComponentInstantiator), 3659156685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_2603551135(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneBoundSceneComponentInstantiator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
