// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusFunctionNodeGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusFunctionNodeGraph() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusFunctionNodeGraph::StaticRegisterNativesUOptimusFunctionNodeGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusFunctionNodeGraph);
	UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph_NoRegister()
	{
		return UOptimusFunctionNodeGraph::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNodeSubGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OptimusFunctionNodeGraph.h" },
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The category of the node based of of this graph for listing purposes */" },
		{ "ModuleRelativePath", "Public/OptimusFunctionNodeGraph.h" },
		{ "ToolTip", "The category of the node based of of this graph for listing purposes" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusFunctionNodeGraph, Category), METADATA_PARAMS(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::NewProp_Category,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusFunctionNodeGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::ClassParams = {
		&UOptimusFunctionNodeGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusFunctionNodeGraph()
	{
		if (!Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.OuterSingleton, Z_Construct_UClass_UOptimusFunctionNodeGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusFunctionNodeGraph.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusFunctionNodeGraph>()
	{
		return UOptimusFunctionNodeGraph::StaticClass();
	}
	UOptimusFunctionNodeGraph::UOptimusFunctionNodeGraph() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusFunctionNodeGraph);
	UOptimusFunctionNodeGraph::~UOptimusFunctionNodeGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusFunctionNodeGraph, UOptimusFunctionNodeGraph::StaticClass, TEXT("UOptimusFunctionNodeGraph"), &Z_Registration_Info_UClass_UOptimusFunctionNodeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusFunctionNodeGraph), 342080302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_623163351(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusFunctionNodeGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
