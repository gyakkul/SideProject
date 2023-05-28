// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIMovieSceneTrackTemplateProducer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneTrackTemplateProducer::StaticRegisterNativesUMovieSceneTrackTemplateProducer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTrackTemplateProducer);
	UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister()
	{
		return UMovieSceneTrackTemplateProducer::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Compilation/IMovieSceneTrackTemplateProducer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMovieSceneTrackTemplateProducer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::ClassParams = {
		&UMovieSceneTrackTemplateProducer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton, Z_Construct_UClass_UMovieSceneTrackTemplateProducer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneTrackTemplateProducer>()
	{
		return UMovieSceneTrackTemplateProducer::StaticClass();
	}
	UMovieSceneTrackTemplateProducer::UMovieSceneTrackTemplateProducer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTrackTemplateProducer);
	UMovieSceneTrackTemplateProducer::~UMovieSceneTrackTemplateProducer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer, UMovieSceneTrackTemplateProducer::StaticClass, TEXT("UMovieSceneTrackTemplateProducer"), &Z_Registration_Info_UClass_UMovieSceneTrackTemplateProducer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTrackTemplateProducer), 2931163055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_1692964775(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Compilation_IMovieSceneTrackTemplateProducer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
