// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MoviePipelineFunctionalTestBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineFunctionalTestBase() {}
// Cross Module References
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_AMoviePipelineFunctionalTestBase();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_AMoviePipelineFunctionalTestBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void AMoviePipelineFunctionalTestBase::StaticRegisterNativesAMoviePipelineFunctionalTestBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMoviePipelineFunctionalTestBase);
	UClass* Z_Construct_UClass_AMoviePipelineFunctionalTestBase_NoRegister()
	{
		return AMoviePipelineFunctionalTestBase::StaticClass();
	}
	struct Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueuePreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_QueuePreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveMoviePipeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQueue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFunctionalTest,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Base class for Movie Pipeline functional tests which render pre-made queues\n* and compare their output against pre-existing render outputs.\n*/" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "MoviePipelineFunctionalTestBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/MoviePipelineFunctionalTestBase.h" },
		{ "ToolTip", "Base class for Movie Pipeline functional tests which render pre-made queues\nand compare their output against pre-existing render outputs." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_QueuePreset_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "ModuleRelativePath", "Private/MoviePipelineFunctionalTestBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_QueuePreset = { "QueuePreset", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoviePipelineFunctionalTestBase, QueuePreset), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_QueuePreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_QueuePreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveMoviePipeline_MetaData[] = {
		{ "ModuleRelativePath", "Private/MoviePipelineFunctionalTestBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveMoviePipeline = { "ActiveMoviePipeline", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoviePipelineFunctionalTestBase, ActiveMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveMoviePipeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveQueue_MetaData[] = {
		{ "ModuleRelativePath", "Private/MoviePipelineFunctionalTestBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveQueue = { "ActiveQueue", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMoviePipelineFunctionalTestBase, ActiveQueue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveQueue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_QueuePreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveMoviePipeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::NewProp_ActiveQueue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoviePipelineFunctionalTestBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::ClassParams = {
		&AMoviePipelineFunctionalTestBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoviePipelineFunctionalTestBase()
	{
		if (!Z_Registration_Info_UClass_AMoviePipelineFunctionalTestBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMoviePipelineFunctionalTestBase.OuterSingleton, Z_Construct_UClass_AMoviePipelineFunctionalTestBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMoviePipelineFunctionalTestBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<AMoviePipelineFunctionalTestBase>()
	{
		return AMoviePipelineFunctionalTestBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoviePipelineFunctionalTestBase);
	AMoviePipelineFunctionalTestBase::~AMoviePipelineFunctionalTestBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineFunctionalTestBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineFunctionalTestBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMoviePipelineFunctionalTestBase, AMoviePipelineFunctionalTestBase::StaticClass, TEXT("AMoviePipelineFunctionalTestBase"), &Z_Registration_Info_UClass_AMoviePipelineFunctionalTestBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMoviePipelineFunctionalTestBase), 4229323343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineFunctionalTestBase_h_3954126766(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineFunctionalTestBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelineFunctionalTestBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
