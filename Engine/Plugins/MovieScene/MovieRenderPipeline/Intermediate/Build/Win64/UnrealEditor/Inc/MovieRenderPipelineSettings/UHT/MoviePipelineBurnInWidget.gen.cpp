// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineBurnInWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineBurnInWidget() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInWidget();
	MOVIERENDERPIPELINESETTINGS_API UClass* Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineSettings();
// End Cross Module References
	struct MoviePipelineBurnInWidget_eventOnOutputFrameStarted_Parms
	{
		UMoviePipeline* ForPipeline;
	};
	static FName NAME_UMoviePipelineBurnInWidget_OnOutputFrameStarted = FName(TEXT("OnOutputFrameStarted"));
	void UMoviePipelineBurnInWidget::OnOutputFrameStarted(UMoviePipeline* ForPipeline)
	{
		MoviePipelineBurnInWidget_eventOnOutputFrameStarted_Parms Parms;
		Parms.ForPipeline=ForPipeline;
		ProcessEvent(FindFunctionChecked(NAME_UMoviePipelineBurnInWidget_OnOutputFrameStarted),&Parms);
	}
	void UMoviePipelineBurnInWidget::StaticRegisterNativesUMoviePipelineBurnInWidget()
	{
	}
	struct Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForPipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::NewProp_ForPipeline = { "ForPipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineBurnInWidget_eventOnOutputFrameStarted_Parms, ForPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::NewProp_ForPipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09* Called on the first temporal and first spatial sample of each output frame with the information about the frame being produced.\n\x09* @param\x09""ForPipeline\x09\x09The pipeline the burn in is for. This will be consistent throughout a burn in widget's life.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInWidget.h" },
		{ "ToolTip", "Called on the first temporal and first spatial sample of each output frame with the information about the frame being produced.\n@param        ForPipeline             The pipeline the burn in is for. This will be consistent throughout a burn in widget's life." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineBurnInWidget, nullptr, "OnOutputFrameStarted", nullptr, nullptr, sizeof(MoviePipelineBurnInWidget_eventOnOutputFrameStarted_Parms), Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineBurnInWidget);
	UClass* Z_Construct_UClass_UMoviePipelineBurnInWidget_NoRegister()
	{
		return UMoviePipelineBurnInWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineBurnInWidget_OnOutputFrameStarted, "OnOutputFrameStarted" }, // 259675527
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for level sequence burn ins\n */" },
		{ "IncludePath", "MoviePipelineBurnInWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineBurnInWidget.h" },
		{ "ToolTip", "Base class for level sequence burn ins" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineBurnInWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::ClassParams = {
		&UMoviePipelineBurnInWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineBurnInWidget()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.OuterSingleton, Z_Construct_UClass_UMoviePipelineBurnInWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineBurnInWidget.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINESETTINGS_API UClass* StaticClass<UMoviePipelineBurnInWidget>()
	{
		return UMoviePipelineBurnInWidget::StaticClass();
	}
	UMoviePipelineBurnInWidget::UMoviePipelineBurnInWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineBurnInWidget);
	UMoviePipelineBurnInWidget::~UMoviePipelineBurnInWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineBurnInWidget, UMoviePipelineBurnInWidget::StaticClass, TEXT("UMoviePipelineBurnInWidget"), &Z_Registration_Info_UClass_UMoviePipelineBurnInWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineBurnInWidget), 3356978107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h_1563157565(TEXT("/Script/MovieRenderPipelineSettings"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineSettings_Public_MoviePipelineBurnInWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
