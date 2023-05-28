// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TileMapAssetImportData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMapAssetImportData() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileMapAssetImportData();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileMapAssetImportData_NoRegister();
	PAPER2DEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FTileSetImportMapping();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileSetImportMapping;
class UScriptStruct* FTileSetImportMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileSetImportMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileSetImportMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileSetImportMapping, (UObject*)Z_Construct_UPackage__Script_Paper2DEditor(), TEXT("TileSetImportMapping"));
	}
	return Z_Registration_Info_UScriptStruct_TileSetImportMapping.OuterSingleton;
}
template<> PAPER2DEDITOR_API UScriptStruct* StaticStruct<FTileSetImportMapping>()
{
	return FTileSetImportMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileSetImportMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedTileSet_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ImportedTileSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedTexture_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ImportedTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/TileMapAssetImportData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileSetImportMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_SourceName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TileMapAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileSetImportMapping, SourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_SourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_SourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTileSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TileMapAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTileSet = { "ImportedTileSet", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileSetImportMapping, ImportedTileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTileSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TileMapAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTexture = { "ImportedTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileSetImportMapping, ImportedTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_SourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTileSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewProp_ImportedTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
		nullptr,
		&NewStructOps,
		"TileSetImportMapping",
		sizeof(FTileSetImportMapping),
		alignof(FTileSetImportMapping),
		Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileSetImportMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_TileSetImportMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileSetImportMapping.InnerSingleton, Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileSetImportMapping.InnerSingleton;
	}
	void UTileMapAssetImportData::StaticRegisterNativesUTileMapAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileMapAssetImportData);
	UClass* Z_Construct_UClass_UTileMapAssetImportData_NoRegister()
	{
		return UTileMapAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UTileMapAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileSetMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSetMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TileSetMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileMapAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for import data and options used when importing a tile map\n */" },
		{ "IncludePath", "TileMapAssetImportData.h" },
		{ "ModuleRelativePath", "Classes/TileMapAssetImportData.h" },
		{ "ToolTip", "Base class for import data and options used when importing a tile map" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTileMapAssetImportData_Statics::NewProp_TileSetMap_Inner = { "TileSetMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTileSetImportMapping, METADATA_PARAMS(nullptr, 0) }; // 1440512884
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapAssetImportData_Statics::NewProp_TileSetMap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TileMapAssetImportData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTileMapAssetImportData_Statics::NewProp_TileSetMap = { "TileSetMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileMapAssetImportData, TileSetMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTileMapAssetImportData_Statics::NewProp_TileSetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapAssetImportData_Statics::NewProp_TileSetMap_MetaData)) }; // 1440512884
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileMapAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapAssetImportData_Statics::NewProp_TileSetMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileMapAssetImportData_Statics::NewProp_TileSetMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileMapAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileMapAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileMapAssetImportData_Statics::ClassParams = {
		&UTileMapAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileMapAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapAssetImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileMapAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileMapAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UTileMapAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileMapAssetImportData.OuterSingleton, Z_Construct_UClass_UTileMapAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileMapAssetImportData.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UTileMapAssetImportData>()
	{
		return UTileMapAssetImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileMapAssetImportData);
	UTileMapAssetImportData::~UTileMapAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_Statics::ScriptStructInfo[] = {
		{ FTileSetImportMapping::StaticStruct, Z_Construct_UScriptStruct_FTileSetImportMapping_Statics::NewStructOps, TEXT("TileSetImportMapping"), &Z_Registration_Info_UScriptStruct_TileSetImportMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileSetImportMapping), 1440512884U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileMapAssetImportData, UTileMapAssetImportData::StaticClass, TEXT("UTileMapAssetImportData"), &Z_Registration_Info_UClass_UTileMapAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileMapAssetImportData), 4042436797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_2731710323(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapAssetImportData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
