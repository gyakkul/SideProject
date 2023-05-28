// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineWaveOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineWaveOutput() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineWaveOutput();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineWaveOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses();
// End Cross Module References
	void UMoviePipelineWaveOutput::StaticRegisterNativesUMoviePipelineWaveOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineWaveOutput);
	UClass* Z_Construct_UClass_UMoviePipelineWaveOutput_NoRegister()
	{
		return UMoviePipelineWaveOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineWaveOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormatOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormatOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineWaveOutput.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineWaveOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormatOverride_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/* File name format string override. If specified it will override the FileNameFormat from the Output setting. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineWaveOutput.h" },
		{ "ToolTip", "File name format string override. If specified it will override the FileNameFormat from the Output setting." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormatOverride = { "FileNameFormatOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineWaveOutput, FileNameFormatOverride), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormatOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormatOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::NewProp_FileNameFormatOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineWaveOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::ClassParams = {
		&UMoviePipelineWaveOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineWaveOutput()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineWaveOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineWaveOutput.OuterSingleton, Z_Construct_UClass_UMoviePipelineWaveOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineWaveOutput.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineWaveOutput>()
	{
		return UMoviePipelineWaveOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineWaveOutput);
	UMoviePipelineWaveOutput::~UMoviePipelineWaveOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineWaveOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineWaveOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineWaveOutput, UMoviePipelineWaveOutput::StaticClass, TEXT("UMoviePipelineWaveOutput"), &Z_Registration_Info_UClass_UMoviePipelineWaveOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineWaveOutput), 371911458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineWaveOutput_h_1015407779(TEXT("/Script/MovieRenderPipelineRenderPasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineWaveOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Public_MoviePipelineWaveOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
