// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMArrayNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMArrayNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMOpCode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMArrayNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_RigVMArrayNode::execGetCPPTypeObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetCPPTypeObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_RigVMArrayNode::execGetCPPType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCPPType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_RigVMArrayNode::execGetOpCode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERigVMOpCode*)Z_Param__Result=P_THIS->GetOpCode();
		P_NATIVE_END;
	}
	void UDEPRECATED_RigVMArrayNode::StaticRegisterNativesUDEPRECATED_RigVMArrayNode()
	{
		UClass* Class = UDEPRECATED_RigVMArrayNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCPPType", &UDEPRECATED_RigVMArrayNode::execGetCPPType },
			{ "GetCPPTypeObject", &UDEPRECATED_RigVMArrayNode::execGetCPPTypeObject },
			{ "GetOpCode", &UDEPRECATED_RigVMArrayNode::execGetOpCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics
	{
		struct RigVMArrayNode_eventGetCPPType_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMArrayNode_eventGetCPPType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMArrayNode" },
		{ "Comment", "// Returns the C++ data type of the element\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMArrayNode.h" },
		{ "ToolTip", "Returns the C++ data type of the element" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_RigVMArrayNode, nullptr, "GetCPPType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::RigVMArrayNode_eventGetCPPType_Parms), Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics
	{
		struct RigVMArrayNode_eventGetCPPTypeObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMArrayNode_eventGetCPPTypeObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMArrayNode" },
		{ "Comment", "// Returns the C++ data type struct of the array (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMArrayNode.h" },
		{ "ToolTip", "Returns the C++ data type struct of the array (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_RigVMArrayNode, nullptr, "GetCPPTypeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::RigVMArrayNode_eventGetCPPTypeObject_Parms), Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics
	{
		struct RigVMArrayNode_eventGetOpCode_Parms
		{
			ERigVMOpCode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMArrayNode_eventGetOpCode_Parms, ReturnValue), Z_Construct_UEnum_RigVM_ERigVMOpCode, METADATA_PARAMS(nullptr, 0) }; // 1510016481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMArrayNode" },
		{ "Comment", "// Returns the op code of this node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMArrayNode.h" },
		{ "ToolTip", "Returns the op code of this node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_RigVMArrayNode, nullptr, "GetOpCode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::RigVMArrayNode_eventGetOpCode_Parms), Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_RigVMArrayNode);
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_NoRegister()
	{
		return UDEPRECATED_RigVMArrayNode::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OpCode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMTemplateNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPType, "GetCPPType" }, // 2995432125
		{ &Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetCPPTypeObject, "GetCPPTypeObject" }, // 347137097
		{ &Z_Construct_UFunction_UDEPRECATED_RigVMArrayNode_GetOpCode, "GetOpCode" }, // 646119453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Array Node represents one of a series available\n * array operations such as SetNum, GetAtIndex etc.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMArrayNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMArrayNode.h" },
		{ "ToolTip", "The Array Node represents one of a series available\narray operations such as SetNum, GetAtIndex etc." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::NewProp_OpCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::NewProp_OpCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMArrayNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::NewProp_OpCode = { "OpCode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_RigVMArrayNode, OpCode), Z_Construct_UEnum_RigVM_ERigVMOpCode, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::NewProp_OpCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::NewProp_OpCode_MetaData)) }; // 1510016481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::NewProp_OpCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::NewProp_OpCode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_RigVMArrayNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::ClassParams = {
		&UDEPRECATED_RigVMArrayNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::PropPointers),
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_RigVMArrayNode()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_RigVMArrayNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_RigVMArrayNode.OuterSingleton, Z_Construct_UClass_UDEPRECATED_RigVMArrayNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_RigVMArrayNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<UDEPRECATED_RigVMArrayNode>()
	{
		return UDEPRECATED_RigVMArrayNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_RigVMArrayNode);
	UDEPRECATED_RigVMArrayNode::~UDEPRECATED_RigVMArrayNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_RigVMArrayNode, UDEPRECATED_RigVMArrayNode::StaticClass, TEXT("UDEPRECATED_RigVMArrayNode"), &Z_Registration_Info_UClass_UDEPRECATED_RigVMArrayNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_RigVMArrayNode), 713618675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_4076908254(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMArrayNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
