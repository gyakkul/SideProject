// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/WeightAndEasingEvaluatorSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeightAndEasingEvaluatorSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneHierarchicalEasingInstantiatorSystem::StaticRegisterNativesUMovieSceneHierarchicalEasingInstantiatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneHierarchicalEasingInstantiatorSystem);
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_NoRegister()
	{
		return UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluatorSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EvaluatorSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntityInstantiatorSystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that creates hierarchical easing channels for any newly introduced HierarchicalEasingProvider components\n */" },
		{ "IncludePath", "Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that creates hierarchical easing channels for any newly introduced HierarchicalEasingProvider components" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::NewProp_EvaluatorSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::NewProp_EvaluatorSystem = { "EvaluatorSystem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneHierarchicalEasingInstantiatorSystem, EvaluatorSystem), Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::NewProp_EvaluatorSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::NewProp_EvaluatorSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::NewProp_EvaluatorSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneHierarchicalEasingInstantiatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::ClassParams = {
		&UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneHierarchicalEasingInstantiatorSystem>()
	{
		return UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneHierarchicalEasingInstantiatorSystem);
	UMovieSceneHierarchicalEasingInstantiatorSystem::~UMovieSceneHierarchicalEasingInstantiatorSystem() {}
	void UWeightAndEasingEvaluatorSystem::StaticRegisterNativesUWeightAndEasingEvaluatorSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeightAndEasingEvaluatorSystem);
	UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_NoRegister()
	{
		return UWeightAndEasingEvaluatorSystem::StaticClass();
	}
	struct Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System that combines manual weights and easings and propagates them to entities with matching EasingChannelID components\n */" },
		{ "IncludePath", "Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/WeightAndEasingEvaluatorSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System that combines manual weights and easings and propagates them to entities with matching EasingChannelID components" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeightAndEasingEvaluatorSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::ClassParams = {
		&UWeightAndEasingEvaluatorSystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeightAndEasingEvaluatorSystem()
	{
		if (!Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton, Z_Construct_UClass_UWeightAndEasingEvaluatorSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UWeightAndEasingEvaluatorSystem>()
	{
		return UWeightAndEasingEvaluatorSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeightAndEasingEvaluatorSystem);
	UWeightAndEasingEvaluatorSystem::~UWeightAndEasingEvaluatorSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem, UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass, TEXT("UMovieSceneHierarchicalEasingInstantiatorSystem"), &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingInstantiatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneHierarchicalEasingInstantiatorSystem), 3487814178U) },
		{ Z_Construct_UClass_UWeightAndEasingEvaluatorSystem, UWeightAndEasingEvaluatorSystem::StaticClass, TEXT("UWeightAndEasingEvaluatorSystem"), &Z_Registration_Info_UClass_UWeightAndEasingEvaluatorSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeightAndEasingEvaluatorSystem), 1630540778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_2382387598(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_WeightAndEasingEvaluatorSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
