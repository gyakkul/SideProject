// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/CustomizableObjectLayout.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectLayout() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy;
	static UEnum* ECustomizableObjectTextureLayoutPackingStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectTextureLayoutPackingStrategy"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectTextureLayoutPackingStrategy>()
	{
		return ECustomizableObjectTextureLayoutPackingStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enumerators[] = {
		{ "ECustomizableObjectTextureLayoutPackingStrategy::Resizable", (int64)ECustomizableObjectTextureLayoutPackingStrategy::Resizable },
		{ "ECustomizableObjectTextureLayoutPackingStrategy::Fixed", (int64)ECustomizableObjectTextureLayoutPackingStrategy::Fixed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "// The layout resizes the blocks to keep its size.\n" },
		{ "Fixed.DisplayName", "Fixed Layout" },
		{ "Fixed.Name", "ECustomizableObjectTextureLayoutPackingStrategy::Fixed" },
		{ "Fixed.ToolTip", "The layout resizes the blocks to keep its size." },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "Resizable.Comment", "// The layout increases its size to fit all the blocks.\n" },
		{ "Resizable.DisplayName", "Resizable Layout" },
		{ "Resizable.Name", "ECustomizableObjectTextureLayoutPackingStrategy::Resizable" },
		{ "Resizable.ToolTip", "The layout increases its size to fit all the blocks." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectTextureLayoutPackingStrategy",
		"ECustomizableObjectTextureLayoutPackingStrategy",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock;
class UScriptStruct* FCustomizableObjectLayoutBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectLayoutBlock"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectLayoutBlock>()
{
	return FCustomizableObjectLayoutBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectLayoutBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Min), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Max), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Priority), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "//! Unique unchangeable id used to reference this block from other nodes.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "ToolTip", "! Unique unchangeable id used to reference this block from other nodes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectLayoutBlock, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewProp_Id,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectLayoutBlock",
		sizeof(FCustomizableObjectLayoutBlock),
		alignof(FCustomizableObjectLayoutBlock),
		Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock.InnerSingleton;
	}
	void UCustomizableObjectLayout::StaticRegisterNativesUCustomizableObjectLayout()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectLayout);
	UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister()
	{
		return UCustomizableObjectLayout::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectLayout_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxGridSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackingStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackingStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PackingStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LayoutName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectLayout_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/CustomizableObjectLayout.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock, METADATA_PARAMS(nullptr, 0) }; // 1084952981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_MetaData)) }; // 1084952981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, Mesh), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, LOD), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, Material), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, UVChannel), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize_MetaData[] = {
		{ "Comment", "/** Used with the fixed layout strategy. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
		{ "ToolTip", "Used with the fixed layout strategy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize = { "MaxGridSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, MaxGridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy = { "PackingStrategy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, PackingStrategy), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_MetaData)) }; // 3394997217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/CustomizableObjectLayout.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName = { "LayoutName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectLayout, LayoutName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Blocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_MaxGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_PackingStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectLayout_Statics::NewProp_LayoutName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectLayout_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectLayout>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectLayout_Statics::ClassParams = {
		&UCustomizableObjectLayout::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectLayout_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectLayout_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectLayout_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectLayout()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectLayout.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectLayout.OuterSingleton, Z_Construct_UClass_UCustomizableObjectLayout_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectLayout.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectLayout>()
	{
		return UCustomizableObjectLayout::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectLayout);
	UCustomizableObjectLayout::~UCustomizableObjectLayout() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::EnumInfo[] = {
		{ ECustomizableObjectTextureLayoutPackingStrategy_StaticEnum, TEXT("ECustomizableObjectTextureLayoutPackingStrategy"), &Z_Registration_Info_UEnum_ECustomizableObjectTextureLayoutPackingStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3394997217U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectLayoutBlock::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock_Statics::NewStructOps, TEXT("CustomizableObjectLayoutBlock"), &Z_Registration_Info_UScriptStruct_CustomizableObjectLayoutBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectLayoutBlock), 1084952981U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectLayout, UCustomizableObjectLayout::StaticClass, TEXT("UCustomizableObjectLayout"), &Z_Registration_Info_UClass_UCustomizableObjectLayout, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectLayout), 3416842895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_27258167(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_CustomizableObjectLayout_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
