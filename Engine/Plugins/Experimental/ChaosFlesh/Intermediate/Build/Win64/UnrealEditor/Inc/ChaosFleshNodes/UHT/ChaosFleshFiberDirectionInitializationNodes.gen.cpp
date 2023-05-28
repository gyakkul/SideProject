// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/ChaosFleshFiberDirectionInitializationNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosFleshFiberDirectionInitializationNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSFLESHNODES_API UScriptStruct* Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FGenerateFiberDirectionsDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FGenerateFiberDirectionsDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode;
class UScriptStruct* FGenerateFiberDirectionsDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosFleshNodes(), TEXT("GenerateFiberDirectionsDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode.OuterSingleton;
}
template<> CHAOSFLESHNODES_API UScriptStruct* StaticStruct<FGenerateFiberDirectionsDataflowNode>()
{
	return FGenerateFiberDirectionsDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowFlesh", "" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshFiberDirectionInitializationNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGenerateFiberDirectionsDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/ChaosFleshFiberDirectionInitializationNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGenerateFiberDirectionsDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"GenerateFiberDirectionsDataflowNode",
		sizeof(FGenerateFiberDirectionsDataflowNode),
		alignof(FGenerateFiberDirectionsDataflowNode),
		Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshFiberDirectionInitializationNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshFiberDirectionInitializationNodes_h_Statics::ScriptStructInfo[] = {
		{ FGenerateFiberDirectionsDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FGenerateFiberDirectionsDataflowNode_Statics::NewStructOps, TEXT("GenerateFiberDirectionsDataflowNode"), &Z_Registration_Info_UScriptStruct_GenerateFiberDirectionsDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGenerateFiberDirectionsDataflowNode), 2177592688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshFiberDirectionInitializationNodes_h_2537058247(TEXT("/Script/ChaosFleshNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshFiberDirectionInitializationNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshNodes_Public_Dataflow_ChaosFleshFiberDirectionInitializationNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
