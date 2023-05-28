// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineNewProcessExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineNewProcessExecutor() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineExecutorBase();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelineNewProcessExecutor::StaticRegisterNativesUMoviePipelineNewProcessExecutor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineNewProcessExecutor);
	UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor_NoRegister()
	{
		return UMoviePipelineNewProcessExecutor::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineExecutorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is the implementation responsible for executing the rendering of\n* multiple movie pipelines on the local machine in an external process.\n* This simply handles launching and managing the external processes and \n* acts as a proxy to them where possible. This internally uses the\n* UMoviePipelineInProcessExecutor on the launched instances.\n*/" },
		{ "IncludePath", "MoviePipelineNewProcessExecutor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineNewProcessExecutor.h" },
		{ "ToolTip", "This is the implementation responsible for executing the rendering of\nmultiple movie pipelines on the local machine in an external process.\nThis simply handles launching and managing the external processes and\nacts as a proxy to them where possible. This internally uses the\nUMoviePipelineInProcessExecutor on the launched instances." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineNewProcessExecutor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::ClassParams = {
		&UMoviePipelineNewProcessExecutor::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineNewProcessExecutor()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineNewProcessExecutor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineNewProcessExecutor.OuterSingleton, Z_Construct_UClass_UMoviePipelineNewProcessExecutor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineNewProcessExecutor.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelineNewProcessExecutor>()
	{
		return UMoviePipelineNewProcessExecutor::StaticClass();
	}
	UMoviePipelineNewProcessExecutor::UMoviePipelineNewProcessExecutor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineNewProcessExecutor);
	UMoviePipelineNewProcessExecutor::~UMoviePipelineNewProcessExecutor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineNewProcessExecutor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineNewProcessExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineNewProcessExecutor, UMoviePipelineNewProcessExecutor::StaticClass, TEXT("UMoviePipelineNewProcessExecutor"), &Z_Registration_Info_UClass_UMoviePipelineNewProcessExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineNewProcessExecutor), 3049230739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineNewProcessExecutor_h_3785883341(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineNewProcessExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Public_MoviePipelineNewProcessExecutor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
