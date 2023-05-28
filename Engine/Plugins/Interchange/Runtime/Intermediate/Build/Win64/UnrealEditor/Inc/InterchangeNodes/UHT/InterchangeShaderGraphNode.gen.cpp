// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeShaderGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeShaderGraphNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderGraphNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execGetInputConnection)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutExpressionUid);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::GetInputConnection(Z_Param_InterchangeNode,Z_Param_InputName,Z_Param_Out_OutExpressionUid,Z_Param_Out_OutputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execConnectOuputToInput)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionUid);
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::ConnectOuputToInput(Z_Param_InterchangeNode,Z_Param_InputName,Z_Param_ExpressionUid,Z_Param_OutputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execConnectDefaultOuputToInput)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpressionUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput(Z_Param_InterchangeNode,Z_Param_InputName,Z_Param_ExpressionUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execGatherInputs)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutInputNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInterchangeShaderPortsAPI::GatherInputs(Z_Param_InterchangeNode,Z_Param_Out_OutInputNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execHasInput)
	{
		P_GET_OBJECT(UInterchangeBaseNode,Z_Param_InterchangeNode);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InInputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::HasInput(Z_Param_InterchangeNode,Z_Param_Out_InInputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execIsAnInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInterchangeShaderPortsAPI::IsAnInput(Z_Param_AttributeKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execMakeInputName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UInterchangeShaderPortsAPI::MakeInputName(Z_Param_InputKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execMakeInputValueKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UInterchangeShaderPortsAPI::MakeInputValueKey(Z_Param_InputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderPortsAPI::execMakeInputConnectionKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UInterchangeShaderPortsAPI::MakeInputConnectionKey(Z_Param_InputName);
		P_NATIVE_END;
	}
	void UInterchangeShaderPortsAPI::StaticRegisterNativesUInterchangeShaderPortsAPI()
	{
		UClass* Class = UInterchangeShaderPortsAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectDefaultOuputToInput", &UInterchangeShaderPortsAPI::execConnectDefaultOuputToInput },
			{ "ConnectOuputToInput", &UInterchangeShaderPortsAPI::execConnectOuputToInput },
			{ "GatherInputs", &UInterchangeShaderPortsAPI::execGatherInputs },
			{ "GetInputConnection", &UInterchangeShaderPortsAPI::execGetInputConnection },
			{ "HasInput", &UInterchangeShaderPortsAPI::execHasInput },
			{ "IsAnInput", &UInterchangeShaderPortsAPI::execIsAnInput },
			{ "MakeInputConnectionKey", &UInterchangeShaderPortsAPI::execMakeInputConnectionKey },
			{ "MakeInputName", &UInterchangeShaderPortsAPI::execMakeInputName },
			{ "MakeInputValueKey", &UInterchangeShaderPortsAPI::execMakeInputValueKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics
	{
		struct InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString InputName;
			FString ExpressionUid;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ExpressionUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ExpressionUid = { "ExpressionUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms, ExpressionUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ExpressionUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ExpressionUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ExpressionUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Adds an input connection attribute.\n\x09 * @param InterchangeNode\x09The Node to create the input on.\n\x09 * @param InputName\x09\x09\x09The name to give to the input.\n\x09 * @param ExpressionUid\x09\x09The unique id of the node to connect to the input.\n\x09 * @return\x09\x09\x09\x09\x09true if the input connection was successfully added to the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Adds an input connection attribute.\n@param InterchangeNode       The Node to create the input on.\n@param InputName                     The name to give to the input.\n@param ExpressionUid         The unique id of the node to connect to the input.\n@return                                      true if the input connection was successfully added to the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "ConnectDefaultOuputToInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::InterchangeShaderPortsAPI_eventConnectDefaultOuputToInput_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics
	{
		struct InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms
		{
			UInterchangeBaseNode* InterchangeNode;
			FString InputName;
			FString ExpressionUid;
			FString OutputName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpressionUid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ExpressionUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ExpressionUid = { "ExpressionUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms, ExpressionUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ExpressionUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ExpressionUid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_OutputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms, OutputName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_OutputName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ExpressionUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_OutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Adds an input connection attribute.\n\x09 * @param InterchangeNode\x09The Node to create the input on.\n\x09 * @param InputName\x09\x09\x09The name to give to the input.\n\x09 * @param ExpressionUid\x09\x09The unique id of the node to connect to the input.\n\x09 * @param OutputName\x09\x09The name of the ouput from ExpressionUid to connect to the input.\n\x09 * @return\x09\x09\x09\x09\x09true if the input connection was succesfully added to the node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Adds an input connection attribute.\n@param InterchangeNode       The Node to create the input on.\n@param InputName                     The name to give to the input.\n@param ExpressionUid         The unique id of the node to connect to the input.\n@param OutputName            The name of the ouput from ExpressionUid to connect to the input.\n@return                                      true if the input connection was succesfully added to the node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "ConnectOuputToInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::InterchangeShaderPortsAPI_eventConnectOuputToInput_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics
	{
		struct InterchangeShaderPortsAPI_eventGatherInputs_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			TArray<FString> OutInputNames;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutInputNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutInputNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGatherInputs_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_InterchangeNode_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames_Inner = { "OutInputNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames = { "OutInputNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGatherInputs_Parms, OutInputNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::NewProp_OutInputNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Retrieves the names of all the inputs for a given node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Retrieves the names of all the inputs for a given node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "GatherInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::InterchangeShaderPortsAPI_eventGatherInputs_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics
	{
		struct InterchangeShaderPortsAPI_eventGetInputConnection_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			FString InputName;
			FString OutExpressionUid;
			FString OutputName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutExpressionUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InterchangeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InputName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutExpressionUid = { "OutExpressionUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, OutExpressionUid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventGetInputConnection_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderPortsAPI_eventGetInputConnection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventGetInputConnection_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutExpressionUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_OutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Retrieves the node unique id and the ouputname connected to a given input, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Retrieves the node unique id and the ouputname connected to a given input, if any." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "GetInputConnection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::InterchangeShaderPortsAPI_eventGetInputConnection_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics
	{
		struct InterchangeShaderPortsAPI_eventHasInput_Parms
		{
			const UInterchangeBaseNode* InterchangeNode;
			FName InInputName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterchangeNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InterchangeNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InInputName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InterchangeNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InterchangeNode = { "InterchangeNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventHasInput_Parms, InterchangeNode), Z_Construct_UClass_UInterchangeBaseNode_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InterchangeNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InterchangeNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InInputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InInputName = { "InInputName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventHasInput_Parms, InInputName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InInputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InInputName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderPortsAPI_eventHasInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventHasInput_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InterchangeNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_InInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Checks if a particular input exists on a given node.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Checks if a particular input exists on a given node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "HasInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::InterchangeShaderPortsAPI_eventHasInput_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics
	{
		struct InterchangeShaderPortsAPI_eventIsAnInput_Parms
		{
			FString AttributeKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_AttributeKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_AttributeKey = { "AttributeKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventIsAnInput_Parms, AttributeKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_AttributeKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_AttributeKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderPortsAPI_eventIsAnInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderPortsAPI_eventIsAnInput_Parms), &Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_AttributeKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Returns true if the attribute key is associated with an input (starts with \"Inputs:\").\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Returns true if the attribute key is associated with an input (starts with \"Inputs:\")." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "IsAnInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::InterchangeShaderPortsAPI_eventIsAnInput_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics
	{
		struct InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms
		{
			FString InputName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_InputName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Makes an attribute key to represent a node being connected to an input (ie: Inputs:InputName:Connect).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Makes an attribute key to represent a node being connected to an input (ie: Inputs:InputName:Connect)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "MakeInputConnectionKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::InterchangeShaderPortsAPI_eventMakeInputConnectionKey_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics
	{
		struct InterchangeShaderPortsAPI_eventMakeInputName_Parms
		{
			FString InputKey;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_InputKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputName_Parms, InputKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_InputKey_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_InputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * From an attribute key associated with an input (ie: Inputs:InputName:Value), retrieves the input name from it.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "From an attribute key associated with an input (ie: Inputs:InputName:Value), retrieves the input name from it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "MakeInputName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::InterchangeShaderPortsAPI_eventMakeInputName_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics
	{
		struct InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms
		{
			FString InputName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_InputName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms, InputName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_InputName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Makes an attribute key to represent a value being given to an input (ie: Inputs:InputName:Value).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Makes an attribute key to represent a value being given to an input (ie: Inputs:InputName:Value)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderPortsAPI, nullptr, "MakeInputValueKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::InterchangeShaderPortsAPI_eventMakeInputValueKey_Parms), Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeShaderPortsAPI);
	UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI_NoRegister()
	{
		return UInterchangeShaderPortsAPI::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectDefaultOuputToInput, "ConnectDefaultOuputToInput" }, // 3132369311
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_ConnectOuputToInput, "ConnectOuputToInput" }, // 2181788191
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_GatherInputs, "GatherInputs" }, // 2649838809
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_GetInputConnection, "GetInputConnection" }, // 2738818862
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_HasInput, "HasInput" }, // 4005120043
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_IsAnInput, "IsAnInput" }, // 2578992778
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputConnectionKey, "MakeInputConnectionKey" }, // 2255195764
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputName, "MakeInputName" }, // 3416520952
		{ &Z_Construct_UFunction_UInterchangeShaderPortsAPI_MakeInputValueKey, "MakeInputValueKey" }, // 1054231378
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The Shader Ports API manages a set of inputs and outputs attributes.\n * This API can be used over any InterchangeBaseNode that wants to support shader ports as attributes.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "The Shader Ports API manages a set of inputs and outputs attributes.\nThis API can be used over any InterchangeBaseNode that wants to support shader ports as attributes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeShaderPortsAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::ClassParams = {
		&UInterchangeShaderPortsAPI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeShaderPortsAPI()
	{
		if (!Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.OuterSingleton, Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeShaderPortsAPI.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeShaderPortsAPI>()
	{
		return UInterchangeShaderPortsAPI::StaticClass();
	}
	UInterchangeShaderPortsAPI::UInterchangeShaderPortsAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeShaderPortsAPI);
	UInterchangeShaderPortsAPI::~UInterchangeShaderPortsAPI() {}
	DEFINE_FUNCTION(UInterchangeShaderNode::execSetCustomShaderType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomShaderType(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderNode::execGetCustomShaderType)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomShaderType(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeShaderNode::StaticRegisterNativesUInterchangeShaderNode()
	{
		UClass* Class = UInterchangeShaderNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomShaderType", &UInterchangeShaderNode::execGetCustomShaderType },
			{ "SetCustomShaderType", &UInterchangeShaderNode::execSetCustomShaderType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics
	{
		struct InterchangeShaderNode_eventGetCustomShaderType_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderNode_eventGetCustomShaderType_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderNode_eventGetCustomShaderType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderNode_eventGetCustomShaderType_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderNode, nullptr, "GetCustomShaderType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::InterchangeShaderNode_eventGetCustomShaderType_Parms), Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics
	{
		struct InterchangeShaderNode_eventSetCustomShaderType_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderNode_eventSetCustomShaderType_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderNode_eventSetCustomShaderType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderNode_eventSetCustomShaderType_Parms), &Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Sets which type of shader this nodes represents. Can be arbitrary or one of the predefined shader types.\n\x09 * The material pipeline handling the shader node should be aware of the shader type that is being set here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Sets which type of shader this nodes represents. Can be arbitrary or one of the predefined shader types.\nThe material pipeline handling the shader node should be aware of the shader type that is being set here." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderNode, nullptr, "SetCustomShaderType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::InterchangeShaderNode_eventSetCustomShaderType_Parms), Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeShaderNode);
	UClass* Z_Construct_UClass_UInterchangeShaderNode_NoRegister()
	{
		return UInterchangeShaderNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeShaderNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeShaderNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeShaderNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeShaderNode_GetCustomShaderType, "GetCustomShaderType" }, // 921242523
		{ &Z_Construct_UFunction_UInterchangeShaderNode_SetCustomShaderType, "SetCustomShaderType" }, // 2879173842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeShaderNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A shader node is a named set of inputs and outputs. It can be connected to other shader nodes and finally to a shader graph input.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "A shader node is a named set of inputs and outputs. It can be connected to other shader nodes and finally to a shader graph input." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeShaderNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeShaderNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeShaderNode_Statics::ClassParams = {
		&UInterchangeShaderNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeShaderNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeShaderNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeShaderNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeShaderNode.OuterSingleton, Z_Construct_UClass_UInterchangeShaderNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeShaderNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeShaderNode>()
	{
		return UInterchangeShaderNode::StaticClass();
	}
	UInterchangeShaderNode::UInterchangeShaderNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeShaderNode);
	UInterchangeShaderNode::~UInterchangeShaderNode() {}
	DEFINE_FUNCTION(UInterchangeFunctionCallShaderNode::execSetCustomMaterialFunction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMaterialFunction(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeFunctionCallShaderNode::execGetCustomMaterialFunction)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMaterialFunction(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeFunctionCallShaderNode::StaticRegisterNativesUInterchangeFunctionCallShaderNode()
	{
		UClass* Class = UInterchangeFunctionCallShaderNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomMaterialFunction", &UInterchangeFunctionCallShaderNode::execGetCustomMaterialFunction },
			{ "SetCustomMaterialFunction", &UInterchangeFunctionCallShaderNode::execSetCustomMaterialFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics
	{
		struct InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms), &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFunctionCallShaderNode, nullptr, "GetCustomMaterialFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::InterchangeFunctionCallShaderNode_eventGetCustomMaterialFunction_Parms), Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics
	{
		struct InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms
		{
			FString AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms), &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Sets the unique id of the material function referenced by the function call expression.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Sets the unique id of the material function referenced by the function call expression." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeFunctionCallShaderNode, nullptr, "SetCustomMaterialFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::InterchangeFunctionCallShaderNode_eventSetCustomMaterialFunction_Parms), Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFunctionCallShaderNode);
	UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode_NoRegister()
	{
		return UInterchangeFunctionCallShaderNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeShaderNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_GetCustomMaterialFunction, "GetCustomMaterialFunction" }, // 2859467205
		{ &Z_Construct_UFunction_UInterchangeFunctionCallShaderNode_SetCustomMaterialFunction, "SetCustomMaterialFunction" }, // 2816304140
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A function call shader node has a named set of inputs and outputs which corresponds to the inputs and outputs of the shader function it instances.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "A function call shader node has a named set of inputs and outputs which corresponds to the inputs and outputs of the shader function it instances." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFunctionCallShaderNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::ClassParams = {
		&UInterchangeFunctionCallShaderNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeFunctionCallShaderNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode.OuterSingleton, Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeFunctionCallShaderNode>()
	{
		return UInterchangeFunctionCallShaderNode::StaticClass();
	}
	UInterchangeFunctionCallShaderNode::UInterchangeFunctionCallShaderNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFunctionCallShaderNode);
	UInterchangeFunctionCallShaderNode::~UInterchangeFunctionCallShaderNode() {}
	DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomIsAShaderFunction)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomIsAShaderFunction(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomIsAShaderFunction)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomIsAShaderFunction(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomOpacityMaskClipValue)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bAddApplyDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomOpacityMaskClipValue(Z_Param_Out_AttributeValue,Z_Param_bAddApplyDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomOpacityMaskClipValue)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomOpacityMaskClipValue(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderGraphNode::execSetCustomTwoSided)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomTwoSided(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeShaderGraphNode::execGetCustomTwoSided)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomTwoSided(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeShaderGraphNode::StaticRegisterNativesUInterchangeShaderGraphNode()
	{
		UClass* Class = UInterchangeShaderGraphNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomIsAShaderFunction", &UInterchangeShaderGraphNode::execGetCustomIsAShaderFunction },
			{ "GetCustomOpacityMaskClipValue", &UInterchangeShaderGraphNode::execGetCustomOpacityMaskClipValue },
			{ "GetCustomTwoSided", &UInterchangeShaderGraphNode::execGetCustomTwoSided },
			{ "SetCustomIsAShaderFunction", &UInterchangeShaderGraphNode::execSetCustomIsAShaderFunction },
			{ "SetCustomOpacityMaskClipValue", &UInterchangeShaderGraphNode::execSetCustomOpacityMaskClipValue },
			{ "SetCustomTwoSided", &UInterchangeShaderGraphNode::execSetCustomTwoSided },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics
	{
		struct InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomIsAShaderFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::InterchangeShaderGraphNode_eventGetCustomIsAShaderFunction_Parms), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics
	{
		struct InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomOpacityMaskClipValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::InterchangeShaderGraphNode_eventGetCustomOpacityMaskClipValue_Parms), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics
	{
		struct InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "GetCustomTwoSided", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::InterchangeShaderGraphNode_eventGetCustomTwoSided_Parms), Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics
	{
		struct InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Sets if this shader graph should be considered as a material, false, or a material function, true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Sets if this shader graph should be considered as a material, false, or a material function, true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomIsAShaderFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::InterchangeShaderGraphNode_eventSetCustomIsAShaderFunction_Parms), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics
	{
		struct InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms
		{
			float AttributeValue;
			bool bAddApplyDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms*)Obj)->bAddApplyDelegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_bAddApplyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Shader is transparent or opaque if it's alpha is lower or higher than the clip value.\n\x09 */" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Shader is transparent or opaque if it's alpha is lower or higher than the clip value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomOpacityMaskClipValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::InterchangeShaderGraphNode_eventSetCustomOpacityMaskClipValue_Parms), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics
	{
		struct InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms), &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Material" },
		{ "Comment", "/**\n\x09 * Sets if this shader graph should be rendered two sided or not. Defaults to off.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "Sets if this shader graph should be rendered two sided or not. Defaults to off." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeShaderGraphNode, nullptr, "SetCustomTwoSided", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::InterchangeShaderGraphNode_eventSetCustomTwoSided_Parms), Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeShaderGraphNode);
	UClass* Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister()
	{
		return UInterchangeShaderGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeShaderGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeShaderNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomIsAShaderFunction, "GetCustomIsAShaderFunction" }, // 2118617693
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomOpacityMaskClipValue, "GetCustomOpacityMaskClipValue" }, // 504668811
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_GetCustomTwoSided, "GetCustomTwoSided" }, // 913284978
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomIsAShaderFunction, "SetCustomIsAShaderFunction" }, // 1356283844
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomOpacityMaskClipValue, "SetCustomOpacityMaskClipValue" }, // 1654550604
		{ &Z_Construct_UFunction_UInterchangeShaderGraphNode_SetCustomTwoSided, "SetCustomTwoSided" }, // 1386414170
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A shader graph has its own set of inputs on which shader nodes can be connected to.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeShaderGraphNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeShaderGraphNode.h" },
		{ "ToolTip", "A shader graph has its own set of inputs on which shader nodes can be connected to." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeShaderGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::ClassParams = {
		&UInterchangeShaderGraphNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeShaderGraphNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeShaderGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeShaderGraphNode.OuterSingleton, Z_Construct_UClass_UInterchangeShaderGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeShaderGraphNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeShaderGraphNode>()
	{
		return UInterchangeShaderGraphNode::StaticClass();
	}
	UInterchangeShaderGraphNode::UInterchangeShaderGraphNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeShaderGraphNode);
	UInterchangeShaderGraphNode::~UInterchangeShaderGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeShaderPortsAPI, UInterchangeShaderPortsAPI::StaticClass, TEXT("UInterchangeShaderPortsAPI"), &Z_Registration_Info_UClass_UInterchangeShaderPortsAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeShaderPortsAPI), 1700849886U) },
		{ Z_Construct_UClass_UInterchangeShaderNode, UInterchangeShaderNode::StaticClass, TEXT("UInterchangeShaderNode"), &Z_Registration_Info_UClass_UInterchangeShaderNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeShaderNode), 3585138761U) },
		{ Z_Construct_UClass_UInterchangeFunctionCallShaderNode, UInterchangeFunctionCallShaderNode::StaticClass, TEXT("UInterchangeFunctionCallShaderNode"), &Z_Registration_Info_UClass_UInterchangeFunctionCallShaderNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFunctionCallShaderNode), 2638567614U) },
		{ Z_Construct_UClass_UInterchangeShaderGraphNode, UInterchangeShaderGraphNode::StaticClass, TEXT("UInterchangeShaderGraphNode"), &Z_Registration_Info_UClass_UInterchangeShaderGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeShaderGraphNode), 2464309154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_91449814(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
