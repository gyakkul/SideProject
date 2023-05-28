// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeTable.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeTable() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTable();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTable_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeTableObjectPinData::StaticRegisterNativesUCustomizableObjectNodeTableObjectPinData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTableObjectPinData);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_NoRegister()
	{
		return UCustomizableObjectNodeTableObjectPinData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColumnName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodePinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for all Table Pins. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Base class for all Table Pins." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Comment", "/** Name of the data table column related to the pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Name of the data table column related to the pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableObjectPinData, ColumnName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::NewProp_ColumnName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTableObjectPinData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::ClassParams = {
		&UCustomizableObjectNodeTableObjectPinData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTableObjectPinData>()
	{
		return UCustomizableObjectNodeTableObjectPinData::StaticClass();
	}
	UCustomizableObjectNodeTableObjectPinData::UCustomizableObjectNodeTableObjectPinData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTableObjectPinData);
	UCustomizableObjectNodeTableObjectPinData::~UCustomizableObjectNodeTableObjectPinData() {}
	void UCustomizableObjectNodeTableMeshPinData::StaticRegisterNativesUCustomizableObjectNodeTableMeshPinData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTableMeshPinData);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_NoRegister()
	{
		return UCustomizableObjectNodeTableMeshPinData::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimInstanceColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimInstanceColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSlotColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimSlotColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTagColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimTagColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MutableColumnName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MutableColumnName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layouts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Additional data for a Mesh pins. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Additional data for a Mesh pins." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName_MetaData[] = {
		{ "Comment", "/** Anim Instance Column name related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Anim Instance Column name related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName = { "AnimInstanceColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, AnimInstanceColumnName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName_MetaData[] = {
		{ "Comment", "/** Anim Slot Column name related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Anim Slot Column name related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName = { "AnimSlotColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, AnimSlotColumnName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName_MetaData[] = {
		{ "Comment", "/** Anim Tag Column name related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Anim Tag Column name related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName = { "AnimTagColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, AnimTagColumnName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName = { "MutableColumnName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, MutableColumnName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD_MetaData[] = {
		{ "Comment", "/** LOD of the mesh related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "LOD of the mesh related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, LOD), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Material Index (Surface Index) of the mesh related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Material Index (Surface Index) of the mesh related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, Material), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_Inner = { "Layouts", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCustomizableObjectLayout_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_MetaData[] = {
		{ "Comment", "/** Layouts related to this Mesh pin */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Layouts related to this Mesh pin" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts = { "Layouts", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTableMeshPinData, Layouts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimInstanceColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimSlotColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_AnimTagColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_MutableColumnName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::NewProp_Layouts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTableMeshPinData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::ClassParams = {
		&UCustomizableObjectNodeTableMeshPinData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTableMeshPinData>()
	{
		return UCustomizableObjectNodeTableMeshPinData::StaticClass();
	}
	UCustomizableObjectNodeTableMeshPinData::UCustomizableObjectNodeTableMeshPinData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTableMeshPinData);
	UCustomizableObjectNodeTableMeshPinData::~UCustomizableObjectNodeTableMeshPinData() {}
	void UCustomizableObjectNodeTable::StaticRegisterNativesUCustomizableObjectNodeTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTable);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTable_NoRegister()
	{
		return UCustomizableObjectNodeTable::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddNoneOption_MetaData[];
#endif
		static void NewProp_bAddNoneOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddNoneOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Table;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableCheckedRows_MetaData[];
#endif
		static void NewProp_bDisableCheckedRows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableCheckedRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumProperties_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "// Name of the property parameter\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Name of the property parameter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTable, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "/** If true, adds a \"None\" parameter option */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "If true, adds a \"None\" parameter option" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTable*)Obj)->bAddNoneOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption = { "bAddNoneOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeTable), &Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "// Pointer to the Data Table Asset represented in this node\n" },
		{ "DontUpdateWhileEditing", "" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Pointer to the Data Table Asset represented in this node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTable, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_MetaData[] = {
		{ "Category", "TableProperties" },
		{ "Comment", "/** If there is a bool column in the table, checked rows will not be compiled */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "If there is a bool column in the table, checked rows will not be compiled" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeTable*)Obj)->bDisableCheckedRows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows = { "bDisableCheckedRows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeTable), &Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTable, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties_MetaData[] = {
		{ "Comment", "/** Number of properties to know when the node needs an update */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTable.h" },
		{ "ToolTip", "Number of properties to know when the node needs an update" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties = { "NumProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTable, NumProperties), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bAddNoneOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_Table,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_bDisableCheckedRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::NewProp_NumProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::ClassParams = {
		&UCustomizableObjectNodeTable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTable()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTable.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTable.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTable>()
	{
		return UCustomizableObjectNodeTable::StaticClass();
	}
	UCustomizableObjectNodeTable::UCustomizableObjectNodeTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTable);
	UCustomizableObjectNodeTable::~UCustomizableObjectNodeTable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeTableObjectPinData, UCustomizableObjectNodeTableObjectPinData::StaticClass, TEXT("UCustomizableObjectNodeTableObjectPinData"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTableObjectPinData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTableObjectPinData), 1100352341U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeTableMeshPinData, UCustomizableObjectNodeTableMeshPinData::StaticClass, TEXT("UCustomizableObjectNodeTableMeshPinData"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTableMeshPinData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTableMeshPinData), 2593914474U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeTable, UCustomizableObjectNodeTable::StaticClass, TEXT("UCustomizableObjectNodeTable"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTable), 2094636606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_3832871514(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
