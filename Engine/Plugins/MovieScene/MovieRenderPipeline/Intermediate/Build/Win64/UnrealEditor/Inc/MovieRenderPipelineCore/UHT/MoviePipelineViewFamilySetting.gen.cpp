// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineViewFamilySetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineViewFamilySetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineViewFamilySetting::StaticRegisterNativesUMoviePipelineViewFamilySetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineViewFamilySetting);
	UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting_NoRegister()
	{
		return UMoviePipelineViewFamilySetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineViewFamilySetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineViewFamilySetting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineViewFamilySetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::ClassParams = {
		&UMoviePipelineViewFamilySetting::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineViewFamilySetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineViewFamilySetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineViewFamilySetting>()
	{
		return UMoviePipelineViewFamilySetting::StaticClass();
	}
	UMoviePipelineViewFamilySetting::UMoviePipelineViewFamilySetting() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineViewFamilySetting);
	UMoviePipelineViewFamilySetting::~UMoviePipelineViewFamilySetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineViewFamilySetting, UMoviePipelineViewFamilySetting::StaticClass, TEXT("UMoviePipelineViewFamilySetting"), &Z_Registration_Info_UClass_UMoviePipelineViewFamilySetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineViewFamilySetting), 2946292420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_1809836436(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineViewFamilySetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
