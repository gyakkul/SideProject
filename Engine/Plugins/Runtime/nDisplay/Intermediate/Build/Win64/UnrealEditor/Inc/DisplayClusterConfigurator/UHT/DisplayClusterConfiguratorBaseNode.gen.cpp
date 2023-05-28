// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Views/OutputMapping/EdNodes/DisplayClusterConfiguratorBaseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfiguratorBaseNode() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfigurator();
// End Cross Module References
	void UDisplayClusterConfiguratorBaseNode::StaticRegisterNativesUDisplayClusterConfiguratorBaseNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfiguratorBaseNode);
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_NoRegister()
	{
		return UDisplayClusterConfiguratorBaseNode::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Views/OutputMapping/EdNodes/DisplayClusterConfiguratorBaseNode.h" },
		{ "ModuleRelativePath", "Private/Views/OutputMapping/EdNodes/DisplayClusterConfiguratorBaseNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Private/Views/OutputMapping/EdNodes/DisplayClusterConfiguratorBaseNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0024080400002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterConfiguratorBaseNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfiguratorBaseNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::ClassParams = {
		&UDisplayClusterConfiguratorBaseNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfiguratorBaseNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfiguratorBaseNode.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfiguratorBaseNode.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterConfiguratorBaseNode>()
	{
		return UDisplayClusterConfiguratorBaseNode::StaticClass();
	}
	UDisplayClusterConfiguratorBaseNode::UDisplayClusterConfiguratorBaseNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfiguratorBaseNode);
	UDisplayClusterConfiguratorBaseNode::~UDisplayClusterConfiguratorBaseNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorBaseNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorBaseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfiguratorBaseNode, UDisplayClusterConfiguratorBaseNode::StaticClass, TEXT("UDisplayClusterConfiguratorBaseNode"), &Z_Registration_Info_UClass_UDisplayClusterConfiguratorBaseNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfiguratorBaseNode), 354938246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorBaseNode_h_3203824022(TEXT("/Script/DisplayClusterConfigurator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorBaseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_EdNodes_DisplayClusterConfiguratorBaseNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
