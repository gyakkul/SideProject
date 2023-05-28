// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_LinkedAnimGraph.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedAnimGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_LinkedAnimGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ExternalGraphInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_LinkedAnimGraph::StaticRegisterNativesUAnimGraphNode_LinkedAnimGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_LinkedAnimGraph);
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_NoRegister()
	{
		return UAnimGraphNode_LinkedAnimGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics
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
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_LinkedAnimGraph.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedAnimGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedAnimGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedAnimGraph, Node), Z_Construct_UScriptStruct_FAnimNode_LinkedAnimGraph, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::NewProp_Node_MetaData)) }; // 1674048546
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::NewProp_Node,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_ExternalGraphInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimGraphNode_LinkedAnimGraph, IK2Node_ExternalGraphInterface), false },  // 3749689813
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LinkedAnimGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::ClassParams = {
		&UAnimGraphNode_LinkedAnimGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraph.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_LinkedAnimGraph>()
	{
		return UAnimGraphNode_LinkedAnimGraph::StaticClass();
	}
	UAnimGraphNode_LinkedAnimGraph::UAnimGraphNode_LinkedAnimGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LinkedAnimGraph);
	UAnimGraphNode_LinkedAnimGraph::~UAnimGraphNode_LinkedAnimGraph() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LinkedAnimGraph)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraph, UAnimGraphNode_LinkedAnimGraph::StaticClass, TEXT("UAnimGraphNode_LinkedAnimGraph"), &Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_LinkedAnimGraph), 3158050762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_655866679(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
