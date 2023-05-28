// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/Nodes/RigVMTemplateNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMTemplateNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMTemplateNode_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTemplatePreferredType();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType;
class UScriptStruct* FRigVMTemplatePreferredType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMTemplatePreferredType"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMTemplatePreferredType>()
{
	return FRigVMTemplatePreferredType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Argument_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Argument;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TypeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMTemplatePreferredType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_Argument_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_Argument = { "Argument", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMTemplatePreferredType, Argument), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_Argument_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_Argument_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeIndex = { "TypeIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMTemplatePreferredType, TypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeString_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeString = { "TypeString", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMTemplatePreferredType, TypeString), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_Argument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewProp_TypeString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMTemplatePreferredType",
		sizeof(FRigVMTemplatePreferredType),
		alignof(FRigVMTemplatePreferredType),
		Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMTemplatePreferredType()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType.InnerSingleton, Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType.InnerSingleton;
	}
	DEFINE_FUNCTION(URigVMTemplateNode::execIsFullyUnresolved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFullyUnresolved();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMTemplateNode::execIsResolved)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsResolved();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMTemplateNode::execIsSingleton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSingleton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMTemplateNode::execGetNotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URigVMTemplateNode::execGetScriptStruct)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScriptStruct**)Z_Param__Result=P_THIS->GetScriptStruct();
		P_NATIVE_END;
	}
	void URigVMTemplateNode::StaticRegisterNativesURigVMTemplateNode()
	{
		UClass* Class = URigVMTemplateNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNotation", &URigVMTemplateNode::execGetNotation },
			{ "GetScriptStruct", &URigVMTemplateNode::execGetScriptStruct },
			{ "IsFullyUnresolved", &URigVMTemplateNode::execIsFullyUnresolved },
			{ "IsResolved", &URigVMTemplateNode::execIsResolved },
			{ "IsSingleton", &URigVMTemplateNode::execIsSingleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics
	{
		struct RigVMTemplateNode_eventGetNotation_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMTemplateNode_eventGetNotation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Template" },
		{ "Comment", "// Returns the notation of the node\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
		{ "ToolTip", "Returns the notation of the node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMTemplateNode, nullptr, "GetNotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::RigVMTemplateNode_eventGetNotation_Parms), Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMTemplateNode_GetNotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMTemplateNode_GetNotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics
	{
		struct RigVMTemplateNode_eventGetScriptStruct_Parms
		{
			UScriptStruct* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RigVMTemplateNode_eventGetScriptStruct_Parms, ReturnValue), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "RigVMUnitNode" },
		{ "Comment", "// Returns the UStruct for this unit node\n// (the struct declaring the RIGVM_METHOD)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
		{ "ToolTip", "Returns the UStruct for this unit node\n(the struct declaring the RIGVM_METHOD)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMTemplateNode, nullptr, "GetScriptStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::RigVMTemplateNode_eventGetScriptStruct_Parms), Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics
	{
		struct RigVMTemplateNode_eventIsFullyUnresolved_Parms
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
	void Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMTemplateNode_eventIsFullyUnresolved_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMTemplateNode_eventIsFullyUnresolved_Parms), &Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Template" },
		{ "Comment", "// returns true if the template is fully unresolved\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
		{ "ToolTip", "returns true if the template is fully unresolved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMTemplateNode, nullptr, "IsFullyUnresolved", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::RigVMTemplateNode_eventIsFullyUnresolved_Parms), Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics
	{
		struct RigVMTemplateNode_eventIsResolved_Parms
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
	void Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMTemplateNode_eventIsResolved_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMTemplateNode_eventIsResolved_Parms), &Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Template" },
		{ "Comment", "// returns true if the template node is resolved\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
		{ "ToolTip", "returns true if the template node is resolved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMTemplateNode, nullptr, "IsResolved", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::RigVMTemplateNode_eventIsResolved_Parms), Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMTemplateNode_IsResolved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMTemplateNode_IsResolved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics
	{
		struct RigVMTemplateNode_eventIsSingleton_Parms
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
	void Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RigVMTemplateNode_eventIsSingleton_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RigVMTemplateNode_eventIsSingleton_Parms), &Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMTemplateNode, nullptr, "IsSingleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::RigVMTemplateNode_eventIsSingleton_Parms), Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URigVMTemplateNode_IsSingleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMTemplateNode_IsSingleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMTemplateNode);
	UClass* Z_Construct_UClass_URigVMTemplateNode_NoRegister()
	{
		return URigVMTemplateNode::StaticClass();
	}
	struct Z_Construct_UClass_URigVMTemplateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateNotation_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TemplateNotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResolvedFunctionName;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredPermutationTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredPermutationTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreferredPermutationTypes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreferredPermutationPairs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredPermutationPairs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreferredPermutationPairs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMTemplateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URigVMTemplateNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMTemplateNode_GetNotation, "GetNotation" }, // 4065969323
		{ &Z_Construct_UFunction_URigVMTemplateNode_GetScriptStruct, "GetScriptStruct" }, // 3238260506
		{ &Z_Construct_UFunction_URigVMTemplateNode_IsFullyUnresolved, "IsFullyUnresolved" }, // 3052001867
		{ &Z_Construct_UFunction_URigVMTemplateNode_IsResolved, "IsResolved" }, // 2330619849
		{ &Z_Construct_UFunction_URigVMTemplateNode_IsSingleton, "IsSingleton" }, // 3764977360
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMTemplateNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Template Node represents an unresolved function.\n * Template nodes can morph into all functions implementing\n * the template's template.\n */" },
		{ "IncludePath", "RigVMModel/Nodes/RigVMTemplateNode.h" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
		{ "ToolTip", "The Template Node represents an unresolved function.\nTemplate nodes can morph into all functions implementing\nthe template's template." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_TemplateNotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_TemplateNotation = { "TemplateNotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMTemplateNode, TemplateNotation), METADATA_PARAMS(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_TemplateNotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_TemplateNotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_ResolvedFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_ResolvedFunctionName = { "ResolvedFunctionName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMTemplateNode, ResolvedFunctionName), METADATA_PARAMS(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_ResolvedFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_ResolvedFunctionName_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationTypes_Inner = { "PreferredPermutationTypes", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationTypes_MetaData[] = {
		{ "Comment", "// Indicates a preferred permutation using the types of the arguments\n// Each element is in the format \"ArgumentName:CPPType\"\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
		{ "ToolTip", "Indicates a preferred permutation using the types of the arguments\nEach element is in the format \"ArgumentName:CPPType\"" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationTypes = { "PreferredPermutationTypes", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMTemplateNode, PreferredPermutationTypes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationTypes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationPairs_Inner = { "PreferredPermutationPairs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMTemplatePreferredType, METADATA_PARAMS(nullptr, 0) }; // 3414350494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationPairs_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/Nodes/RigVMTemplateNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationPairs = { "PreferredPermutationPairs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URigVMTemplateNode, PreferredPermutationPairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationPairs_MetaData)) }; // 3414350494
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMTemplateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_TemplateNotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_ResolvedFunctionName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationTypes,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationPairs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMTemplateNode_Statics::NewProp_PreferredPermutationPairs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMTemplateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMTemplateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMTemplateNode_Statics::ClassParams = {
		&URigVMTemplateNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URigVMTemplateNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URigVMTemplateNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMTemplateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMTemplateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMTemplateNode()
	{
		if (!Z_Registration_Info_UClass_URigVMTemplateNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMTemplateNode.OuterSingleton, Z_Construct_UClass_URigVMTemplateNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMTemplateNode.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMTemplateNode>()
	{
		return URigVMTemplateNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMTemplateNode);
	URigVMTemplateNode::~URigVMTemplateNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_Statics::ScriptStructInfo[] = {
		{ FRigVMTemplatePreferredType::StaticStruct, Z_Construct_UScriptStruct_FRigVMTemplatePreferredType_Statics::NewStructOps, TEXT("RigVMTemplatePreferredType"), &Z_Registration_Info_UScriptStruct_RigVMTemplatePreferredType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMTemplatePreferredType), 3414350494U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMTemplateNode, URigVMTemplateNode::StaticClass, TEXT("URigVMTemplateNode"), &Z_Registration_Info_UClass_URigVMTemplateNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMTemplateNode), 3734457101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_2425380109(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_Nodes_RigVMTemplateNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
