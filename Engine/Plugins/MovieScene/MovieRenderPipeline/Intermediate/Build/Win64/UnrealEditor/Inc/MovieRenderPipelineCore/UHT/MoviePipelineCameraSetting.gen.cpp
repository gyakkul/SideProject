// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineCameraSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineCameraSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCameraSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineCameraSetting::StaticRegisterNativesUMoviePipelineCameraSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCameraSetting);
	UClass* Z_Construct_UClass_UMoviePipelineCameraSetting_NoRegister()
	{
		return UMoviePipelineCameraSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCameraSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShutterTiming_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShutterTiming_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShutterTiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderAllCameras_MetaData[];
#endif
		static void NewProp_bRenderAllCameras_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderAllCameras;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineCameraSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/**\n\x09* Shutter Timing allows you to bias the timing of your shutter angle to either be before, during, or after\n\x09* a frame. When set to FrameClose, it means that the motion gathered up to produce frame N comes from \n\x09* before and right up to frame N. When set to FrameCenter, the motion represents half the time before the\n\x09* frame and half the time after the frame. When set to FrameOpen, the motion represents the time from \n\x09* Frame N onwards.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
		{ "ToolTip", "Shutter Timing allows you to bias the timing of your shutter angle to either be before, during, or after\na frame. When set to FrameClose, it means that the motion gathered up to produce frame N comes from\nbefore and right up to frame N. When set to FrameCenter, the motion represents half the time before the\nframe and half the time after the frame. When set to FrameOpen, the motion represents the time from\nFrame N onwards." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming = { "ShutterTiming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCameraSetting, ShutterTiming), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineShutterTiming, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_MetaData)) }; // 1569748283
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_OverscanPercentage_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09* Overscan percent allows to render additional pixels beyond the set resolution and can be used in conjunction \n\x09* with EXR file output to add post-processing effects such as lens distortion.\n\x09* Please note that using this feature might affect the results due to auto-exposure and other camera settings.\n\x09* On EXR this will produce a 1080p image with extra pixel data hidden around the outside edges for use \n\x09* in post production. For all other formats this will increase the final resolution and no pixels will be hidden \n\x09* (ie: 1080p /w 0.1 overscan will make a 2112x1188 jpg, but a 1080p exr /w 96/54 pixels hidden on each side)\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
		{ "ToolTip", "Overscan percent allows to render additional pixels beyond the set resolution and can be used in conjunction\nwith EXR file output to add post-processing effects such as lens distortion.\nPlease note that using this feature might affect the results due to auto-exposure and other camera settings.\nOn EXR this will produce a 1080p image with extra pixel data hidden around the outside edges for use\nin post production. For all other formats this will increase the final resolution and no pixels will be hidden\n(ie: 1080p /w 0.1 overscan will make a 2112x1188 jpg, but a 1080p exr /w 96/54 pixels hidden on each side)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_OverscanPercentage = { "OverscanPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCameraSetting, OverscanPercentage), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_OverscanPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_OverscanPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bRenderAllCameras_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "Comment", "/**\n\x09* If true, when a Camera Cut section is found we will also render any other cameras within the same sequence (not parent, nor child sequences though).\n\x09* These cameras are rendered at the same time as the primary camera meaning all cameras capture the same world state. Do note that this multiplies\n\x09* render times and memory requirements!\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineCameraSetting.h" },
		{ "ToolTip", "If true, when a Camera Cut section is found we will also render any other cameras within the same sequence (not parent, nor child sequences though).\nThese cameras are rendered at the same time as the primary camera meaning all cameras capture the same world state. Do note that this multiplies\nrender times and memory requirements!" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bRenderAllCameras_SetBit(void* Obj)
	{
		((UMoviePipelineCameraSetting*)Obj)->bRenderAllCameras = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bRenderAllCameras = { "bRenderAllCameras", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineCameraSetting), &Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bRenderAllCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bRenderAllCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bRenderAllCameras_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_ShutterTiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_OverscanPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::NewProp_bRenderAllCameras,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCameraSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::ClassParams = {
		&UMoviePipelineCameraSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineCameraSetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCameraSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCameraSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineCameraSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCameraSetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCameraSetting>()
	{
		return UMoviePipelineCameraSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCameraSetting);
	UMoviePipelineCameraSetting::~UMoviePipelineCameraSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCameraSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCameraSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineCameraSetting, UMoviePipelineCameraSetting::StaticClass, TEXT("UMoviePipelineCameraSetting"), &Z_Registration_Info_UClass_UMoviePipelineCameraSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCameraSetting), 3203466471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCameraSetting_h_2651960565(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCameraSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCameraSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
