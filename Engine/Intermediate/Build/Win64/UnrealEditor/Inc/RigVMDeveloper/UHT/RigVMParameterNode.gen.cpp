// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMParameterNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMParameterNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMParameterNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMParameterNode_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphParameterDescription();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription;
class UScriptStruct* FRigVMGraphParameterDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMGraphParameterDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMGraphParameterDescription>()
{
	return FRigVMGraphParameterDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInput_MetaData[];
#endif
		static void NewProp_bIsInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CPPTypeObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The parameter description is used to convey information\n * about unique parameters within a Graph. Multiple Parameter\n * Nodes can share the same parameter description.\n */" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "The parameter description is used to convey information\nabout unique parameters within a Graph. Multiple Parameter\nNodes can share the same parameter description." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphParameterDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "RigVMGraphParameterDescription" },
		{ "Comment", "// The name of the parameter\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "The name of the parameter" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphParameterDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_bIsInput_MetaData[] = {
		{ "Category", "RigVMGraphParameterDescription" },
		{ "Comment", "// True if the parameter is an input\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "True if the parameter is an input" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_bIsInput_SetBit(void* Obj)
	{
		((FRigVMGraphParameterDescription*)Obj)->bIsInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_bIsInput = { "bIsInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMGraphParameterDescription), &Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_bIsInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_bIsInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_bIsInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPType_MetaData[] = {
		{ "Category", "RigVMGraphParameterDescription" },
		{ "Comment", "// The C++ data type of the parameter\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "The C++ data type of the parameter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphParameterDescription, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPTypeObject_MetaData[] = {
		{ "Category", "RigVMGraphParameterDescription" },
		{ "Comment", "// The Struct of the C++ data type of the parameter (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "The Struct of the C++ data type of the parameter (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphParameterDescription, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPTypeObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "RigVMGraphParameterDescription" },
		{ "Comment", "// The default value of the parameter\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "The default value of the parameter" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphParameterDescription, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_bIsInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_CPPTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMGraphParameterDescription",
		sizeof(FRigVMGraphParameterDescription),
		alignof(FRigVMGraphParameterDescription),
		Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphParameterDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription.InnerSingleton;
	}
	DEFINE_FUNCTION(URigVMParameterNode::execGetParameterDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRigVMGraphParameterDescription*)Z_Param__Result=P_THIS->GetParameterDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMParameterNode::execGetDefaultValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefaultValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMParameterNode::execGetCPPTypeObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetCPPTypeObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMParameterNode::execGetCPPType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCPPType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMParameterNode::execIsInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMParameterNode::execGetParameterName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetParameterName();
		P_NATIVE_END;
	}
	void URigVMParameterNode::StaticRegisterNativesURigVMParameterNode()
	{
		UClass* Class = URigVMParameterNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCPPType", &URigVMParameterNode::execGetCPPType },
			{ "GetCPPTypeObject", &URigVMParameterNode::execGetCPPTypeObject },
			{ "GetDefaultValue", &URigVMParameterNode::execGetDefaultValue },
			{ "GetParameterDescription", &URigVMParameterNode::execGetParameterDescription },
			{ "GetParameterName", &URigVMParameterNode::execGetParameterName },
			{ "IsInput", &URigVMParameterNode::execIsInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics
	{
		struct RigVMParameterNode_eventGetCPPType_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMParameterNode_eventGetCPPType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMParameterNode" },
		{ "Comment", "// Returns the C++ data type of the parameter\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "Returns the C++ data type of the parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMParameterNode, nullptr, "GetCPPType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::RigVMParameterNode_eventGetCPPType_Parms), Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMParameterNode_GetCPPType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMParameterNode_GetCPPType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics
	{
		struct RigVMParameterNode_eventGetCPPTypeObject_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMParameterNode_eventGetCPPTypeObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMParameterNode" },
		{ "Comment", "// Returns the C++ data type struct of the parameter (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "Returns the C++ data type struct of the parameter (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMParameterNode, nullptr, "GetCPPTypeObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::RigVMParameterNode_eventGetCPPTypeObject_Parms), Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics
	{
		struct RigVMParameterNode_eventGetDefaultValue_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMParameterNode_eventGetDefaultValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMParameterNode" },
		{ "Comment", "// Returns the default value of the parameter as a string\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "Returns the default value of the parameter as a string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMParameterNode, nullptr, "GetDefaultValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::RigVMParameterNode_eventGetDefaultValue_Parms), Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics
	{
		struct RigVMParameterNode_eventGetParameterDescription_Parms
		{
			FRigVMGraphParameterDescription ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMParameterNode_eventGetParameterDescription_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigVMGraphParameterDescription, METADATA_PARAMS(nullptr, 0) }; // 3895629329
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMParameterNode" },
		{ "Comment", "// Returns this parameter node's parameter description\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "Returns this parameter node's parameter description" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMParameterNode, nullptr, "GetParameterDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::RigVMParameterNode_eventGetParameterDescription_Parms), Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics
	{
		struct RigVMParameterNode_eventGetParameterName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMParameterNode_eventGetParameterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMParameterNode" },
		{ "Comment", "// Returns the name of the parameter\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "Returns the name of the parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMParameterNode, nullptr, "GetParameterName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::RigVMParameterNode_eventGetParameterName_Parms), Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMParameterNode_GetParameterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMParameterNode_GetParameterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics
	{
		struct RigVMParameterNode_eventIsInput_Parms
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
	void Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMParameterNode_eventIsInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMParameterNode_eventIsInput_Parms), &Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMParameterNode" },
		{ "Comment", "// Returns true if this node is an input\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "Returns true if this node is an input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMParameterNode, nullptr, "IsInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::RigVMParameterNode_eventIsInput_Parms), Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMParameterNode_IsInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMParameterNode_IsInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMParameterNode);
	UClass* Z_Construct_UClass_URigVMParameterNode_NoRegister()
	{
		return URigVMParameterNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMParameterNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMParameterNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMParameterNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMParameterNode_GetCPPType, "GetCPPType" }, // 1008197246
		{ &Z_Construct_UFunction_URigVMParameterNode_GetCPPTypeObject, "GetCPPTypeObject" }, // 3723925258
		{ &Z_Construct_UFunction_URigVMParameterNode_GetDefaultValue, "GetDefaultValue" }, // 1313575710
		{ &Z_Construct_UFunction_URigVMParameterNode_GetParameterDescription, "GetParameterDescription" }, // 3240477298
		{ &Z_Construct_UFunction_URigVMParameterNode_GetParameterName, "GetParameterName" }, // 3396916106
		{ &Z_Construct_UFunction_URigVMParameterNode_IsInput, "IsInput" }, // 1441612371
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMParameterNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Parameter Node represents an input or output argument / parameter\n * of the Function / Graph. Parameter Node have only a single value pin.\n */" },
		{ "Deprecated", "5.1" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMParameterNode.h" },
		{ "ToolTip", "The Parameter Node represents an input or output argument / parameter\nof the Function / Graph. Parameter Node have only a single value pin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMParameterNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMParameterNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMParameterNode_Statics::ClassParams = {
		&URigVMParameterNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URigVMParameterNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMParameterNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMParameterNode()
	{
		if (!Z_Registration_Info_UClass_URigVMParameterNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMParameterNode.OuterSingleton, Z_Construct_UClass_URigVMParameterNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMParameterNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMParameterNode>()
	{
		return URigVMParameterNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMParameterNode);
	URigVMParameterNode::~URigVMParameterNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_Statics::ScriptStructInfo[] = {
		{ FRigVMGraphParameterDescription::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphParameterDescription_Statics::NewStructOps, TEXT("RigVMGraphParameterDescription"), &Z_Registration_Info_UScriptStruct_RigVMGraphParameterDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphParameterDescription), 3895629329U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMParameterNode, URigVMParameterNode::StaticClass, TEXT("URigVMParameterNode"), &Z_Registration_Info_UClass_URigVMParameterNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMParameterNode), 2764239927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_1476973466(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMParameterNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
