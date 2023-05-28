// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneDecompositionQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDecompositionQuery() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneValueDecomposer::StaticRegisterNativesUMovieSceneValueDecomposer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneValueDecomposer);
	UClass* Z_Construct_UClass_UMovieSceneValueDecomposer_NoRegister()
	{
		return UMovieSceneValueDecomposer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneValueDecomposer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneDecompositionQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneValueDecomposer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::ClassParams = {
		&UMovieSceneValueDecomposer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneValueDecomposer()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton, Z_Construct_UClass_UMovieSceneValueDecomposer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneValueDecomposer.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneValueDecomposer>()
	{
		return UMovieSceneValueDecomposer::StaticClass();
	}
	UMovieSceneValueDecomposer::UMovieSceneValueDecomposer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneValueDecomposer);
	UMovieSceneValueDecomposer::~UMovieSceneValueDecomposer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneValueDecomposer, UMovieSceneValueDecomposer::StaticClass, TEXT("UMovieSceneValueDecomposer"), &Z_Registration_Info_UClass_UMovieSceneValueDecomposer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneValueDecomposer), 3026387645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_3603767895(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneDecompositionQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
