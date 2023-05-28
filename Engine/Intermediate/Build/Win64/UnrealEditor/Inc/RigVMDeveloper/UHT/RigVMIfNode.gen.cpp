// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMIfNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMIfNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMIfNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMIfNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void UDEPRECATED_RigVMIfNode::StaticRegisterNativesUDEPRECATED_RigVMIfNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_RigVMIfNode);
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMIfNode_NoRegister()
	{
		return UDEPRECATED_RigVMIfNode::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A if node is used to pick between two values\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMIfNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMIfNode.h" },
		{ "ToolTip", "A if node is used to pick between two values" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_RigVMIfNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics::ClassParams = {
		&UDEPRECATED_RigVMIfNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMIfNode()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_RigVMIfNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_RigVMIfNode.OuterSingleton, Z_Construct_UClass_UDEPRECATED_RigVMIfNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_RigVMIfNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<UDEPRECATED_RigVMIfNode>()
	{
		return UDEPRECATED_RigVMIfNode::StaticClass();
	}
	UDEPRECATED_RigVMIfNode::UDEPRECATED_RigVMIfNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_RigVMIfNode);
	UDEPRECATED_RigVMIfNode::~UDEPRECATED_RigVMIfNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMIfNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMIfNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_RigVMIfNode, UDEPRECATED_RigVMIfNode::StaticClass, TEXT("UDEPRECATED_RigVMIfNode"), &Z_Registration_Info_UClass_UDEPRECATED_RigVMIfNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_RigVMIfNode), 3389175384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMIfNode_h_231090165(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMIfNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMIfNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
