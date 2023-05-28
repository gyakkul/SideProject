// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelinePanoramicPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelinePanoramicPass() {}
// Cross Module References
	MOVIEPIPELINEMASKRENDERPASS_API UClass* Z_Construct_UClass_UMoviePipelinePanoramicPass();
	MOVIEPIPELINEMASKRENDERPASS_API UClass* Z_Construct_UClass_UMoviePipelinePanoramicPass_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImagePassBase();
	UPackage* Z_Construct_UPackage__Script_MoviePipelineMaskRenderPass();
// End Cross Module References
	void UMoviePipelinePanoramicPass::StaticRegisterNativesUMoviePipelinePanoramicPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelinePanoramicPass);
	UClass* Z_Construct_UClass_UMoviePipelinePanoramicPass_NoRegister()
	{
		return UMoviePipelinePanoramicPass::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumHorizontalSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumHorizontalSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVerticalSteps_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVerticalSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorzFieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorzFieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertFieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertFieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllocateHistoryPerPane_MetaData[];
#endif
		static void NewProp_bAllocateHistoryPerPane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllocateHistoryPerPane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineImagePassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoviePipelineMaskRenderPass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Generates a panoramic image (potentially in stereo, stored top/bottom in the final sheet) in equirectangular projection space.\n* Each render is a traditional 2D render and then they are blended together afterwards. For each horizontal step we render n\n* many vertical steps. Each of these renders is called a 'Pane' to avoid confusion with the High Resolution 'Tiles' which only apply to 2D.\n*/" },
		{ "IncludePath", "MoviePipelinePanoramicPass.h" },
		{ "ModuleRelativePath", "Private/MoviePipelinePanoramicPass.h" },
		{ "ToolTip", "Generates a panoramic image (potentially in stereo, stored top/bottom in the final sheet) in equirectangular projection space.\nEach render is a traditional 2D render and then they are blended together afterwards. For each horizontal step we render n\nmany vertical steps. Each of these renders is called a 'Pane' to avoid confusion with the High Resolution 'Tiles' which only apply to 2D." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumHorizontalSteps_MetaData[] = {
		{ "Category", "Panoramic Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* How many different renders should the 360* horizontal view be broken into? Higher numbers are less distorted but longer to render.\n\x09*/" },
		{ "ModuleRelativePath", "Private/MoviePipelinePanoramicPass.h" },
		{ "ToolTip", "How many different renders should the 360* horizontal view be broken into? Higher numbers are less distorted but longer to render." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumHorizontalSteps = { "NumHorizontalSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePanoramicPass, NumHorizontalSteps), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumHorizontalSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumHorizontalSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumVerticalSteps_MetaData[] = {
		{ "Category", "Panoramic Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* How many different renders should the 360* vertical view be broken into? Higher numbers are less distorted but longer to render.\n\x09* This is typically less than horizontal as the vertical poles of an image will always have distortion in equirectangular projections.\n\x09*/" },
		{ "ModuleRelativePath", "Private/MoviePipelinePanoramicPass.h" },
		{ "ToolTip", "How many different renders should the 360* vertical view be broken into? Higher numbers are less distorted but longer to render.\nThis is typically less than horizontal as the vertical poles of an image will always have distortion in equirectangular projections." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumVerticalSteps = { "NumVerticalSteps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePanoramicPass, NumVerticalSteps), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumVerticalSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumVerticalSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_HorzFieldOfView_MetaData[] = {
		{ "Category", "Panoramic Settings" },
		{ "Comment", "/**Advance used only. Allows you to override the Horizontal Field of View (if not zero). Can cause crashes or incomplete panoramas.*/" },
		{ "ModuleRelativePath", "Private/MoviePipelinePanoramicPass.h" },
		{ "ToolTip", "Advance used only. Allows you to override the Horizontal Field of View (if not zero). Can cause crashes or incomplete panoramas." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_HorzFieldOfView = { "HorzFieldOfView", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePanoramicPass, HorzFieldOfView), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_HorzFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_HorzFieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_VertFieldOfView_MetaData[] = {
		{ "Category", "Panoramic Settings" },
		{ "Comment", "/**Advance used only. Allows you to override the Vertical Field of View (if not zero). Can cause crashes or incomplete panoramas.*/" },
		{ "ModuleRelativePath", "Private/MoviePipelinePanoramicPass.h" },
		{ "ToolTip", "Advance used only. Allows you to override the Vertical Field of View (if not zero). Can cause crashes or incomplete panoramas." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_VertFieldOfView = { "VertFieldOfView", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePanoramicPass, VertFieldOfView), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_VertFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_VertFieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_bAllocateHistoryPerPane_MetaData[] = {
		{ "Category", "Panoramic Settings" },
		{ "Comment", "/**\n\x09* Should we store the render scene history per individual render? This can consume a great deal of memory with many renders,\n\x09* but enables TAA and other history-based effects (denoisers, etc.) to work.\n\x09*/" },
		{ "ModuleRelativePath", "Private/MoviePipelinePanoramicPass.h" },
		{ "ToolTip", "Should we store the render scene history per individual render? This can consume a great deal of memory with many renders,\nbut enables TAA and other history-based effects (denoisers, etc.) to work." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_bAllocateHistoryPerPane_SetBit(void* Obj)
	{
		((UMoviePipelinePanoramicPass*)Obj)->bAllocateHistoryPerPane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_bAllocateHistoryPerPane = { "bAllocateHistoryPerPane", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelinePanoramicPass), &Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_bAllocateHistoryPerPane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_bAllocateHistoryPerPane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_bAllocateHistoryPerPane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumHorizontalSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_NumVerticalSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_HorzFieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_VertFieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::NewProp_bAllocateHistoryPerPane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelinePanoramicPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::ClassParams = {
		&UMoviePipelinePanoramicPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelinePanoramicPass()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelinePanoramicPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelinePanoramicPass.OuterSingleton, Z_Construct_UClass_UMoviePipelinePanoramicPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelinePanoramicPass.OuterSingleton;
	}
	template<> MOVIEPIPELINEMASKRENDERPASS_API UClass* StaticClass<UMoviePipelinePanoramicPass>()
	{
		return UMoviePipelinePanoramicPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelinePanoramicPass);
	UMoviePipelinePanoramicPass::~UMoviePipelinePanoramicPass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelinePanoramicPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelinePanoramicPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelinePanoramicPass, UMoviePipelinePanoramicPass::StaticClass, TEXT("UMoviePipelinePanoramicPass"), &Z_Registration_Info_UClass_UMoviePipelinePanoramicPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelinePanoramicPass), 2064658472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelinePanoramicPass_h_1602672694(TEXT("/Script/MoviePipelineMaskRenderPass"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelinePanoramicPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelinePanoramicPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
