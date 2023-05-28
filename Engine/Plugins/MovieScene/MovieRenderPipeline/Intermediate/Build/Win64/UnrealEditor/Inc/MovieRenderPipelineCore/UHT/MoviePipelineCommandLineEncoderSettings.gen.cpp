// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineCommandLineEncoderSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineCommandLineEncoderSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	void UMoviePipelineCommandLineEncoderSettings::StaticRegisterNativesUMoviePipelineCommandLineEncoderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCommandLineEncoderSettings);
	UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_NoRegister()
	{
		return UMoviePipelineCommandLineEncoderSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutablePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExecutablePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodecHelpText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CodecHelpText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoCodec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoCodec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioCodec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioCodec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFileExtension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFileExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandLineFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandLineFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoInputStringFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VideoInputStringFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioInputStringFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioInputStringFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodeSettings_Low_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EncodeSettings_Low;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodeSettings_Med_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EncodeSettings_Med;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodeSettings_High_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EncodeSettings_High;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodeSettings_Epic_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EncodeSettings_Epic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Movie Pipeline CLI Encoder" },
		{ "IncludePath", "MoviePipelineCommandLineEncoderSettings.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_ExecutablePath_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** Path to the executable (including extension). Can just be \"ffmpeg.exe\" if it can be located via PATH directories. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "Path to the executable (including extension). Can just be \"ffmpeg.exe\" if it can be located via PATH directories." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_ExecutablePath = { "ExecutablePath", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, ExecutablePath), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_ExecutablePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_ExecutablePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CodecHelpText_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CodecHelpText = { "CodecHelpText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, CodecHelpText), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CodecHelpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CodecHelpText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoCodec_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** Which video codec should we use? Run 'MovieRenderPipeline.DumpCLIEncoderCodecs' for options. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "Which video codec should we use? Run 'MovieRenderPipeline.DumpCLIEncoderCodecs' for options." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoCodec = { "VideoCodec", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, VideoCodec), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoCodec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoCodec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioCodec_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** Which audio codec should we use? Run 'MovieRenderPipeline.DumpCLIEncoderCodecs' for options. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "Which audio codec should we use? Run 'MovieRenderPipeline.DumpCLIEncoderCodecs' for options." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioCodec = { "AudioCodec", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, AudioCodec), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioCodec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioCodec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_OutputFileExtension_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** Extension for the output files. Many encoders use this to determine the container type they are placed in. Should be without dot, ie: \"webm\". */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "Extension for the output files. Many encoders use this to determine the container type they are placed in. Should be without dot, ie: \"webm\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_OutputFileExtension = { "OutputFileExtension", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, OutputFileExtension), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_OutputFileExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_OutputFileExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CommandLineFormat_MetaData[] = {
		{ "Category", "Command Line Arguments" },
		{ "Comment", "/** The format string used when building the final command line argument to launch. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "The format string used when building the final command line argument to launch." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CommandLineFormat = { "CommandLineFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, CommandLineFormat), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CommandLineFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CommandLineFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoInputStringFormat_MetaData[] = {
		{ "Category", "Command Line Arguments" },
		{ "Comment", "/** Format string used for each video input. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "Format string used for each video input." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoInputStringFormat = { "VideoInputStringFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, VideoInputStringFormat), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoInputStringFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoInputStringFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioInputStringFormat_MetaData[] = {
		{ "Category", "Command Line Arguments" },
		{ "Comment", "/** Format string used for each audio input. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "Format string used for each audio input." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioInputStringFormat = { "AudioInputStringFormat", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, AudioInputStringFormat), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioInputStringFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioInputStringFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Low_MetaData[] = {
		{ "Category", "Command Line Arguments" },
		{ "Comment", "/** The flags used for low quality encoding. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "The flags used for low quality encoding." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Low = { "EncodeSettings_Low", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_Low), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Low_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Low_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Med_MetaData[] = {
		{ "Category", "Command Line Arguments" },
		{ "Comment", "/** The flags used for medium quality encoding. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "The flags used for medium quality encoding." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Med = { "EncodeSettings_Med", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_Med), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Med_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Med_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_High_MetaData[] = {
		{ "Category", "Command Line Arguments" },
		{ "Comment", "/** The flags used for high quality encoding. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "The flags used for high quality encoding." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_High = { "EncodeSettings_High", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_High), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_High_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_High_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Epic_MetaData[] = {
		{ "Category", "Command Line Arguments" },
		{ "Comment", "/** The flags used for epic quality encoding. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoderSettings.h" },
		{ "ToolTip", "The flags used for epic quality encoding." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Epic = { "EncodeSettings_Epic", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoderSettings, EncodeSettings_Epic), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Epic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Epic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_ExecutablePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CodecHelpText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoCodec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioCodec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_OutputFileExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_CommandLineFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_VideoInputStringFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_AudioInputStringFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Low,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Med,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_High,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::NewProp_EncodeSettings_Epic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCommandLineEncoderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::ClassParams = {
		&UMoviePipelineCommandLineEncoderSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.OuterSingleton, Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCommandLineEncoderSettings>()
	{
		return UMoviePipelineCommandLineEncoderSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCommandLineEncoderSettings);
	UMoviePipelineCommandLineEncoderSettings::~UMoviePipelineCommandLineEncoderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineCommandLineEncoderSettings, UMoviePipelineCommandLineEncoderSettings::StaticClass, TEXT("UMoviePipelineCommandLineEncoderSettings"), &Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCommandLineEncoderSettings), 1029608118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_879285356(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoderSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
