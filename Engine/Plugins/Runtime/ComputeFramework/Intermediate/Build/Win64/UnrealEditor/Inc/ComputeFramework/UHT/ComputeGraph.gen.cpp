// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeGraph() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataInterface_NoRegister();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph_NoRegister();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernel_NoRegister();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphEdge();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComputeGraphEdge;
class UScriptStruct* FComputeGraphEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComputeGraphEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComputeGraphEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeGraphEdge, (UObject*)Z_Construct_UPackage__Script_ComputeFramework(), TEXT("ComputeGraphEdge"));
	}
	return Z_Registration_Info_UScriptStruct_ComputeGraphEdge.OuterSingleton;
}
template<> COMPUTEFRAMEWORK_API UScriptStruct* StaticStruct<FComputeGraphEdge>()
{
	return FComputeGraphEdge::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComputeGraphEdge_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KernelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelBindingIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KernelBindingIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataInterfaceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceBindingIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataInterfaceBindingIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKernelInput_MetaData[];
#endif
		static void NewProp_bKernelInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKernelInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingFunctionNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BindingFunctionNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingFunctionNamespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BindingFunctionNamespace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Description of a single edge in a UComputeGraph. \n * todo[CF]: Consider better storage for graph data structure that is easier to interrogate efficiently.\n */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Description of a single edge in a UComputeGraph.\ntodo[CF]: Consider better storage for graph data structure that is easier to interrogate efficiently." },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeGraphEdge>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelIndex = { "KernelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeGraphEdge, KernelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelBindingIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelBindingIndex = { "KernelBindingIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeGraphEdge, KernelBindingIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelBindingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelBindingIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceIndex = { "DataInterfaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeGraphEdge, DataInterfaceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceBindingIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceBindingIndex = { "DataInterfaceBindingIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeGraphEdge, DataInterfaceBindingIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceBindingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceBindingIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_SetBit(void* Obj)
	{
		((FComputeGraphEdge*)Obj)->bKernelInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput = { "bKernelInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FComputeGraphEdge), &Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNameOverride_MetaData[] = {
		{ "Comment", "// Optional name to use for the proxy generation function, in case the kernel expects\n// something other than the interface's bind name. Leave empty to go with the default. \n" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Optional name to use for the proxy generation function, in case the kernel expects\nsomething other than the interface's bind name. Leave empty to go with the default." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNameOverride = { "BindingFunctionNameOverride", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeGraphEdge, BindingFunctionNameOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNamespace_MetaData[] = {
		{ "Comment", "// Optional namespace to wrap the binding function in. A blank mean global namespace.\n" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Optional namespace to wrap the binding function in. A blank mean global namespace." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNamespace = { "BindingFunctionNamespace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComputeGraphEdge, BindingFunctionNamespace), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNamespace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_KernelBindingIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_DataInterfaceBindingIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_bKernelInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewProp_BindingFunctionNamespace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
		nullptr,
		&NewStructOps,
		"ComputeGraphEdge",
		sizeof(FComputeGraphEdge),
		alignof(FComputeGraphEdge),
		Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphEdge()
	{
		if (!Z_Registration_Info_UScriptStruct_ComputeGraphEdge.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComputeGraphEdge.InnerSingleton, Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComputeGraphEdge.InnerSingleton;
	}
	void UComputeGraph::StaticRegisterNativesUComputeGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeGraph);
	UClass* Z_Construct_UClass_UComputeGraph_NoRegister()
	{
		return UComputeGraph::StaticClass();
	}
	struct Z_Construct_UClass_UComputeGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_KernelInvocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelInvocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KernelInvocations;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphEdges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphEdges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphEdges;
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataInterfaceToBinding_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceToBinding_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaceToBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class representing a Compute Graph.\n * This holds the basic topology of the graph and is responsible for linking Kernels with Data Interfaces and compiling the resulting shader code.\n * Multiple Compute Graph asset types can derive from this to specialize the graph creation process. \n * For example the Animation Deformer system provides a UI for creating UComputeGraph assets.\n */" },
		{ "IncludePath", "ComputeFramework/ComputeGraph.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Class representing a Compute Graph.\nThis holds the basic topology of the graph and is responsible for linking Kernels with Data Interfaces and compiling the resulting shader code.\nMultiple Compute Graph asset types can derive from this to specialize the graph creation process.\nFor example the Animation Deformer system provides a UI for creating UComputeGraph assets." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations_Inner = { "KernelInvocations", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComputeKernel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations_MetaData[] = {
		{ "Comment", "/** Kernels in the graph. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Kernels in the graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations = { "KernelInvocations", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeGraph, KernelInvocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces_Inner = { "DataInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComputeDataInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces_MetaData[] = {
		{ "Comment", "/** Data interfaces in the graph. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Data interfaces in the graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces = { "DataInterfaces", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeGraph, DataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges_Inner = { "GraphEdges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FComputeGraphEdge, METADATA_PARAMS(nullptr, 0) }; // 3348016185
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges_MetaData[] = {
		{ "Comment", "/** Edges in the graph between kernels and data interfaces. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Edges in the graph between kernels and data interfaces." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges = { "GraphEdges", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeGraph, GraphEdges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges_MetaData)) }; // 3348016185
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings_MetaData[] = {
		{ "Comment", "/** Registered binding object class types. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Registered binding object class types." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeGraph, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding_Inner = { "DataInterfaceToBinding", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding_MetaData[] = {
		{ "Comment", "/** Mapping of DataInterfaces array index to Bindings index. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeGraph.h" },
		{ "ToolTip", "Mapping of DataInterfaces array index to Bindings index." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding = { "DataInterfaceToBinding", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeGraph, DataInterfaceToBinding), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_KernelInvocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_GraphEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeGraph_Statics::NewProp_DataInterfaceToBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeGraph_Statics::ClassParams = {
		&UComputeGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComputeGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComputeGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeGraph()
	{
		if (!Z_Registration_Info_UClass_UComputeGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeGraph.OuterSingleton, Z_Construct_UClass_UComputeGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeGraph.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeGraph>()
	{
		return UComputeGraph::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UComputeGraph)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ScriptStructInfo[] = {
		{ FComputeGraphEdge::StaticStruct, Z_Construct_UScriptStruct_FComputeGraphEdge_Statics::NewStructOps, TEXT("ComputeGraphEdge"), &Z_Registration_Info_UScriptStruct_ComputeGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComputeGraphEdge), 3348016185U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeGraph, UComputeGraph::StaticClass, TEXT("UComputeGraph"), &Z_Registration_Info_UClass_UComputeGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeGraph), 1947784631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_3722644340(TEXT("/Script/ComputeFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeGraph_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
