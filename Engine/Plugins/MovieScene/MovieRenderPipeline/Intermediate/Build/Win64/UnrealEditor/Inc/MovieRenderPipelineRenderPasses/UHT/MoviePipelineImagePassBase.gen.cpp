// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineImagePassBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineImagePassBase() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImagePassBase();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImagePassBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses();
// End Cross Module References
	void UMoviePipelineImagePassBase::StaticRegisterNativesUMoviePipelineImagePassBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineImagePassBase);
	UClass* Z_Construct_UClass_UMoviePipelineImagePassBase_NoRegister()
	{
		return UMoviePipelineImagePassBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineImagePassBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineImagePassBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineRenderPass,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineImagePassBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineImagePassBase.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineImagePassBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineImagePassBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineImagePassBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineImagePassBase_Statics::ClassParams = {
		&UMoviePipelineImagePassBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineImagePassBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineImagePassBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineImagePassBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineImagePassBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineImagePassBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineImagePassBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineImagePassBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineImagePassBase>()
	{
		return UMoviePipelineImagePassBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineImagePassBase);
	UMoviePipelineImagePassBase::~UMoviePipelineImagePassBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineImagePassBase, UMoviePipelineImagePassBase::StaticClass, TEXT("UMoviePipelineImagePassBase"), &Z_Registration_Info_UClass_UMoviePipelineImagePassBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineImagePassBase), 389008364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_1416960779(TEXT("/Script/MovieRenderPipelineRenderPasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineImagePassBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
