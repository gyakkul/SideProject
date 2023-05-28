// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_TwistCorrectiveNode.h"
#include "BoneControllers/AnimNode_TwistCorrectiveNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_TwistCorrectiveNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_NoRegister();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_TwistCorrectiveNode::StaticRegisterNativesUAnimGraphNode_TwistCorrectiveNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_TwistCorrectiveNode);
	UClass* Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_NoRegister()
	{
		return UAnimGraphNode_TwistCorrectiveNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the 'source version' of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)\n */" },
		{ "IncludePath", "AnimGraphNode_TwistCorrectiveNode.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TwistCorrectiveNode.h" },
		{ "ToolTip", "This is the 'source version' of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_TwistCorrectiveNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_TwistCorrectiveNode, Node), Z_Construct_UScriptStruct_FAnimNode_TwistCorrectiveNode, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::NewProp_Node_MetaData)) }; // 858119886
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_TwistCorrectiveNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::ClassParams = {
		&UAnimGraphNode_TwistCorrectiveNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_TwistCorrectiveNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_TwistCorrectiveNode.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_TwistCorrectiveNode.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_TwistCorrectiveNode>()
	{
		return UAnimGraphNode_TwistCorrectiveNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_TwistCorrectiveNode);
	UAnimGraphNode_TwistCorrectiveNode::~UAnimGraphNode_TwistCorrectiveNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_TwistCorrectiveNode, UAnimGraphNode_TwistCorrectiveNode::StaticClass, TEXT("UAnimGraphNode_TwistCorrectiveNode"), &Z_Registration_Info_UClass_UAnimGraphNode_TwistCorrectiveNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_TwistCorrectiveNode), 3722768789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_3113606159(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_TwistCorrectiveNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
