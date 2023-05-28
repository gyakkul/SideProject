// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMInvokeEntryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMInvokeEntryNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMInvokeEntryNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMInvokeEntryNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMInvokeEntryNode::execGetEntryName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetEntryName();
		P_NATIVE_END;
	}
	void URigVMInvokeEntryNode::StaticRegisterNativesURigVMInvokeEntryNode()
	{
		UClass* Class = URigVMInvokeEntryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntryName", &URigVMInvokeEntryNode::execGetEntryName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics
	{
		struct RigVMInvokeEntryNode_eventGetEntryName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMInvokeEntryNode_eventGetEntryName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMInvokeEntryNode" },
		{ "Comment", "// Returns the name of the entry to run\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMInvokeEntryNode.h" },
		{ "ToolTip", "Returns the name of the entry to run" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMInvokeEntryNode, nullptr, "GetEntryName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::RigVMInvokeEntryNode_eventGetEntryName_Parms), Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMInvokeEntryNode);
	UClass* Z_Construct_UClass_URigVMInvokeEntryNode_NoRegister()
	{
		return URigVMInvokeEntryNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMInvokeEntryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMInvokeEntryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMInvokeEntryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMInvokeEntryNode_GetEntryName, "GetEntryName" }, // 1661400418
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMInvokeEntryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Invoke Entry Node is used to invoke another entry from the \n * the currently running entry.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMInvokeEntryNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMInvokeEntryNode.h" },
		{ "ToolTip", "The Invoke Entry Node is used to invoke another entry from the\nthe currently running entry." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMInvokeEntryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMInvokeEntryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMInvokeEntryNode_Statics::ClassParams = {
		&URigVMInvokeEntryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URigVMInvokeEntryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMInvokeEntryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMInvokeEntryNode()
	{
		if (!Z_Registration_Info_UClass_URigVMInvokeEntryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMInvokeEntryNode.OuterSingleton, Z_Construct_UClass_URigVMInvokeEntryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMInvokeEntryNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMInvokeEntryNode>()
	{
		return URigVMInvokeEntryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMInvokeEntryNode);
	URigVMInvokeEntryNode::~URigVMInvokeEntryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMInvokeEntryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMInvokeEntryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMInvokeEntryNode, URigVMInvokeEntryNode::StaticClass, TEXT("URigVMInvokeEntryNode"), &Z_Registration_Info_UClass_URigVMInvokeEntryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMInvokeEntryNode), 1097291653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMInvokeEntryNode_h_4002322524(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMInvokeEntryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMInvokeEntryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
