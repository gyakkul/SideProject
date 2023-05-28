// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlendSpaceGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendSpaceGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UBlendSpaceGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UBlendSpaceGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UBlendSpaceGraph::StaticRegisterNativesUBlendSpaceGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendSpaceGraph);
	UClass* Z_Construct_UClass_UBlendSpaceGraph_NoRegister()
	{
		return UBlendSpaceGraph::StaticClass();
	}
	struct Z_Construct_UClass_UBlendSpaceGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendSpaceGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Dummy graph to hold sub-graphs for blendspaces. Not edited directly.\n" },
		{ "IncludePath", "BlendSpaceGraph.h" },
		{ "ModuleRelativePath", "Public/BlendSpaceGraph.h" },
		{ "ToolTip", "Dummy graph to hold sub-graphs for blendspaces. Not edited directly." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendSpaceGraph_Statics::NewProp_BlendSpace_MetaData[] = {
		{ "Category", "BlendSpace" },
		{ "Comment", "// Blendspace that we wrap\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BlendSpaceGraph.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Blendspace that we wrap" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlendSpaceGraph_Statics::NewProp_BlendSpace = { "BlendSpace", nullptr, (EPropertyFlags)0x00160000020a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlendSpaceGraph, BlendSpace), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceGraph_Statics::NewProp_BlendSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceGraph_Statics::NewProp_BlendSpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlendSpaceGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlendSpaceGraph_Statics::NewProp_BlendSpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendSpaceGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlendSpaceGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendSpaceGraph_Statics::ClassParams = {
		&UBlendSpaceGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlendSpaceGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceGraph_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendSpaceGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendSpaceGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendSpaceGraph()
	{
		if (!Z_Registration_Info_UClass_UBlendSpaceGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendSpaceGraph.OuterSingleton, Z_Construct_UClass_UBlendSpaceGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendSpaceGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UBlendSpaceGraph>()
	{
		return UBlendSpaceGraph::StaticClass();
	}
	UBlendSpaceGraph::UBlendSpaceGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendSpaceGraph);
	UBlendSpaceGraph::~UBlendSpaceGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlendSpaceGraph, UBlendSpaceGraph::StaticClass, TEXT("UBlendSpaceGraph"), &Z_Registration_Info_UClass_UBlendSpaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendSpaceGraph), 290471882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_3877015496(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_BlendSpaceGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
