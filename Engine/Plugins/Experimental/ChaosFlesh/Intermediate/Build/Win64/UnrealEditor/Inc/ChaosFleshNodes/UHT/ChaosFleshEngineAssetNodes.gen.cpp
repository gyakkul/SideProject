// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshEngineAssetNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshEngineAssetNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshAsset_NoRegister();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FComputeFiberFieldNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FComputeIslandsNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateOriginInsertionNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGetSurfaceIndicesNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FIsolateComponentNode();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGetFleshAssetDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetFleshAssetDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode;
class UScriptStruct* FGetFleshAssetDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("GetFleshAssetDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FGetFleshAssetDataflowNode>()
{
	return FGetFleshAssetDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FleshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FleshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetFleshAssetDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_FleshAsset_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DisplayName", "FleshAsset" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_FleshAsset = { "FleshAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetFleshAssetDataflowNode, FleshAsset), Z_Construct_UClass_UFleshAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_FleshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_FleshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_Output_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetFleshAssetDataflowNode, Output), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_Output_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_FleshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewProp_Output,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetFleshAssetDataflowNode",
		sizeof(FGetFleshAssetDataflowNode),
		alignof(FGetFleshAssetDataflowNode),
		Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFleshAssetTerminalDataflowNode>() == std::is_polymorphic<FDataflowTerminalNode>(), "USTRUCT FFleshAssetTerminalDataflowNode cannot be polymorphic unless super FDataflowTerminalNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode;
class UScriptStruct* FFleshAssetTerminalDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("FleshAssetTerminalDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FFleshAssetTerminalDataflowNode>()
{
	return FFleshAssetTerminalDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "DataflowTerminal", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFleshAssetTerminalDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFleshAssetTerminalDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowTerminalNode,
		&NewStructOps,
		"FleshAssetTerminalDataflowNode",
		sizeof(FFleshAssetTerminalDataflowNode),
		alignof(FFleshAssetTerminalDataflowNode),
		Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSetFleshDefaultPropertiesNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSetFleshDefaultPropertiesNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode;
class UScriptStruct* FSetFleshDefaultPropertiesNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("SetFleshDefaultPropertiesNode"));
	}
	return Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FSetFleshDefaultPropertiesNode>()
{
	return FSetFleshDefaultPropertiesNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIncompressibility_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexIncompressibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexInflation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexInflation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSetFleshDefaultPropertiesNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshDefaultPropertiesNode, Density), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexStiffness_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexStiffness = { "VertexStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshDefaultPropertiesNode, VertexStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexDamping_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexDamping = { "VertexDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshDefaultPropertiesNode, VertexDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexIncompressibility_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/*Sets incompressibility on vertex basis. 0.6 is default behavior. \n\x09""1 means total incompressibility. 0.00001 means almost no incompressibility*/" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "ToolTip", "Sets incompressibility on vertex basis. 0.6 is default behavior.\n       1 means total incompressibility. 0.00001 means almost no incompressibility" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.00001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexIncompressibility = { "VertexIncompressibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshDefaultPropertiesNode, VertexIncompressibility), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexIncompressibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexIncompressibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexInflation_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/*Sets inflation on vertex basis. 0.5 means no inflation/deflation.\n\x09""1 means total inflation. 0 means the material is deflated.*/" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "ToolTip", "Sets inflation on vertex basis. 0.5 means no inflation/deflation.\n       1 means total inflation. 0 means the material is deflated." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexInflation = { "VertexInflation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshDefaultPropertiesNode, VertexInflation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexInflation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexInflation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSetFleshDefaultPropertiesNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Density,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexIncompressibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_VertexInflation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SetFleshDefaultPropertiesNode",
		sizeof(FSetFleshDefaultPropertiesNode),
		alignof(FSetFleshDefaultPropertiesNode),
		Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode.InnerSingleton, Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComputeFiberFieldNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FComputeFiberFieldNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode;
class UScriptStruct* FComputeFiberFieldNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeFiberFieldNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("ComputeFiberFieldNode"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FComputeFiberFieldNode>()
{
	return FComputeFiberFieldNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InsertionIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertionIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InsertionIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginInsertionGroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginInsertionGroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginVertexFieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OriginVertexFieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertionVertexFieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InsertionVertexFieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Computes a muscle fiber direction per tetrahedron from a GeometryCollection containing tetrahedra, \n* vertices, and origin & insertion vertex fields.  Fiber directions should smoothly follow the geometry\n* oriented from the origin vertices pointing to the insertion vertices.\n*/" },
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "ToolTip", "Computes a muscle fiber direction per tetrahedron from a GeometryCollection containing tetrahedra,\nvertices, and origin & insertion vertex fields.  Fiber directions should smoothly follow the geometry\noriented from the origin vertices pointing to the insertion vertices." },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeFiberFieldNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "//typedef FManagedArrayCollection DataType;\n" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "ToolTip", "typedef FManagedArrayCollection DataType;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginIndices_Inner = { "OriginIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginIndices_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "OriginVertexIndices" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginIndices = { "OriginIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, OriginIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginIndices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionIndices_Inner = { "InsertionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionIndices_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "InsertionVertexIndices" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionIndices = { "InsertionIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, InsertionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginInsertionGroupName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginInsertionGroupName = { "OriginInsertionGroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, OriginInsertionGroupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginInsertionGroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginInsertionGroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginVertexFieldName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginVertexFieldName = { "OriginVertexFieldName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, OriginVertexFieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginVertexFieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginVertexFieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionVertexFieldName_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionVertexFieldName = { "InsertionVertexFieldName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, InsertionVertexFieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionVertexFieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionVertexFieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeFiberFieldNode, Tolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginInsertionGroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_OriginVertexFieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_InsertionVertexFieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewProp_Tolerance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ComputeFiberFieldNode",
		sizeof(FComputeFiberFieldNode),
		alignof(FComputeFiberFieldNode),
		Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeFiberFieldNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode.InnerSingleton, Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComputeIslandsNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FComputeIslandsNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeIslandsNode;
class UScriptStruct* FComputeIslandsNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeIslandsNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeIslandsNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeIslandsNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("ComputeIslandsNode"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeIslandsNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FComputeIslandsNode>()
{
	return FComputeIslandsNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeIslandsNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeIslandsNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeIslandsNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"ComputeIslandsNode",
		sizeof(FComputeIslandsNode),
		alignof(FComputeIslandsNode),
		Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeIslandsNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeIslandsNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeIslandsNode.InnerSingleton, Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeIslandsNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGenerateOriginInsertionNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateOriginInsertionNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode;
class UScriptStruct* FGenerateOriginInsertionNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("GenerateOriginInsertionNode"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FGenerateOriginInsertionNode>()
{
	return FGenerateOriginInsertionNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginIndicesIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InsertionIndicesIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertionIndicesIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InsertionIndicesIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginIndicesOut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginIndicesOut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginIndicesOut;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InsertionIndicesOut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertionIndicesOut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InsertionIndicesOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//Given two sets of vertex indices, generate two sets of vertex indices for origins and insertions that are within X distance away.\n" },
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "ToolTip", "Given two sets of vertex indices, generate two sets of vertex indices for origins and insertions that are within X distance away." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateOriginInsertionNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "//typedef FManagedArrayCollection DataType;\n" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "ToolTip", "typedef FManagedArrayCollection DataType;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateOriginInsertionNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesIn_Inner = { "OriginIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "OriginIndicesIn" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesIn = { "OriginIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateOriginInsertionNode, OriginIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesIn_Inner = { "InsertionIndicesIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "InsertionIndicesIn" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesIn = { "InsertionIndicesIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateOriginInsertionNode, InsertionIndicesIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesOut_Inner = { "OriginIndicesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "OriginIndicesOut" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesOut = { "OriginIndicesOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateOriginInsertionNode, OriginIndicesOut), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesOut_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesOut_Inner = { "InsertionIndicesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "InsertionIndicesOut" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesOut = { "InsertionIndicesOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateOriginInsertionNode, InsertionIndicesOut), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateOriginInsertionNode, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_OriginIndicesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_InsertionIndicesOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GenerateOriginInsertionNode",
		sizeof(FGenerateOriginInsertionNode),
		alignof(FGenerateOriginInsertionNode),
		Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateOriginInsertionNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode.InnerSingleton, Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FIsolateComponentNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FIsolateComponentNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IsolateComponentNode;
class UScriptStruct* FIsolateComponentNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IsolateComponentNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IsolateComponentNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIsolateComponentNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("IsolateComponentNode"));
	}
	return Z_Registration_Info_UScriptStruct_IsolateComponentNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FIsolateComponentNode>()
{
	return FIsolateComponentNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIsolateComponentNode_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteHiddenFaces_MetaData[];
#endif
		static void NewProp_bDeleteHiddenFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteHiddenFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetComponentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIsolateComponentNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "//typedef FManagedArrayCollection DataType;\n" },
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
		{ "ToolTip", "typedef FManagedArrayCollection DataType;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsolateComponentNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_bDeleteHiddenFaces_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_bDeleteHiddenFaces_SetBit(void* Obj)
	{
		((FIsolateComponentNode*)Obj)->bDeleteHiddenFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_bDeleteHiddenFaces = { "bDeleteHiddenFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FIsolateComponentNode), &Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_bDeleteHiddenFaces_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_bDeleteHiddenFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_bDeleteHiddenFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_TargetComponentIndex_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_TargetComponentIndex = { "TargetComponentIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIsolateComponentNode, TargetComponentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_TargetComponentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_TargetComponentIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_bDeleteHiddenFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewProp_TargetComponentIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"IsolateComponentNode",
		sizeof(FIsolateComponentNode),
		alignof(FIsolateComponentNode),
		Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIsolateComponentNode()
	{
		if (!Z_Registration_Info_UScriptStruct_IsolateComponentNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IsolateComponentNode.InnerSingleton, Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IsolateComponentNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FGetSurfaceIndicesNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGetSurfaceIndicesNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode;
class UScriptStruct* FGetSurfaceIndicesNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("GetSurfaceIndicesNode"));
	}
	return Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FGetSurfaceIndicesNode>()
{
	return FGetSurfaceIndicesNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryGroupGuidsIn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryGroupGuidsIn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryGroupGuidsIn;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SurfaceIndicesOut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceIndicesOut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SurfaceIndicesOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetSurfaceIndicesNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetSurfaceIndicesNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_GeometryGroupGuidsIn_Inner = { "GeometryGroupGuidsIn", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_GeometryGroupGuidsIn_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "GeometryGroupGuidsIn" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_GeometryGroupGuidsIn = { "GeometryGroupGuidsIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetSurfaceIndicesNode, GeometryGroupGuidsIn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_GeometryGroupGuidsIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_GeometryGroupGuidsIn_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_SurfaceIndicesOut_Inner = { "SurfaceIndicesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_SurfaceIndicesOut_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "SurfaceIndicesOut" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshEngineAssetNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_SurfaceIndicesOut = { "SurfaceIndicesOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGetSurfaceIndicesNode, SurfaceIndicesOut), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_SurfaceIndicesOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_SurfaceIndicesOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_Collection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_GeometryGroupGuidsIn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_GeometryGroupGuidsIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_SurfaceIndicesOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewProp_SurfaceIndicesOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GetSurfaceIndicesNode",
		sizeof(FGetSurfaceIndicesNode),
		alignof(FGetSurfaceIndicesNode),
		Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetSurfaceIndicesNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode.InnerSingleton, Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshEngineAssetNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshEngineAssetNodes_h_Statics::ScriptStructInfo[] = {
		{ FGetFleshAssetDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGetFleshAssetDataflowNode_Statics::NewStructOps, TEXT("GetFleshAssetDataflowNode"), &Z_Registration_Info_UScriptStruct_GetFleshAssetDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetFleshAssetDataflowNode), 2008795730U) },
		{ FFleshAssetTerminalDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FFleshAssetTerminalDataflowNode_Statics::NewStructOps, TEXT("FleshAssetTerminalDataflowNode"), &Z_Registration_Info_UScriptStruct_FleshAssetTerminalDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFleshAssetTerminalDataflowNode), 178174497U) },
		{ FSetFleshDefaultPropertiesNode::StaticStruct, Z_Construct_UScriptStruct_FSetFleshDefaultPropertiesNode_Statics::NewStructOps, TEXT("SetFleshDefaultPropertiesNode"), &Z_Registration_Info_UScriptStruct_SetFleshDefaultPropertiesNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSetFleshDefaultPropertiesNode), 3517550141U) },
		{ FComputeFiberFieldNode::StaticStruct, Z_Construct_UScriptStruct_FComputeFiberFieldNode_Statics::NewStructOps, TEXT("ComputeFiberFieldNode"), &Z_Registration_Info_UScriptStruct_ComputeFiberFieldNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeFiberFieldNode), 688249508U) },
		{ FComputeIslandsNode::StaticStruct, Z_Construct_UScriptStruct_FComputeIslandsNode_Statics::NewStructOps, TEXT("ComputeIslandsNode"), &Z_Registration_Info_UScriptStruct_ComputeIslandsNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeIslandsNode), 2125554076U) },
		{ FGenerateOriginInsertionNode::StaticStruct, Z_Construct_UScriptStruct_FGenerateOriginInsertionNode_Statics::NewStructOps, TEXT("GenerateOriginInsertionNode"), &Z_Registration_Info_UScriptStruct_GenerateOriginInsertionNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateOriginInsertionNode), 785637023U) },
		{ FIsolateComponentNode::StaticStruct, Z_Construct_UScriptStruct_FIsolateComponentNode_Statics::NewStructOps, TEXT("IsolateComponentNode"), &Z_Registration_Info_UScriptStruct_IsolateComponentNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIsolateComponentNode), 993476926U) },
		{ FGetSurfaceIndicesNode::StaticStruct, Z_Construct_UScriptStruct_FGetSurfaceIndicesNode_Statics::NewStructOps, TEXT("GetSurfaceIndicesNode"), &Z_Registration_Info_UScriptStruct_GetSurfaceIndicesNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGetSurfaceIndicesNode), 571705218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshEngineAssetNodes_h_870712999(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshEngineAssetNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshEngineAssetNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
