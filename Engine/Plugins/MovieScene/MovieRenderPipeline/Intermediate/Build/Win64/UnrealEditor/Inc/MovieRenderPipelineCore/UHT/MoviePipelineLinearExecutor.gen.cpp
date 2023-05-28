// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineLinearExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineLinearExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineLinearExecutorBase::StaticRegisterNativesUMoviePipelineLinearExecutorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineLinearExecutorBase);
	UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase_NoRegister()
	{
		return UMoviePipelineLinearExecutorBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Queue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Queue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMoviePipeline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveMoviePipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is an abstract base class designed for executing an array of movie pipelines in linear\n* fashion. It is generally the case that you only want to execute one at a time on a local machine\n* and a different executor approach should be taken for a render farm that distributes out jobs\n* to many different machines.\n*/" },
		{ "IncludePath", "MoviePipelineLinearExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineLinearExecutor.h" },
		{ "ToolTip", "This is an abstract base class designed for executing an array of movie pipelines in linear\nfashion. It is generally the case that you only want to execute one at a time on a local machine\nand a different executor approach should be taken for a render farm that distributes out jobs\nto many different machines." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue_MetaData[] = {
		{ "Comment", "/** List of Pipeline Configs we've been asked to execute. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineLinearExecutor.h" },
		{ "ToolTip", "List of Pipeline Configs we've been asked to execute." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineLinearExecutorBase, Queue), Z_Construct_UClass_UMoviePipelineQueue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline_MetaData[] = {
		{ "Comment", "/** A Movie Pipeline that has been spawned and is running (if any) */" },
		{ "ModuleRelativePath", "Public/MoviePipelineLinearExecutor.h" },
		{ "ToolTip", "A Movie Pipeline that has been spawned and is running (if any)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline = { "ActiveMoviePipeline", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineLinearExecutorBase, ActiveMoviePipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_Queue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::NewProp_ActiveMoviePipeline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineLinearExecutorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::ClassParams = {
		&UMoviePipelineLinearExecutorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineLinearExecutorBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineLinearExecutorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineLinearExecutorBase>()
	{
		return UMoviePipelineLinearExecutorBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineLinearExecutorBase);
	UMoviePipelineLinearExecutorBase::~UMoviePipelineLinearExecutorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineLinearExecutorBase, UMoviePipelineLinearExecutorBase::StaticClass, TEXT("UMoviePipelineLinearExecutorBase"), &Z_Registration_Info_UClass_UMoviePipelineLinearExecutorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineLinearExecutorBase), 205533590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h_3223650984(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineLinearExecutor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
