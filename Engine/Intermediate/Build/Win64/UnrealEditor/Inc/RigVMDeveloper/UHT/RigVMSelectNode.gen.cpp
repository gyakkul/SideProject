// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMSelectNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMSelectNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMSelectNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void UDEPRECATED_RigVMSelectNode::StaticRegisterNativesUDEPRECATED_RigVMSelectNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_RigVMSelectNode);
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_NoRegister()
	{
		return UDEPRECATED_RigVMSelectNode::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A select node is used to select between multiple values\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMSelectNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMSelectNode.h" },
		{ "ToolTip", "A select node is used to select between multiple values" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_RigVMSelectNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics::ClassParams = {
		&UDEPRECATED_RigVMSelectNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMSelectNode()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_RigVMSelectNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_RigVMSelectNode.OuterSingleton, Z_Construct_UClass_UDEPRECATED_RigVMSelectNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_RigVMSelectNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<UDEPRECATED_RigVMSelectNode>()
	{
		return UDEPRECATED_RigVMSelectNode::StaticClass();
	}
	UDEPRECATED_RigVMSelectNode::UDEPRECATED_RigVMSelectNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_RigVMSelectNode);
	UDEPRECATED_RigVMSelectNode::~UDEPRECATED_RigVMSelectNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMSelectNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMSelectNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_RigVMSelectNode, UDEPRECATED_RigVMSelectNode::StaticClass, TEXT("UDEPRECATED_RigVMSelectNode"), &Z_Registration_Info_UClass_UDEPRECATED_RigVMSelectNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_RigVMSelectNode), 3565998563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMSelectNode_h_1313233402(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMSelectNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMSelectNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
