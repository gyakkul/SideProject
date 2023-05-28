// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMLibraryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMLibraryNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMLibraryNode::execGetContainedGraph)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMGraph**)Z_Param__Result=P_THIS->GetContainedGraph();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMLibraryNode::execGetLibrary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigVMFunctionLibrary**)Z_Param__Result=P_THIS->GetLibrary();
		P_NATIVE_END;
	}
	void URigVMLibraryNode::StaticRegisterNativesURigVMLibraryNode()
	{
		UClass* Class = URigVMLibraryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetContainedGraph", &URigVMLibraryNode::execGetContainedGraph },
			{ "GetLibrary", &URigVMLibraryNode::execGetLibrary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics
	{
		struct RigVMLibraryNode_eventGetContainedGraph_Parms
		{
			URigVMGraph* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLibraryNode_eventGetContainedGraph_Parms, ReturnValue), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLibraryNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMLibraryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLibraryNode, nullptr, "GetContainedGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::RigVMLibraryNode_eventGetContainedGraph_Parms), Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics
	{
		struct RigVMLibraryNode_eventGetLibrary_Parms
		{
			URigVMFunctionLibrary* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMLibraryNode_eventGetLibrary_Parms, ReturnValue), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMLibraryNode" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMLibraryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMLibraryNode, nullptr, "GetLibrary", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::RigVMLibraryNode_eventGetLibrary_Parms), Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMLibraryNode_GetLibrary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMLibraryNode_GetLibrary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMLibraryNode);
	UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister()
	{
		return URigVMLibraryNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMLibraryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMLibraryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMLibraryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMLibraryNode_GetContainedGraph, "GetContainedGraph" }, // 529852322
		{ &Z_Construct_UFunction_URigVMLibraryNode_GetLibrary, "GetLibrary" }, // 2825262118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMLibraryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Library Node represents a function invocation of a\n * function specified somewhere else. The function can be \n * expressed as a sub-graph (RigVMGroupNode) or as a \n * referenced function (RigVMFunctionNode).\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMLibraryNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMLibraryNode.h" },
		{ "ToolTip", "The Library Node represents a function invocation of a\nfunction specified somewhere else. The function can be\nexpressed as a sub-graph (RigVMGroupNode) or as a\nreferenced function (RigVMFunctionNode)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMLibraryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMLibraryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMLibraryNode_Statics::ClassParams = {
		&URigVMLibraryNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMLibraryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMLibraryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMLibraryNode()
	{
		if (!Z_Registration_Info_UClass_URigVMLibraryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMLibraryNode.OuterSingleton, Z_Construct_UClass_URigVMLibraryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMLibraryNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMLibraryNode>()
	{
		return URigVMLibraryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMLibraryNode);
	URigVMLibraryNode::~URigVMLibraryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMLibraryNode, URigVMLibraryNode::StaticClass, TEXT("URigVMLibraryNode"), &Z_Registration_Info_UClass_URigVMLibraryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMLibraryNode), 3644582137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_1756528883(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMLibraryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
