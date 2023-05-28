// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieSceneEntitySystemLinker.h"
#include "EntitySystem/MovieSceneEntitySystemGraphs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEntitySystemLinker() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneEntitySystemLinker::StaticRegisterNativesUMovieSceneEntitySystemLinker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEntitySystemLinker);
	UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker_NoRegister()
	{
		return UMovieSceneEntitySystemLinker::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemGraph_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EntitySystem/MovieSceneEntitySystemLinker.h" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemLinker.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/EntitySystem/MovieSceneEntitySystemLinker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph = { "SystemGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEntitySystemLinker, SystemGraph), Z_Construct_UScriptStruct_FMovieSceneEntitySystemGraph, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph_MetaData)) }; // 3754581303
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::NewProp_SystemGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEntitySystemLinker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::ClassParams = {
		&UMovieSceneEntitySystemLinker::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEntitySystemLinker()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.OuterSingleton, Z_Construct_UClass_UMovieSceneEntitySystemLinker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneEntitySystemLinker>()
	{
		return UMovieSceneEntitySystemLinker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEntitySystemLinker);
	UMovieSceneEntitySystemLinker::~UMovieSceneEntitySystemLinker() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEntitySystemLinker, UMovieSceneEntitySystemLinker::StaticClass, TEXT("UMovieSceneEntitySystemLinker"), &Z_Registration_Info_UClass_UMovieSceneEntitySystemLinker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEntitySystemLinker), 4027576805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_1972536930(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieSceneEntitySystemLinker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
