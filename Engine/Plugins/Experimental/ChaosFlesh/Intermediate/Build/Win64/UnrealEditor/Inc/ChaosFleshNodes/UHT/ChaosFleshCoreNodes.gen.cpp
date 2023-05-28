// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshCoreNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshCoreNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FAppendTetrahedralCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FAppendTetrahedralCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode;
class UScriptStruct* FAppendTetrahedralCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("AppendTetrahedralCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FAppendTetrahedralCollectionDataflowNode>()
{
	return FAppendTetrahedralCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection2;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryGroupGuidsOut1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryGroupGuidsOut1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryGroupGuidsOut1;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryGroupGuidsOut2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryGroupGuidsOut2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryGroupGuidsOut2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshCoreNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppendTetrahedralCollectionDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection1_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection1" },
		{ "DisplayName", "Collection1" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshCoreNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection1 = { "Collection1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendTetrahedralCollectionDataflowNode, Collection1), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection1_MetaData)) }; // 4011818293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection2_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DisplayName", "Collection2" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshCoreNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection2 = { "Collection2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendTetrahedralCollectionDataflowNode, Collection2), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection2_MetaData)) }; // 4011818293
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut1_Inner = { "GeometryGroupGuidsOut1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut1_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "GeometryGroupIndicesOut1" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshCoreNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut1 = { "GeometryGroupGuidsOut1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendTetrahedralCollectionDataflowNode, GeometryGroupGuidsOut1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut1_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut2_Inner = { "GeometryGroupGuidsOut2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut2_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "GeometryGroupIndicesOut2" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshCoreNodes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut2 = { "GeometryGroupGuidsOut2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppendTetrahedralCollectionDataflowNode, GeometryGroupGuidsOut2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_Collection2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewProp_GeometryGroupGuidsOut2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"AppendTetrahedralCollectionDataflowNode",
		sizeof(FAppendTetrahedralCollectionDataflowNode),
		alignof(FAppendTetrahedralCollectionDataflowNode),
		Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshCoreNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshCoreNodes_h_Statics::ScriptStructInfo[] = {
		{ FAppendTetrahedralCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FAppendTetrahedralCollectionDataflowNode_Statics::NewStructOps, TEXT("AppendTetrahedralCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_AppendTetrahedralCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppendTetrahedralCollectionDataflowNode), 2637223646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshCoreNodes_h_2979472455(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshCoreNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshCoreNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
