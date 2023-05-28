// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OptimusComputeGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusComputeGraph() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeGraph();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeGraph_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusComputeGraph::StaticRegisterNativesUOptimusComputeGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComputeGraph);
	UClass* Z_Construct_UClass_UOptimusComputeGraph_NoRegister()
	{
		return UOptimusComputeGraph::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusComputeGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_KernelToNode_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelToNode_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KernelToNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusComputeGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComputeGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusComputeGraph.h" },
		{ "ModuleRelativePath", "Private/OptimusComputeGraph.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode_Inner = { "KernelToNode", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode_MetaData[] = {
		{ "Comment", "// Lookup into Graphs array from the UComputeGraph kernel index. \n" },
		{ "ModuleRelativePath", "Private/OptimusComputeGraph.h" },
		{ "ToolTip", "Lookup into Graphs array from the UComputeGraph kernel index." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode = { "KernelToNode", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusComputeGraph, KernelToNode), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusComputeGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComputeGraph_Statics::NewProp_KernelToNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusComputeGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusComputeGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComputeGraph_Statics::ClassParams = {
		&UOptimusComputeGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusComputeGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusComputeGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComputeGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusComputeGraph()
	{
		if (!Z_Registration_Info_UClass_UOptimusComputeGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComputeGraph.OuterSingleton, Z_Construct_UClass_UOptimusComputeGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusComputeGraph.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComputeGraph>()
	{
		return UOptimusComputeGraph::StaticClass();
	}
	UOptimusComputeGraph::UOptimusComputeGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComputeGraph);
	UOptimusComputeGraph::~UOptimusComputeGraph() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusComputeGraph)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComputeGraph, UOptimusComputeGraph::StaticClass, TEXT("UOptimusComputeGraph"), &Z_Registration_Info_UClass_UOptimusComputeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComputeGraph), 4216614154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_3886825764(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_OptimusComputeGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
