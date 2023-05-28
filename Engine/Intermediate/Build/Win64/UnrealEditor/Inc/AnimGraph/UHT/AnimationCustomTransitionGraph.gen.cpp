// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationCustomTransitionGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationCustomTransitionGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationCustomTransitionGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationCustomTransitionGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimationCustomTransitionGraph::StaticRegisterNativesUAnimationCustomTransitionGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationCustomTransitionGraph);
	UClass* Z_Construct_UClass_UAnimationCustomTransitionGraph_NoRegister()
	{
		return UAnimationCustomTransitionGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationCustomTransitionGraph.h" },
		{ "ModuleRelativePath", "Public/AnimationCustomTransitionGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::NewProp_MyResultNode_MetaData[] = {
		{ "Comment", "// Result node within the state's animation graph\n" },
		{ "ModuleRelativePath", "Public/AnimationCustomTransitionGraph.h" },
		{ "ToolTip", "Result node within the state's animation graph" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::NewProp_MyResultNode = { "MyResultNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationCustomTransitionGraph, MyResultNode), Z_Construct_UClass_UAnimGraphNode_CustomTransitionResult_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::NewProp_MyResultNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::NewProp_MyResultNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::NewProp_MyResultNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationCustomTransitionGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::ClassParams = {
		&UAnimationCustomTransitionGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationCustomTransitionGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimationCustomTransitionGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationCustomTransitionGraph.OuterSingleton, Z_Construct_UClass_UAnimationCustomTransitionGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationCustomTransitionGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationCustomTransitionGraph>()
	{
		return UAnimationCustomTransitionGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationCustomTransitionGraph);
	UAnimationCustomTransitionGraph::~UAnimationCustomTransitionGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationCustomTransitionGraph, UAnimationCustomTransitionGraph::StaticClass, TEXT("UAnimationCustomTransitionGraph"), &Z_Registration_Info_UClass_UAnimationCustomTransitionGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationCustomTransitionGraph), 1317157061U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_1195178871(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationCustomTransitionGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
