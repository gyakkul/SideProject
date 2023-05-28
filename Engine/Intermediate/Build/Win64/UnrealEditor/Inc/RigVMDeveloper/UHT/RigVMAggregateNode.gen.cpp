// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMAggregateNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMAggregateNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMAggregateNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMAggregateNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMCollapseNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMAggregateNode::StaticRegisterNativesURigVMAggregateNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMAggregateNode);
	UClass* Z_Construct_UClass_URigVMAggregateNode_NoRegister()
	{
		return URigVMAggregateNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMAggregateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMAggregateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMCollapseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMAggregateNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Aggregate Node contains a subgraph of nodes with aggregate pins (2in+1out or 1out+2in) connected\n * to each other. For example, a unit node IntAdd which adds 2 integers and provides Result=A+B could have\n * A, B and Result as aggregates in order to add additional input pins to construct an Aggregate Node that computes\n * Result=A+B+C.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMAggregateNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMAggregateNode.h" },
		{ "ToolTip", "The Aggregate Node contains a subgraph of nodes with aggregate pins (2in+1out or 1out+2in) connected\nto each other. For example, a unit node IntAdd which adds 2 integers and provides Result=A+B could have\nA, B and Result as aggregates in order to add additional input pins to construct an Aggregate Node that computes\nResult=A+B+C." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMAggregateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMAggregateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMAggregateNode_Statics::ClassParams = {
		&URigVMAggregateNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMAggregateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMAggregateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMAggregateNode()
	{
		if (!Z_Registration_Info_UClass_URigVMAggregateNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMAggregateNode.OuterSingleton, Z_Construct_UClass_URigVMAggregateNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMAggregateNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMAggregateNode>()
	{
		return URigVMAggregateNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMAggregateNode);
	URigVMAggregateNode::~URigVMAggregateNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMAggregateNode, URigVMAggregateNode::StaticClass, TEXT("URigVMAggregateNode"), &Z_Registration_Info_UClass_URigVMAggregateNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMAggregateNode), 3695118284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_3170851513(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMAggregateNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
