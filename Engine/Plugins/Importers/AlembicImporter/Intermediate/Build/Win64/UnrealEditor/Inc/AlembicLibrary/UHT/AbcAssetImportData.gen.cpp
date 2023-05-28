// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbcAssetImportData.h"
#include "AbcImportSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbcAssetImportData() {}
// Cross Module References
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcAssetImportData();
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcAssetImportData_NoRegister();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcCompressionSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcConversionSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcGeometryCacheSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcMaterialSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcNormalGenerationSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcSamplingSettings();
	ALEMBICLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAbcStaticMeshSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_AlembicLibrary();
// End Cross Module References
	void UAbcAssetImportData::StaticRegisterNativesUAbcAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbcAssetImportData);
	UClass* Z_Construct_UClass_UAbcAssetImportData_NoRegister()
	{
		return UAbcAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UAbcAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TrackNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalGenerationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalGenerationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCacheSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbcAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Base class for import data and options used when importing any asset from Alembic\n*/" },
		{ "IncludePath", "AbcAssetImportData.h" },
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
		{ "ToolTip", "Base class for import data and options used when importing any asset from Alembic" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_TrackNames_Inner = { "TrackNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_TrackNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_TrackNames = { "TrackNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, TrackNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_TrackNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_TrackNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_SamplingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_SamplingSettings = { "SamplingSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, SamplingSettings), Z_Construct_UScriptStruct_FAbcSamplingSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_SamplingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_SamplingSettings_MetaData)) }; // 1357415953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_NormalGenerationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_NormalGenerationSettings = { "NormalGenerationSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, NormalGenerationSettings), Z_Construct_UScriptStruct_FAbcNormalGenerationSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_NormalGenerationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_NormalGenerationSettings_MetaData)) }; // 1512432401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_MaterialSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_MaterialSettings = { "MaterialSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, MaterialSettings), Z_Construct_UScriptStruct_FAbcMaterialSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_MaterialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_MaterialSettings_MetaData)) }; // 1636184379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, CompressionSettings), Z_Construct_UScriptStruct_FAbcCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_CompressionSettings_MetaData)) }; // 2073802008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_StaticMeshSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_StaticMeshSettings = { "StaticMeshSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, StaticMeshSettings), Z_Construct_UScriptStruct_FAbcStaticMeshSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_StaticMeshSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_StaticMeshSettings_MetaData)) }; // 3624339423
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_GeometryCacheSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_GeometryCacheSettings = { "GeometryCacheSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, GeometryCacheSettings), Z_Construct_UScriptStruct_FAbcGeometryCacheSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_GeometryCacheSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_GeometryCacheSettings_MetaData)) }; // 3628307381
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_ConversionSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AbcAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_ConversionSettings = { "ConversionSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbcAssetImportData, ConversionSettings), Z_Construct_UScriptStruct_FAbcConversionSettings, METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_ConversionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_ConversionSettings_MetaData)) }; // 2998324651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbcAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_TrackNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_TrackNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_SamplingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_NormalGenerationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_MaterialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_CompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_StaticMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_GeometryCacheSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbcAssetImportData_Statics::NewProp_ConversionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbcAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbcAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbcAssetImportData_Statics::ClassParams = {
		&UAbcAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbcAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbcAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbcAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbcAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UAbcAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbcAssetImportData.OuterSingleton, Z_Construct_UClass_UAbcAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbcAssetImportData.OuterSingleton;
	}
	template<> ALEMBICLIBRARY_API UClass* StaticClass<UAbcAssetImportData>()
	{
		return UAbcAssetImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbcAssetImportData);
	UAbcAssetImportData::~UAbcAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbcAssetImportData, UAbcAssetImportData::StaticClass, TEXT("UAbcAssetImportData"), &Z_Registration_Info_UClass_UAbcAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbcAssetImportData), 756700566U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_607251923(TEXT("/Script/AlembicLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicLibrary_Public_AbcAssetImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
