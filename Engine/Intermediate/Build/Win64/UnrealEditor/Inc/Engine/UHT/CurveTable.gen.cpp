// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveTable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable();
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveTableMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveTableMode;
	static UEnum* ECurveTableMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECurveTableMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECurveTableMode"));
		}
		return Z_Registration_Info_UEnum_ECurveTableMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECurveTableMode>()
	{
		return ECurveTableMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECurveTableMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enumerators[] = {
		{ "ECurveTableMode::Empty", (int64)ECurveTableMode::Empty },
		{ "ECurveTableMode::SimpleCurves", (int64)ECurveTableMode::SimpleCurves },
		{ "ECurveTableMode::RichCurves", (int64)ECurveTableMode::RichCurves },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Whether the curve table contains simple, rich, or no curves\n*/" },
		{ "Empty.Name", "ECurveTableMode::Empty" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "RichCurves.Name", "ECurveTableMode::RichCurves" },
		{ "SimpleCurves.Name", "ECurveTableMode::SimpleCurves" },
		{ "ToolTip", "Whether the curve table contains simple, rich, or no curves" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECurveTableMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECurveTableMode",
		"ECurveTableMode",
		Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECurveTableMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECurveTableMode()
	{
		if (!Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton, Z_Construct_UEnum_Engine_ECurveTableMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECurveTableMode.InnerSingleton;
	}
	void UCurveTable::StaticRegisterNativesUCurveTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveTable);
	UClass* Z_Construct_UClass_UCurveTable_NoRegister()
	{
		return UCurveTable::StaticClass();
	}
	struct Z_Construct_UClass_UCurveTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Imported spreadsheet table as curves.\n */" },
		{ "IncludePath", "Engine/CurveTable.h" },
		{ "LoadBehavior", "LazyOnDemand" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Imported spreadsheet table as curves." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveTable, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The filename imported to create this object. Relative to this object's package, BaseDir() or absolute */" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "The filename imported to create this object. Relative to this object's package, BaseDir() or absolute" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveTable, ImportPath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveTable_Statics::NewProp_AssetImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveTable_Statics::NewProp_ImportPath,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveTable_Statics::ClassParams = {
		&UCurveTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UCurveTable_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::PropPointers), 0),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveTable()
	{
		if (!Z_Registration_Info_UClass_UCurveTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveTable.OuterSingleton, Z_Construct_UClass_UCurveTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveTable.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCurveTable>()
	{
		return UCurveTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveTable);
	UCurveTable::~UCurveTable() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCurveTable)
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveTableRowHandle;
class UScriptStruct* FCurveTableRowHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveTableRowHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveTableRowHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveTableRowHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveTableRowHandle"));
	}
	return Z_Registration_Info_UScriptStruct_CurveTableRowHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveTableRowHandle>()
{
	return FCurveTableRowHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Handle to a particular row in a table.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Handle to a particular row in a table." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveTableRowHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable_MetaData[] = {
		{ "Category", "CurveTableRowHandle" },
		{ "Comment", "/** Pointer to table we want a row from */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to table we want a row from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable = { "CurveTable", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveTableRowHandle, CurveTable), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName_MetaData[] = {
		{ "Category", "CurveTableRowHandle" },
		{ "Comment", "/** Name of row in the table that we want */" },
		{ "ModuleRelativePath", "Classes/Engine/CurveTable.h" },
		{ "ToolTip", "Name of row in the table that we want" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveTableRowHandle, RowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_CurveTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewProp_RowName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CurveTableRowHandle",
		sizeof(FCurveTableRowHandle),
		alignof(FCurveTableRowHandle),
		Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveTableRowHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveTableRowHandle.InnerSingleton, Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveTableRowHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::EnumInfo[] = {
		{ ECurveTableMode_StaticEnum, TEXT("ECurveTableMode"), &Z_Registration_Info_UEnum_ECurveTableMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3496499232U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ScriptStructInfo[] = {
		{ FCurveTableRowHandle::StaticStruct, Z_Construct_UScriptStruct_FCurveTableRowHandle_Statics::NewStructOps, TEXT("CurveTableRowHandle"), &Z_Registration_Info_UScriptStruct_CurveTableRowHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveTableRowHandle), 2401088054U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveTable, UCurveTable::StaticClass, TEXT("UCurveTable"), &Z_Registration_Info_UClass_UCurveTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveTable), 4070990001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_2117511821(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CurveTable_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
