// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMDispatchNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatchNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMDispatchNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMDispatchNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMDispatchNode::StaticRegisterNativesURigVMDispatchNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMDispatchNode);
	UClass* Z_Construct_UClass_URigVMDispatchNode_NoRegister()
	{
		return URigVMDispatchNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMDispatchNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMDispatchNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMDispatchNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Struct Node represents a Function Invocation of a RIGVM_METHOD\n * declared on a USTRUCT. Struct Nodes have input / output pins for all\n * struct UPROPERTY members.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMDispatchNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMDispatchNode.h" },
		{ "ToolTip", "The Struct Node represents a Function Invocation of a RIGVM_METHOD\ndeclared on a USTRUCT. Struct Nodes have input / output pins for all\nstruct UPROPERTY members." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMDispatchNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMDispatchNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMDispatchNode_Statics::ClassParams = {
		&URigVMDispatchNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URigVMDispatchNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMDispatchNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMDispatchNode()
	{
		if (!Z_Registration_Info_UClass_URigVMDispatchNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMDispatchNode.OuterSingleton, Z_Construct_UClass_URigVMDispatchNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMDispatchNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMDispatchNode>()
	{
		return URigVMDispatchNode::StaticClass();
	}
	URigVMDispatchNode::URigVMDispatchNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMDispatchNode);
	URigVMDispatchNode::~URigVMDispatchNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMDispatchNode, URigVMDispatchNode::StaticClass, TEXT("URigVMDispatchNode"), &Z_Registration_Info_UClass_URigVMDispatchNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMDispatchNode), 605488225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_72217601(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMDispatchNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
