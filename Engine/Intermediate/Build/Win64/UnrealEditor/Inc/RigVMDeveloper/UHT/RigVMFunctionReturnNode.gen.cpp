// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMFunctionReturnNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunctionReturnNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReturnNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionReturnNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMFunctionReturnNode::StaticRegisterNativesURigVMFunctionReturnNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMFunctionReturnNode);
	UClass* Z_Construct_UClass_URigVMFunctionReturnNode_NoRegister()
	{
		return URigVMFunctionReturnNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMFunctionReturnNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMFunctionReturnNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMFunctionReturnNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Function Return node is used to provide access to the \n * output pins of the library node for links within.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMFunctionReturnNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMFunctionReturnNode.h" },
		{ "ToolTip", "The Function Return node is used to provide access to the\noutput pins of the library node for links within." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMFunctionReturnNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMFunctionReturnNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMFunctionReturnNode_Statics::ClassParams = {
		&URigVMFunctionReturnNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URigVMFunctionReturnNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMFunctionReturnNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMFunctionReturnNode()
	{
		if (!Z_Registration_Info_UClass_URigVMFunctionReturnNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMFunctionReturnNode.OuterSingleton, Z_Construct_UClass_URigVMFunctionReturnNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMFunctionReturnNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMFunctionReturnNode>()
	{
		return URigVMFunctionReturnNode::StaticClass();
	}
	URigVMFunctionReturnNode::URigVMFunctionReturnNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMFunctionReturnNode);
	URigVMFunctionReturnNode::~URigVMFunctionReturnNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMFunctionReturnNode, URigVMFunctionReturnNode::StaticClass, TEXT("URigVMFunctionReturnNode"), &Z_Registration_Info_UClass_URigVMFunctionReturnNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMFunctionReturnNode), 100106881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_3848637926(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMFunctionReturnNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
