// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistrySource_DataTable.h"
#include "DataRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistrySource_DataTable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource_DataTable();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource_DataTable_NoRegister();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource_DataTable();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource_DataTable_NoRegister();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules;
class UScriptStruct* FDataRegistrySource_DataTableRules::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("DataRegistrySource_DataTableRules"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules.OuterSingleton;
}
template<> DATAREGISTRY_API UScriptStruct* StaticStruct<FDataRegistrySource_DataTableRules>()
{
	return FDataRegistrySource_DataTableRules::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrecacheTable_MetaData[];
#endif
		static void NewProp_bPrecacheTable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrecacheTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTableKeepSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedTableKeepSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Rules struct for data table access */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Rules struct for data table access" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistrySource_DataTableRules>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_bPrecacheTable_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** True if the entire table should be loaded into memory when the source is loaded, false if the table is loaded on demand */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "True if the entire table should be loaded into memory when the source is loaded, false if the table is loaded on demand" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_bPrecacheTable_SetBit(void* Obj)
	{
		((FDataRegistrySource_DataTableRules*)Obj)->bPrecacheTable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_bPrecacheTable = { "bPrecacheTable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDataRegistrySource_DataTableRules), &Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_bPrecacheTable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_bPrecacheTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_bPrecacheTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_CachedTableKeepSeconds_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Time in seconds to keep cached table alive if hard reference is off. 0 will release immediately, -1 will never release */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Time in seconds to keep cached table alive if hard reference is off. 0 will release immediately, -1 will never release" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_CachedTableKeepSeconds = { "CachedTableKeepSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistrySource_DataTableRules, CachedTableKeepSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_CachedTableKeepSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_CachedTableKeepSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_bPrecacheTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewProp_CachedTableKeepSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		&NewStructOps,
		"DataRegistrySource_DataTableRules",
		sizeof(FDataRegistrySource_DataTableRules),
		alignof(FDataRegistrySource_DataTableRules),
		Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules.InnerSingleton;
	}
	void UDataRegistrySource_DataTable::StaticRegisterNativesUDataRegistrySource_DataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataRegistrySource_DataTable);
	UClass* Z_Construct_UClass_UDataRegistrySource_DataTable_NoRegister()
	{
		return UDataRegistrySource_DataTable::StaticClass();
	}
	struct Z_Construct_UClass_UDataRegistrySource_DataTable_Statics
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
	UObject* (*const Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataRegistrySource,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Data source that loads from a specific data table containing the same type of structs as the registry */" },
		{ "DisplayName", "DataTable Source" },
		{ "IncludePath", "DataRegistrySource_DataTable.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Data source that loads from a specific data table containing the same type of structs as the registry" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_SourceTable_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** What table to load from */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "What table to load from" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_SourceTable = { "SourceTable", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_DataTable, SourceTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_SourceTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_SourceTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_TableRules_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Access rules */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Access rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_TableRules = { "TableRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_DataTable, TableRules), Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_TableRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_TableRules_MetaData)) }; // 4210533188
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_CachedTable_MetaData[] = {
		{ "Comment", "/** Hard ref to loaded table */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Hard ref to loaded table" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_CachedTable = { "CachedTable", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_DataTable, CachedTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_CachedTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_CachedTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_PreloadTable_MetaData[] = {
		{ "Comment", "/** Preload table ref, will be set if this is a hard source */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Preload table ref, will be set if this is a hard source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_PreloadTable = { "PreloadTable", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource_DataTable, PreloadTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_PreloadTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_PreloadTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_SourceTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_TableRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_CachedTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::NewProp_PreloadTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataRegistrySource_DataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::ClassParams = {
		&UDataRegistrySource_DataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::PropPointers),
		0,
		0x00B030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataRegistrySource_DataTable()
	{
		if (!Z_Registration_Info_UClass_UDataRegistrySource_DataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataRegistrySource_DataTable.OuterSingleton, Z_Construct_UClass_UDataRegistrySource_DataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataRegistrySource_DataTable.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UDataRegistrySource_DataTable>()
	{
		return UDataRegistrySource_DataTable::StaticClass();
	}
	UDataRegistrySource_DataTable::UDataRegistrySource_DataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataRegistrySource_DataTable);
	UDataRegistrySource_DataTable::~UDataRegistrySource_DataTable() {}
	void UMetaDataRegistrySource_DataTable::StaticRegisterNativesUMetaDataRegistrySource_DataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaDataRegistrySource_DataTable);
	UClass* Z_Construct_UClass_UMetaDataRegistrySource_DataTable_NoRegister()
	{
		return UMetaDataRegistrySource_DataTable::StaticClass();
	}
	struct Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics
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
	UObject* (*const Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetaDataRegistrySource,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Meta source that will generate DataTable sources at runtime based on a directory scan or asset registration */" },
		{ "DisplayName", "DataTable Meta Source" },
		{ "IncludePath", "DataRegistrySource_DataTable.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Meta source that will generate DataTable sources at runtime based on a directory scan or asset registration" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_CreatedSource_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** What specific source class to spawn */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "What specific source class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_CreatedSource = { "CreatedSource", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaDataRegistrySource_DataTable, CreatedSource), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataRegistrySource_DataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_CreatedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_CreatedSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_TableRules_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Access rules */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource_DataTable.h" },
		{ "ToolTip", "Access rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_TableRules = { "TableRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaDataRegistrySource_DataTable, TableRules), Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules, METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_TableRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_TableRules_MetaData)) }; // 4210533188
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_CreatedSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::NewProp_TableRules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaDataRegistrySource_DataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::ClassParams = {
		&UMetaDataRegistrySource_DataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::PropPointers),
		0,
		0x00B030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaDataRegistrySource_DataTable()
	{
		if (!Z_Registration_Info_UClass_UMetaDataRegistrySource_DataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaDataRegistrySource_DataTable.OuterSingleton, Z_Construct_UClass_UMetaDataRegistrySource_DataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaDataRegistrySource_DataTable.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UMetaDataRegistrySource_DataTable>()
	{
		return UMetaDataRegistrySource_DataTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaDataRegistrySource_DataTable);
	UMetaDataRegistrySource_DataTable::~UMetaDataRegistrySource_DataTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_Statics::ScriptStructInfo[] = {
		{ FDataRegistrySource_DataTableRules::StaticStruct, Z_Construct_UScriptStruct_FDataRegistrySource_DataTableRules_Statics::NewStructOps, TEXT("DataRegistrySource_DataTableRules"), &Z_Registration_Info_UScriptStruct_DataRegistrySource_DataTableRules, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistrySource_DataTableRules), 4210533188U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataRegistrySource_DataTable, UDataRegistrySource_DataTable::StaticClass, TEXT("UDataRegistrySource_DataTable"), &Z_Registration_Info_UClass_UDataRegistrySource_DataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataRegistrySource_DataTable), 1072916345U) },
		{ Z_Construct_UClass_UMetaDataRegistrySource_DataTable, UMetaDataRegistrySource_DataTable::StaticClass, TEXT("UMetaDataRegistrySource_DataTable"), &Z_Registration_Info_UClass_UMetaDataRegistrySource_DataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaDataRegistrySource_DataTable), 2208921591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_2533091678(TEXT("/Script/DataRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_DataTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
