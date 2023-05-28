// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMVariableNode.h"
#include "RigVMModel/RigVMVariableDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMVariableNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMVariableNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMVariableNode_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphVariableDescription();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	DEFINE_FUNCTION(URigVMVariableNode::execGetVariableDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigVMGraphVariableDescription*)Z_Param__Result=P_THIS->GetVariableDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execGetDefaultValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefaultValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execGetCPPTypeObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetCPPTypeObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execGetCPPType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCPPType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execIsInputArgument)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputArgument();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execIsLocalVariable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalVariable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execIsExternalVariable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExternalVariable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execIsGetter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGetter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMVariableNode::execGetVariableName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetVariableName();
		P_NATIVE_END;
	}
	void URigVMVariableNode::StaticRegisterNativesURigVMVariableNode()
	{
		UClass* Class = URigVMVariableNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCPPType", &URigVMVariableNode::execGetCPPType },
			{ "GetCPPTypeObject", &URigVMVariableNode::execGetCPPTypeObject },
			{ "GetDefaultValue", &URigVMVariableNode::execGetDefaultValue },
			{ "GetVariableDescription", &URigVMVariableNode::execGetVariableDescription },
			{ "GetVariableName", &URigVMVariableNode::execGetVariableName },
			{ "IsExternalVariable", &URigVMVariableNode::execIsExternalVariable },
			{ "IsGetter", &URigVMVariableNode::execIsGetter },
			{ "IsInputArgument", &URigVMVariableNode::execIsInputArgument },
			{ "IsLocalVariable", &URigVMVariableNode::execIsLocalVariable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics
	{
		struct RigVMVariableNode_eventGetCPPType_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMVariableNode_eventGetCPPType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns the C++ data type of the variable\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns the C++ data type of the variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "GetCPPType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::RigVMVariableNode_eventGetCPPType_Parms), Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_GetCPPType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_GetCPPType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics
	{
		struct RigVMVariableNode_eventGetCPPTypeObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMVariableNode_eventGetCPPTypeObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns the C++ data type struct of the variable (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns the C++ data type struct of the variable (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "GetCPPTypeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::RigVMVariableNode_eventGetCPPTypeObject_Parms), Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics
	{
		struct RigVMVariableNode_eventGetDefaultValue_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMVariableNode_eventGetDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns the default value of the variable as a string\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns the default value of the variable as a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "GetDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::RigVMVariableNode_eventGetDefaultValue_Parms), Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics
	{
		struct RigVMVariableNode_eventGetVariableDescription_Parms
		{
			FRigVMGraphVariableDescription ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMVariableNode_eventGetVariableDescription_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, METADATA_PARAMS(nullptr, 0) }; // 2726194744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns this variable node's variable description\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns this variable node's variable description" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "GetVariableDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::RigVMVariableNode_eventGetVariableDescription_Parms), Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics
	{
		struct RigVMVariableNode_eventGetVariableName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMVariableNode_eventGetVariableName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns the name of the variable\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns the name of the variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "GetVariableName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::RigVMVariableNode_eventGetVariableName_Parms), Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_GetVariableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_GetVariableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics
	{
		struct RigVMVariableNode_eventIsExternalVariable_Parms
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
	void Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMVariableNode_eventIsExternalVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMVariableNode_eventIsExternalVariable_Parms), &Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns true if this variable is an external variable\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns true if this variable is an external variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "IsExternalVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::RigVMVariableNode_eventIsExternalVariable_Parms), Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics
	{
		struct RigVMVariableNode_eventIsGetter_Parms
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
	void Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMVariableNode_eventIsGetter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMVariableNode_eventIsGetter_Parms), &Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns true if this node is a variable getter\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns true if this node is a variable getter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "IsGetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::RigVMVariableNode_eventIsGetter_Parms), Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_IsGetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_IsGetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics
	{
		struct RigVMVariableNode_eventIsInputArgument_Parms
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
	void Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMVariableNode_eventIsInputArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMVariableNode_eventIsInputArgument_Parms), &Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns true if this variable is an input argument\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns true if this variable is an input argument" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "IsInputArgument", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::RigVMVariableNode_eventIsInputArgument_Parms), Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_IsInputArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_IsInputArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics
	{
		struct RigVMVariableNode_eventIsLocalVariable_Parms
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
	void Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMVariableNode_eventIsLocalVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMVariableNode_eventIsLocalVariable_Parms), &Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMVariableNode" },
		{ "Comment", "// Returns true if this variable is a local variable\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "Returns true if this variable is a local variable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMVariableNode, nullptr, "IsLocalVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::RigVMVariableNode_eventIsLocalVariable_Parms), Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMVariableNode);
	UClass* Z_Construct_UClass_URigVMVariableNode_NoRegister()
	{
		return URigVMVariableNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMVariableNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMVariableNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMVariableNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMVariableNode_GetCPPType, "GetCPPType" }, // 1896584885
		{ &Z_Construct_UFunction_URigVMVariableNode_GetCPPTypeObject, "GetCPPTypeObject" }, // 3547725713
		{ &Z_Construct_UFunction_URigVMVariableNode_GetDefaultValue, "GetDefaultValue" }, // 3308344590
		{ &Z_Construct_UFunction_URigVMVariableNode_GetVariableDescription, "GetVariableDescription" }, // 4267853396
		{ &Z_Construct_UFunction_URigVMVariableNode_GetVariableName, "GetVariableName" }, // 968890743
		{ &Z_Construct_UFunction_URigVMVariableNode_IsExternalVariable, "IsExternalVariable" }, // 3385838832
		{ &Z_Construct_UFunction_URigVMVariableNode_IsGetter, "IsGetter" }, // 109745037
		{ &Z_Construct_UFunction_URigVMVariableNode_IsInputArgument, "IsInputArgument" }, // 2291741894
		{ &Z_Construct_UFunction_URigVMVariableNode_IsLocalVariable, "IsLocalVariable" }, // 1059879940
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMVariableNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Variable Node represents a mutable value / local state within the\n * the Function / Graph. Variable Node's can be a getter or a setter.\n * Getters are pure nodes with just an output value pin, while setters\n * are mutable nodes with an execute and input value pin.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMVariableNode.h" },
		{ "ToolTip", "The Variable Node represents a mutable value / local state within the\nthe Function / Graph. Variable Node's can be a getter or a setter.\nGetters are pure nodes with just an output value pin, while setters\nare mutable nodes with an execute and input value pin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMVariableNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMVariableNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMVariableNode_Statics::ClassParams = {
		&URigVMVariableNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URigVMVariableNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMVariableNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMVariableNode()
	{
		if (!Z_Registration_Info_UClass_URigVMVariableNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMVariableNode.OuterSingleton, Z_Construct_UClass_URigVMVariableNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMVariableNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMVariableNode>()
	{
		return URigVMVariableNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMVariableNode);
	URigVMVariableNode::~URigVMVariableNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMVariableNode, URigVMVariableNode::StaticClass, TEXT("URigVMVariableNode"), &Z_Registration_Info_UClass_URigVMVariableNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMVariableNode), 24877984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_3858100035(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMVariableNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
