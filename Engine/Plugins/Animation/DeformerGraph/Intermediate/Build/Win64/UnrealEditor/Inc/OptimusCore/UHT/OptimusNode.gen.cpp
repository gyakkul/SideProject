// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	DEFINE_FUNCTION(UOptimusNode::execGetGraphPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetGraphPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNode::execSetGraphPosition)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGraphPosition(Z_Param_Out_InPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNode::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNode::execGetNodeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNodeName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusNode::execGetNodeCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNodeCategory();
		P_NATIVE_END;
	}
	void UOptimusNode::StaticRegisterNativesUOptimusNode()
	{
		UClass* Class = UOptimusNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayName", &UOptimusNode::execGetDisplayName },
			{ "GetGraphPosition", &UOptimusNode::execGetGraphPosition },
			{ "GetNodeCategory", &UOptimusNode::execGetNodeCategory },
			{ "GetNodeName", &UOptimusNode::execGetNodeName },
			{ "SetGraphPosition", &UOptimusNode::execSetGraphPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics
	{
		struct OptimusNode_eventGetDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNode_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Returns the display name to use on the graphical node in the graph editor.\n\x09 * @return The display name to show to the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the display name to use on the graphical node in the graph editor.\n@return The display name to show to the user." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::OptimusNode_eventGetDisplayName_Parms), Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNode_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics
	{
		struct OptimusNode_eventGetGraphPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNode_eventGetGraphPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Returns the position in the graph UI where the node is shown.\n\x09 * @return The coordinates of the node's position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the position in the graph UI where the node is shown.\n@return The coordinates of the node's position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetGraphPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::OptimusNode_eventGetGraphPosition_Parms), Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNode_GetGraphPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetGraphPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics
	{
		struct OptimusNode_eventGetNodeCategory_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNode_eventGetNodeCategory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/** \n\x09 * Returns the node class category. This is used for categorizing the node for display.\n\x09 * @return The node class category.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the node class category. This is used for categorizing the node for display.\n@return The node class category." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetNodeCategory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::OptimusNode_eventGetNodeCategory_Parms), Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNode_GetNodeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetNodeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics
	{
		struct OptimusNode_eventGetNodeName_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNode_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Returns the node class name. This name is immutable for the given node class.\n\x09 * @return The node class name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Returns the node class name. This name is immutable for the given node class.\n@return The node class name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "GetNodeName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::OptimusNode_eventGetNodeName_Parms), Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNode_GetNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_GetNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics
	{
		struct OptimusNode_eventSetGraphPosition_Parms
		{
			FVector2D InPosition;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPosition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusNode_eventSetGraphPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_InPosition_MetaData)) };
	void Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusNode_eventSetGraphPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusNode_eventSetGraphPosition_Parms), &Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "OptimusNodeGraph" },
		{ "Comment", "/**\n\x09 * Sets the position in the graph UI that the node should be shown at.\n\x09 * @param InPosition The coordinates of the node's position.\n\x09 * @return true if setting the position was successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Sets the position in the graph UI that the node should be shown at.\n@param InPosition The coordinates of the node's position.\n@return true if setting the position was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusNode, nullptr, "SetGraphPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::OptimusNode_eventSetGraphPosition_Parms), Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusNode_SetGraphPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusNode_SetGraphPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode);
	UClass* Z_Construct_UClass_UOptimusNode_NoRegister()
	{
		return UOptimusNode::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphPosition;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pins;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExpandedPins_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpandedPins_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ExpandedPins;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DiagnosticLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiagnosticLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DiagnosticLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptimusNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusNode_GetDisplayName, "GetDisplayName" }, // 3284128445
		{ &Z_Construct_UFunction_UOptimusNode_GetGraphPosition, "GetGraphPosition" }, // 452178243
		{ &Z_Construct_UFunction_UOptimusNode_GetNodeCategory, "GetNodeCategory" }, // 1363004320
		{ &Z_Construct_UFunction_UOptimusNode_GetNodeName, "GetNodeName" }, // 371978787
		{ &Z_Construct_UFunction_UOptimusNode_SetGraphPosition, "SetGraphPosition" }, // 1544173311
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusNode.h" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Comment", "// The display name to show. This is non-transactional because it is controlled by our \n// action system rather than the transacting system for undo.\n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "The display name to show. This is non-transactional because it is controlled by our\naction system rather than the transacting system for undo." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_Statics::NewProp_GraphPosition_MetaData[] = {
		{ "Comment", "// Node layout data\n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "Node layout data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_GraphPosition = { "GraphPosition", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode, GraphPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_Statics::NewProp_GraphPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::NewProp_GraphPosition_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins_Inner = { "Pins", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins_MetaData[] = {
		{ "Comment", "// The list of pins. Non-transactional for the same reason as above. \n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "The list of pins. Non-transactional for the same reason as above." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins = { "Pins", nullptr, (EPropertyFlags)0x0044000400000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode, Pins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins_ElementProp = { "ExpandedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins_MetaData[] = {
		{ "Comment", "// The list of pins that should be shown as expanded in the graph view.\n" },
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
		{ "ToolTip", "The list of pins that should be shown as expanded in the graph view." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins = { "ExpandedPins", nullptr, (EPropertyFlags)0x0040000400000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode, ExpandedPins), METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel = { "DiagnosticLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode, DiagnosticLevel), Z_Construct_UEnum_OptimusCore_EOptimusDiagnosticLevel, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel_MetaData)) }; // 205652717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_GraphPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_Pins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_ExpandedPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_Statics::NewProp_DiagnosticLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_Statics::ClassParams = {
		&UOptimusNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptimusNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode.OuterSingleton, Z_Construct_UClass_UOptimusNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode>()
	{
		return UOptimusNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode, UOptimusNode::StaticClass, TEXT("UOptimusNode"), &Z_Registration_Info_UClass_UOptimusNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode), 2160428986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_4158343416(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
