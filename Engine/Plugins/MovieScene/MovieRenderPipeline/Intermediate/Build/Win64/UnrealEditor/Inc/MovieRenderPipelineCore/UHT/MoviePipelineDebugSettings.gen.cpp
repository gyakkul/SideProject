// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineDebugSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineDebugSettings() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineDebugSettings();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineDebugSettings_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineDebugSettings::StaticRegisterNativesUMoviePipelineDebugSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineDebugSettings);
	UClass* Z_Construct_UClass_UMoviePipelineDebugSettings_NoRegister()
	{
		return UMoviePipelineDebugSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineDebugSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteAllSamples_MetaData[];
#endif
		static void NewProp_bWriteAllSamples_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteAllSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureFramesWithRenderDoc_MetaData[];
#endif
		static void NewProp_bCaptureFramesWithRenderDoc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureFramesWithRenderDoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CaptureFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureUnrealInsightsTrace_MetaData[];
#endif
		static void NewProp_bCaptureUnrealInsightsTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureUnrealInsightsTrace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineDebugSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineDebugSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bWriteAllSamples_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/**\n\x09* If true, we will write all samples that get generated to disk individually. This can be useful for debugging or if you need to accumulate\n\x09* render passes differently than provided.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDebugSettings.h" },
		{ "ToolTip", "If true, we will write all samples that get generated to disk individually. This can be useful for debugging or if you need to accumulate\nrender passes differently than provided." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bWriteAllSamples_SetBit(void* Obj)
	{
		((UMoviePipelineDebugSettings*)Obj)->bWriteAllSamples = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bWriteAllSamples = { "bWriteAllSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDebugSettings), &Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bWriteAllSamples_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bWriteAllSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bWriteAllSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureFramesWithRenderDoc_MetaData[] = {
		{ "Category", "RenderDoc" },
		{ "Comment", "/** If true, automatically trigger RenderDoc to capture rendering information for frames from CaptureStartFrame to CaptureEndFrame, inclusive */" },
		{ "ModuleRelativePath", "Public/MoviePipelineDebugSettings.h" },
		{ "ToolTip", "If true, automatically trigger RenderDoc to capture rendering information for frames from CaptureStartFrame to CaptureEndFrame, inclusive" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureFramesWithRenderDoc_SetBit(void* Obj)
	{
		((UMoviePipelineDebugSettings*)Obj)->bCaptureFramesWithRenderDoc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureFramesWithRenderDoc = { "bCaptureFramesWithRenderDoc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDebugSettings), &Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureFramesWithRenderDoc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureFramesWithRenderDoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureFramesWithRenderDoc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_CaptureFrame_MetaData[] = {
		{ "Category", "RenderDoc" },
		{ "Comment", "/** Used when capturing rendering information with RenderDoc. In Display Rate frames.*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineDebugSettings.h" },
		{ "ToolTip", "Used when capturing rendering information with RenderDoc. In Display Rate frames." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_CaptureFrame = { "CaptureFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineDebugSettings, CaptureFrame), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_CaptureFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_CaptureFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureUnrealInsightsTrace_MetaData[] = {
		{ "Category", "Profiling" },
		{ "Comment", "/** If true, automatically capture an Unreal Insights trace file for the duration of the render. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineDebugSettings.h" },
		{ "ToolTip", "If true, automatically capture an Unreal Insights trace file for the duration of the render." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureUnrealInsightsTrace_SetBit(void* Obj)
	{
		((UMoviePipelineDebugSettings*)Obj)->bCaptureUnrealInsightsTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureUnrealInsightsTrace = { "bCaptureUnrealInsightsTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineDebugSettings), &Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureUnrealInsightsTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureUnrealInsightsTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureUnrealInsightsTrace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bWriteAllSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureFramesWithRenderDoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_CaptureFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::NewProp_bCaptureUnrealInsightsTrace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineDebugSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::ClassParams = {
		&UMoviePipelineDebugSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineDebugSettings()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineDebugSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineDebugSettings.OuterSingleton, Z_Construct_UClass_UMoviePipelineDebugSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineDebugSettings.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineDebugSettings>()
	{
		return UMoviePipelineDebugSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineDebugSettings);
	UMoviePipelineDebugSettings::~UMoviePipelineDebugSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineDebugSettings, UMoviePipelineDebugSettings::StaticClass, TEXT("UMoviePipelineDebugSettings"), &Z_Registration_Info_UClass_UMoviePipelineDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineDebugSettings), 1922858574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_1443443971(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineDebugSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
