// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistrySource_CurveTable.h"
#include "DataRegistry.h"
#include "DataRegistrySource_DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistrySource_CurveTable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource_CurveTable();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource_CurveTable_NoRegister();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource_CurveTable();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_NoRegister();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	void UDataRegistrySource_CurveTable::StaticRegisterNativesUDataRegistrySource_CurveTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataRegistrySource_CurveTable);
	UClass* Z_Construct_UClass_UDataRegistrySource_CurveTable_NoRegister()
	{
		return UDataRegistrySource_CurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTable_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TableRules;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreloadTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreloadTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataRegistrySource,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Data source that loads from a specific curve table asset */" },
		{ "DisplayName", "CurveTable Source" },
		{ "IncludePath", "DataRegistrySource_CurveTable.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "Data source that loads from a specific curve table asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_SourceTable_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** What table to load from */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "What table to load from" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_SourceTable = { "SourceTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_CurveTable, SourceTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_SourceTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_SourceTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_TableRules_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Access rules */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "Access rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_TableRules = { "TableRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_CurveTable, TableRules), Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_TableRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_TableRules_MetaData)) }; // 4210533188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_CachedTable_MetaData[] = {
		{ "Comment", "/** Hard ref to loaded table */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "Hard ref to loaded table" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_CachedTable = { "CachedTable", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_CurveTable, CachedTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_CachedTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_CachedTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_PreloadTable_MetaData[] = {
		{ "Comment", "/** Preload table ref, will be set if this is a hard source */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "Preload table ref, will be set if this is a hard source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_PreloadTable = { "PreloadTable", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_CurveTable, PreloadTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_PreloadTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_PreloadTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_SourceTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_TableRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_CachedTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::NewProp_PreloadTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataRegistrySource_CurveTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::ClassParams = {
		&UDataRegistrySource_CurveTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::PropPointers),
		0,
		0x00B030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataRegistrySource_CurveTable()
	{
		if (!Z_Registration_Info_UClass_UDataRegistrySource_CurveTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataRegistrySource_CurveTable.OuterSingleton, Z_Construct_UClass_UDataRegistrySource_CurveTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataRegistrySource_CurveTable.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UDataRegistrySource_CurveTable>()
	{
		return UDataRegistrySource_CurveTable::StaticClass();
	}
	UDataRegistrySource_CurveTable::UDataRegistrySource_CurveTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataRegistrySource_CurveTable);
	UDataRegistrySource_CurveTable::~UDataRegistrySource_CurveTable() {}
	void UMetaDataRegistrySource_CurveTable::StaticRegisterNativesUMetaDataRegistrySource_CurveTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaDataRegistrySource_CurveTable);
	UClass* Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_NoRegister()
	{
		return UMetaDataRegistrySource_CurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedSource_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CreatedSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TableRules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetaDataRegistrySource,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Meta source that will generate CurveTable sources at runtime based on a directory scan or asset registration */" },
		{ "DisplayName", "CurveTable Meta Source" },
		{ "IncludePath", "DataRegistrySource_CurveTable.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "Meta source that will generate CurveTable sources at runtime based on a directory scan or asset registration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_CreatedSource_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** What specific source class to spawn */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "What specific source class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_CreatedSource = { "CreatedSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaDataRegistrySource_CurveTable, CreatedSource), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataRegistrySource_CurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_CreatedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_CreatedSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_TableRules_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Access rules */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_CurveTable.h" },
		{ "ToolTip", "Access rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_TableRules = { "TableRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaDataRegistrySource_CurveTable, TableRules), Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules, METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_TableRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_TableRules_MetaData)) }; // 4210533188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_CreatedSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::NewProp_TableRules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaDataRegistrySource_CurveTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::ClassParams = {
		&UMetaDataRegistrySource_CurveTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::PropPointers),
		0,
		0x00B030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaDataRegistrySource_CurveTable()
	{
		if (!Z_Registration_Info_UClass_UMetaDataRegistrySource_CurveTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaDataRegistrySource_CurveTable.OuterSingleton, Z_Construct_UClass_UMetaDataRegistrySource_CurveTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaDataRegistrySource_CurveTable.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UMetaDataRegistrySource_CurveTable>()
	{
		return UMetaDataRegistrySource_CurveTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaDataRegistrySource_CurveTable);
	UMetaDataRegistrySource_CurveTable::~UMetaDataRegistrySource_CurveTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_CurveTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_CurveTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataRegistrySource_CurveTable, UDataRegistrySource_CurveTable::StaticClass, TEXT("UDataRegistrySource_CurveTable"), &Z_Registration_Info_UClass_UDataRegistrySource_CurveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataRegistrySource_CurveTable), 151235134U) },
		{ Z_Construct_UClass_UMetaDataRegistrySource_CurveTable, UMetaDataRegistrySource_CurveTable::StaticClass, TEXT("UMetaDataRegistrySource_CurveTable"), &Z_Registration_Info_UClass_UMetaDataRegistrySource_CurveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaDataRegistrySource_CurveTable), 3215330617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_CurveTable_h_1851934056(TEXT("/Script/DataRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_CurveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_CurveTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
