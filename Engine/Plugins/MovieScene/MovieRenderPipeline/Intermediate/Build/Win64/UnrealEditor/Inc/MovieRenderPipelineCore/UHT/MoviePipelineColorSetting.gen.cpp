// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineColorSetting.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineColorSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineColorSetting();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineColorSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineColorSetting::StaticRegisterNativesUMoviePipelineColorSetting()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineColorSetting);
	UClass* Z_Construct_UClass_UMoviePipelineColorSetting_NoRegister()
	{
		return UMoviePipelineColorSetting::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineColorSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OCIOConfiguration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OCIOConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableToneCurve_MetaData[];
#endif
		static void NewProp_bDisableToneCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableToneCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineColorSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineColorSetting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineColorSetting.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineColorSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_OCIOConfiguration_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/**\n\x09* OCIO config to be passed to OCIO View Extension. If this is enabled the Tone Curve will be disabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineColorSetting.h" },
		{ "ToolTip", "OCIO config to be passed to OCIO View Extension. If this is enabled the Tone Curve will be disabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_OCIOConfiguration = { "OCIOConfiguration", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineColorSetting, OCIOConfiguration), Z_Construct_UScriptStruct_FOpenColorIODisplayConfiguration, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_OCIOConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_OCIOConfiguration_MetaData)) }; // 2343336179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_bDisableToneCurve_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If true the Filmic Tone Curve will not be applied. Disabling this will allow you to export linear data for EXRs. Force Disabled if Open Color IO is enabled. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineColorSetting.h" },
		{ "ToolTip", "If true the Filmic Tone Curve will not be applied. Disabling this will allow you to export linear data for EXRs. Force Disabled if Open Color IO is enabled." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_bDisableToneCurve_SetBit(void* Obj)
	{
		((UMoviePipelineColorSetting*)Obj)->bDisableToneCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_bDisableToneCurve = { "bDisableToneCurve", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineColorSetting), &Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_bDisableToneCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_bDisableToneCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_bDisableToneCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineColorSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_OCIOConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineColorSetting_Statics::NewProp_bDisableToneCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineColorSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineColorSetting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineColorSetting_Statics::ClassParams = {
		&UMoviePipelineColorSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineColorSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineColorSetting_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineColorSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineColorSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineColorSetting()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineColorSetting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineColorSetting.OuterSingleton, Z_Construct_UClass_UMoviePipelineColorSetting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineColorSetting.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineColorSetting>()
	{
		return UMoviePipelineColorSetting::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineColorSetting);
	UMoviePipelineColorSetting::~UMoviePipelineColorSetting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineColorSetting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineColorSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineColorSetting, UMoviePipelineColorSetting::StaticClass, TEXT("UMoviePipelineColorSetting"), &Z_Registration_Info_UClass_UMoviePipelineColorSetting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineColorSetting), 3977578145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineColorSetting_h_1891200750(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineColorSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineColorSetting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
