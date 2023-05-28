// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusNodeSubGraph.h"
#include "OptimusBindingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeSubGraph() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GraphTerminal_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBinding();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNodeSubGraph::StaticRegisterNativesUOptimusNodeSubGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeSubGraph);
	UClass* Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister()
	{
		return UOptimusNodeSubGraph::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNodeSubGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_EntryNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnNode_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ReturnNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNodeSubGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNodeGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeSubGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusNodeSubGraph.h" },
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings_Inner = { "InputBindings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(nullptr, 0) }; // 960590533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "// FIXME: These are uneditable for now.\n" },
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
		{ "ToolTip", "FIXME: These are uneditable for now." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings = { "InputBindings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeSubGraph, InputBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings_MetaData)) }; // 960590533
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings_Inner = { "OutputBindings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(nullptr, 0) }; // 960590533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings = { "OutputBindings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeSubGraph, OutputBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings_MetaData)) }; // 960590533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_EntryNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_EntryNode = { "EntryNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeSubGraph, EntryNode), Z_Construct_UClass_UOptimusNode_GraphTerminal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_EntryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_EntryNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_ReturnNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeSubGraph.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_ReturnNode = { "ReturnNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeSubGraph, ReturnNode), Z_Construct_UClass_UOptimusNode_GraphTerminal_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_ReturnNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_ReturnNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodeSubGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_InputBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_OutputBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_EntryNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeSubGraph_Statics::NewProp_ReturnNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNodeSubGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodeSubGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeSubGraph_Statics::ClassParams = {
		&UOptimusNodeSubGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNodeSubGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeSubGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNodeSubGraph()
	{
		if (!Z_Registration_Info_UClass_UOptimusNodeSubGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeSubGraph.OuterSingleton, Z_Construct_UClass_UOptimusNodeSubGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNodeSubGraph.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeSubGraph>()
	{
		return UOptimusNodeSubGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeSubGraph);
	UOptimusNodeSubGraph::~UOptimusNodeSubGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeSubGraph, UOptimusNodeSubGraph::StaticClass, TEXT("UOptimusNodeSubGraph"), &Z_Registration_Info_UClass_UOptimusNodeSubGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeSubGraph), 2791657675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_497935285(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeSubGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
