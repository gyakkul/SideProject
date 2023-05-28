// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineCommandLineEncoder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineCommandLineEncoder() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoder();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoder_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality;
	static UEnum* EMoviePipelineEncodeQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("EMoviePipelineEncodeQuality"));
		}
		return Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<EMoviePipelineEncodeQuality>()
	{
		return EMoviePipelineEncodeQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::Enumerators[] = {
		{ "EMoviePipelineEncodeQuality::Low", (int64)EMoviePipelineEncodeQuality::Low },
		{ "EMoviePipelineEncodeQuality::Medium", (int64)EMoviePipelineEncodeQuality::Medium },
		{ "EMoviePipelineEncodeQuality::High", (int64)EMoviePipelineEncodeQuality::High },
		{ "EMoviePipelineEncodeQuality::Epic", (int64)EMoviePipelineEncodeQuality::Epic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Epic.Name", "EMoviePipelineEncodeQuality::Epic" },
		{ "High.Name", "EMoviePipelineEncodeQuality::High" },
		{ "Low.Name", "EMoviePipelineEncodeQuality::Low" },
		{ "Medium.Name", "EMoviePipelineEncodeQuality::Medium" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"EMoviePipelineEncodeQuality",
		"EMoviePipelineEncodeQuality",
		Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality.InnerSingleton;
	}
	void UMoviePipelineCommandLineEncoder::StaticRegisterNativesUMoviePipelineCommandLineEncoder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineCommandLineEncoder);
	UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoder_NoRegister()
	{
		return UMoviePipelineCommandLineEncoder::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormatOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormatOverride;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Quality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCommandLineArgs_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalCommandLineArgs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteSourceFiles_MetaData[];
#endif
		static void NewProp_bDeleteSourceFiles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteSourceFiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipEncodeOnRenderCanceled_MetaData[];
#endif
		static void NewProp_bSkipEncodeOnRenderCanceled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipEncodeOnRenderCanceled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteEachFrameDuration_MetaData[];
#endif
		static void NewProp_bWriteEachFrameDuration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteEachFrameDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineCommandLineEncoder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_FileNameFormatOverride_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** \n\x09* File name format string override. If specified it will override the FileNameFormat from the Output setting.\n\x09* If {shot_name} or {camera_name} is used, encoding will begin after each shot finishes rendering.\n\x09* Can be different from the main one in the Output setting so you can render out frames to individual\n\x09* shot folders but encode to one file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
		{ "ToolTip", "File name format string override. If specified it will override the FileNameFormat from the Output setting.\nIf {shot_name} or {camera_name} is used, encoding will begin after each shot finishes rendering.\nCan be different from the main one in the Output setting so you can render out frames to individual\nshot folders but encode to one file." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_FileNameFormatOverride = { "FileNameFormatOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoder, FileNameFormatOverride), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_FileNameFormatOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_FileNameFormatOverride_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** What encoding quality to use for this job? Exact command line arguments for each one are specified in Project Settings. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
		{ "ToolTip", "What encoding quality to use for this job? Exact command line arguments for each one are specified in Project Settings." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoder, Quality), Z_Construct_UEnum_MovieRenderPipelineCore_EMoviePipelineEncodeQuality, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_Quality_MetaData)) }; // 2964992391
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_AdditionalCommandLineArgs_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** Any additional arguments to pass to the CLI encode for this particular job. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
		{ "ToolTip", "Any additional arguments to pass to the CLI encode for this particular job." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_AdditionalCommandLineArgs = { "AdditionalCommandLineArgs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineCommandLineEncoder, AdditionalCommandLineArgs), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_AdditionalCommandLineArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_AdditionalCommandLineArgs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bDeleteSourceFiles_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** Should we delete the source files from disk after encoding? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
		{ "ToolTip", "Should we delete the source files from disk after encoding?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bDeleteSourceFiles_SetBit(void* Obj)
	{
		((UMoviePipelineCommandLineEncoder*)Obj)->bDeleteSourceFiles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bDeleteSourceFiles = { "bDeleteSourceFiles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineCommandLineEncoder), &Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bDeleteSourceFiles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bDeleteSourceFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bDeleteSourceFiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bSkipEncodeOnRenderCanceled_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** If a render was canceled (via hitting escape mid render) should we skip trying to encode the files we did produce? */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
		{ "ToolTip", "If a render was canceled (via hitting escape mid render) should we skip trying to encode the files we did produce?" },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bSkipEncodeOnRenderCanceled_SetBit(void* Obj)
	{
		((UMoviePipelineCommandLineEncoder*)Obj)->bSkipEncodeOnRenderCanceled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bSkipEncodeOnRenderCanceled = { "bSkipEncodeOnRenderCanceled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineCommandLineEncoder), &Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bSkipEncodeOnRenderCanceled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bSkipEncodeOnRenderCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bSkipEncodeOnRenderCanceled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bWriteEachFrameDuration_MetaData[] = {
		{ "Category", "Command Line Encoder" },
		{ "Comment", "/** Write the duration for each frame into the generated text file. Needed for some input types on some CLI encoding software. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineCommandLineEncoder.h" },
		{ "ToolTip", "Write the duration for each frame into the generated text file. Needed for some input types on some CLI encoding software." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bWriteEachFrameDuration_SetBit(void* Obj)
	{
		((UMoviePipelineCommandLineEncoder*)Obj)->bWriteEachFrameDuration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bWriteEachFrameDuration = { "bWriteEachFrameDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineCommandLineEncoder), &Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bWriteEachFrameDuration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bWriteEachFrameDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bWriteEachFrameDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_FileNameFormatOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_Quality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_AdditionalCommandLineArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bDeleteSourceFiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bSkipEncodeOnRenderCanceled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::NewProp_bWriteEachFrameDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineCommandLineEncoder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::ClassParams = {
		&UMoviePipelineCommandLineEncoder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineCommandLineEncoder()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.OuterSingleton, Z_Construct_UClass_UMoviePipelineCommandLineEncoder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineCommandLineEncoder>()
	{
		return UMoviePipelineCommandLineEncoder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineCommandLineEncoder);
	UMoviePipelineCommandLineEncoder::~UMoviePipelineCommandLineEncoder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_Statics::EnumInfo[] = {
		{ EMoviePipelineEncodeQuality_StaticEnum, TEXT("EMoviePipelineEncodeQuality"), &Z_Registration_Info_UEnum_EMoviePipelineEncodeQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2964992391U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineCommandLineEncoder, UMoviePipelineCommandLineEncoder::StaticClass, TEXT("UMoviePipelineCommandLineEncoder"), &Z_Registration_Info_UClass_UMoviePipelineCommandLineEncoder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineCommandLineEncoder), 2792909934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_80276646(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineCommandLineEncoder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
