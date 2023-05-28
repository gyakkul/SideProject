// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationBlendSpaceSampleGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBlendSpaceSampleGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationBlendSpaceSampleGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BlendSpaceSampleResult_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationBlendSpaceSampleGraph::StaticRegisterNativesUAnimationBlendSpaceSampleGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationBlendSpaceSampleGraph);
	UClass* Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_NoRegister()
	{
		return UAnimationBlendSpaceSampleGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResultNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationBlendSpaceSampleGraph.h" },
		{ "ModuleRelativePath", "Public/AnimationBlendSpaceSampleGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::NewProp_ResultNode_MetaData[] = {
		{ "Comment", "// Result node within the state's animation graph\n" },
		{ "ModuleRelativePath", "Public/AnimationBlendSpaceSampleGraph.h" },
		{ "ToolTip", "Result node within the state's animation graph" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationBlendSpaceSampleGraph, ResultNode), Z_Construct_UClass_UAnimGraphNode_BlendSpaceSampleResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::NewProp_ResultNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::NewProp_ResultNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::NewProp_ResultNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBlendSpaceSampleGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::ClassParams = {
		&UAnimationBlendSpaceSampleGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBlendSpaceSampleGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimationBlendSpaceSampleGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationBlendSpaceSampleGraph.OuterSingleton, Z_Construct_UClass_UAnimationBlendSpaceSampleGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationBlendSpaceSampleGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationBlendSpaceSampleGraph>()
	{
		return UAnimationBlendSpaceSampleGraph::StaticClass();
	}
	UAnimationBlendSpaceSampleGraph::UAnimationBlendSpaceSampleGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBlendSpaceSampleGraph);
	UAnimationBlendSpaceSampleGraph::~UAnimationBlendSpaceSampleGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationBlendSpaceSampleGraph, UAnimationBlendSpaceSampleGraph::StaticClass, TEXT("UAnimationBlendSpaceSampleGraph"), &Z_Registration_Info_UClass_UAnimationBlendSpaceSampleGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationBlendSpaceSampleGraph), 242130552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_1655470803(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationBlendSpaceSampleGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
