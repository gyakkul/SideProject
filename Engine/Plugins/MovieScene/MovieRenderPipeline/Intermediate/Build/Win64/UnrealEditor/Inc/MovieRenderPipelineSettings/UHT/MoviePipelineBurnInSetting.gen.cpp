// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineBurnInSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineBurnInSetting() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineRenderPass();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting_NoRegister();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineSettings();
// End Cross Module References
	void UMoviePipelineBurnInSetting::StaticRegisterNativesUMoviePipelineBurnInSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineBurnInSetting);
	UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting_NoRegister()
	{
		return UMoviePipelineBurnInSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeOntoFinalImage_MetaData[];
#endif
		static void NewProp_bCompositeOntoFinalImage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeOntoFinalImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BurnInWidgetInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurnInWidgetInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BurnInWidgetInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineRenderPass,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineBurnInSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass_MetaData[] = {
		{ "Category", "Widget Settings" },
		{ "MetaClass", "/Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass = { "BurnInClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineBurnInSetting, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage_MetaData[] = {
		{ "Category", "Widget Settings" },
		{ "Comment", "/** If true, the Burn In image will be composited into the Final Image pass. Doesn't apply to multi-layer EXR files. */" },
		{ "MetaClass", "/Script/MovieRenderPipelineSettings.MoviePipelineBurnInWidget" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
		{ "ToolTip", "If true, the Burn In image will be composited into the Final Image pass. Doesn't apply to multi-layer EXR files." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage_SetBit(void* Obj)
	{
		((UMoviePipelineBurnInSetting*)Obj)->bCompositeOntoFinalImage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage = { "bCompositeOntoFinalImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineBurnInSetting), &Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineBurnInSetting, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstances_Inner = { "BurnInWidgetInstances", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstances_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInSetting.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstances = { "BurnInWidgetInstances", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineBurnInSetting, BurnInWidgetInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_bCompositeOntoFinalImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::NewProp_BurnInWidgetInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineBurnInSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::ClassParams = {
		&UMoviePipelineBurnInSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineBurnInSetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineBurnInSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineBurnInSetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<UMoviePipelineBurnInSetting>()
	{
		return UMoviePipelineBurnInSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineBurnInSetting);
	UMoviePipelineBurnInSetting::~UMoviePipelineBurnInSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineBurnInSetting, UMoviePipelineBurnInSetting::StaticClass, TEXT("UMoviePipelineBurnInSetting"), &Z_Registration_Info_UClass_UMoviePipelineBurnInSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineBurnInSetting), 1376848671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h_1944791877(TEXT("/Script/MovieRenderPipelineSettings"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
