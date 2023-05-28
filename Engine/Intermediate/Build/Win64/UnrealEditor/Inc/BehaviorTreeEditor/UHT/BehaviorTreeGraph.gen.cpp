// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeGraph() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraph();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeGraph::StaticRegisterNativesUBehaviorTreeGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeGraph);
	UClass* Z_Construct_UClass_UBehaviorTreeGraph_NoRegister()
	{
		return UBehaviorTreeGraph::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ModCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingModCounter_MetaData[];
#endif
		static void NewProp_bIsUsingModCounter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingModCounter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeGraph.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter_MetaData[] = {
		{ "Comment", "/** increased with every graph rebuild, used to refresh data from subtrees */" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraph.h" },
		{ "ToolTip", "increased with every graph rebuild, used to refresh data from subtrees" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter = { "ModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBehaviorTreeGraph, ModCounter), METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTreeGraph.h" },
	};
#endif
	void Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_SetBit(void* Obj)
	{
		((UBehaviorTreeGraph*)Obj)->bIsUsingModCounter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter = { "bIsUsingModCounter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBehaviorTreeGraph), &Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviorTreeGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_ModCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviorTreeGraph_Statics::NewProp_bIsUsingModCounter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeGraph_Statics::ClassParams = {
		&UBehaviorTreeGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBehaviorTreeGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeGraph()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeGraph.OuterSingleton, Z_Construct_UClass_UBehaviorTreeGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeGraph.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeGraph>()
	{
		return UBehaviorTreeGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeGraph);
	UBehaviorTreeGraph::~UBehaviorTreeGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeGraph, UBehaviorTreeGraph::StaticClass, TEXT("UBehaviorTreeGraph"), &Z_Registration_Info_UClass_UBehaviorTreeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeGraph), 1466770786U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_791617512(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
