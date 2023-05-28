// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionMaterialNodes.h"
#include "Dataflow/DataflowSelection.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionMaterialNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	GEOMETRYCOLLECTIONNODES_API UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FAddMaterialToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAddMaterialToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode;
class UScriptStruct* FAddMaterialToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("AddMaterialToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FAddMaterialToCollectionDataflowNode>()
{
	return FAddMaterialToCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutsideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutsideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InsideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignOutsideMaterial_MetaData[];
#endif
		static void NewProp_bAssignOutsideMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignOutsideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignInsideMaterial_MetaData[];
#endif
		static void NewProp_bAssignInsideMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignInsideMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Adds Outside/Inside Materials to Outside/Inside faces\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Adds Outside/Inside Materials to Outside/Inside faces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddMaterialToCollectionDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection to add material(s) to */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Collection to add material(s) to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Face selection, the material(s) will be added to the selected faces */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Face selection, the material(s) will be added to the selected faces" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData)) }; // 3632086580
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_OutsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Outside material to assign to the outside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Outside material to assign to the outside faces from the face selection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_OutsideMaterial = { "OutsideMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, OutsideMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_OutsideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_OutsideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_InsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Inside material to assign to the inside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Inside material to assign to the inside faces from the face selection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_InsideMaterial = { "InsideMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddMaterialToCollectionDataflowNode, InsideMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_InsideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_InsideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the outside material will be assigned to the outside faces from the face selection */" },
		{ "DisplayName", "Assign Outside Material to Outside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the outside material will be assigned to the outside faces from the face selection" },
	};
#endif
	void Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit(void* Obj)
	{
		((FAddMaterialToCollectionDataflowNode*)Obj)->bAssignOutsideMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial = { "bAssignOutsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAddMaterialToCollectionDataflowNode), &Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the inside material will be assigned to the inside faces from the face selection */" },
		{ "DisplayName", "Assign Inside Material to Inside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the inside material will be assigned to the inside faces from the face selection" },
	};
#endif
	void Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit(void* Obj)
	{
		((FAddMaterialToCollectionDataflowNode*)Obj)->bAssignInsideMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial = { "bAssignInsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAddMaterialToCollectionDataflowNode), &Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_FaceSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_OutsideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_InsideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"AddMaterialToCollectionDataflowNode",
		sizeof(FAddMaterialToCollectionDataflowNode),
		alignof(FAddMaterialToCollectionDataflowNode),
		Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FReAssignMaterialInCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FReAssignMaterialInCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode;
class UScriptStruct* FReAssignMaterialInCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ReAssignMaterialInCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FReAssignMaterialInCollectionDataflowNode>()
{
	return FReAssignMaterialInCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceSelection;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutsideMaterialIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutsideMaterialIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsideMaterialIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InsideMaterialIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignOutsideMaterial_MetaData[];
#endif
		static void NewProp_bAssignOutsideMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignOutsideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignInsideMaterial_MetaData[];
#endif
		static void NewProp_bAssignInsideMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignInsideMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Reassign existing material(s) to Outside/Inside faces\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Reassign existing material(s) to Outside/Inside faces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReAssignMaterialInCollectionDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection for reassign the material(s) */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Collection for reassign the material(s)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData[] = {
		{ "Comment", "/** Face selection, the material(s) will be assigned to the selected faces */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DisplayName", "FaceSelection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Face selection, the material(s) will be assigned to the selected faces" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_FaceSelection = { "FaceSelection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, FaceSelection), Z_Construct_UScriptStruct_FDataflowFaceSelection, METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_FaceSelection_MetaData)) }; // 3632086580
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_OutsideMaterialIdx_MetaData[] = {
		{ "ArrayClamp", "Materials" },
		{ "Category", "Material" },
		{ "Comment", "/** Index of the material in the Materials array to assign to the outside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Outside Material Index" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index of the material in the Materials array to assign to the outside faces from the face selection" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_OutsideMaterialIdx = { "OutsideMaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, OutsideMaterialIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_OutsideMaterialIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_OutsideMaterialIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_InsideMaterialIdx_MetaData[] = {
		{ "ArrayClamp", "Materials" },
		{ "Category", "Material" },
		{ "Comment", "/** Index of the material in the Materials array to assign to the inside faces from the face selection */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Inside Material Index" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index of the material in the Materials array to assign to the inside faces from the face selection" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_InsideMaterialIdx = { "InsideMaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReAssignMaterialInCollectionDataflowNode, InsideMaterialIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_InsideMaterialIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_InsideMaterialIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the selected material from the Materials array will be assigned to the outside faces from the face selection */" },
		{ "DisplayName", "Assign Outside Material to Outside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the selected material from the Materials array will be assigned to the outside faces from the face selection" },
	};
#endif
	void Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit(void* Obj)
	{
		((FReAssignMaterialInCollectionDataflowNode*)Obj)->bAssignOutsideMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial = { "bAssignOutsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FReAssignMaterialInCollectionDataflowNode), &Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, the selected material from the Materials array will be assigned to the inside faces from the face selection */" },
		{ "DisplayName", "Assign Inside Material to Inside Faces" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "If true, the selected material from the Materials array will be assigned to the inside faces from the face selection" },
	};
#endif
	void Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit(void* Obj)
	{
		((FReAssignMaterialInCollectionDataflowNode*)Obj)->bAssignInsideMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial = { "bAssignInsideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FReAssignMaterialInCollectionDataflowNode), &Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_FaceSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_OutsideMaterialIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_InsideMaterialIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignOutsideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewProp_bAssignInsideMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ReAssignMaterialInCollectionDataflowNode",
		sizeof(FReAssignMaterialInCollectionDataflowNode),
		alignof(FReAssignMaterialInCollectionDataflowNode),
		Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMaterialsInfoDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMaterialsInfoDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode;
class UScriptStruct* FMaterialsInfoDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MaterialsInfoDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMaterialsInfoDataflowNode>()
{
	return FMaterialsInfoDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Generates a formatted string of materials from the Materials array\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Generates a formatted string of materials from the Materials array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialsInfoDataflowNode>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialsInfoDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_String_MetaData[] = {
		{ "Comment", "/** Formatted string of the materials */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Formatted string of the materials" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialsInfoDataflowNode, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewProp_String,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MaterialsInfoDataflowNode",
		sizeof(FMaterialsInfoDataflowNode),
		alignof(FMaterialsInfoDataflowNode),
		Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetMaterialFromMaterialsArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetMaterialFromMaterialsArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode;
class UScriptStruct* FGetMaterialFromMaterialsArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("GetMaterialFromMaterialsArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FGetMaterialFromMaterialsArrayDataflowNode>()
{
	return FGetMaterialFromMaterialsArrayDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Get a Material from a Materials array\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Get a Material from a Materials array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetMaterialFromMaterialsArrayDataflowNode>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMaterialFromMaterialsArrayDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Selected material from the Materials array */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Selected material from the Materials array" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMaterialFromMaterialsArrayDataflowNode, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Index in the Materials array for the selected material */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Material Index" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index in the Materials array for the selected material" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx = { "MaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetMaterialFromMaterialsArrayDataflowNode, MaterialIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetMaterialFromMaterialsArrayDataflowNode",
		sizeof(FGetMaterialFromMaterialsArrayDataflowNode),
		alignof(FGetMaterialFromMaterialsArrayDataflowNode),
		Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum;
	static UEnum* ESetMaterialOperationTypeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("ESetMaterialOperationTypeEnum"));
		}
		return Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONNODES_API UEnum* StaticEnum<ESetMaterialOperationTypeEnum>()
	{
		return ESetMaterialOperationTypeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enumerators[] = {
		{ "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add", (int64)ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add },
		{ "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert", (int64)ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert },
		{ "ESetMaterialOperationTypeEnum::Dataflow_Max", (int64)ESetMaterialOperationTypeEnum::Dataflow_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dataflow_Max.Comment", "//~~~\n//256th entry\n" },
		{ "Dataflow_Max.Hidden", "" },
		{ "Dataflow_Max.Name", "ESetMaterialOperationTypeEnum::Dataflow_Max" },
		{ "Dataflow_Max.ToolTip", "256th entry" },
		{ "Dataflow_SetMaterialOperationType_Add.DisplayName", "Add" },
		{ "Dataflow_SetMaterialOperationType_Add.Name", "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add" },
		{ "Dataflow_SetMaterialOperationType_Insert.DisplayName", "Insert" },
		{ "Dataflow_SetMaterialOperationType_Insert.Name", "ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		nullptr,
		"ESetMaterialOperationTypeEnum",
		"ESetMaterialOperationTypeEnum",
		Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.InnerSingleton, Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetMaterialInMaterialsArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetMaterialInMaterialsArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode;
class UScriptStruct* FSetMaterialInMaterialsArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SetMaterialInMaterialsArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSetMaterialInMaterialsArrayDataflowNode>()
{
	return FSetMaterialInMaterialsArrayDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Set a Material in a Materials array\n *\n */" },
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Set a Material in a Materials array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetMaterialInMaterialsArrayDataflowNode>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Materials array storing the materials */" },
		{ "DataflowInput", "" },
		{ "DataflowIntrinsic", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Materials" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Materials array storing the materials" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Material to add/insert to/in Materials array */" },
		{ "DataflowInput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Material to add/insert to/in Materials array" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Operation type for setting the material, add will add the new material to the end off Materials array, insert will insert the\n\x09new material into Materials array at the index specified by MaterialIdx\x09*/" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Operation type for setting the material, add will add the new material to the end off Materials array, insert will insert the\n      new material into Materials array at the index specified by MaterialIdx" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, Operation), Z_Construct_UEnum_GeometryCollectionNodes_ESetMaterialOperationTypeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation_MetaData)) }; // 637139988
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Index for inserting a nem material into the Materials array */" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Material Index" },
		{ "EditCondition", "Operation == ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Insert" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Index for inserting a nem material into the Materials array" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx = { "MaterialIdx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetMaterialInMaterialsArrayDataflowNode, MaterialIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewProp_MaterialIdx,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetMaterialInMaterialsArrayDataflowNode",
		sizeof(FSetMaterialInMaterialsArrayDataflowNode),
		alignof(FSetMaterialInMaterialsArrayDataflowNode),
		Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMakeMaterialDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeMaterialDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode;
class UScriptStruct* FMakeMaterialDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeMaterialDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeMaterialDataflowNode>()
{
	return FMakeMaterialDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Makes a material\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Makes a material" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeMaterialDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_InMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Material which will be outputed */" },
		{ "DisplayName", "Material" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Material which will be outputed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMakeMaterialDataflowNode, InMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_InMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_InMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** Output material */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Output material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMakeMaterialDataflowNode, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_InMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MakeMaterialDataflowNode",
		sizeof(FMakeMaterialDataflowNode),
		alignof(FMakeMaterialDataflowNode),
		Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMakeMaterialsArrayDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FMakeMaterialsArrayDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode;
class UScriptStruct* FMakeMaterialsArrayDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("MakeMaterialsArrayDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FMakeMaterialsArrayDataflowNode>()
{
	return FMakeMaterialsArrayDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Makes an empty Materials array\n *\n */" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Makes an empty Materials array" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMakeMaterialsArrayDataflowNode>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData[] = {
		{ "Comment", "/** Output Matarials array */" },
		{ "DataflowOutput", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionMaterialNodes.h" },
		{ "ToolTip", "Output Matarials array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMakeMaterialsArrayDataflowNode, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"MakeMaterialsArrayDataflowNode",
		sizeof(FMakeMaterialsArrayDataflowNode),
		alignof(FMakeMaterialsArrayDataflowNode),
		Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::EnumInfo[] = {
		{ ESetMaterialOperationTypeEnum_StaticEnum, TEXT("ESetMaterialOperationTypeEnum"), &Z_Registration_Info_UEnum_ESetMaterialOperationTypeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 637139988U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::ScriptStructInfo[] = {
		{ FAddMaterialToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode_Statics::NewStructOps, TEXT("AddMaterialToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_AddMaterialToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddMaterialToCollectionDataflowNode), 132403235U) },
		{ FReAssignMaterialInCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FReAssignMaterialInCollectionDataflowNode_Statics::NewStructOps, TEXT("ReAssignMaterialInCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_ReAssignMaterialInCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReAssignMaterialInCollectionDataflowNode), 2064176626U) },
		{ FMaterialsInfoDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMaterialsInfoDataflowNode_Statics::NewStructOps, TEXT("MaterialsInfoDataflowNode"), &Z_Registration_Info_UScriptStruct_MaterialsInfoDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialsInfoDataflowNode), 1999674294U) },
		{ FGetMaterialFromMaterialsArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetMaterialFromMaterialsArrayDataflowNode_Statics::NewStructOps, TEXT("GetMaterialFromMaterialsArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_GetMaterialFromMaterialsArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetMaterialFromMaterialsArrayDataflowNode), 897155550U) },
		{ FSetMaterialInMaterialsArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSetMaterialInMaterialsArrayDataflowNode_Statics::NewStructOps, TEXT("SetMaterialInMaterialsArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_SetMaterialInMaterialsArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetMaterialInMaterialsArrayDataflowNode), 207336473U) },
		{ FMakeMaterialDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeMaterialDataflowNode_Statics::NewStructOps, TEXT("MakeMaterialDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeMaterialDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeMaterialDataflowNode), 1505074300U) },
		{ FMakeMaterialsArrayDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FMakeMaterialsArrayDataflowNode_Statics::NewStructOps, TEXT("MakeMaterialsArrayDataflowNode"), &Z_Registration_Info_UScriptStruct_MakeMaterialsArrayDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMakeMaterialsArrayDataflowNode), 662263502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_1184685323(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionMaterialNodes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
