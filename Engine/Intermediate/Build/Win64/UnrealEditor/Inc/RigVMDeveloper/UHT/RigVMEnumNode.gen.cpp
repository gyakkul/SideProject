// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMEnumNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMEnumNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEnumNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEnumNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMEnumNode::execGetCPPTypeObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetCPPTypeObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMEnumNode::execGetCPPType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCPPType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMEnumNode::execGetEnum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnum**)Z_Param__Result=P_THIS->GetEnum();
		P_NATIVE_END;
	}
	void URigVMEnumNode::StaticRegisterNativesURigVMEnumNode()
	{
		UClass* Class = URigVMEnumNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCPPType", &URigVMEnumNode::execGetCPPType },
			{ "GetCPPTypeObject", &URigVMEnumNode::execGetCPPTypeObject },
			{ "GetEnum", &URigVMEnumNode::execGetEnum },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics
	{
		struct RigVMEnumNode_eventGetCPPType_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMEnumNode_eventGetCPPType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMEnumNode" },
		{ "Comment", "// Returns the C++ data type of the parameter\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMEnumNode.h" },
		{ "ToolTip", "Returns the C++ data type of the parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMEnumNode, nullptr, "GetCPPType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::RigVMEnumNode_eventGetCPPType_Parms), Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMEnumNode_GetCPPType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMEnumNode_GetCPPType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics
	{
		struct RigVMEnumNode_eventGetCPPTypeObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMEnumNode_eventGetCPPTypeObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMEnumNode" },
		{ "Comment", "// Returns the C++ data type struct of the parameter (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMEnumNode.h" },
		{ "ToolTip", "Returns the C++ data type struct of the parameter (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMEnumNode, nullptr, "GetCPPTypeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::RigVMEnumNode_eventGetCPPTypeObject_Parms), Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics
	{
		struct RigVMEnumNode_eventGetEnum_Parms
		{
			UEnum* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMEnumNode_eventGetEnum_Parms, ReturnValue), Z_Construct_UClass_UEnum, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMEnumNode" },
		{ "Comment", "// Returns the enum itself\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMEnumNode.h" },
		{ "ToolTip", "Returns the enum itself" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMEnumNode, nullptr, "GetEnum", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::RigVMEnumNode_eventGetEnum_Parms), Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMEnumNode_GetEnum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMEnumNode_GetEnum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEnumNode);
	UClass* Z_Construct_UClass_URigVMEnumNode_NoRegister()
	{
		return URigVMEnumNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEnumNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEnumNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMEnumNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMEnumNode_GetCPPType, "GetCPPType" }, // 1054367818
		{ &Z_Construct_UFunction_URigVMEnumNode_GetCPPTypeObject, "GetCPPTypeObject" }, // 3335133475
		{ &Z_Construct_UFunction_URigVMEnumNode_GetEnum, "GetEnum" }, // 2038643613
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEnumNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Enum Node represents a constant enum value for use within the graph.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMEnumNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMEnumNode.h" },
		{ "ToolTip", "The Enum Node represents a constant enum value for use within the graph." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEnumNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMEnumNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEnumNode_Statics::ClassParams = {
		&URigVMEnumNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URigVMEnumNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEnumNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMEnumNode()
	{
		if (!Z_Registration_Info_UClass_URigVMEnumNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEnumNode.OuterSingleton, Z_Construct_UClass_URigVMEnumNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEnumNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMEnumNode>()
	{
		return URigVMEnumNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEnumNode);
	URigVMEnumNode::~URigVMEnumNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMEnumNode, URigVMEnumNode::StaticClass, TEXT("URigVMEnumNode"), &Z_Registration_Info_UClass_URigVMEnumNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEnumNode), 4191955149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_1208713897(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMEnumNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
