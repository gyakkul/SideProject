// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineAntiAliasingSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineAntiAliasingSetting() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineAntiAliasingSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineAntiAliasingSetting::StaticRegisterNativesUMoviePipelineAntiAliasingSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineAntiAliasingSetting);
	UClass* Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_NoRegister()
	{
		return UMoviePipelineAntiAliasingSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpatialSampleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpatialSampleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporalSampleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TemporalSampleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAntiAliasing_MetaData[];
#endif
		static void NewProp_bOverrideAntiAliasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAntiAliasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AntiAliasingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AntiAliasingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderWarmUpCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderWarmUpCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraCutForWarmUp_MetaData[];
#endif
		static void NewProp_bUseCameraCutForWarmUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraCutForWarmUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EngineWarmUpCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EngineWarmUpCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderWarmUpFrames_MetaData[];
#endif
		static void NewProp_bRenderWarmUpFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderWarmUpFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineAntiAliasingSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_SpatialSampleCount_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* How many frames should we accumulate together before contributing to one overall sample. This lets you\n\x09* increase the anti-aliasing quality of an sample, or have high quality anti-aliasing if you don't want\n\x09* any motion blur due to accumulation over time in SampleCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "How many frames should we accumulate together before contributing to one overall sample. This lets you\nincrease the anti-aliasing quality of an sample, or have high quality anti-aliasing if you don't want\nany motion blur due to accumulation over time in SampleCount." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_SpatialSampleCount = { "SpatialSampleCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAntiAliasingSetting, SpatialSampleCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_SpatialSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_SpatialSampleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_TemporalSampleCount_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09* The number of frames we should combine together to produce each output frame. This blends the\n\x09* results of this many sub-steps together to produce one output frame. See CameraShutterAngle to\n\x09* control how much time passes between each sub-frame. See SpatialSampleCount to see how many\n\x09* samples we average together to produce a sub-step. (This means rendering complexity is\n\x09* SampleCount * TileCount^2 * SpatialSampleCount * NumPasses).\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "The number of frames we should combine together to produce each output frame. This blends the\nresults of this many sub-steps together to produce one output frame. See CameraShutterAngle to\ncontrol how much time passes between each sub-frame. See SpatialSampleCount to see how many\nsamples we average together to produce a sub-step. (This means rendering complexity is\nSampleCount * TileCount^2 * SpatialSampleCount * NumPasses)." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_TemporalSampleCount = { "TemporalSampleCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAntiAliasingSetting, TemporalSampleCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_TemporalSampleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_TemporalSampleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bOverrideAntiAliasing_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/**\n\x09* Should we override the Project's anti-aliasing setting during a movie render? This can be useful to have\n\x09* TAA on during normal work in the editor but force it off for high quality renders /w many spatial samples.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "Should we override the Project's anti-aliasing setting during a movie render? This can be useful to have\nTAA on during normal work in the editor but force it off for high quality renders /w many spatial samples." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bOverrideAntiAliasing_SetBit(void* Obj)
	{
		((UMoviePipelineAntiAliasingSetting*)Obj)->bOverrideAntiAliasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bOverrideAntiAliasing = { "bOverrideAntiAliasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineAntiAliasingSetting), &Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bOverrideAntiAliasing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bOverrideAntiAliasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bOverrideAntiAliasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_AntiAliasingMethod_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/**\n\x09* If we are overriding the AA method, what do we use? None will turn off anti-aliasing.\n\x09*/" },
		{ "EditCondition", "bOverrideAntiAliasing" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "If we are overriding the AA method, what do we use? None will turn off anti-aliasing." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_AntiAliasingMethod = { "AntiAliasingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAntiAliasingSetting, AntiAliasingMethod), Z_Construct_UEnum_Engine_EAntiAliasingMethod, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_AntiAliasingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_AntiAliasingMethod_MetaData)) }; // 2228267037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_RenderWarmUpCount_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* The number of frames at the start of each shot that the engine will render and then discard. This is useful for\n\x09* ensuring there is history for temporal effects (such as anti-aliasing). It can be set to a lower number if not\n\x09* using temporal effects. \n\x09*\n\x09* This is more expensive than EngineWarmUpCount (which should be used for particle warm-ups, etc.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "The number of frames at the start of each shot that the engine will render and then discard. This is useful for\nensuring there is history for temporal effects (such as anti-aliasing). It can be set to a lower number if not\nusing temporal effects.\n\nThis is more expensive than EngineWarmUpCount (which should be used for particle warm-ups, etc.)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_RenderWarmUpCount = { "RenderWarmUpCount", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAntiAliasingSetting, RenderWarmUpCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_RenderWarmUpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_RenderWarmUpCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bUseCameraCutForWarmUp_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/**\n\x09* Should we use the excess in the camera cut track to determine engine warmup? When disabled, the sequence is evaluated\n\x09* once at the first frame and then waits there for EngineWarmUpCount many frames. When this is enabled, the number of \n\x09* warmup frames is based on how much excess there is in the camera cut track outside of the playback range AND\n\x09* the sequence is evaluated for each frame which can allow time for skeletal meshes to animate from a bind pose, etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "Should we use the excess in the camera cut track to determine engine warmup? When disabled, the sequence is evaluated\nonce at the first frame and then waits there for EngineWarmUpCount many frames. When this is enabled, the number of\nwarmup frames is based on how much excess there is in the camera cut track outside of the playback range AND\nthe sequence is evaluated for each frame which can allow time for skeletal meshes to animate from a bind pose, etc." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bUseCameraCutForWarmUp_SetBit(void* Obj)
	{
		((UMoviePipelineAntiAliasingSetting*)Obj)->bUseCameraCutForWarmUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bUseCameraCutForWarmUp = { "bUseCameraCutForWarmUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineAntiAliasingSetting), &Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bUseCameraCutForWarmUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bUseCameraCutForWarmUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bUseCameraCutForWarmUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_EngineWarmUpCount_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* The number of frames at the start of each shot that the engine will run without rendering. This allows pre-warming\n\x09* systems (such as particle systems, or level loading) which need time to run before you want to start capturing frames. \n\x09* This ticks the game thread but does not submit anything to the GPU to be rendered.\n\x09*\n\x09* This is more cheaper than RenderWarmUpCount and is the preferred way to have time pass at the start of a shot.\n\x09*/" },
		{ "EditCondition", "!bUseCameraCutForWarmUp" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "The number of frames at the start of each shot that the engine will run without rendering. This allows pre-warming\nsystems (such as particle systems, or level loading) which need time to run before you want to start capturing frames.\nThis ticks the game thread but does not submit anything to the GPU to be rendered.\n\nThis is more cheaper than RenderWarmUpCount and is the preferred way to have time pass at the start of a shot." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_EngineWarmUpCount = { "EngineWarmUpCount", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAntiAliasingSetting, EngineWarmUpCount), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_EngineWarmUpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_EngineWarmUpCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bRenderWarmUpFrames_MetaData[] = {
		{ "Category", "Render Settings" },
		{ "Comment", "/**\n\x09* Should we submit the warm-up frames to the GPU? Generally you want this disabled (as it is more performant), but\n\x09* some systems (such as gpu particles) need to be rendered to actually perform their warm-up. Enabling this will\n\x09* cause any warm up frames to also be submitted to the GPU which resolves this issue.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineAntiAliasingSetting.h" },
		{ "ToolTip", "Should we submit the warm-up frames to the GPU? Generally you want this disabled (as it is more performant), but\nsome systems (such as gpu particles) need to be rendered to actually perform their warm-up. Enabling this will\ncause any warm up frames to also be submitted to the GPU which resolves this issue." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bRenderWarmUpFrames_SetBit(void* Obj)
	{
		((UMoviePipelineAntiAliasingSetting*)Obj)->bRenderWarmUpFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bRenderWarmUpFrames = { "bRenderWarmUpFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineAntiAliasingSetting), &Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bRenderWarmUpFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bRenderWarmUpFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bRenderWarmUpFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_SpatialSampleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_TemporalSampleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bOverrideAntiAliasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_AntiAliasingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_RenderWarmUpCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bUseCameraCutForWarmUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_EngineWarmUpCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::NewProp_bRenderWarmUpFrames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineAntiAliasingSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::ClassParams = {
		&UMoviePipelineAntiAliasingSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineAntiAliasingSetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineAntiAliasingSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineAntiAliasingSetting>()
	{
		return UMoviePipelineAntiAliasingSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineAntiAliasingSetting);
	UMoviePipelineAntiAliasingSetting::~UMoviePipelineAntiAliasingSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineAntiAliasingSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineAntiAliasingSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineAntiAliasingSetting, UMoviePipelineAntiAliasingSetting::StaticClass, TEXT("UMoviePipelineAntiAliasingSetting"), &Z_Registration_Info_UClass_UMoviePipelineAntiAliasingSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineAntiAliasingSetting), 1102746745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineAntiAliasingSetting_h_3275908188(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineAntiAliasingSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineAntiAliasingSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
