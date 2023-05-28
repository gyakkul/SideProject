// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMCollapseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMCollapseNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCollapseNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCollapseNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMCollapseNode::StaticRegisterNativesURigVMCollapseNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMCollapseNode);
	UClass* Z_Construct_UClass_URigVMCollapseNode_NoRegister()
	{
		return URigVMCollapseNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMCollapseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainedGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContainedGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeKeywords_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeKeywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NodeDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMCollapseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMLibraryNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCollapseNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Collapse Node is a library node which stores the \n * function and its nodes directly within the node itself.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMCollapseNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCollapseNode.h" },
		{ "ToolTip", "The Collapse Node is a library node which stores the\nfunction and its nodes directly within the node itself." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_ContainedGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCollapseNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_ContainedGraph = { "ContainedGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMCollapseNode, ContainedGraph), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_ContainedGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_ContainedGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeCategory_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCollapseNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeCategory = { "NodeCategory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMCollapseNode, NodeCategory), METADATA_PARAMS(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeKeywords_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCollapseNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeKeywords = { "NodeKeywords", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMCollapseNode, NodeKeywords), METADATA_PARAMS(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeKeywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeKeywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMCollapseNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeDescription = { "NodeDescription", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMCollapseNode, NodeDescription), METADATA_PARAMS(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMCollapseNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_ContainedGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeKeywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMCollapseNode_Statics::NewProp_NodeDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMCollapseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMCollapseNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMCollapseNode_Statics::ClassParams = {
		&URigVMCollapseNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URigVMCollapseNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCollapseNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMCollapseNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMCollapseNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMCollapseNode()
	{
		if (!Z_Registration_Info_UClass_URigVMCollapseNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMCollapseNode.OuterSingleton, Z_Construct_UClass_URigVMCollapseNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMCollapseNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMCollapseNode>()
	{
		return URigVMCollapseNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMCollapseNode);
	URigVMCollapseNode::~URigVMCollapseNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCollapseNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCollapseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMCollapseNode, URigVMCollapseNode::StaticClass, TEXT("URigVMCollapseNode"), &Z_Registration_Info_UClass_URigVMCollapseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMCollapseNode), 906149632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCollapseNode_h_3572771524(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCollapseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMCollapseNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
