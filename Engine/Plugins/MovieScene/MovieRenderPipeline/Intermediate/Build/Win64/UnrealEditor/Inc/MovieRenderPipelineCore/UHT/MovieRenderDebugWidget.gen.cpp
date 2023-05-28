// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieRenderDebugWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieRenderDebugWidget() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipeline_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	struct MovieRenderDebugWidget_eventOnInitializedForPipeline_Parms
	{
		UMoviePipeline* ForPipeline;
	};
	static FName NAME_UMovieRenderDebugWidget_OnInitializedForPipeline = FName(TEXT("OnInitializedForPipeline"));
	void UMovieRenderDebugWidget::OnInitializedForPipeline(UMoviePipeline* ForPipeline)
	{
		MovieRenderDebugWidget_eventOnInitializedForPipeline_Parms Parms;
		Parms.ForPipeline=ForPipeline;
		ProcessEvent(FindFunctionChecked(NAME_UMovieRenderDebugWidget_OnInitializedForPipeline),&Parms);
	}
	void UMovieRenderDebugWidget::StaticRegisterNativesUMovieRenderDebugWidget()
	{
	}
	struct Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ForPipeline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::NewProp_ForPipeline = { "ForPipeline", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieRenderDebugWidget_eventOnInitializedForPipeline_Parms, ForPipeline), Z_Construct_UClass_UMoviePipeline_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::NewProp_ForPipeline,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieRenderDebugWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieRenderDebugWidget, nullptr, "OnInitializedForPipeline", nullptr, nullptr, sizeof(MovieRenderDebugWidget_eventOnInitializedForPipeline_Parms), Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieRenderDebugWidget);
	UClass* Z_Construct_UClass_UMovieRenderDebugWidget_NoRegister()
	{
		return UMovieRenderDebugWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMovieRenderDebugWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieRenderDebugWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieRenderDebugWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieRenderDebugWidget_OnInitializedForPipeline, "OnInitializedForPipeline" }, // 4276120132
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieRenderDebugWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* C++ Base Class for the debug widget that is drawn onto the game viewport\n* (but not burned into the output files) that allow us to easily visualize\n* the current state of the pipeline.\n*/" },
		{ "IncludePath", "MovieRenderDebugWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovieRenderDebugWidget.h" },
		{ "ToolTip", "C++ Base Class for the debug widget that is drawn onto the game viewport\n(but not burned into the output files) that allow us to easily visualize\nthe current state of the pipeline." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieRenderDebugWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieRenderDebugWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieRenderDebugWidget_Statics::ClassParams = {
		&UMovieRenderDebugWidget::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieRenderDebugWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieRenderDebugWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieRenderDebugWidget()
	{
		if (!Z_Registration_Info_UClass_UMovieRenderDebugWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieRenderDebugWidget.OuterSingleton, Z_Construct_UClass_UMovieRenderDebugWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieRenderDebugWidget.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMovieRenderDebugWidget>()
	{
		return UMovieRenderDebugWidget::StaticClass();
	}
	UMovieRenderDebugWidget::UMovieRenderDebugWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieRenderDebugWidget);
	UMovieRenderDebugWidget::~UMovieRenderDebugWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieRenderDebugWidget, UMovieRenderDebugWidget::StaticClass, TEXT("UMovieRenderDebugWidget"), &Z_Registration_Info_UClass_UMovieRenderDebugWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieRenderDebugWidget), 1208173900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h_3573546061(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MovieRenderDebugWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
