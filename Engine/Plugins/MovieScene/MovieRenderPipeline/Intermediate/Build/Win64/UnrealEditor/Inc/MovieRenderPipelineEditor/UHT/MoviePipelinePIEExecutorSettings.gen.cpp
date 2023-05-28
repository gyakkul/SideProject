// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MoviePipelinePIEExecutorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelinePIEExecutorSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings();
	MOVIERENDERPIPELINEEDITOR_API UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineEditor();
// End Cross Module References
	void UMoviePipelinePIEExecutorSettings::StaticRegisterNativesUMoviePipelinePIEExecutorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelinePIEExecutorSettings);
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_NoRegister()
	{
		return UMoviePipelinePIEExecutorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialDelayFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialDelayFrameCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResizePIEWindowToOutputResolution_MetaData[];
#endif
		static void NewProp_bResizePIEWindowToOutputResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResizePIEWindowToOutputResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This is the implementation responsible for executing the rendering of\n* multiple movie pipelines within the editor using PIE.\n*/" },
		{ "DisplayName", "Movie Pipeline In Editor" },
		{ "IncludePath", "MoviePipelinePIEExecutorSettings.h" },
		{ "ModuleRelativePath", "Private/MoviePipelinePIEExecutorSettings.h" },
		{ "ToolTip", "This is the implementation responsible for executing the rendering of\nmultiple movie pipelines within the editor using PIE." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData[] = {
		{ "Category", "Startup" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* How long should we wait after being initialized to start doing any work? This can be used\n\x09* to work around situations where the game is not fully loaded by the time the pipeline\n\x09* is automatically started and it is important that the game is fully loaded before we do\n\x09* any work (such as evaluating frames for warm-up).\n\x09*/" },
		{ "ModuleRelativePath", "Private/MoviePipelinePIEExecutorSettings.h" },
		{ "ToolTip", "How long should we wait after being initialized to start doing any work? This can be used\nto work around situations where the game is not fully loaded by the time the pipeline\nis automatically started and it is important that the game is fully loaded before we do\nany work (such as evaluating frames for warm-up)." },
		{ "UIMax", "150" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount = { "InitialDelayFrameCount", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelinePIEExecutorSettings, InitialDelayFrameCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_bResizePIEWindowToOutputResolution_MetaData[] = {
		{ "Category", "Startup" },
		{ "Comment", "/**\n\x09* Should the PIE Window be created at the same resolution as the MRQ Output? By default we create the window at 720p for a nicer\n\x09* user experience, but this can be used to work around a widget scaling issue with UMG Widgets when using the UI Renderer\n\x09* setting. PIE is still limited by your monitor's resolution so you will need a monitor at least as big as your requested output\n\x09* for this to work (or can be combined with launching the editor with -ForceRes). \n\x09*\n\x09* Warning: Don't use this setting in combination with HighResTiling, as the main backbuffer will have to get resized to your final\n\x09* output resolution which will be too large.\n\x09*/" },
		{ "ModuleRelativePath", "Private/MoviePipelinePIEExecutorSettings.h" },
		{ "ToolTip", "Should the PIE Window be created at the same resolution as the MRQ Output? By default we create the window at 720p for a nicer\nuser experience, but this can be used to work around a widget scaling issue with UMG Widgets when using the UI Renderer\nsetting. PIE is still limited by your monitor's resolution so you will need a monitor at least as big as your requested output\nfor this to work (or can be combined with launching the editor with -ForceRes).\n\nWarning: Don't use this setting in combination with HighResTiling, as the main backbuffer will have to get resized to your final\noutput resolution which will be too large." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_bResizePIEWindowToOutputResolution_SetBit(void* Obj)
	{
		((UMoviePipelinePIEExecutorSettings*)Obj)->bResizePIEWindowToOutputResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_bResizePIEWindowToOutputResolution = { "bResizePIEWindowToOutputResolution", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelinePIEExecutorSettings), &Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_bResizePIEWindowToOutputResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_bResizePIEWindowToOutputResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_bResizePIEWindowToOutputResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_InitialDelayFrameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::NewProp_bResizePIEWindowToOutputResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelinePIEExecutorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::ClassParams = {
		&UMoviePipelinePIEExecutorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelinePIEExecutorSettings()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelinePIEExecutorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelinePIEExecutorSettings.OuterSingleton, Z_Construct_UClass_UMoviePipelinePIEExecutorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelinePIEExecutorSettings.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINEEDITOR_API UClass* StaticClass<UMoviePipelinePIEExecutorSettings>()
	{
		return UMoviePipelinePIEExecutorSettings::StaticClass();
	}
	UMoviePipelinePIEExecutorSettings::UMoviePipelinePIEExecutorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelinePIEExecutorSettings);
	UMoviePipelinePIEExecutorSettings::~UMoviePipelinePIEExecutorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelinePIEExecutorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelinePIEExecutorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelinePIEExecutorSettings, UMoviePipelinePIEExecutorSettings::StaticClass, TEXT("UMoviePipelinePIEExecutorSettings"), &Z_Registration_Info_UClass_UMoviePipelinePIEExecutorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelinePIEExecutorSettings), 515644751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelinePIEExecutorSettings_h_3787835129(TEXT("/Script/MovieRenderPipelineEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelinePIEExecutorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineEditor_Private_MoviePipelinePIEExecutorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
