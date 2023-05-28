// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepOperationsLibrary.h"
#include "StaticMeshEditorSubsystemHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepOperationsLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepOperationsLibrary();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepOperationsLibrary_NoRegister();
	DATAPREPLIBRARIES_API UEnum* Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame();
	DATAPREPLIBRARIES_API UEnum* Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType();
	DATAPREPLIBRARIES_API UScriptStruct* Z_Construct_UScriptStruct_FLODGroupName();
	DATAPREPLIBRARIES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable();
	DATAPREPLIBRARIES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionArray();
	DATAPREPLIBRARIES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionOptions();
	DATAPREPLIBRARIES_API UScriptStruct* Z_Construct_UScriptStruct_FMeshSubstitutionDataTable();
	EDITORSCRIPTINGUTILITIES_API UEnum* Z_Construct_UEnum_EditorScriptingUtilities_EEditorScriptingStringMatchType();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	STATICMESHEDITOR_API UEnum* Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType();
	STATICMESHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshReductionOptions();
	UPackage* Z_Construct_UPackage__Script_DataprepLibraries();
// End Cross Module References

static_assert(std::is_polymorphic<FMaterialSubstitutionDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMaterialSubstitutionDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable;
class UScriptStruct* FMaterialSubstitutionDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("MaterialSubstitutionDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable.OuterSingleton;
}
template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<FMaterialSubstitutionDataTable>()
{
	return FMaterialSubstitutionDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StringMatch_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMatch_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialReplacement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialReplacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Simple struct for the table row used for UDataprepOperationsLibrary::SubstituteMaterials\n */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "* Simple struct for the table row used for UDataprepOperationsLibrary::SubstituteMaterials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialSubstitutionDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_SearchString_MetaData[] = {
		{ "Category", "MaterialSubstitutionTable" },
		{ "Comment", "/** Name of the material(s) to search for. Wildcard is supported */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Name of the material(s) to search for. Wildcard is supported" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_SearchString = { "SearchString", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSubstitutionDataTable, SearchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_SearchString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_SearchString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_StringMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_StringMatch_MetaData[] = {
		{ "Category", "MaterialSubstitutionTable" },
		{ "Comment", "/** Type of matching to perform with SearchString string */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Type of matching to perform with SearchString string" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_StringMatch = { "StringMatch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSubstitutionDataTable, StringMatch), Z_Construct_UEnum_EditorScriptingUtilities_EEditorScriptingStringMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_StringMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_StringMatch_MetaData)) }; // 2163096614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_MaterialReplacement_MetaData[] = {
		{ "Category", "MaterialSubstitutionTable" },
		{ "Comment", "/** Material to use for the substitution */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Material to use for the substitution" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_MaterialReplacement = { "MaterialReplacement", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSubstitutionDataTable, MaterialReplacement), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_MaterialReplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_MaterialReplacement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_SearchString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_StringMatch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_StringMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewProp_MaterialReplacement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"MaterialSubstitutionDataTable",
		sizeof(FMaterialSubstitutionDataTable),
		alignof(FMaterialSubstitutionDataTable),
		Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable.InnerSingleton, Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable;
class UScriptStruct* FMeshSubstitutionDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("MeshSubstitutionDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable.OuterSingleton;
}
template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<FMeshSubstitutionDataTable>()
{
	return FMeshSubstitutionDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StringMatch_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMatch_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshReplacement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshReplacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* DEPRECATED - Simple struct for the table row used for UDataprepOperationsLibrary::SubstituteMaterials\n*/" },
		{ "Deprecated", "4.25.0" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "* DEPRECATED - Simple struct for the table row used for UDataprepOperationsLibrary::SubstituteMaterials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshSubstitutionDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_SearchString_MetaData[] = {
		{ "Comment", "/** DEPRECATED - Name of the mesh(es) to search for. Wildcard is supported */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "DEPRECATED - Name of the mesh(es) to search for. Wildcard is supported" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_SearchString = { "SearchString", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSubstitutionDataTable, SearchString_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_SearchString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_SearchString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_StringMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_StringMatch_MetaData[] = {
		{ "Comment", "/** DEPRECATED - Type of matching to perform with SearchString string */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "DEPRECATED - Type of matching to perform with SearchString string" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_StringMatch = { "StringMatch", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSubstitutionDataTable, StringMatch_DEPRECATED), Z_Construct_UEnum_EditorScriptingUtilities_EEditorScriptingStringMatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_StringMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_StringMatch_MetaData)) }; // 2163096614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_MeshReplacement_MetaData[] = {
		{ "Comment", "/** DEPRECATED - Mesh to use for the substitution */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "DEPRECATED - Mesh to use for the substitution" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_MeshReplacement = { "MeshReplacement", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshSubstitutionDataTable, MeshReplacement_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_MeshReplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_MeshReplacement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_SearchString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_StringMatch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_StringMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewProp_MeshReplacement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		&NewStructOps,
		"MeshSubstitutionDataTable",
		sizeof(FMeshSubstitutionDataTable),
		alignof(FMeshSubstitutionDataTable),
		Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshSubstitutionDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable.InnerSingleton, Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LODGroupName;
class UScriptStruct* FLODGroupName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LODGroupName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LODGroupName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLODGroupName, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("LODGroupName"));
	}
	return Z_Registration_Info_UScriptStruct_LODGroupName.OuterSingleton;
}
template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<FLODGroupName>()
{
	return FLODGroupName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLODGroupName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODGroupName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Simple struct to set up LODGroup name on static meshes\n * This is for internal purpose only to allow users to select the name of the LODGroup\n * to apply on static meshes in UDataprepOperationsLibrary::SetLODGroup\n */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "* Simple struct to set up LODGroup name on static meshes\n* This is for internal purpose only to allow users to select the name of the LODGroup\n* to apply on static meshes in UDataprepOperationsLibrary::SetLODGroup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLODGroupName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLODGroupName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLODGroupName_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** Value of the name of LODGroup not the display name */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Value of the name of LODGroup not the display name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLODGroupName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLODGroupName, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FLODGroupName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODGroupName_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLODGroupName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLODGroupName_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLODGroupName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		&NewStructOps,
		"LODGroupName",
		sizeof(FLODGroupName),
		alignof(FLODGroupName),
		Z_Construct_UScriptStruct_FLODGroupName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODGroupName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLODGroupName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLODGroupName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLODGroupName()
	{
		if (!Z_Registration_Info_UScriptStruct_LODGroupName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LODGroupName.InnerSingleton, Z_Construct_UScriptStruct_FLODGroupName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LODGroupName.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshReductionOptions;
class UScriptStruct* FMeshReductionOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshReductionOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshReductionOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReductionOptions, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("MeshReductionOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MeshReductionOptions.OuterSingleton;
}
template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<FMeshReductionOptions>()
{
	return FMeshReductionOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshReductionOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReductionPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Simple struct to set up LODGroup name on static meshes\n * This is for internal purpose only to allow users to select the name of the LODGroup\n * to apply on static meshes in UDataprepOperationsLibrary::SetLODGroup\n */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "* Simple struct to set up LODGroup name on static meshes\n* This is for internal purpose only to allow users to select the name of the LODGroup\n* to apply on static meshes in UDataprepOperationsLibrary::SetLODGroup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReductionOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ReductionPercent_MetaData[] = {
		{ "Comment", "/** Value of the name of LODGroup not the display name */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Value of the name of LODGroup not the display name" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ReductionPercent = { "ReductionPercent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionOptions, ReductionPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ReductionPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ReductionPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Comment", "/** Value of the name of LODGroup not the display name */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Value of the name of LODGroup not the display name" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionOptions, ScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ScreenSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ReductionPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewProp_ScreenSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		&NewStructOps,
		"MeshReductionOptions",
		sizeof(FMeshReductionOptions),
		alignof(FMeshReductionOptions),
		Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshReductionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshReductionOptions.InnerSingleton, Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshReductionOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshReductionArray;
class UScriptStruct* FMeshReductionArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshReductionArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshReductionArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshReductionArray, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("MeshReductionArray"));
	}
	return Z_Registration_Info_UScriptStruct_MeshReductionArray.OuterSingleton;
}
template<> DATAPREPLIBRARIES_API UScriptStruct* StaticStruct<FMeshReductionArray>()
{
	return FMeshReductionArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshReductionArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Simple struct to set up LODGroup name on static meshes\n * This is for internal purpose only to allow users to select the name of the LODGroup\n * to apply on static meshes in UDataprepOperationsLibrary::SetLODGroup\n */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "* Simple struct to set up LODGroup name on static meshes\n* This is for internal purpose only to allow users to select the name of the LODGroup\n* to apply on static meshes in UDataprepOperationsLibrary::SetLODGroup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshReductionArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMeshReductionOptions, METADATA_PARAMS(nullptr, 0) }; // 2697971914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewProp_Array_MetaData[] = {
		{ "Comment", "/** Value of the name of LODGroup not the display name */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Value of the name of LODGroup not the display name" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshReductionArray, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewProp_Array_MetaData)) }; // 2697971914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshReductionArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewProp_Array_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewProp_Array,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshReductionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		&NewStructOps,
		"MeshReductionArray",
		sizeof(FMeshReductionArray),
		alignof(FMeshReductionArray),
		Z_Construct_UScriptStruct_FMeshReductionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshReductionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshReductionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshReductionArray()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshReductionArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshReductionArray.InnerSingleton, Z_Construct_UScriptStruct_FMeshReductionArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshReductionArray.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERandomizeTransformType;
	static UEnum* ERandomizeTransformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERandomizeTransformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERandomizeTransformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("ERandomizeTransformType"));
		}
		return Z_Registration_Info_UEnum_ERandomizeTransformType.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<ERandomizeTransformType>()
	{
		return ERandomizeTransformType_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::Enumerators[] = {
		{ "ERandomizeTransformType::Rotation", (int64)ERandomizeTransformType::Rotation },
		{ "ERandomizeTransformType::Location", (int64)ERandomizeTransformType::Location },
		{ "ERandomizeTransformType::Scale", (int64)ERandomizeTransformType::Scale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Location.Name", "ERandomizeTransformType::Location" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "Rotation.Name", "ERandomizeTransformType::Rotation" },
		{ "Scale.Name", "ERandomizeTransformType::Scale" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		"ERandomizeTransformType",
		"ERandomizeTransformType",
		Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType()
	{
		if (!Z_Registration_Info_UEnum_ERandomizeTransformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERandomizeTransformType.InnerSingleton, Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERandomizeTransformType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame;
	static UEnum* ERandomizeTransformReferenceFrame_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("ERandomizeTransformReferenceFrame"));
		}
		return Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<ERandomizeTransformReferenceFrame>()
	{
		return ERandomizeTransformReferenceFrame_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::Enumerators[] = {
		{ "ERandomizeTransformReferenceFrame::World", (int64)ERandomizeTransformReferenceFrame::World },
		{ "ERandomizeTransformReferenceFrame::Relative", (int64)ERandomizeTransformReferenceFrame::Relative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "Relative.Name", "ERandomizeTransformReferenceFrame::Relative" },
		{ "World.Name", "ERandomizeTransformReferenceFrame::World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		"ERandomizeTransformReferenceFrame",
		"ERandomizeTransformReferenceFrame",
		Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame()
	{
		if (!Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame.InnerSingleton, Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetNaniteSettings)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InSelectedObjects);
		P_GET_UBOOL(Z_Param_bInEnabled);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPositionPrecision);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPercentTriangles);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutModifiedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetNaniteSettings(Z_Param_Out_InSelectedObjects,Z_Param_bInEnabled,Z_Param_InPositionPrecision,Z_Param_InPercentTriangles,Z_Param_Out_OutModifiedObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execResizeTextures)
	{
		P_GET_TARRAY_REF(UTexture2D*,Z_Param_Out_InTextures);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMaxSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::ResizeTextures(Z_Param_Out_InTextures,Z_Param_InMaxSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetCollisionComplexity)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InSelectedObjects);
		P_GET_PROPERTY(FByteProperty,Z_Param_InCollisionTraceFlag);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InModifiedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetCollisionComplexity(Z_Param_Out_InSelectedObjects,ECollisionTraceFlag(Z_Param_InCollisionTraceFlag),Z_Param_Out_InModifiedObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execAddToLayer)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::AddToLayer(Z_Param_Out_SelectedObjects,Z_Param_Out_LayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetSubOuputFolder)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubFolderName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetSubOuputFolder(Z_Param_Out_SelectedObjects,Z_Param_SubFolderName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetSubOuputLevel)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubLevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetSubOuputLevel(Z_Param_Out_SelectedObjects,Z_Param_SubLevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execFlipFaces)
	{
		P_GET_TSET_REF(UStaticMesh*,Z_Param_Out_StaticMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::FlipFaces(Z_Param_Out_StaticMeshes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execRandomizeTransform)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_ENUM(ERandomizeTransformType,Z_Param_TransformType);
		P_GET_ENUM(ERandomizeTransformReferenceFrame,Z_Param_ReferenceFrame);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Min);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Max);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::RandomizeTransform(Z_Param_Out_SelectedObjects,ERandomizeTransformType(Z_Param_TransformType),ERandomizeTransformReferenceFrame(Z_Param_ReferenceFrame),Z_Param_Out_Min,Z_Param_Out_Max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execConsolidateObjects)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::ConsolidateObjects(Z_Param_Out_SelectedObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execAddMetadata)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_TMAP_REF(FName,FString,Z_Param_Out_InMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::AddMetadata(Z_Param_Out_SelectedObjects,Z_Param_Out_InMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execAddTags)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_TARRAY_REF(FName,Z_Param_Out_InTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::AddTags(Z_Param_Out_SelectedObjects,Z_Param_Out_InTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSubstituteMeshesByTable)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SubstituteMeshesByTable(Z_Param_Out_SelectedObjects,Z_Param_DataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSubstituteMesh)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshSearch);
		P_GET_ENUM(EEditorScriptingStringMatchType,Z_Param_StringMatch);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshSubstitute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SubstituteMesh(Z_Param_Out_SelectedObjects,Z_Param_MeshSearch,EEditorScriptingStringMatchType(Z_Param_StringMatch),Z_Param_MeshSubstitute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetMesh)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_OBJECT(UStaticMesh,Z_Param_MeshSubstitute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetMesh(Z_Param_Out_SelectedObjects,Z_Param_MeshSubstitute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetMobility)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY(FByteProperty,Z_Param_MobilityType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetMobility(Z_Param_Out_SelectedObjects,EComponentMobility::Type(Z_Param_MobilityType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetMaterial)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialSubstitute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetMaterial(Z_Param_Out_SelectedObjects,Z_Param_MaterialSubstitute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetLODGroup)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LODGroupName);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ModifiedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetLODGroup(Z_Param_Out_SelectedObjects,Z_Param_Out_LODGroupName,Z_Param_Out_ModifiedObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSubstituteMaterialsByTable)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SubstituteMaterialsByTable(Z_Param_Out_SelectedObjects,Z_Param_DataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSubstituteMaterial)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialSearch);
		P_GET_ENUM(EEditorScriptingStringMatchType,Z_Param_StringMatch);
		P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialSubstitute);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SubstituteMaterial(Z_Param_Out_SelectedObjects,Z_Param_MaterialSearch,EEditorScriptingStringMatchType(Z_Param_StringMatch),Z_Param_MaterialSubstitute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetConvexDecompositionCollision)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxHullVerts);
		P_GET_PROPERTY(FIntProperty,Z_Param_HullPrecision);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ModifiedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetConvexDecompositionCollision(Z_Param_Out_SelectedObjects,Z_Param_HullCount,Z_Param_MaxHullVerts,Z_Param_HullPrecision,Z_Param_Out_ModifiedObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetSimpleCollision)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_ENUM(EScriptCollisionShapeType,Z_Param_ShapeType);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ModifiedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetSimpleCollision(Z_Param_Out_SelectedObjects,EScriptCollisionShapeType(Z_Param_ShapeType),Z_Param_Out_ModifiedObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperationsLibrary::execSetLods)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_GET_STRUCT_REF(FStaticMeshReductionOptions,Z_Param_Out_ReductionOptions);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ModifiedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDataprepOperationsLibrary::SetLods(Z_Param_Out_SelectedObjects,Z_Param_Out_ReductionOptions,Z_Param_Out_ModifiedObjects);
		P_NATIVE_END;
	}
	void UDataprepOperationsLibrary::StaticRegisterNativesUDataprepOperationsLibrary()
	{
		UClass* Class = UDataprepOperationsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMetadata", &UDataprepOperationsLibrary::execAddMetadata },
			{ "AddTags", &UDataprepOperationsLibrary::execAddTags },
			{ "AddToLayer", &UDataprepOperationsLibrary::execAddToLayer },
			{ "ConsolidateObjects", &UDataprepOperationsLibrary::execConsolidateObjects },
			{ "FlipFaces", &UDataprepOperationsLibrary::execFlipFaces },
			{ "RandomizeTransform", &UDataprepOperationsLibrary::execRandomizeTransform },
			{ "ResizeTextures", &UDataprepOperationsLibrary::execResizeTextures },
			{ "SetCollisionComplexity", &UDataprepOperationsLibrary::execSetCollisionComplexity },
			{ "SetConvexDecompositionCollision", &UDataprepOperationsLibrary::execSetConvexDecompositionCollision },
			{ "SetLODGroup", &UDataprepOperationsLibrary::execSetLODGroup },
			{ "SetLods", &UDataprepOperationsLibrary::execSetLods },
			{ "SetMaterial", &UDataprepOperationsLibrary::execSetMaterial },
			{ "SetMesh", &UDataprepOperationsLibrary::execSetMesh },
			{ "SetMobility", &UDataprepOperationsLibrary::execSetMobility },
			{ "SetNaniteSettings", &UDataprepOperationsLibrary::execSetNaniteSettings },
			{ "SetSimpleCollision", &UDataprepOperationsLibrary::execSetSimpleCollision },
			{ "SetSubOuputFolder", &UDataprepOperationsLibrary::execSetSubOuputFolder },
			{ "SetSubOuputLevel", &UDataprepOperationsLibrary::execSetSubOuputLevel },
			{ "SubstituteMaterial", &UDataprepOperationsLibrary::execSubstituteMaterial },
			{ "SubstituteMaterialsByTable", &UDataprepOperationsLibrary::execSubstituteMaterialsByTable },
			{ "SubstituteMesh", &UDataprepOperationsLibrary::execSubstituteMesh },
			{ "SubstituteMeshesByTable", &UDataprepOperationsLibrary::execSubstituteMeshesByTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics
	{
		struct DataprepOperationsLibrary_eventAddMetadata_Parms
		{
			TArray<UObject*> SelectedObjects;
			TMap<FName,FString> InMetadata;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InMetadata_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventAddMetadata_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata_ValueProp = { "InMetadata", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata_Key_KeyProp = { "InMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata = { "InMetadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventAddMetadata_Parms, InMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::NewProp_InMetadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Adds metadata to selected objects that implement the UInterface_AssetUserData interface.\n\x09 * @param SelectedObjects:\x09Objects to consider\n\x09 * @param InMetadata:\x09\x09The metadata to append\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Adds metadata to selected objects that implement the UInterface_AssetUserData interface.\n@param SelectedObjects:      Objects to consider\n@param InMetadata:           The metadata to append" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "AddMetadata", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::DataprepOperationsLibrary_eventAddMetadata_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics
	{
		struct DataprepOperationsLibrary_eventAddTags_Parms
		{
			TArray<UObject*> SelectedObjects;
			TArray<FName> InTags;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventAddTags_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_InTags_Inner = { "InTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_InTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_InTags = { "InTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventAddTags_Parms, InTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_InTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_InTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_InTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::NewProp_InTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Add tags to a set of actors\n\x09 * @param SelectedObjects\x09Objects to add the tags to\n\x09 * @param Tags\x09\x09\x09\x09""Array of tags to add\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Add tags to a set of actors\n@param SelectedObjects       Objects to add the tags to\n@param Tags                          Array of tags to add" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "AddTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::DataprepOperationsLibrary_eventAddTags_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics
	{
		struct DataprepOperationsLibrary_eventAddToLayer_Parms
		{
			TArray<UObject*> SelectedObjects;
			FName LayerName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventAddToLayer_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_LayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventAddToLayer_Parms, LayerName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_LayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::NewProp_LayerName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Add all Actors to a given layer.\n\x09 * @param SelectedObjects:\x09Objects to consider\n\x09 * @param LayerName:\x09Name of the sub-folder\n\x09 * @note - This operation only applies on assets\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Add all Actors to a given layer.\n@param SelectedObjects:      Objects to consider\n@param LayerName:    Name of the sub-folder\n@note - This operation only applies on assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "AddToLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::DataprepOperationsLibrary_eventAddToLayer_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics
	{
		struct DataprepOperationsLibrary_eventConsolidateObjects_Parms
		{
			TArray<UObject*> SelectedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventConsolidateObjects_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::NewProp_SelectedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Replace all references to the assets in the array, except the first, with the first asset of the array.\n\x09 * @param SelectedObjects\x09Objects to consolidate\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Replace all references to the assets in the array, except the first, with the first asset of the array.\n@param SelectedObjects       Objects to consolidate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "ConsolidateObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::DataprepOperationsLibrary_eventConsolidateObjects_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics
	{
		struct DataprepOperationsLibrary_eventFlipFaces_Parms
		{
			TSet<UStaticMesh*> StaticMeshes;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StaticMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::NewProp_StaticMeshes_ElementProp = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventFlipFaces_Parms, StaticMeshes), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::NewProp_StaticMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::NewProp_StaticMeshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::NewProp_StaticMeshes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::NewProp_StaticMeshes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Flip the faces of all elements of a set of Static Meshes or Static Mesh Actors\n\x09 * @param SelectedObjects\x09Objects to the flip the faces of\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Flip the faces of all elements of a set of Static Meshes or Static Mesh Actors\n@param SelectedObjects       Objects to the flip the faces of" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "FlipFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::DataprepOperationsLibrary_eventFlipFaces_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics
	{
		struct DataprepOperationsLibrary_eventRandomizeTransform_Parms
		{
			TArray<UObject*> SelectedObjects;
			ERandomizeTransformType TransformType;
			ERandomizeTransformReferenceFrame ReferenceFrame;
			FVector Min;
			FVector Max;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TransformType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TransformType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReferenceFrame_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReferenceFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventRandomizeTransform_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_TransformType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventRandomizeTransform_Parms, TransformType), Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformType, METADATA_PARAMS(nullptr, 0) }; // 3217531832
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_ReferenceFrame_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_ReferenceFrame = { "ReferenceFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventRandomizeTransform_Parms, ReferenceFrame), Z_Construct_UEnum_DataprepLibraries_ERandomizeTransformReferenceFrame, METADATA_PARAMS(nullptr, 0) }; // 4169757951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Min_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventRandomizeTransform_Parms, Min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Max_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventRandomizeTransform_Parms, Max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_TransformType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_TransformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_ReferenceFrame_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_ReferenceFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::NewProp_Max,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Alters transform of selected objects by appling randomly generated offset to one of the transform components (rotation, scale or translation)\n\x09 * @param SelectedObjects:\x09Objects to consider\n\x09 * @param TransformType:\x09Selected transform component to randomize\n\x09 * @param Min:\x09\x09\x09\x09Start of randomization range\n\x09 * @param Max:\x09\x09\x09\x09""End of randomization range\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Alters transform of selected objects by appling randomly generated offset to one of the transform components (rotation, scale or translation)\n@param SelectedObjects:      Objects to consider\n@param TransformType:        Selected transform component to randomize\n@param Min:                          Start of randomization range\n@param Max:                          End of randomization range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "RandomizeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::DataprepOperationsLibrary_eventRandomizeTransform_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics
	{
		struct DataprepOperationsLibrary_eventResizeTextures_Parms
		{
			TArray<UTexture2D*> InTextures;
			int32 InMaxSize;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InTextures;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InTextures_Inner = { "InTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InTextures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InTextures = { "InTextures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventResizeTextures_Parms, InTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InTextures_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InMaxSize = { "InMaxSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventResizeTextures_Parms, InMaxSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::NewProp_InMaxSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Resize textures to max width/height and optionally ensure power of two size.\n\x09 * @param InTextures:\x09Textures to resize\n\x09 * @param InMaxSize:\x09Max allowed width or height\n\x09 * @note - This operation only applies on assets\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Resize textures to max width/height and optionally ensure power of two size.\n@param InTextures:   Textures to resize\n@param InMaxSize:    Max allowed width or height\n@note - This operation only applies on assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "ResizeTextures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::DataprepOperationsLibrary_eventResizeTextures_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics
	{
		struct DataprepOperationsLibrary_eventSetCollisionComplexity_Parms
		{
			TArray<UObject*> InSelectedObjects;
			TEnumAsByte<ECollisionTraceFlag> InCollisionTraceFlag;
			TArray<UObject*> InModifiedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InSelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCollisionTraceFlag_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InCollisionTraceFlag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InModifiedObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InModifiedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InSelectedObjects_Inner = { "InSelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InSelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InSelectedObjects = { "InSelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetCollisionComplexity_Parms, InSelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InSelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InSelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InCollisionTraceFlag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InCollisionTraceFlag = { "InCollisionTraceFlag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetCollisionComplexity_Parms, InCollisionTraceFlag), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InCollisionTraceFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InCollisionTraceFlag_MetaData)) }; // 3043805667
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InModifiedObjects_Inner = { "InModifiedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InModifiedObjects = { "InModifiedObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetCollisionComplexity_Parms, InModifiedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InSelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InSelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InCollisionTraceFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InModifiedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::NewProp_InModifiedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Set collision complexity for selected meshes\n\x09 * @param\x09InSelectedObjects\x09\x09\x09""Array of meshes to process.\n\x09 * @param\x09InCollisionTraceFlag\x09\x09The new collision complexity.\n\x09 * @param\x09InModifiedObjects\x09\x09\x09List of modified meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Set collision complexity for selected meshes\n@param       InSelectedObjects                       Array of meshes to process.\n@param       InCollisionTraceFlag            The new collision complexity.\n@param       InModifiedObjects                       List of modified meshes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetCollisionComplexity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::DataprepOperationsLibrary_eventSetCollisionComplexity_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics
	{
		struct DataprepOperationsLibrary_eventSetConvexDecompositionCollision_Parms
		{
			TArray<UObject*> SelectedObjects;
			int32 HullCount;
			int32 MaxHullVerts;
			int32 HullPrecision;
			TArray<UObject*> ModifiedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHullVerts;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HullPrecision;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetConvexDecompositionCollision_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_HullCount = { "HullCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetConvexDecompositionCollision_Parms, HullCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_MaxHullVerts = { "MaxHullVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetConvexDecompositionCollision_Parms, MaxHullVerts), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_HullPrecision = { "HullPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetConvexDecompositionCollision_Parms, HullPrecision), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_ModifiedObjects_Inner = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_ModifiedObjects = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetConvexDecompositionCollision_Parms, ModifiedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_HullCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_MaxHullVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_HullPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_ModifiedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::NewProp_ModifiedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Add complex collision on the static meshes contained in the input array\n\x09 * by the actors contained in the input array\n\x09 * @param\x09SelectedActors\x09\x09\x09""Array of actors to process.\n\x09 * @param\x09HullCount\x09\x09\x09\x09Maximum number of convex pieces that will be created. Must be positive.\n\x09 * @param\x09MaxHullVerts\x09\x09\x09Maximum number of vertices allowed for any generated convex hull.\n\x09 * @param\x09HullPrecision\x09\x09\x09Number of voxels to use when generating collision. Must be positive.\n\x09 * @remark: Static meshes are not re-built after the new collision settings are set\n\x09 * Generates an array of unique static meshes from the input array either by a cast if\n\x09 * the UObject is a UStaticMesh or collecting the static meshes referred to if the UObject\n\x09 * is a AActor\n\x09 * Calls UEditorStaticMeshLibrary::SetConvexDecompositionCollisions on each static mesh of the resulting array.\n\x09 * Note that any simple collisions on each static mesh of the resulting array will be removed.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Add complex collision on the static meshes contained in the input array\nby the actors contained in the input array\n@param       SelectedActors                  Array of actors to process.\n@param       HullCount                               Maximum number of convex pieces that will be created. Must be positive.\n@param       MaxHullVerts                    Maximum number of vertices allowed for any generated convex hull.\n@param       HullPrecision                   Number of voxels to use when generating collision. Must be positive.\n@remark: Static meshes are not re-built after the new collision settings are set\nGenerates an array of unique static meshes from the input array either by a cast if\nthe UObject is a UStaticMesh or collecting the static meshes referred to if the UObject\nis a AActor\nCalls UEditorStaticMeshLibrary::SetConvexDecompositionCollisions on each static mesh of the resulting array.\nNote that any simple collisions on each static mesh of the resulting array will be removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetConvexDecompositionCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::DataprepOperationsLibrary_eventSetConvexDecompositionCollision_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics
	{
		struct DataprepOperationsLibrary_eventSetLODGroup_Parms
		{
			TArray<UObject*> SelectedObjects;
			FName LODGroupName;
			TArray<UObject*> ModifiedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LODGroupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetLODGroup_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_LODGroupName = { "LODGroupName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetLODGroup_Parms, LODGroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_ModifiedObjects_Inner = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_ModifiedObjects = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetLODGroup_Parms, ModifiedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_LODGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_ModifiedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::NewProp_ModifiedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Remove inputs content\n\x09 * @param Objects Objects to remove\n\x09 * @remark: Static meshes are not re-built after the new LOD groups are set\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Remove inputs content\n@param Objects Objects to remove\n@remark: Static meshes are not re-built after the new LOD groups are set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetLODGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::DataprepOperationsLibrary_eventSetLODGroup_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics
	{
		struct DataprepOperationsLibrary_eventSetLods_Parms
		{
			TArray<UObject*> SelectedObjects;
			FStaticMeshReductionOptions ReductionOptions;
			TArray<UObject*> ModifiedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionOptions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetLods_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ReductionOptions = { "ReductionOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetLods_Parms, ReductionOptions), Z_Construct_UScriptStruct_FStaticMeshReductionOptions, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ReductionOptions_MetaData)) }; // 318483350
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ModifiedObjects_Inner = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ModifiedObjects = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetLods_Parms, ModifiedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ReductionOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ModifiedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::NewProp_ModifiedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Generate LODs on the static meshes contained in the input array\n\x09 * by the actors contained in the input array\n\x09 * @param\x09SelectedObjects\x09\x09\x09""Array of UObjects to process.\n\x09 * @param\x09ReductionOptions\x09\x09Options on how to generate LODs on the mesh.\n\x09 * @remark: Static meshes are not re-built after the new LODs are set\n\x09 * Generates an array of unique static meshes from the input array either by a cast if\n\x09 * the UObject is a UStaticMesh or collecting the static meshes referred to if the UObject\n\x09 * is a AActor\n\x09 * Calls UEditorStaticMeshLibrary::SetLods on each static mesh of the resulting array.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Generate LODs on the static meshes contained in the input array\nby the actors contained in the input array\n@param       SelectedObjects                 Array of UObjects to process.\n@param       ReductionOptions                Options on how to generate LODs on the mesh.\n@remark: Static meshes are not re-built after the new LODs are set\nGenerates an array of unique static meshes from the input array either by a cast if\nthe UObject is a UStaticMesh or collecting the static meshes referred to if the UObject\nis a AActor\nCalls UEditorStaticMeshLibrary::SetLods on each static mesh of the resulting array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetLods", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::DataprepOperationsLibrary_eventSetLods_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics
	{
		struct DataprepOperationsLibrary_eventSetMaterial_Parms
		{
			TArray<UObject*> SelectedObjects;
			UMaterialInterface* MaterialSubstitute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSubstitute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetMaterial_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_MaterialSubstitute = { "MaterialSubstitute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetMaterial_Parms, MaterialSubstitute), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::NewProp_MaterialSubstitute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Set the material to all elements of a set of Static Meshes or Static Mesh Actors\n\x09 * @param SelectedObjects\x09Objects to set the input material on\n\x09 * @param MaterialInterface Material to use\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Set the material to all elements of a set of Static Meshes or Static Mesh Actors\n@param SelectedObjects       Objects to set the input material on\n@param MaterialInterface Material to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::DataprepOperationsLibrary_eventSetMaterial_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics
	{
		struct DataprepOperationsLibrary_eventSetMesh_Parms
		{
			TArray<UObject*> SelectedObjects;
			UStaticMesh* MeshSubstitute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshSubstitute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetMesh_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_MeshSubstitute = { "MeshSubstitute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetMesh_Parms, MeshSubstitute), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::NewProp_MeshSubstitute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Set the mesh to all elements of a set of Actors containing StaticMeshComponents\n\x09 * @param SelectedObjects\x09Objects to set the input mesh on\n\x09 * @param MeshSubstitute\x09Mesh to use\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Set the mesh to all elements of a set of Actors containing StaticMeshComponents\n@param SelectedObjects       Objects to set the input mesh on\n@param MeshSubstitute        Mesh to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::DataprepOperationsLibrary_eventSetMesh_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics
	{
		struct DataprepOperationsLibrary_eventSetMobility_Parms
		{
			TArray<UObject*> SelectedObjects;
			TEnumAsByte<EComponentMobility::Type> MobilityType;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MobilityType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetMobility_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_MobilityType = { "MobilityType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetMobility_Parms, MobilityType), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(nullptr, 0) }; // 3258784245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::NewProp_MobilityType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Set mobility on a set of static mesh actors\n\x09 * @param SelectedObjects Objects to set mobility on\n\x09 * @param MobilityType Type of mobility to set on selected mesh actors\n\x09 * @remark: Only objects of class AStaticMeshActor will be considered\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Set mobility on a set of static mesh actors\n@param SelectedObjects Objects to set mobility on\n@param MobilityType Type of mobility to set on selected mesh actors\n@remark: Only objects of class AStaticMeshActor will be considered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::DataprepOperationsLibrary_eventSetMobility_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics
	{
		struct DataprepOperationsLibrary_eventSetNaniteSettings_Parms
		{
			TArray<UObject*> InSelectedObjects;
			bool bInEnabled;
			int32 InPositionPrecision;
			float InPercentTriangles;
			TArray<UObject*> OutModifiedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InSelectedObjects;
		static void NewProp_bInEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabled;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InPositionPrecision;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPercentTriangles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutModifiedObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutModifiedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InSelectedObjects_Inner = { "InSelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InSelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InSelectedObjects = { "InSelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetNaniteSettings_Parms, InSelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InSelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InSelectedObjects_MetaData)) };
	void Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_bInEnabled_SetBit(void* Obj)
	{
		((DataprepOperationsLibrary_eventSetNaniteSettings_Parms*)Obj)->bInEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_bInEnabled = { "bInEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepOperationsLibrary_eventSetNaniteSettings_Parms), &Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_bInEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InPositionPrecision = { "InPositionPrecision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetNaniteSettings_Parms, InPositionPrecision), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InPercentTriangles = { "InPercentTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetNaniteSettings_Parms, InPercentTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_OutModifiedObjects_Inner = { "OutModifiedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_OutModifiedObjects = { "OutModifiedObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetNaniteSettings_Parms, OutModifiedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InSelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InSelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_bInEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InPositionPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_InPercentTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_OutModifiedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::NewProp_OutModifiedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Set Nanite settings for selected meshes\n\x09 * @param\x09InSelectedObjects\x09\x09\x09""Array of objects to process.\n\x09 * @param\x09""bInEnabled\x09\x09\x09\x09\x09If true, Nanite data will be generated.\n\x09 * @param\x09InPositionPrecision\x09\x09\x09Step size is 2^(-PositionPrecision) cm. MIN_int32 is auto.\n\x09 * @param\x09InPercentTriangles\x09\x09\x09Percentage of triangles to keep from LOD0. 1.0 = no reduction, 0.0 = no triangles.\n\x09 * @param\x09OutModifiedObjects\x09\x09\x09List of modified objects the processed meshes will be added to\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Set Nanite settings for selected meshes\n@param       InSelectedObjects                       Array of objects to process.\n@param       bInEnabled                                      If true, Nanite data will be generated.\n@param       InPositionPrecision                     Step size is 2^(-PositionPrecision) cm. MIN_int32 is auto.\n@param       InPercentTriangles                      Percentage of triangles to keep from LOD0. 1.0 = no reduction, 0.0 = no triangles.\n@param       OutModifiedObjects                      List of modified objects the processed meshes will be added to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetNaniteSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::DataprepOperationsLibrary_eventSetNaniteSettings_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics
	{
		struct DataprepOperationsLibrary_eventSetSimpleCollision_Parms
		{
			TArray<UObject*> SelectedObjects;
			EScriptCollisionShapeType ShapeType;
			TArray<UObject*> ModifiedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ModifiedObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifiedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetSimpleCollision_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ShapeType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetSimpleCollision_Parms, ShapeType), Z_Construct_UEnum_StaticMeshEditor_EScriptCollisionShapeType, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ShapeType_MetaData)) }; // 1976287348
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ModifiedObjects_Inner = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ModifiedObjects = { "ModifiedObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetSimpleCollision_Parms, ModifiedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ModifiedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::NewProp_ModifiedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Set one simple collision of the given shape type on the static meshes contained in the\n\x09 * input array or referred to by the actors contained in the input array\n\x09 * @param\x09SelectedActors\x09\x09\x09""Array of actors to process.\n\x09 * @param\x09ShapeType\x09\x09\x09\x09Options on which simple collision to add to the mesh.\n\x09 * @remark: Static meshes are not re-built after the new collision settings are set\n\x09 * Generates an array of unique static meshes from the input array either by a cast if\n\x09 * the UObject is a UStaticMesh or collecting the static meshes referred to if the UObject\n\x09 * is a AActor\n\x09 * Calls UEditorStaticMeshLibrary::RemoveCollisions to remove any existing collisions\n\x09 * on each static mesh of the resulting array\n\x09 * Calls UEditorStaticMeshLibrary::AddSimpleCollisions on each static mesh of the resulting array.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Set one simple collision of the given shape type on the static meshes contained in the\ninput array or referred to by the actors contained in the input array\n@param       SelectedActors                  Array of actors to process.\n@param       ShapeType                               Options on which simple collision to add to the mesh.\n@remark: Static meshes are not re-built after the new collision settings are set\nGenerates an array of unique static meshes from the input array either by a cast if\nthe UObject is a UStaticMesh or collecting the static meshes referred to if the UObject\nis a AActor\nCalls UEditorStaticMeshLibrary::RemoveCollisions to remove any existing collisions\non each static mesh of the resulting array\nCalls UEditorStaticMeshLibrary::AddSimpleCollisions on each static mesh of the resulting array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetSimpleCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::DataprepOperationsLibrary_eventSetSimpleCollision_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics
	{
		struct DataprepOperationsLibrary_eventSetSubOuputFolder_Parms
		{
			TArray<UObject*> SelectedObjects;
			FString SubFolderName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubFolderName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubFolderName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetSubOuputFolder_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SubFolderName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SubFolderName = { "SubFolderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetSubOuputFolder_Parms, SubFolderName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SubFolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SubFolderName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::NewProp_SubFolderName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Add/Edit UDataprepConsumerUserData with the requested name for the sub-folder\n\x09 * @param SelectedObjects:\x09Objects to consider\n\x09 * @param SubFolderName:\x09Name of the sub-folder\n\x09 * @note - This operation only applies on assets\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Add/Edit UDataprepConsumerUserData with the requested name for the sub-folder\n@param SelectedObjects:      Objects to consider\n@param SubFolderName:        Name of the sub-folder\n@note - This operation only applies on assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetSubOuputFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::DataprepOperationsLibrary_eventSetSubOuputFolder_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics
	{
		struct DataprepOperationsLibrary_eventSetSubOuputLevel_Parms
		{
			TArray<UObject*> SelectedObjects;
			FString SubLevelName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetSubOuputLevel_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SubLevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SubLevelName = { "SubLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSetSubOuputLevel_Parms, SubLevelName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SubLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SubLevelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::NewProp_SubLevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Add/Edit UDataprepConsumerUserData with the requested name for the sub-level\n\x09 * @param SelectedObjects:\x09Objects to consider\n\x09 * @param SubLevelName:\x09Name of the sub-level\n\x09 * @note - This operation only applies on actors\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Add/Edit UDataprepConsumerUserData with the requested name for the sub-level\n@param SelectedObjects:      Objects to consider\n@param SubLevelName: Name of the sub-level\n@note - This operation only applies on actors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SetSubOuputLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::DataprepOperationsLibrary_eventSetSubOuputLevel_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics
	{
		struct DataprepOperationsLibrary_eventSubstituteMaterial_Parms
		{
			TArray<UObject*> SelectedObjects;
			FString MaterialSearch;
			EEditorScriptingStringMatchType StringMatch;
			UMaterialInterface* MaterialSubstitute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialSearch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialSearch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StringMatch_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMatch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialSubstitute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMaterial_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_MaterialSearch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_MaterialSearch = { "MaterialSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMaterial_Parms, MaterialSearch), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_MaterialSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_MaterialSearch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_StringMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_StringMatch = { "StringMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMaterial_Parms, StringMatch), Z_Construct_UEnum_EditorScriptingUtilities_EEditorScriptingStringMatchType, METADATA_PARAMS(nullptr, 0) }; // 2163096614
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_MaterialSubstitute = { "MaterialSubstitute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMaterial_Parms, MaterialSubstitute), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_MaterialSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_StringMatch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_StringMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::NewProp_MaterialSubstitute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Replaces designated materials in all or specific content folders with specific ones\n\x09 * @param SelectedObjects: Objects to consider for the substitution\n\x09 * @param MaterialSearch: Name of the material(s) to search for. Wildcard is supported\n\x09 * @param StringMatch: Type of matching to perform with MaterialSearch string\n\x09 * @param MaterialSubstitute: Material to use for the substitution\n\x09 * @remark: A material override will be added to static mesh components if their attached\n\x09 *\x09\x09\x09static mesh uses the searched material but not themselves\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Replaces designated materials in all or specific content folders with specific ones\n@param SelectedObjects: Objects to consider for the substitution\n@param MaterialSearch: Name of the material(s) to search for. Wildcard is supported\n@param StringMatch: Type of matching to perform with MaterialSearch string\n@param MaterialSubstitute: Material to use for the substitution\n@remark: A material override will be added to static mesh components if their attached\n                     static mesh uses the searched material but not themselves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SubstituteMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::DataprepOperationsLibrary_eventSubstituteMaterial_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics
	{
		struct DataprepOperationsLibrary_eventSubstituteMaterialsByTable_Parms
		{
			TArray<UObject*> SelectedObjects;
			const UDataTable* DataTable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMaterialsByTable_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMaterialsByTable_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Replaces designated materials in all or specific content folders with requested ones\n\x09 * @param SelectedObjects: Objects to consider for the substitution\n\x09 * @param DataTable: Data table to use for the substitution\n\x09 * @remark: SubstituteMaterial is called for each entry of the input data table\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Replaces designated materials in all or specific content folders with requested ones\n@param SelectedObjects: Objects to consider for the substitution\n@param DataTable: Data table to use for the substitution\n@remark: SubstituteMaterial is called for each entry of the input data table" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SubstituteMaterialsByTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::DataprepOperationsLibrary_eventSubstituteMaterialsByTable_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics
	{
		struct DataprepOperationsLibrary_eventSubstituteMesh_Parms
		{
			TArray<UObject*> SelectedObjects;
			FString MeshSearch;
			EEditorScriptingStringMatchType StringMatch;
			UStaticMesh* MeshSubstitute;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSearch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshSearch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StringMatch_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMatch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshSubstitute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMesh_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_MeshSearch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_MeshSearch = { "MeshSearch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMesh_Parms, MeshSearch), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_MeshSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_MeshSearch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_StringMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_StringMatch = { "StringMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMesh_Parms, StringMatch), Z_Construct_UEnum_EditorScriptingUtilities_EEditorScriptingStringMatchType, METADATA_PARAMS(nullptr, 0) }; // 2163096614
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_MeshSubstitute = { "MeshSubstitute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMesh_Parms, MeshSubstitute), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_MeshSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_StringMatch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_StringMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::NewProp_MeshSubstitute,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Replaces designated meshes in all or specific content folders with specific ones\n\x09 * @param SelectedObjects:\x09Objects to consider for the substitution\n\x09 * @param MeshSearch:\x09\x09Name of the mesh(es) to search for. Wildcard is supported\n\x09 * @param StringMatch:\x09\x09Type of matching to perform with MeshSearch string\n\x09 * @param MeshSubstitute:\x09Mesh to use for the substitution\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Replaces designated meshes in all or specific content folders with specific ones\n@param SelectedObjects:      Objects to consider for the substitution\n@param MeshSearch:           Name of the mesh(es) to search for. Wildcard is supported\n@param StringMatch:          Type of matching to perform with MeshSearch string\n@param MeshSubstitute:       Mesh to use for the substitution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SubstituteMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::DataprepOperationsLibrary_eventSubstituteMesh_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics
	{
		struct DataprepOperationsLibrary_eventSubstituteMeshesByTable_Parms
		{
			TArray<UObject*> SelectedObjects;
			const UDataTable* DataTable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMeshesByTable_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_SelectedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperationsLibrary_eventSubstituteMeshesByTable_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_DataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_SelectedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replaces designated meshes in all or specific content folders with requested ones\n\x09 * @param SelectedObjects:\x09Objects to consider for the substitution\n\x09 * @param DataTable:\x09\x09""Data table to use for the substitution\n\x09 * @remark: SubstituteMesh is called for each entry of the input data table\n\x09 */" },
		{ "Deprecated", "4.25.0" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
		{ "ToolTip", "Replaces designated meshes in all or specific content folders with requested ones\n@param SelectedObjects:      Objects to consider for the substitution\n@param DataTable:            Data table to use for the substitution\n@remark: SubstituteMesh is called for each entry of the input data table" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperationsLibrary, nullptr, "SubstituteMeshesByTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::DataprepOperationsLibrary_eventSubstituteMeshesByTable_Parms), Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepOperationsLibrary);
	UClass* Z_Construct_UClass_UDataprepOperationsLibrary_NoRegister()
	{
		return UDataprepOperationsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepOperationsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepOperationsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepOperationsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_AddMetadata, "AddMetadata" }, // 4251499943
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_AddTags, "AddTags" }, // 3308990683
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_AddToLayer, "AddToLayer" }, // 2137703438
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_ConsolidateObjects, "ConsolidateObjects" }, // 1571597753
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_FlipFaces, "FlipFaces" }, // 1455017949
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_RandomizeTransform, "RandomizeTransform" }, // 1974058037
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_ResizeTextures, "ResizeTextures" }, // 3191108980
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetCollisionComplexity, "SetCollisionComplexity" }, // 3257886957
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetConvexDecompositionCollision, "SetConvexDecompositionCollision" }, // 292905077
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetLODGroup, "SetLODGroup" }, // 1435246374
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetLods, "SetLods" }, // 4010642698
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetMaterial, "SetMaterial" }, // 1086374810
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetMesh, "SetMesh" }, // 4189358569
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetMobility, "SetMobility" }, // 1502295133
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetNaniteSettings, "SetNaniteSettings" }, // 3071475632
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetSimpleCollision, "SetSimpleCollision" }, // 1003407071
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputFolder, "SetSubOuputFolder" }, // 2901764628
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SetSubOuputLevel, "SetSubOuputLevel" }, // 1629990667
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterial, "SubstituteMaterial" }, // 3597032535
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMaterialsByTable, "SubstituteMaterialsByTable" }, // 4264307556
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMesh, "SubstituteMesh" }, // 1128524897
		{ &Z_Construct_UFunction_UDataprepOperationsLibrary_SubstituteMeshesByTable, "SubstituteMeshesByTable" }, // 740703284
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepOperationsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataprepOperationsLibrary.h" },
		{ "ModuleRelativePath", "Private/DataprepOperationsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepOperationsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepOperationsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepOperationsLibrary_Statics::ClassParams = {
		&UDataprepOperationsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepOperationsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepOperationsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepOperationsLibrary()
	{
		if (!Z_Registration_Info_UClass_UDataprepOperationsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepOperationsLibrary.OuterSingleton, Z_Construct_UClass_UDataprepOperationsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepOperationsLibrary.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepOperationsLibrary>()
	{
		return UDataprepOperationsLibrary::StaticClass();
	}
	UDataprepOperationsLibrary::UDataprepOperationsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepOperationsLibrary);
	UDataprepOperationsLibrary::~UDataprepOperationsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::EnumInfo[] = {
		{ ERandomizeTransformType_StaticEnum, TEXT("ERandomizeTransformType"), &Z_Registration_Info_UEnum_ERandomizeTransformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3217531832U) },
		{ ERandomizeTransformReferenceFrame_StaticEnum, TEXT("ERandomizeTransformReferenceFrame"), &Z_Registration_Info_UEnum_ERandomizeTransformReferenceFrame, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4169757951U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMaterialSubstitutionDataTable::StaticStruct, Z_Construct_UScriptStruct_FMaterialSubstitutionDataTable_Statics::NewStructOps, TEXT("MaterialSubstitutionDataTable"), &Z_Registration_Info_UScriptStruct_MaterialSubstitutionDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialSubstitutionDataTable), 2793809495U) },
		{ FMeshSubstitutionDataTable::StaticStruct, Z_Construct_UScriptStruct_FMeshSubstitutionDataTable_Statics::NewStructOps, TEXT("MeshSubstitutionDataTable"), &Z_Registration_Info_UScriptStruct_MeshSubstitutionDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshSubstitutionDataTable), 3479304577U) },
		{ FLODGroupName::StaticStruct, Z_Construct_UScriptStruct_FLODGroupName_Statics::NewStructOps, TEXT("LODGroupName"), &Z_Registration_Info_UScriptStruct_LODGroupName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLODGroupName), 3552069335U) },
		{ FMeshReductionOptions::StaticStruct, Z_Construct_UScriptStruct_FMeshReductionOptions_Statics::NewStructOps, TEXT("MeshReductionOptions"), &Z_Registration_Info_UScriptStruct_MeshReductionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshReductionOptions), 2697971914U) },
		{ FMeshReductionArray::StaticStruct, Z_Construct_UScriptStruct_FMeshReductionArray_Statics::NewStructOps, TEXT("MeshReductionArray"), &Z_Registration_Info_UScriptStruct_MeshReductionArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshReductionArray), 1568670060U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepOperationsLibrary, UDataprepOperationsLibrary::StaticClass, TEXT("UDataprepOperationsLibrary"), &Z_Registration_Info_UClass_UDataprepOperationsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepOperationsLibrary), 1668986713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_291474827(TEXT("/Script/DataprepLibraries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepOperationsLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
