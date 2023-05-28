// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationGraph.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimClassInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimationGraph_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimGraphBlendOptions();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationGraph::execGetGraphNodesOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NodeClass);
		P_GET_TARRAY_REF(UAnimGraphNode_Base*,Z_Param_Out_GraphNodes);
		P_GET_UBOOL(Z_Param_bIncludeChildClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGraphNodesOfClass(Z_Param_NodeClass,Z_Param_Out_GraphNodes,Z_Param_bIncludeChildClasses);
		P_NATIVE_END;
	}
	void UAnimationGraph::StaticRegisterNativesUAnimationGraph()
	{
		UClass* Class = UAnimationGraph::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGraphNodesOfClass", &UAnimationGraph::execGetGraphNodesOfClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics
	{
		struct AnimationGraph_eventGetGraphNodesOfClass_Parms
		{
			TSubclassOf<UAnimGraphNode_Base>  NodeClass;
			TArray<UAnimGraphNode_Base*> GraphNodes;
			bool bIncludeChildClasses;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GraphNodes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphNodes;
		static void NewProp_bIncludeChildClasses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChildClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationGraph_eventGetGraphNodesOfClass_Parms, NodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_GraphNodes_Inner = { "GraphNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimGraphNode_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_GraphNodes = { "GraphNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationGraph_eventGetGraphNodesOfClass_Parms, GraphNodes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_bIncludeChildClasses_SetBit(void* Obj)
	{
		((AnimationGraph_eventGetGraphNodesOfClass_Parms*)Obj)->bIncludeChildClasses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_bIncludeChildClasses = { "bIncludeChildClasses", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationGraph_eventGetGraphNodesOfClass_Parms), &Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_bIncludeChildClasses_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_NodeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_GraphNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_GraphNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::NewProp_bIncludeChildClasses,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationGraph" },
		{ "Comment", "/** Returns contained graph nodes of the specified (or child) class */" },
		{ "CPP_Default_bIncludeChildClasses", "true" },
		{ "ModuleRelativePath", "Public/AnimationGraph.h" },
		{ "ToolTip", "Returns contained graph nodes of the specified (or child) class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationGraph, nullptr, "GetGraphNodesOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::AnimationGraph_eventGetGraphNodesOfClass_Parms), Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationGraph);
	UClass* Z_Construct_UClass_UAnimationGraph_NoRegister()
	{
		return UAnimationGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationGraph_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationGraph_GetGraphNodesOfClass, "GetGraphNodesOfClass" }, // 687403953
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraph_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationGraph.h" },
		{ "ModuleRelativePath", "Public/AnimationGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationGraph_Statics::NewProp_BlendOptions_MetaData[] = {
		{ "Category", "GraphBlending" },
		{ "Comment", "/** Blending options for animation graphs in Linked Animation Blueprints. */" },
		{ "ModuleRelativePath", "Public/AnimationGraph.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Blending options for animation graphs in Linked Animation Blueprints." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationGraph_Statics::NewProp_BlendOptions = { "BlendOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationGraph, BlendOptions), Z_Construct_UScriptStruct_FAnimGraphBlendOptions, METADATA_PARAMS(Z_Construct_UClass_UAnimationGraph_Statics::NewProp_BlendOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraph_Statics::NewProp_BlendOptions_MetaData)) }; // 1611955230
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationGraph_Statics::NewProp_BlendOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationGraph_Statics::ClassParams = {
		&UAnimationGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraph_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimationGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationGraph.OuterSingleton, Z_Construct_UClass_UAnimationGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationGraph.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimationGraph>()
	{
		return UAnimationGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationGraph);
	UAnimationGraph::~UAnimationGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationGraph, UAnimationGraph::StaticClass, TEXT("UAnimationGraph"), &Z_Registration_Info_UClass_UAnimationGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationGraph), 1573850663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_530603199(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimationGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
