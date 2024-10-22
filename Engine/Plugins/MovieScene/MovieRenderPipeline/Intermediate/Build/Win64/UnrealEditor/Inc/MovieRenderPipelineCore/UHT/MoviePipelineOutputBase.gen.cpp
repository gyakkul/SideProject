// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineOutputBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineOutputBase() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineOutputBase::StaticRegisterNativesUMoviePipelineOutputBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineOutputBase);
	UClass* Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister()
	{
		return UMoviePipelineOutputBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineOutputBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineOutputBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineOutputBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A base class for different output containers for the data generated by the Movie Pipeline,\n* i.e: image sequences, video containers, etc.\n*/" },
		{ "IncludePath", "MoviePipelineOutputBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineOutputBase.h" },
		{ "ToolTip", "A base class for different output containers for the data generated by the Movie Pipeline,\ni.e: image sequences, video containers, etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineOutputBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineOutputBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineOutputBase_Statics::ClassParams = {
		&UMoviePipelineOutputBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineOutputBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineOutputBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineOutputBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineOutputBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineOutputBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineOutputBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineOutputBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineOutputBase>()
	{
		return UMoviePipelineOutputBase::StaticClass();
	}
	UMoviePipelineOutputBase::UMoviePipelineOutputBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineOutputBase);
	UMoviePipelineOutputBase::~UMoviePipelineOutputBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineOutputBase, UMoviePipelineOutputBase::StaticClass, TEXT("UMoviePipelineOutputBase"), &Z_Registration_Info_UClass_UMoviePipelineOutputBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineOutputBase), 3911068188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h_2427111961(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineOutputBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
