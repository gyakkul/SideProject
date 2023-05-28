// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeCommonPipelineDataFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCommonPipelineDataFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execSetBakeMeshes)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_NodeContainer);
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBakeMeshes(Z_Param_NodeContainer,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execGetBakeMeshes)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBakeMeshes(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execSetCustomGlobalOffsetTransform)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_NodeContainer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomGlobalOffsetTransform(Z_Param_NodeContainer,Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeCommonPipelineDataFactoryNode::execGetCustomGlobalOffsetTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomGlobalOffsetTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeCommonPipelineDataFactoryNode::StaticRegisterNativesUInterchangeCommonPipelineDataFactoryNode()
	{
		UClass* Class = UInterchangeCommonPipelineDataFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBakeMeshes", &UInterchangeCommonPipelineDataFactoryNode::execGetBakeMeshes },
			{ "GetCustomGlobalOffsetTransform", &UInterchangeCommonPipelineDataFactoryNode::execGetCustomGlobalOffsetTransform },
			{ "SetBakeMeshes", &UInterchangeCommonPipelineDataFactoryNode::execSetBakeMeshes },
			{ "SetCustomGlobalOffsetTransform", &UInterchangeCommonPipelineDataFactoryNode::execSetCustomGlobalOffsetTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics
	{
		struct InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms
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
	void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Return the Bake Meshes set by the pipelines. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Return the Bake Meshes set by the pipelines." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "GetBakeMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::InterchangeCommonPipelineDataFactoryNode_eventGetBakeMeshes_Parms), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics
	{
		struct InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms
		{
			FTransform AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Return the global offset transform set by the pipelines. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Return the global offset transform set by the pipelines." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "GetCustomGlobalOffsetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::InterchangeCommonPipelineDataFactoryNode_eventGetCustomGlobalOffsetTransform_Parms), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics
	{
		struct InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms
		{
			const UInterchangeBaseNodeContainer* NodeContainer;
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeContainer;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_NodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_NodeContainer = { "NodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms, NodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_NodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_NodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_NodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Pipeline can set Bake Meshes, factories will use this to identify if Global transforms should be applied to Meshes/Skeletals. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Pipeline can set Bake Meshes, factories will use this to identify if Global transforms should be applied to Meshes/Skeletals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "SetBakeMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::InterchangeCommonPipelineDataFactoryNode_eventSetBakeMeshes_Parms), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics
	{
		struct InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms
		{
			const UInterchangeBaseNodeContainer* NodeContainer;
			FTransform AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_NodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_NodeContainer = { "NodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms, NodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_NodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_NodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms), &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_NodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Common Pipeline Data" },
		{ "Comment", "/** Pipeline can set a global transform, factories will use this global offset when importing asset. */" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "Pipeline can set a global transform, factories will use this global offset when importing asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, nullptr, "SetCustomGlobalOffsetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::InterchangeCommonPipelineDataFactoryNode_eventSetCustomGlobalOffsetTransform_Parms), Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeCommonPipelineDataFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_NoRegister()
	{
		return UInterchangeCommonPipelineDataFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetBakeMeshes, "GetBakeMeshes" }, // 2230956668
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_GetCustomGlobalOffsetTransform, "GetCustomGlobalOffsetTransform" }, // 618044841
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetBakeMeshes, "SetBakeMeshes" }, // 2311983428
		{ &Z_Construct_UFunction_UInterchangeCommonPipelineDataFactoryNode_SetCustomGlobalOffsetTransform, "SetCustomGlobalOffsetTransform" }, // 512372060
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* This factory node is the place where pipeline can set global data that can be use by factories. */" },
		{ "IncludePath", "InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeCommonPipelineDataFactoryNode.h" },
		{ "ToolTip", "This factory node is the place where pipeline can set global data that can be use by factories." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeCommonPipelineDataFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::ClassParams = {
		&UInterchangeCommonPipelineDataFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeCommonPipelineDataFactoryNode>()
	{
		return UInterchangeCommonPipelineDataFactoryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeCommonPipelineDataFactoryNode);
	UInterchangeCommonPipelineDataFactoryNode::~UInterchangeCommonPipelineDataFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode, UInterchangeCommonPipelineDataFactoryNode::StaticClass, TEXT("UInterchangeCommonPipelineDataFactoryNode"), &Z_Registration_Info_UClass_UInterchangeCommonPipelineDataFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeCommonPipelineDataFactoryNode), 207908643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_819923616(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
