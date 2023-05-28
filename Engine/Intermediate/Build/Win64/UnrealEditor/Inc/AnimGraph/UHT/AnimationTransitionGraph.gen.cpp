// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationTransitionGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTransitionGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationTransitionGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_TransitionResult_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationTransitionGraph::StaticRegisterNativesUAnimationTransitionGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationTransitionGraph);
	UClass* Z_Construct_UClass_UAnimationTransitionGraph_NoRegister()
	{
		return UAnimationTransitionGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationTransitionGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyResultNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyResultNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationTransitionGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationTransitionGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationTransitionGraph.h" },
		{ "ModuleRelativePath", "Public/AnimationTransitionGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationTransitionGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode = { "MyResultNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationTransitionGraph, MyResultNode), Z_Construct_UClass_UAnimGraphNode_TransitionResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationTransitionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationTransitionGraph_Statics::NewProp_MyResultNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationTransitionGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationTransitionGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationTransitionGraph_Statics::ClassParams = {
		&UAnimationTransitionGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationTransitionGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationTransitionGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationTransitionGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationTransitionGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimationTransitionGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationTransitionGraph.OuterSingleton, Z_Construct_UClass_UAnimationTransitionGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationTransitionGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationTransitionGraph>()
	{
		return UAnimationTransitionGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationTransitionGraph);
	UAnimationTransitionGraph::~UAnimationTransitionGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationTransitionGraph, UAnimationTransitionGraph::StaticClass, TEXT("UAnimationTransitionGraph"), &Z_Registration_Info_UClass_UAnimationTransitionGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationTransitionGraph), 4168427414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionGraph_h_2249345282(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationTransitionGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
