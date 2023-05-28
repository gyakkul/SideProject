// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineFCPXMLExporterSetting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineFCPXMLExporterSetting() {}
// Cross Module References
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineFCPXMLExporter();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineFCPXMLExporter_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputBase();
	MOVIERENDERPIPELINECORE_API UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FCPXMLExportDataSource;
	static UEnum* FCPXMLExportDataSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource, (UObject*)Z_Construct_UPackage__Script_MovieRenderPipelineCore(), TEXT("FCPXMLExportDataSource"));
		}
		return Z_Registration_Info_UEnum_FCPXMLExportDataSource.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UEnum* StaticEnum<FCPXMLExportDataSource>()
	{
		return FCPXMLExportDataSource_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::Enumerators[] = {
		{ "FCPXMLExportDataSource::OutputMetadata", (int64)FCPXMLExportDataSource::OutputMetadata },
		{ "FCPXMLExportDataSource::SequenceData", (int64)FCPXMLExportDataSource::SequenceData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineFCPXMLExporterSetting.h" },
		{ "OutputMetadata.Name", "FCPXMLExportDataSource::OutputMetadata" },
		{ "SequenceData.Name", "FCPXMLExportDataSource::SequenceData" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
		nullptr,
		"FCPXMLExportDataSource",
		"FCPXMLExportDataSource",
		Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource()
	{
		if (!Z_Registration_Info_UEnum_FCPXMLExportDataSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FCPXMLExportDataSource.InnerSingleton, Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FCPXMLExportDataSource.InnerSingleton;
	}
	void UMoviePipelineFCPXMLExporter::StaticRegisterNativesUMoviePipelineFCPXMLExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineFCPXMLExporter);
	UClass* Z_Construct_UClass_UMoviePipelineFCPXMLExporter_NoRegister()
	{
		return UMoviePipelineFCPXMLExporter::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileNameFormatOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileNameFormatOverride;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineOutputBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineFCPXMLExporterSetting.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineFCPXMLExporterSetting.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_FileNameFormatOverride_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** File name format string override. If specified it will override the FileNameFormat from the Output setting. Can include folder prefixes, and format string tags ({sequence_name}, etc.) */" },
		{ "ModuleRelativePath", "Public/MoviePipelineFCPXMLExporterSetting.h" },
		{ "ToolTip", "File name format string override. If specified it will override the FileNameFormat from the Output setting. Can include folder prefixes, and format string tags ({sequence_name}, etc.)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_FileNameFormatOverride = { "FileNameFormatOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineFCPXMLExporter, FileNameFormatOverride), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_FileNameFormatOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_FileNameFormatOverride_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_DataSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_DataSource_MetaData[] = {
		{ "Category", "File Output" },
		{ "Comment", "/** Whether to build the FCPXML from sequence data directly (for reimporting) or from actual frame output data (for post processing) */" },
		{ "ModuleRelativePath", "Public/MoviePipelineFCPXMLExporterSetting.h" },
		{ "ToolTip", "Whether to build the FCPXML from sequence data directly (for reimporting) or from actual frame output data (for post processing)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineFCPXMLExporter, DataSource), Z_Construct_UEnum_MovieRenderPipelineCore_FCPXMLExportDataSource, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_DataSource_MetaData)) }; // 1570331617
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_FileNameFormatOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_DataSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::NewProp_DataSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineFCPXMLExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::ClassParams = {
		&UMoviePipelineFCPXMLExporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineFCPXMLExporter()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.OuterSingleton, Z_Construct_UClass_UMoviePipelineFCPXMLExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineFCPXMLExporter>()
	{
		return UMoviePipelineFCPXMLExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineFCPXMLExporter);
	UMoviePipelineFCPXMLExporter::~UMoviePipelineFCPXMLExporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_Statics::EnumInfo[] = {
		{ FCPXMLExportDataSource_StaticEnum, TEXT("FCPXMLExportDataSource"), &Z_Registration_Info_UEnum_FCPXMLExportDataSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1570331617U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineFCPXMLExporter, UMoviePipelineFCPXMLExporter::StaticClass, TEXT("UMoviePipelineFCPXMLExporter"), &Z_Registration_Info_UClass_UMoviePipelineFCPXMLExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineFCPXMLExporter), 1709784945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_4231140080(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineFCPXMLExporterSetting_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
