// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/GeometryCollectionSkeletalMeshNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionSkeletalMeshNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowNode();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GEOMETRYCOLLECTIONNODES_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionNodes();
// End Cross Module References

static_assert(std::is_polymorphic<FSkeletonToCollectionDataflowNode>() == std::is_polymorphic<FDataflowNode>(), "USTRUCT FSkeletonToCollectionDataflowNode cannot be polymorphic unless super FDataflowNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode;
class UScriptStruct* FSkeletonToCollectionDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionNodes(), TEXT("SkeletonToCollectionDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONNODES_API UScriptStruct* StaticStruct<FSkeletonToCollectionDataflowNode>()
{
	return FSkeletonToCollectionDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "DataflowGeometryCollection", "" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSkeletalMeshNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletonToCollectionDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "DataflowInput", "" },
		{ "DisplayName", "Skeleton" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSkeletalMeshNodes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletonToCollectionDataflowNode, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowOutput", "" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Public/Dataflow/GeometryCollectionSkeletalMeshNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletonToCollectionDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionNodes,
		Z_Construct_UScriptStruct_FDataflowNode,
		&NewStructOps,
		"SkeletonToCollectionDataflowNode",
		sizeof(FSkeletonToCollectionDataflowNode),
		alignof(FSkeletonToCollectionDataflowNode),
		Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshNodes_h_Statics::ScriptStructInfo[] = {
		{ FSkeletonToCollectionDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FSkeletonToCollectionDataflowNode_Statics::NewStructOps, TEXT("SkeletonToCollectionDataflowNode"), &Z_Registration_Info_UScriptStruct_SkeletonToCollectionDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletonToCollectionDataflowNode), 961324248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshNodes_h_2663072607(TEXT("/Script/GeometryCollectionNodes"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryCollectionPlugin_Source_GeometryCollectionNodes_Public_Dataflow_GeometryCollectionSkeletalMeshNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
