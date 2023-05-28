// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Views/OutputMapping/EdNodes/DisplayClusterConfiguratorHostNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfiguratorHostNode() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorHostNode();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfigurator();
// End Cross Module References
	void UDisplayClusterConfiguratorHostNode::StaticRegisterNativesUDisplayClusterConfiguratorHostNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfiguratorHostNode);
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_NoRegister()
	{
		return UDisplayClusterConfiguratorHostNode::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Views/OutputMapping/EdNodes/DisplayClusterConfiguratorHostNode.h" },
		{ "ModuleRelativePath", "Private/Views/OutputMapping/EdNodes/DisplayClusterConfiguratorHostNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfiguratorHostNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics::ClassParams = {
		&UDisplayClusterConfiguratorHostNode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorHostNode()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfiguratorHostNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfiguratorHostNode.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfiguratorHostNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfiguratorHostNode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterConfiguratorHostNode>()
	{
		return UDisplayClusterConfiguratorHostNode::StaticClass();
	}
	UDisplayClusterConfiguratorHostNode::UDisplayClusterConfiguratorHostNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfiguratorHostNode);
	UDisplayClusterConfiguratorHostNode::~UDisplayClusterConfiguratorHostNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorHostNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorHostNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfiguratorHostNode, UDisplayClusterConfiguratorHostNode::StaticClass, TEXT("UDisplayClusterConfiguratorHostNode"), &Z_Registration_Info_UClass_UDisplayClusterConfiguratorHostNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfiguratorHostNode), 1675944480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorHostNode_h_1865886832(TEXT("/Script/DisplayClusterConfigurator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorHostNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorHostNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
