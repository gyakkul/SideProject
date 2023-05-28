// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/AnimGraph/AnimGraphNode_AnimNextInterfaceGraph.h"
#include "../Internal/AnimGraph/AnimNode_AnimNextInterfaceGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AnimNextInterfaceGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph();
	ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph();
	ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraphUncookedOnly();
// End Cross Module References
	void UAnimGraphNode_AnimNextInterfaceGraph::StaticRegisterNativesUAnimGraphNode_AnimNextInterfaceGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_AnimNextInterfaceGraph);
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_NoRegister()
	{
		return UAnimGraphNode_AnimNextInterfaceGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_CustomProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraphUncookedOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraph/AnimGraphNode_AnimNextInterfaceGraph.h" },
		{ "ModuleRelativePath", "Internal/AnimGraph/AnimGraphNode_AnimNextInterfaceGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Internal/AnimGraph/AnimGraphNode_AnimNextInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_AnimNextInterfaceGraph, Node), Z_Construct_UScriptStruct_FAnimNode_AnimNextInterfaceGraph, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::NewProp_Node_MetaData)) }; // 3895696355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AnimNextInterfaceGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::ClassParams = {
		&UAnimGraphNode_AnimNextInterfaceGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_AnimNextInterfaceGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_AnimNextInterfaceGraph.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_AnimNextInterfaceGraph.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* StaticClass<UAnimGraphNode_AnimNextInterfaceGraph>()
	{
		return UAnimGraphNode_AnimNextInterfaceGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AnimNextInterfaceGraph);
	UAnimGraphNode_AnimNextInterfaceGraph::~UAnimGraphNode_AnimNextInterfaceGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimGraph_AnimGraphNode_AnimNextInterfaceGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimGraph_AnimGraphNode_AnimNextInterfaceGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_AnimNextInterfaceGraph, UAnimGraphNode_AnimNextInterfaceGraph::StaticClass, TEXT("UAnimGraphNode_AnimNextInterfaceGraph"), &Z_Registration_Info_UClass_UAnimGraphNode_AnimNextInterfaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_AnimNextInterfaceGraph), 2458899674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimGraph_AnimGraphNode_AnimNextInterfaceGraph_h_872323617(TEXT("/Script/AnimNextInterfaceGraphUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimGraph_AnimGraphNode_AnimNextInterfaceGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimGraph_AnimGraphNode_AnimNextInterfaceGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
