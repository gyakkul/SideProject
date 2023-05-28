// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMBranchNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMBranchNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMBranchNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void UDEPRECATED_RigVMBranchNode::StaticRegisterNativesUDEPRECATED_RigVMBranchNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_RigVMBranchNode);
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_NoRegister()
	{
		return UDEPRECATED_RigVMBranchNode::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A branch node is used to branch between two blocks of execution\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMBranchNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMBranchNode.h" },
		{ "ToolTip", "A branch node is used to branch between two blocks of execution" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_RigVMBranchNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics::ClassParams = {
		&UDEPRECATED_RigVMBranchNode::StaticClass,
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
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMBranchNode()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_RigVMBranchNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_RigVMBranchNode.OuterSingleton, Z_Construct_UClass_UDEPRECATED_RigVMBranchNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_RigVMBranchNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<UDEPRECATED_RigVMBranchNode>()
	{
		return UDEPRECATED_RigVMBranchNode::StaticClass();
	}
	UDEPRECATED_RigVMBranchNode::UDEPRECATED_RigVMBranchNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_RigVMBranchNode);
	UDEPRECATED_RigVMBranchNode::~UDEPRECATED_RigVMBranchNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMBranchNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMBranchNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_RigVMBranchNode, UDEPRECATED_RigVMBranchNode::StaticClass, TEXT("UDEPRECATED_RigVMBranchNode"), &Z_Registration_Info_UClass_UDEPRECATED_RigVMBranchNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_RigVMBranchNode), 1540981681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMBranchNode_h_2760879828(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMBranchNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMBranchNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
