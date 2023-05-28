// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphBVTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphBVTree() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBVNode();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBVTree();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphBVNode;
class UScriptStruct* FZoneGraphBVNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphBVNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphBVNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphBVNode, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphBVNode"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphBVNode.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphBVNode>()
{
	return FZoneGraphBVNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MinX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MinY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MinZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MaxX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MaxY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MaxZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Quantized BV-tree node. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
		{ "ToolTip", "Quantized BV-tree node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphBVNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinX_MetaData[] = {
		{ "Comment", "/** Quantized node bounds */" },
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
		{ "ToolTip", "Quantized node bounds" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVNode, MinX), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinY_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVNode, MinY), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVNode, MinZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxX_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVNode, MaxX), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxY_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVNode, MaxY), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVNode, MaxZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "/** Item Index, or if negative, the node is internal and the index is relative index to next sibling. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
		{ "ToolTip", "Item Index, or if negative, the node is internal and the index is relative index to next sibling." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVNode, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MinZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_MaxZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphBVNode",
		sizeof(FZoneGraphBVNode),
		alignof(FZoneGraphBVNode),
		Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBVNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphBVNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphBVNode.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphBVNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphBVTree;
class UScriptStruct* FZoneGraphBVTree::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphBVTree.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphBVTree.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphBVTree, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("ZoneGraphBVTree"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphBVTree.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FZoneGraphBVTree>()
{
	return FZoneGraphBVTree::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuantizationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QuantizationScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Quantized BV-Tree */" },
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
		{ "ToolTip", "Quantized BV-Tree" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphBVTree>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Origin_MetaData[] = {
		{ "Comment", "/** Quantization range origin */" },
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
		{ "ToolTip", "Quantization range origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVTree, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_QuantizationScale_MetaData[] = {
		{ "Comment", "/** Scale to convert from world coordinates to quantized range. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
		{ "ToolTip", "Scale to convert from world coordinates to quantized range." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_QuantizationScale = { "QuantizationScale", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVTree, QuantizationScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_QuantizationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_QuantizationScale_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FZoneGraphBVNode, METADATA_PARAMS(nullptr, 0) }; // 3009254538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Nodes_MetaData[] = {
		{ "Comment", "/** BV-tree nodes. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphBVTree.h" },
		{ "ToolTip", "BV-tree nodes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphBVTree, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Nodes_MetaData)) }; // 3009254538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_QuantizationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Nodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewProp_Nodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"ZoneGraphBVTree",
		sizeof(FZoneGraphBVTree),
		alignof(FZoneGraphBVTree),
		Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphBVTree()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphBVTree.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphBVTree.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphBVTree.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBVTree_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBVTree_h_Statics::ScriptStructInfo[] = {
		{ FZoneGraphBVNode::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphBVNode_Statics::NewStructOps, TEXT("ZoneGraphBVNode"), &Z_Registration_Info_UScriptStruct_ZoneGraphBVNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphBVNode), 3009254538U) },
		{ FZoneGraphBVTree::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphBVTree_Statics::NewStructOps, TEXT("ZoneGraphBVTree"), &Z_Registration_Info_UScriptStruct_ZoneGraphBVTree, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphBVTree), 988445192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBVTree_h_655819497(TEXT("/Script/ZoneGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBVTree_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphBVTree_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
