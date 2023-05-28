// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TableRowBase;
class UScriptStruct* FTableRowBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TableRowBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TableRowBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TableRowBase"));
	}
	return Z_Registration_Info_UScriptStruct_TableRowBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTableRowBase>()
{
	return FTableRowBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTableRowBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all table row structs to inherit from.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Base class for all table row structs to inherit from." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTableRowBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableRowBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TableRowBase",
		sizeof(FTableRowBase),
		alignof(FTableRowBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase()
	{
		if (!Z_Registration_Info_UScriptStruct_TableRowBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TableRowBase.InnerSingleton, Z_Construct_UScriptStruct_FTableRowBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TableRowBase.InnerSingleton;
	}
	void UDataTable::StaticRegisterNativesUDataTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataTable);
	UClass* Z_Construct_UClass_UDataTable_NoRegister()
	{
		return UDataTable::StaticClass();
	}
	struct Z_Construct_UClass_UDataTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RowStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStripFromClientBuilds_MetaData[];
#endif
		static void NewProp_bStripFromClientBuilds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripFromClientBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreExtraFields_MetaData[];
#endif
		static void NewProp_bIgnoreExtraFields_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreExtraFields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMissingFields_MetaData[];
#endif
		static void NewProp_bIgnoreMissingFields_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMissingFields;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportKeyField_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportKeyField;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowStructName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowStructName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowStructPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowStructPathName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RowsSerializedWithTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowsSerializedWithTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowsSerializedWithTags;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemporarilyReferencedObjects_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporarilyReferencedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TemporarilyReferencedObjects;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Imported spreadsheet table.\n */" },
		{ "IncludePath", "Engine/DataTable.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Imported spreadsheet table." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct_MetaData[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Structure to use for each row of the table, must inherit from FTableRowBase */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Structure to use for each row of the table, must inherit from FTableRowBase" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct = { "RowStruct", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, RowStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_MetaData[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Set to true to not cook this data table into client builds. Useful for sensitive tables that only servers should know about. */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to not cook this data table into client builds. Useful for sensitive tables that only servers should know about." },
	};
#endif
	void Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_SetBit(void* Obj)
	{
		((UDataTable*)Obj)->bStripFromClientBuilds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds = { "bStripFromClientBuilds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Set to true to ignore extra fields in the import data, if false it will warn about them */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to ignore extra fields in the import data, if false it will warn about them" },
	};
#endif
	void Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_SetBit(void* Obj)
	{
		((UDataTable*)Obj)->bIgnoreExtraFields = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields = { "bIgnoreExtraFields", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Set to true to ignore any fields that are expected but missing, if false it will warn about them */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Set to true to ignore any fields that are expected but missing, if false it will warn about them" },
	};
#endif
	void Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_SetBit(void* Obj)
	{
		((UDataTable*)Obj)->bIgnoreMissingFields = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields = { "bIgnoreMissingFields", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDataTable), &Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField_MetaData[] = {
		{ "Category", "ImportOptions" },
		{ "Comment", "/** Explicit field in import data to use as key. If this is empty it uses Name for JSON and the first field found for CSV */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Explicit field in import data to use as key. If this is empty it uses Name for JSON and the first field found for CSV" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField = { "ImportKeyField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, ImportKeyField), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSource" },
		{ "Comment", "/** The file this data table was imported from, may be empty */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The file this data table was imported from, may be empty" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The filename imported to create this object. Relative to this object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, ImportPath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName_MetaData[] = {
		{ "Comment", "/** The name of the RowStruct we were using when we were last saved */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The name of the RowStruct we were using when we were last saved" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName = { "RowStructName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, RowStructName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructPathName_MetaData[] = {
		{ "Comment", "/** The name of the RowStruct we were using when we were last saved */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "The name of the RowStruct we were using when we were last saved" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructPathName = { "RowStructPathName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, RowStructPathName), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructPathName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_Inner = { "RowsSerializedWithTags", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_MetaData[] = {
		{ "Comment", "/** When RowStruct is being modified, row data is stored serialized with tags */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "When RowStruct is being modified, row data is stored serialized with tags" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags = { "RowsSerializedWithTags", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, RowsSerializedWithTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_ElementProp = { "TemporarilyReferencedObjects", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects = { "TemporarilyReferencedObjects", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataTable, TemporarilyReferencedObjects), METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bStripFromClientBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreExtraFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_bIgnoreMissingFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_ImportKeyField,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_ImportPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowStructPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_RowsSerializedWithTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataTable_Statics::NewProp_TemporarilyReferencedObjects,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataTable_Statics::ClassParams = {
		&UDataTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataTable()
	{
		if (!Z_Registration_Info_UClass_UDataTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataTable.OuterSingleton, Z_Construct_UClass_UDataTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataTable.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataTable>()
	{
		return UDataTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataTable);
	IMPLEMENT_FARCHIVE_SERIALIZER(UDataTable)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataTableRowHandle;
class UScriptStruct* FDataTableRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataTableRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableRowHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataTableRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_DataTableRowHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataTableRowHandle>()
{
	return FDataTableRowHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataTableRowHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a particular row in a table*/" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Handle to a particular row in a table" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableRowHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTableRowHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataTableRowHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "DataTableRowHandle" },
		{ "Comment", "/** Name of row in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataTableRowHandle, RowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewProp_RowName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DataTableRowHandle",
		sizeof(FDataTableRowHandle),
		alignof(FDataTableRowHandle),
		Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_DataTableRowHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataTableRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataTableRowHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataTableCategoryHandle;
class UScriptStruct* FDataTableCategoryHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableCategoryHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataTableCategoryHandle"));
	}
	return Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataTableCategoryHandle>()
{
	return FDataTableCategoryHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowContents_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowContents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle to a particular set of rows in a table */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Handle to a particular set of rows in a table" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableCategoryHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataTableCategoryHandle, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Name of column in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Name of column in the table that we want" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataTableCategoryHandle, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents_MetaData[] = {
		{ "Category", "DataTableCategoryHandle" },
		{ "Comment", "/** Contents of rows in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/DataTable.h" },
		{ "ToolTip", "Contents of rows in the table that we want" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents = { "RowContents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataTableCategoryHandle, RowContents), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_ColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewProp_RowContents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DataTableCategoryHandle",
		sizeof(FDataTableCategoryHandle),
		alignof(FDataTableCategoryHandle),
		Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableCategoryHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.InnerSingleton, Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataTableCategoryHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ScriptStructInfo[] = {
		{ FTableRowBase::StaticStruct, Z_Construct_UScriptStruct_FTableRowBase_Statics::NewStructOps, TEXT("TableRowBase"), &Z_Registration_Info_UScriptStruct_TableRowBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTableRowBase), 3056277985U) },
		{ FDataTableRowHandle::StaticStruct, Z_Construct_UScriptStruct_FDataTableRowHandle_Statics::NewStructOps, TEXT("DataTableRowHandle"), &Z_Registration_Info_UScriptStruct_DataTableRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTableRowHandle), 2710926200U) },
		{ FDataTableCategoryHandle::StaticStruct, Z_Construct_UScriptStruct_FDataTableCategoryHandle_Statics::NewStructOps, TEXT("DataTableCategoryHandle"), &Z_Registration_Info_UScriptStruct_DataTableCategoryHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataTableCategoryHandle), 3722307012U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataTable, UDataTable::StaticClass, TEXT("UDataTable"), &Z_Registration_Info_UClass_UDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataTable), 2785143780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_197180642(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DataTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
