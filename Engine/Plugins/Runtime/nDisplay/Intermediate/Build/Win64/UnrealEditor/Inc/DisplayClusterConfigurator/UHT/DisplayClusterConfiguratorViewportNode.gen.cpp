// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Views/OutputMapping/EdNodes/DisplayClusterConfiguratorViewportNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfiguratorViewportNode() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfigurator();
// End Cross Module References
	void UDisplayClusterConfiguratorViewportNode::StaticRegisterNativesUDisplayClusterConfiguratorViewportNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfiguratorViewportNode);
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_NoRegister()
	{
		return UDisplayClusterConfiguratorViewportNode::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Views/OutputMapping/EdNodes/DisplayClusterConfiguratorViewportNode.h" },
		{ "ModuleRelativePath", "Private/Views/OutputMapping/EdNodes/DisplayClusterConfiguratorViewportNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfiguratorViewportNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics::ClassParams = {
		&UDisplayClusterConfiguratorViewportNode::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfiguratorViewportNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfiguratorViewportNode.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfiguratorViewportNode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterConfiguratorViewportNode>()
	{
		return UDisplayClusterConfiguratorViewportNode::StaticClass();
	}
	UDisplayClusterConfiguratorViewportNode::UDisplayClusterConfiguratorViewportNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfiguratorViewportNode);
	UDisplayClusterConfiguratorViewportNode::~UDisplayClusterConfiguratorViewportNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorViewportNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorViewportNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfiguratorViewportNode, UDisplayClusterConfiguratorViewportNode::StaticClass, TEXT("UDisplayClusterConfiguratorViewportNode"), &Z_Registration_Info_UClass_UDisplayClusterConfiguratorViewportNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfiguratorViewportNode), 1574380047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorViewportNode_h_1166354069(TEXT("/Script/DisplayClusterConfigurator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorViewportNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorViewportNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
