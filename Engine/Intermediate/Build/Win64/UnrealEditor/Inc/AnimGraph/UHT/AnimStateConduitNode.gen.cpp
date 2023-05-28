// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimStateConduitNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateConduitNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateConduitNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateConduitNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimStateConduitNode::StaticRegisterNativesUAnimStateConduitNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimStateConduitNode);
	UClass* Z_Construct_UClass_UAnimStateConduitNode_NoRegister()
	{
		return UAnimStateConduitNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateConduitNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateConduitNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimStateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateConduitNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateConduitNode.h" },
		{ "ModuleRelativePath", "Public/AnimStateConduitNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "// The transition graph for this conduit; it's a logic graph, not an animation graph\n" },
		{ "ModuleRelativePath", "Public/AnimStateConduitNode.h" },
		{ "ToolTip", "The transition graph for this conduit; it's a logic graph, not an animation graph" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateConduitNode, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStateConduitNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateConduitNode_Statics::NewProp_BoundGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateConduitNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateConduitNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateConduitNode_Statics::ClassParams = {
		&UAnimStateConduitNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStateConduitNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateConduitNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateConduitNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateConduitNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateConduitNode()
	{
		if (!Z_Registration_Info_UClass_UAnimStateConduitNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimStateConduitNode.OuterSingleton, Z_Construct_UClass_UAnimStateConduitNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimStateConduitNode.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateConduitNode>()
	{
		return UAnimStateConduitNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateConduitNode);
	UAnimStateConduitNode::~UAnimStateConduitNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimStateConduitNode, UAnimStateConduitNode::StaticClass, TEXT("UAnimStateConduitNode"), &Z_Registration_Info_UClass_UAnimStateConduitNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimStateConduitNode), 4193944679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_3033254189(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateConduitNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
