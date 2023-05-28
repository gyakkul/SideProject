// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeVariantSetNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeVariantSetNode() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVariantSetNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execRemoveCustomDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCustomDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execAddCustomDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddCustomDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDependencyUid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomDependencyUid(Z_Param_Index,Z_Param_Out_OutDependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDependencyUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencyUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomDependencyUids(Z_Param_Out_OutDependencyUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDependencyUidCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCustomDependencyUidCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execSetCustomVariantsPayloadKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomVariantsPayloadKey(Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomVariantsPayloadKey)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomVariantsPayloadKey(Z_Param_Out_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execSetCustomDisplayText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDisplayText(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeVariantSetNode::execGetCustomDisplayText)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDisplayText(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	void UInterchangeVariantSetNode::StaticRegisterNativesUInterchangeVariantSetNode()
	{
		UClass* Class = UInterchangeVariantSetNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomDependencyUid", &UInterchangeVariantSetNode::execAddCustomDependencyUid },
			{ "GetCustomDependencyUid", &UInterchangeVariantSetNode::execGetCustomDependencyUid },
			{ "GetCustomDependencyUidCount", &UInterchangeVariantSetNode::execGetCustomDependencyUidCount },
			{ "GetCustomDependencyUids", &UInterchangeVariantSetNode::execGetCustomDependencyUids },
			{ "GetCustomDisplayText", &UInterchangeVariantSetNode::execGetCustomDisplayText },
			{ "GetCustomVariantsPayloadKey", &UInterchangeVariantSetNode::execGetCustomVariantsPayloadKey },
			{ "RemoveCustomDependencyUid", &UInterchangeVariantSetNode::execRemoveCustomDependencyUid },
			{ "SetCustomDisplayText", &UInterchangeVariantSetNode::execSetCustomDisplayText },
			{ "SetCustomVariantsPayloadKey", &UInterchangeVariantSetNode::execSetCustomVariantsPayloadKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics
	{
		struct InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms
		{
			FString DependencyUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Add one translated node's unique id to this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Add one translated node's unique id to this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "AddCustomDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::InterchangeVariantSetNode_eventAddCustomDependencyUid_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics
	{
		struct InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms
		{
			int32 Index;
			FString OutDependencyUid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencyUid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_OutDependencyUid = { "OutDependencyUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms, OutDependencyUid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::NewProp_OutDependencyUid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve a specific translated node's unique id for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to retrieve a specific translated node's unique id for this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUid_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics
	{
		struct InterchangeVariantSetNode_eventGetCustomDependencyUidCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUidCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of translated node's unique ids for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of translated node's unique ids for this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDependencyUidCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUidCount_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics
	{
		struct InterchangeVariantSetNode_eventGetCustomDependencyUids_Parms
		{
			TArray<FString> OutDependencyUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencyUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencyUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids_Inner = { "OutDependencyUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids = { "OutDependencyUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDependencyUids_Parms, OutDependencyUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::NewProp_OutDependencyUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve all the translated node's unique ids for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to retrieve all the translated node's unique ids for this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDependencyUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::InterchangeVariantSetNode_eventGetCustomDependencyUids_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics
	{
		struct InterchangeVariantSetNode_eventGetCustomDisplayText_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomDisplayText_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeVariantSetNode_eventGetCustomDisplayText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeVariantSetNode_eventGetCustomDisplayText_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the text which is displayed in the UI for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to retrieve the text which is displayed in the UI for this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomDisplayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::InterchangeVariantSetNode_eventGetCustomDisplayText_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics
	{
		struct InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms
		{
			FString PayloadKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms, PayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * Get the payload key needed to retrieve the variants for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Get the payload key needed to retrieve the variants for this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "GetCustomVariantsPayloadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::InterchangeVariantSetNode_eventGetCustomVariantsPayloadKey_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics
	{
		struct InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms
		{
			FString DependencyUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DependencyUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Remove one translated node's unique id from this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Remove one translated node's unique id from this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "RemoveCustomDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::InterchangeVariantSetNode_eventRemoveCustomDependencyUid_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics
	{
		struct InterchangeVariantSetNode_eventSetCustomDisplayText_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventSetCustomDisplayText_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeVariantSetNode_eventSetCustomDisplayText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeVariantSetNode_eventSetCustomDisplayText_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to set the text to be displayed in the UI for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to set the text to be displayed in the UI for this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "SetCustomDisplayText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::InterchangeVariantSetNode_eventSetCustomDisplayText_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics
	{
		struct InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms
		{
			FString PayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms), &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | VariantSet" },
		{ "Comment", "/**\n\x09 * Set the payload key needed to retrieve the variants for this VariantSet.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Set the payload key needed to retrieve the variants for this VariantSet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeVariantSetNode, nullptr, "SetCustomVariantsPayloadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::InterchangeVariantSetNode_eventSetCustomVariantsPayloadKey_Parms), Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeVariantSetNode);
	UClass* Z_Construct_UClass_UInterchangeVariantSetNode_NoRegister()
	{
		return UInterchangeVariantSetNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeVariantSetNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeVariantSetNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeVariantSetNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_AddCustomDependencyUid, "AddCustomDependencyUid" }, // 200246985
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUid, "GetCustomDependencyUid" }, // 739326881
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUidCount, "GetCustomDependencyUidCount" }, // 804592120
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDependencyUids, "GetCustomDependencyUids" }, // 2660290602
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomDisplayText, "GetCustomDisplayText" }, // 1955670187
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_GetCustomVariantsPayloadKey, "GetCustomVariantsPayloadKey" }, // 1765217454
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_RemoveCustomDependencyUid, "RemoveCustomDependencyUid" }, // 378293083
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomDisplayText, "SetCustomDisplayText" }, // 1294757203
		{ &Z_Construct_UFunction_UInterchangeVariantSetNode_SetCustomVariantsPayloadKey, "SetCustomVariantsPayloadKey" }, // 181974704
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeVariantSetNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent a set of variants\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeVariantSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Class to represent a set of variants" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeVariantSetNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeVariantSetNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeVariantSetNode_Statics::ClassParams = {
		&UInterchangeVariantSetNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeVariantSetNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeVariantSetNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeVariantSetNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeVariantSetNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeVariantSetNode.OuterSingleton, Z_Construct_UClass_UInterchangeVariantSetNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeVariantSetNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeVariantSetNode>()
	{
		return UInterchangeVariantSetNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeVariantSetNode);
	UInterchangeVariantSetNode::~UInterchangeVariantSetNode() {}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execRemoveCustomVariantSetUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCustomVariantSetUid(Z_Param_VariantUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execAddCustomVariantSetUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddCustomVariantSetUid(Z_Param_VariantUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutVariantUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomVariantSetUid(Z_Param_Index,Z_Param_Out_OutVariantUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutVariantUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomVariantSetUids(Z_Param_Out_OutVariantUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUidCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCustomVariantSetUidCount();
		P_NATIVE_END;
	}
	void UInterchangeSceneVariantSetsNode::StaticRegisterNativesUInterchangeSceneVariantSetsNode()
	{
		UClass* Class = UInterchangeSceneVariantSetsNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomVariantSetUid", &UInterchangeSceneVariantSetsNode::execAddCustomVariantSetUid },
			{ "GetCustomVariantSetUid", &UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUid },
			{ "GetCustomVariantSetUidCount", &UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUidCount },
			{ "GetCustomVariantSetUids", &UInterchangeSceneVariantSetsNode::execGetCustomVariantSetUids },
			{ "RemoveCustomVariantSetUid", &UInterchangeSceneVariantSetsNode::execRemoveCustomVariantSetUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics
	{
		struct InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms
		{
			FString VariantUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid = { "VariantUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms, VariantUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms), &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_VariantUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Add one VariantSet's unique id to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Add one VariantSet's unique id to this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "AddCustomVariantSetUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventAddCustomVariantSetUid_Parms), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics
	{
		struct InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms
		{
			int32 Index;
			FString OutVariantUid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutVariantUid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_OutVariantUid = { "OutVariantUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms, OutVariantUid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::NewProp_OutVariantUid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one VariantSet's unique id for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to retrieve one VariantSet's unique id for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "GetCustomVariantSetUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUid_Parms), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics
	{
		struct InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUidCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUidCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of VariantSets for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of VariantSets for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "GetCustomVariantSetUidCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUidCount_Parms), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics
	{
		struct InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUids_Parms
		{
			TArray<FString> OutVariantUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutVariantUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutVariantUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids_Inner = { "OutVariantUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids = { "OutVariantUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUids_Parms, OutVariantUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::NewProp_OutVariantUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve all the VariantSets' unique ids for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "This function allow to retrieve all the VariantSets' unique ids for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "GetCustomVariantSetUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::InterchangeSceneVariantSetsNode_eventGetCustomVariantSetUids_Parms), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics
	{
		struct InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms
		{
			FString VariantUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid = { "VariantUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms, VariantUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms), &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_VariantUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SceneVariantSet" },
		{ "Comment", "/**\n\x09 * Remove one VariantSet's unique id from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Remove one VariantSet's unique id from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneVariantSetsNode, nullptr, "RemoveCustomVariantSetUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::InterchangeSceneVariantSetsNode_eventRemoveCustomVariantSetUid_Parms), Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneVariantSetsNode);
	UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode_NoRegister()
	{
		return UInterchangeSceneVariantSetsNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_AddCustomVariantSetUid, "AddCustomVariantSetUid" }, // 249100556
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUid, "GetCustomVariantSetUid" }, // 2232771763
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUidCount, "GetCustomVariantSetUidCount" }, // 2844371842
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_GetCustomVariantSetUids, "GetCustomVariantSetUids" }, // 3483851739
		{ &Z_Construct_UFunction_UInterchangeSceneVariantSetsNode_RemoveCustomVariantSetUid, "RemoveCustomVariantSetUid" }, // 3067272187
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class to represent a set of VariantSet nodes\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeVariantSetNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeVariantSetNode.h" },
		{ "ToolTip", "Class to represent a set of VariantSet nodes" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneVariantSetsNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::ClassParams = {
		&UInterchangeSceneVariantSetsNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSceneVariantSetsNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.OuterSingleton, Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeSceneVariantSetsNode>()
	{
		return UInterchangeSceneVariantSetsNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneVariantSetsNode);
	UInterchangeSceneVariantSetsNode::~UInterchangeSceneVariantSetsNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeVariantSetNode, UInterchangeVariantSetNode::StaticClass, TEXT("UInterchangeVariantSetNode"), &Z_Registration_Info_UClass_UInterchangeVariantSetNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeVariantSetNode), 2515021188U) },
		{ Z_Construct_UClass_UInterchangeSceneVariantSetsNode, UInterchangeSceneVariantSetsNode::StaticClass, TEXT("UInterchangeSceneVariantSetsNode"), &Z_Registration_Info_UClass_UInterchangeSceneVariantSetsNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneVariantSetsNode), 379641376U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_1759557983(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
