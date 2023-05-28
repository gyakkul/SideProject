// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_PoseBlendNode.h"
#include "AnimNodes/AnimNode_PoseBlendNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_PoseBlendNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseBlendNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_PoseHandler();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_PoseBlendNode::StaticRegisterNativesUAnimGraphNode_PoseBlendNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_PoseBlendNode);
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_NoRegister()
	{
		return UAnimGraphNode_PoseBlendNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_PoseHandler,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_PoseBlendNode.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseBlendNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_PoseBlendNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_PoseBlendNode, Node), Z_Construct_UScriptStruct_FAnimNode_PoseBlendNode, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::NewProp_Node_MetaData)) }; // 2158891074
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_PoseBlendNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::ClassParams = {
		&UAnimGraphNode_PoseBlendNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_PoseBlendNode()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_PoseBlendNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_PoseBlendNode.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_PoseBlendNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_PoseBlendNode.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_PoseBlendNode>()
	{
		return UAnimGraphNode_PoseBlendNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_PoseBlendNode);
	UAnimGraphNode_PoseBlendNode::~UAnimGraphNode_PoseBlendNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_PoseBlendNode, UAnimGraphNode_PoseBlendNode::StaticClass, TEXT("UAnimGraphNode_PoseBlendNode"), &Z_Registration_Info_UClass_UAnimGraphNode_PoseBlendNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_PoseBlendNode), 3773702250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_2686648622(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_PoseBlendNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
