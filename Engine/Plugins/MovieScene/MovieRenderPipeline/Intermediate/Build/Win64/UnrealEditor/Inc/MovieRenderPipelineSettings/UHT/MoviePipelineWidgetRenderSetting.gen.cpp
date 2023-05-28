// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineWidgetRenderSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineWidgetRenderSetting() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineSettings();
// End Cross Module References
	void UMoviePipelineWidgetRenderer::StaticRegisterNativesUMoviePipelineWidgetRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineWidgetRenderer);
	UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer_NoRegister()
	{
		return UMoviePipelineWidgetRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeOntoFinalImage_MetaData[];
#endif
		static void NewProp_bCompositeOntoFinalImage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeOntoFinalImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineRenderPass,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineWidgetRenderSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineWidgetRenderSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage_MetaData[] = {
		{ "Category", "Widget Settings" },
		{ "Comment", "/** If true, the widget renderer image will be composited into the Final Image pass. Doesn't apply to multi-layer EXR files. */" },
		{ "MetaClass", "/Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget" },
		{ "ModuleRelativePath", "Public/MoviePipelineWidgetRenderSetting.h" },
		{ "ToolTip", "If true, the widget renderer image will be composited into the Final Image pass. Doesn't apply to multi-layer EXR files." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage_SetBit(void* Obj)
	{
		((UMoviePipelineWidgetRenderer*)Obj)->bCompositeOntoFinalImage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage = { "bCompositeOntoFinalImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineWidgetRenderer), &Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineWidgetRenderSetting.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineWidgetRenderer, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_bCompositeOntoFinalImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::NewProp_RenderTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineWidgetRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::ClassParams = {
		&UMoviePipelineWidgetRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineWidgetRenderer()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.OuterSingleton, Z_Construct_UClass_UMoviePipelineWidgetRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<UMoviePipelineWidgetRenderer>()
	{
		return UMoviePipelineWidgetRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineWidgetRenderer);
	UMoviePipelineWidgetRenderer::~UMoviePipelineWidgetRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineWidgetRenderer, UMoviePipelineWidgetRenderer::StaticClass, TEXT("UMoviePipelineWidgetRenderer"), &Z_Registration_Info_UClass_UMoviePipelineWidgetRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineWidgetRenderer), 1318608418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h_274561753(TEXT("/Script/MovieRenderPipelineSettings"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineWidgetRenderSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
