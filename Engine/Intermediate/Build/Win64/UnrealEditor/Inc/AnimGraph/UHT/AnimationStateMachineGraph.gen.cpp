// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationStateMachineGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationStateMachineGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateEntryNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationStateMachineGraph::StaticRegisterNativesUAnimationStateMachineGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationStateMachineGraph);
	UClass* Z_Construct_UClass_UAnimationStateMachineGraph_NoRegister()
	{
		return UAnimationStateMachineGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationStateMachineGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAnimGraphNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerAnimGraphNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationStateMachineGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationStateMachineGraph.h" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode_MetaData[] = {
		{ "Comment", "// Entry node within the state machine\n" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineGraph.h" },
		{ "ToolTip", "Entry node within the state machine" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationStateMachineGraph, EntryNode), Z_Construct_UClass_UAnimStateEntryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode_MetaData[] = {
		{ "Comment", "// Parent instance node\n" },
		{ "ModuleRelativePath", "Public/AnimationStateMachineGraph.h" },
		{ "ToolTip", "Parent instance node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode = { "OwnerAnimGraphNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationStateMachineGraph, OwnerAnimGraphNode), Z_Construct_UClass_UAnimGraphNode_StateMachineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationStateMachineGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_EntryNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationStateMachineGraph_Statics::NewProp_OwnerAnimGraphNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationStateMachineGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationStateMachineGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationStateMachineGraph_Statics::ClassParams = {
		&UAnimationStateMachineGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationStateMachineGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationStateMachineGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationStateMachineGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimationStateMachineGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationStateMachineGraph.OuterSingleton, Z_Construct_UClass_UAnimationStateMachineGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationStateMachineGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationStateMachineGraph>()
	{
		return UAnimationStateMachineGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationStateMachineGraph);
	UAnimationStateMachineGraph::~UAnimationStateMachineGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationStateMachineGraph, UAnimationStateMachineGraph::StaticClass, TEXT("UAnimationStateMachineGraph"), &Z_Registration_Info_UClass_UAnimationStateMachineGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationStateMachineGraph), 1898906497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_2600888995(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationStateMachineGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
