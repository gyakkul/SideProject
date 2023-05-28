// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineVideoOutputBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineVideoOutputBase() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineVideoOutputBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineVideoOutputBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineVideoOutputBase::StaticRegisterNativesUMoviePipelineVideoOutputBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineVideoOutputBase);
	UClass* Z_Construct_UClass_UMoviePipelineVideoOutputBase_NoRegister()
	{
		return UMoviePipelineVideoOutputBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A base class for video codec outputs for the Movie Pipeline system. To simplify encoder implementations\n* this handles multi-threading for you and will call all of the encoding functions on a dedicated thread.\n* This allows an encoder to do more expensive operations (such as image quantization) without implementing\n* threading yourself, nor having to worry about blocking the game thread.\n*/" },
		{ "IncludePath", "MoviePipelineVideoOutputBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineVideoOutputBase.h" },
		{ "ToolTip", "A base class for video codec outputs for the Movie Pipeline system. To simplify encoder implementations\nthis handles multi-threading for you and will call all of the encoding functions on a dedicated thread.\nThis allows an encoder to do more expensive operations (such as image quantization) without implementing\nthreading yourself, nor having to worry about blocking the game thread." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineVideoOutputBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::ClassParams = {
		&UMoviePipelineVideoOutputBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineVideoOutputBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineVideoOutputBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineVideoOutputBase>()
	{
		return UMoviePipelineVideoOutputBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineVideoOutputBase);
	UMoviePipelineVideoOutputBase::~UMoviePipelineVideoOutputBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineVideoOutputBase, UMoviePipelineVideoOutputBase::StaticClass, TEXT("UMoviePipelineVideoOutputBase"), &Z_Registration_Info_UClass_UMoviePipelineVideoOutputBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineVideoOutputBase), 1414599558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_2623951437(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineVideoOutputBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
