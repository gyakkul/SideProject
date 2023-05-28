// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MoviePipelineEXROutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineEXROutput() {}
// Cross Module References
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_NoRegister();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImageSequenceOutputBase();
	MOVIERENDERPIPELINERENDERPASSES_API UEnum* Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEXRCompressionFormat;
	static UEnum* EEXRCompressionFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEXRCompressionFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEXRCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses(), TEXT("EEXRCompressionFormat"));
		}
		return Z_Registration_Info_UEnum_EEXRCompressionFormat.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UEnum* StaticEnum<EEXRCompressionFormat>()
	{
		return EEXRCompressionFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::Enumerators[] = {
		{ "EEXRCompressionFormat::None", (int64)EEXRCompressionFormat::None },
		{ "EEXRCompressionFormat::PIZ", (int64)EEXRCompressionFormat::PIZ },
		{ "EEXRCompressionFormat::ZIP", (int64)EEXRCompressionFormat::ZIP },
		{ "EEXRCompressionFormat::DWAA", (int64)EEXRCompressionFormat::DWAA },
		{ "EEXRCompressionFormat::DWAB", (int64)EEXRCompressionFormat::DWAB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DWAA.Comment", "/** Lossy DCT-based compression for RGB channels. Alpha and other channels are uncompressed. More efficient than DWAB for partial buffer access on read in 3rd party tools. */" },
		{ "DWAA.Name", "EEXRCompressionFormat::DWAA" },
		{ "DWAA.ToolTip", "Lossy DCT-based compression for RGB channels. Alpha and other channels are uncompressed. More efficient than DWAB for partial buffer access on read in 3rd party tools." },
		{ "DWAB.Comment", "/** Similar to DWAA but goes in blocks of 256 scanlines instead of 32. More efficient disk space and faster to decode than DWAA. */" },
		{ "DWAB.Name", "EEXRCompressionFormat::DWAB" },
		{ "DWAB.ToolTip", "Similar to DWAA but goes in blocks of 256 scanlines instead of 32. More efficient disk space and faster to decode than DWAA." },
		{ "ModuleRelativePath", "Private/MoviePipelineEXROutput.h" },
		{ "None.Comment", "/** No compression is applied. */" },
		{ "None.Name", "EEXRCompressionFormat::None" },
		{ "None.ToolTip", "No compression is applied." },
		{ "PIZ.Comment", "/** Good compression quality for grainy images. Lossless.*/" },
		{ "PIZ.Name", "EEXRCompressionFormat::PIZ" },
		{ "PIZ.ToolTip", "Good compression quality for grainy images. Lossless." },
		{ "ZIP.Comment", "/** Good compression quality for images with low amounts of noise. Lossless. */" },
		{ "ZIP.Name", "EEXRCompressionFormat::ZIP" },
		{ "ZIP.ToolTip", "Good compression quality for images with low amounts of noise. Lossless." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
		nullptr,
		"EEXRCompressionFormat",
		"EEXRCompressionFormat",
		Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat()
	{
		if (!Z_Registration_Info_UEnum_EEXRCompressionFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEXRCompressionFormat.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEXRCompressionFormat.InnerSingleton;
	}
	void UMoviePipelineImageSequenceOutput_EXR::StaticRegisterNativesUMoviePipelineImageSequenceOutput_EXR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineImageSequenceOutput_EXR);
	UClass* Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_NoRegister()
	{
		return UMoviePipelineImageSequenceOutput_EXR::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Compression_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Compression_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Compression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMultilayer_MetaData[];
#endif
		static void NewProp_bMultilayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultilayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineImageSequenceOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineRenderPasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoviePipelineEXROutput.h" },
		{ "ModuleRelativePath", "Private/MoviePipelineEXROutput.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_MetaData[] = {
		{ "Category", "EXR" },
		{ "Comment", "/**\n\x09* Which compression method should the resulting EXR file be compressed with\n\x09*/" },
		{ "ModuleRelativePath", "Private/MoviePipelineEXROutput.h" },
		{ "ToolTip", "Which compression method should the resulting EXR file be compressed with" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression = { "Compression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineImageSequenceOutput_EXR, Compression), Z_Construct_UEnum_MovieRenderPipelineRenderPasses_EEXRCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_MetaData)) }; // 499214597
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_MetaData[] = {
		{ "Category", "EXR" },
		{ "Comment", "/**\n\x09* Should we write all render passes to the same exr file? Not all software supports multi-layer exr files.\n\x09*/" },
		{ "ModuleRelativePath", "Private/MoviePipelineEXROutput.h" },
		{ "ToolTip", "Should we write all render passes to the same exr file? Not all software supports multi-layer exr files." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_SetBit(void* Obj)
	{
		((UMoviePipelineImageSequenceOutput_EXR*)Obj)->bMultilayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer = { "bMultilayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineImageSequenceOutput_EXR), &Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_Compression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::NewProp_bMultilayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineImageSequenceOutput_EXR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::ClassParams = {
		&UMoviePipelineImageSequenceOutput_EXR::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.OuterSingleton, Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINERENDERPASSES_API UClass* StaticClass<UMoviePipelineImageSequenceOutput_EXR>()
	{
		return UMoviePipelineImageSequenceOutput_EXR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineImageSequenceOutput_EXR);
	UMoviePipelineImageSequenceOutput_EXR::~UMoviePipelineImageSequenceOutput_EXR() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_Statics::EnumInfo[] = {
		{ EEXRCompressionFormat_StaticEnum, TEXT("EEXRCompressionFormat"), &Z_Registration_Info_UEnum_EEXRCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 499214597U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineImageSequenceOutput_EXR, UMoviePipelineImageSequenceOutput_EXR::StaticClass, TEXT("UMoviePipelineImageSequenceOutput_EXR"), &Z_Registration_Info_UClass_UMoviePipelineImageSequenceOutput_EXR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineImageSequenceOutput_EXR), 1832735280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_2561437305(TEXT("/Script/MovieRenderPipelineRenderPasses"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineRenderPasses_Private_MoviePipelineEXROutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
