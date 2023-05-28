// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MoviePipelineAppleProResOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineAppleProResOutput() {}
// Cross Module References
	APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UMoviePipelineAppleProResOutput();
	APPLEPRORESMEDIA_API UClass* Z_Construct_UClass_UMoviePipelineAppleProResOutput_NoRegister();
	APPLEPRORESMEDIA_API UEnum* Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineVideoOutputBase();
	UPackage* Z_Construct_UPackage__Script_AppleProResMedia();
// End Cross Module References
	void UMoviePipelineAppleProResOutput::StaticRegisterNativesUMoviePipelineAppleProResOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineAppleProResOutput);
	UClass* Z_Construct_UClass_UMoviePipelineAppleProResOutput_NoRegister()
	{
		return UMoviePipelineAppleProResOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Codec_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Codec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDropFrameTimecode_MetaData[];
#endif
		static void NewProp_bDropFrameTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropFrameTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaximumEncodingThreads_MetaData[];
#endif
		static void NewProp_bOverrideMaximumEncodingThreads_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaximumEncodingThreads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfEncodingThreads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfEncodingThreads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineVideoOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleProResMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Forward Declare\n" },
		{ "IncludePath", "MoviePipelineAppleProResOutput.h" },
		{ "ModuleRelativePath", "Private/MoviePipelineAppleProResOutput.h" },
		{ "ToolTip", "Forward Declare" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_Codec_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_Codec_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Which Apple ProRes codec should we use? See Apple documentation for more specifics. Uses Rec 709 color primaries. */" },
		{ "ModuleRelativePath", "Private/MoviePipelineAppleProResOutput.h" },
		{ "ToolTip", "Which Apple ProRes codec should we use? See Apple documentation for more specifics. Uses Rec 709 color primaries." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAppleProResOutput, Codec), Z_Construct_UEnum_AppleProResMedia_EAppleProResEncoderCodec, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_Codec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_Codec_MetaData)) }; // 3236136595
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bDropFrameTimecode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the embedded timecode track be written using drop-frame format? Only applicable if the sequence framerate is 29.97 */" },
		{ "ModuleRelativePath", "Private/MoviePipelineAppleProResOutput.h" },
		{ "ToolTip", "Should the embedded timecode track be written using drop-frame format? Only applicable if the sequence framerate is 29.97" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bDropFrameTimecode_SetBit(void* Obj)
	{
		((UMoviePipelineAppleProResOutput*)Obj)->bDropFrameTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bDropFrameTimecode = { "bDropFrameTimecode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineAppleProResOutput), &Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bDropFrameTimecode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bDropFrameTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bDropFrameTimecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bOverrideMaximumEncodingThreads_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should we override the maximum number of encoding threads? */" },
		{ "ModuleRelativePath", "Private/MoviePipelineAppleProResOutput.h" },
		{ "ToolTip", "Should we override the maximum number of encoding threads?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bOverrideMaximumEncodingThreads_SetBit(void* Obj)
	{
		((UMoviePipelineAppleProResOutput*)Obj)->bOverrideMaximumEncodingThreads = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bOverrideMaximumEncodingThreads = { "bOverrideMaximumEncodingThreads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineAppleProResOutput), &Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bOverrideMaximumEncodingThreads_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bOverrideMaximumEncodingThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bOverrideMaximumEncodingThreads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_MaxNumberOfEncodingThreads_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** What is the maximum number of threads the encoder should use to encode frames with? Zero means auto-determine based on hardware. */" },
		{ "EditCondition", "bOverrideMaximumEncodingThreads" },
		{ "ModuleRelativePath", "Private/MoviePipelineAppleProResOutput.h" },
		{ "ToolTip", "What is the maximum number of threads the encoder should use to encode frames with? Zero means auto-determine based on hardware." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_MaxNumberOfEncodingThreads = { "MaxNumberOfEncodingThreads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineAppleProResOutput, MaxNumberOfEncodingThreads), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_MaxNumberOfEncodingThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_MaxNumberOfEncodingThreads_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_Codec_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_Codec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bDropFrameTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_bOverrideMaximumEncodingThreads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::NewProp_MaxNumberOfEncodingThreads,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineAppleProResOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::ClassParams = {
		&UMoviePipelineAppleProResOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineAppleProResOutput()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineAppleProResOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineAppleProResOutput.OuterSingleton, Z_Construct_UClass_UMoviePipelineAppleProResOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineAppleProResOutput.OuterSingleton;
	}
	template<> APPLEPRORESMEDIA_API UClass* StaticClass<UMoviePipelineAppleProResOutput>()
	{
		return UMoviePipelineAppleProResOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineAppleProResOutput);
	UMoviePipelineAppleProResOutput::~UMoviePipelineAppleProResOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MoviePipelineAppleProResOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MoviePipelineAppleProResOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineAppleProResOutput, UMoviePipelineAppleProResOutput::StaticClass, TEXT("UMoviePipelineAppleProResOutput"), &Z_Registration_Info_UClass_UMoviePipelineAppleProResOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineAppleProResOutput), 3099873195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MoviePipelineAppleProResOutput_h_384343247(TEXT("/Script/AppleProResMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MoviePipelineAppleProResOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AppleProResMedia_Source_AppleProResMedia_Private_MoviePipelineAppleProResOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
