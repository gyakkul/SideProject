// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMRerouteNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMRerouteNode() {}
// Cross Module References
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMRerouteNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMRerouteNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMRerouteNode::execGetShowsAsFullNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShowsAsFullNode();
		P_NATIVE_END;
	}
	void URigVMRerouteNode::StaticRegisterNativesURigVMRerouteNode()
	{
		UClass* Class = URigVMRerouteNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShowsAsFullNode", &URigVMRerouteNode::execGetShowsAsFullNode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics
	{
		struct RigVMRerouteNode_eventGetShowsAsFullNode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMRerouteNode_eventGetShowsAsFullNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMRerouteNode_eventGetShowsAsFullNode_Parms), &Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMRerouteNode" },
		{ "Comment", "// Returns true if this node should be shown as a full node,\n// or false if this node should be shown as a small circle.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMRerouteNode.h" },
		{ "ToolTip", "Returns true if this node should be shown as a full node,\nor false if this node should be shown as a small circle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMRerouteNode, nullptr, "GetShowsAsFullNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::RigVMRerouteNode_eventGetShowsAsFullNode_Parms), Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMRerouteNode);
	UClass* Z_Construct_UClass_URigVMRerouteNode_NoRegister()
	{
		return URigVMRerouteNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMRerouteNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAsFullNode_MetaData[];
#endif
		static void NewProp_bShowAsFullNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAsFullNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMRerouteNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMRerouteNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMRerouteNode_GetShowsAsFullNode, "GetShowsAsFullNode" }, // 3799451203
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMRerouteNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A reroute node is used to visually improve the \n * data flow within a Graph. Reroutes are purely \n * cosmetic and have no impact on the resulting\n * VM whatsoever. Reroutes can furthermore be\n * displayed as full nodes or as small circles.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMRerouteNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMRerouteNode.h" },
		{ "ToolTip", "A reroute node is used to visually improve the\ndata flow within a Graph. Reroutes are purely\ncosmetic and have no impact on the resulting\nVM whatsoever. Reroutes can furthermore be\ndisplayed as full nodes or as small circles." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMRerouteNode_Statics::NewProp_bShowAsFullNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMRerouteNode.h" },
	};
#endif
	void Z_Construct_UClass_URigVMRerouteNode_Statics::NewProp_bShowAsFullNode_SetBit(void* Obj)
	{
		((URigVMRerouteNode*)Obj)->bShowAsFullNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMRerouteNode_Statics::NewProp_bShowAsFullNode = { "bShowAsFullNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URigVMRerouteNode), &Z_Construct_UClass_URigVMRerouteNode_Statics::NewProp_bShowAsFullNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_URigVMRerouteNode_Statics::NewProp_bShowAsFullNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMRerouteNode_Statics::NewProp_bShowAsFullNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMRerouteNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMRerouteNode_Statics::NewProp_bShowAsFullNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMRerouteNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMRerouteNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMRerouteNode_Statics::ClassParams = {
		&URigVMRerouteNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMRerouteNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMRerouteNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMRerouteNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMRerouteNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMRerouteNode()
	{
		if (!Z_Registration_Info_UClass_URigVMRerouteNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMRerouteNode.OuterSingleton, Z_Construct_UClass_URigVMRerouteNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMRerouteNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMRerouteNode>()
	{
		return URigVMRerouteNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMRerouteNode);
	URigVMRerouteNode::~URigVMRerouteNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMRerouteNode, URigVMRerouteNode::StaticClass, TEXT("URigVMRerouteNode"), &Z_Registration_Info_UClass_URigVMRerouteNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMRerouteNode), 1794658913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_2125605497(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMRerouteNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
