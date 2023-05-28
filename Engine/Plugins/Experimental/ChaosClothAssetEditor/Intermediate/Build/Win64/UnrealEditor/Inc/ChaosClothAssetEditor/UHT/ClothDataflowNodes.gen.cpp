// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosClothAsset/ClothDataflowNodes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothDataflowNodes() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	CHAOSCLOTHASSETEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTerminalNode();
	UPackage* Z_Construct_UPackage__Script_ChaosClothAssetEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FClothAssetTerminalDataflowNode>() == std::is_polymorphic<FDataflowTerminalNode>(), "USTRUCT FClothAssetTerminalDataflowNode cannot be polymorphic unless super FDataflowTerminalNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode;
class UScriptStruct* FClothAssetTerminalDataflowNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode, (UObject*)Z_Construct_UPackage__Script_ChaosClothAssetEditor(), TEXT("ClothAssetTerminalDataflowNode"));
	}
	return Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode.OuterSingleton;
}
template<> CHAOSCLOTHASSETEDITOR_API UScriptStruct* StaticStruct<FClothAssetTerminalDataflowNode>()
{
	return FClothAssetTerminalDataflowNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothDataflowNodes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothAssetTerminalDataflowNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::NewProp_Collection_MetaData[] = {
		{ "DataflowInput", "" },
		{ "DataflowOutput", "" },
		{ "DataflowPassthrough", "Collection" },
		{ "DisplayName", "Collection" },
		{ "ModuleRelativePath", "Private/ChaosClothAsset/ClothDataflowNodes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClothAssetTerminalDataflowNode, Collection), Z_Construct_UScriptStruct_FManagedArrayCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::NewProp_Collection_MetaData)) }; // 4011818293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::NewProp_Collection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosClothAssetEditor,
		Z_Construct_UScriptStruct_FDataflowTerminalNode,
		&NewStructOps,
		"ClothAssetTerminalDataflowNode",
		sizeof(FClothAssetTerminalDataflowNode),
		alignof(FClothAssetTerminalDataflowNode),
		Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode()
	{
		if (!Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode.InnerSingleton, Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothDataflowNodes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothDataflowNodes_h_Statics::ScriptStructInfo[] = {
		{ FClothAssetTerminalDataflowNode::StaticStruct, Z_Construct_UScriptStruct_FClothAssetTerminalDataflowNode_Statics::NewStructOps, TEXT("ClothAssetTerminalDataflowNode"), &Z_Registration_Info_UScriptStruct_ClothAssetTerminalDataflowNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothAssetTerminalDataflowNode), 2183742960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothDataflowNodes_h_3795991795(TEXT("/Script/ChaosClothAssetEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothDataflowNodes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosClothAssetEditor_Source_ChaosClothAssetEditor_Private_ChaosClothAsset_ClothDataflowNodes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
