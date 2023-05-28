// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeAnimationTrackSetFactoryNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimationTrackSetFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execGetCustomFrameRate)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFrameRate(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execSetCustomFrameRate)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFrameRate(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execRemoveCustomAnimationTrackUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AnimationTrackUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveCustomAnimationTrackUid(Z_Param_AnimationTrackUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execAddCustomAnimationTrackUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AnimationTrackUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddCustomAnimationTrackUid(Z_Param_AnimationTrackUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execGetCustomAnimationTrackUid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAnimationTrackUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomAnimationTrackUid(Z_Param_Index,Z_Param_Out_OutAnimationTrackUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execGetCustomAnimationTrackUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutAnimationTrackUids);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomAnimationTrackUids(Z_Param_Out_OutAnimationTrackUids);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execGetCustomAnimationTrackUidCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCustomAnimationTrackUidCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimationTrackSetFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	void UInterchangeAnimationTrackSetFactoryNode::StaticRegisterNativesUInterchangeAnimationTrackSetFactoryNode()
	{
		UClass* Class = UInterchangeAnimationTrackSetFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomAnimationTrackUid", &UInterchangeAnimationTrackSetFactoryNode::execAddCustomAnimationTrackUid },
			{ "GetCustomAnimationTrackUid", &UInterchangeAnimationTrackSetFactoryNode::execGetCustomAnimationTrackUid },
			{ "GetCustomAnimationTrackUidCount", &UInterchangeAnimationTrackSetFactoryNode::execGetCustomAnimationTrackUidCount },
			{ "GetCustomAnimationTrackUids", &UInterchangeAnimationTrackSetFactoryNode::execGetCustomAnimationTrackUids },
			{ "GetCustomFrameRate", &UInterchangeAnimationTrackSetFactoryNode::execGetCustomFrameRate },
			{ "GetObjectClass", &UInterchangeAnimationTrackSetFactoryNode::execGetObjectClass },
			{ "RemoveCustomAnimationTrackUid", &UInterchangeAnimationTrackSetFactoryNode::execRemoveCustomAnimationTrackUid },
			{ "SetCustomFrameRate", &UInterchangeAnimationTrackSetFactoryNode::execSetCustomFrameRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventAddCustomAnimationTrackUid_Parms
		{
			FString AnimationTrackUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationTrackUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid = { "AnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventAddCustomAnimationTrackUid_Parms, AnimationTrackUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationTrackSetFactoryNode_eventAddCustomAnimationTrackUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationTrackSetFactoryNode_eventAddCustomAnimationTrackUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/**\n\x09 * Add one track dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "Add one track dependency to this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "AddCustomAnimationTrackUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetFactoryNode_eventAddCustomAnimationTrackUid_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUid_Parms
		{
			int32 Index;
			FString OutAnimationTrackUid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAnimationTrackUid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUid_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_OutAnimationTrackUid = { "OutAnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUid_Parms, OutAnimationTrackUid), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::NewProp_OutAnimationTrackUid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one track dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve one track dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "GetCustomAnimationTrackUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUid_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUidCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUidCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of track dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of track dependencies for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "GetCustomAnimationTrackUidCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUidCount_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUids_Parms
		{
			TArray<FString> OutAnimationTrackUids;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAnimationTrackUids_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAnimationTrackUids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids_Inner = { "OutAnimationTrackUids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids = { "OutAnimationTrackUids", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUids_Parms, OutAnimationTrackUids), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::NewProp_OutAnimationTrackUids,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the track dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "This function allow to retrieve the track dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "GetCustomAnimationTrackUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::InterchangeAnimationTrackSetFactoryNode_eventGetCustomAnimationTrackUids_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventGetCustomFrameRate_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventGetCustomFrameRate_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationTrackSetFactoryNode_eventGetCustomFrameRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationTrackSetFactoryNode_eventGetCustomFrameRate_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/**\n\x09 * Get the frame rate for the animations in the level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "Get the frame rate for the animations in the level sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "GetCustomFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::InterchangeAnimationTrackSetFactoryNode_eventGetCustomFrameRate_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventGetObjectClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::InterchangeAnimationTrackSetFactoryNode_eventGetObjectClass_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventRemoveCustomAnimationTrackUid_Parms
		{
			FString AnimationTrackUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTrackUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationTrackUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid = { "AnimationTrackUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventRemoveCustomAnimationTrackUid_Parms, AnimationTrackUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationTrackSetFactoryNode_eventRemoveCustomAnimationTrackUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationTrackSetFactoryNode_eventRemoveCustomAnimationTrackUid_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_AnimationTrackUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/**\n\x09 * Remove one track dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "Remove one track dependency from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "RemoveCustomAnimationTrackUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::InterchangeAnimationTrackSetFactoryNode_eventRemoveCustomAnimationTrackUid_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics
	{
		struct InterchangeAnimationTrackSetFactoryNode_eventSetCustomFrameRate_Parms
		{
			float AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimationTrackSetFactoryNode_eventSetCustomFrameRate_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimationTrackSetFactoryNode_eventSetCustomFrameRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimationTrackSetFactoryNode_eventSetCustomFrameRate_Parms), &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimationTrackSetFactory" },
		{ "Comment", "/**\n\x09 * Set the frame rate for the animations in the level sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ToolTip", "Set the frame rate for the animations in the level sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, nullptr, "SetCustomFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::InterchangeAnimationTrackSetFactoryNode_eventSetCustomFrameRate_Parms), Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationTrackSetFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_NoRegister()
	{
		return UInterchangeAnimationTrackSetFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_AddCustomAnimationTrackUid, "AddCustomAnimationTrackUid" }, // 2625952140
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUid, "GetCustomAnimationTrackUid" }, // 2829734246
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUidCount, "GetCustomAnimationTrackUidCount" }, // 3655660886
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomAnimationTrackUids, "GetCustomAnimationTrackUids" }, // 3361940446
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetCustomFrameRate, "GetCustomFrameRate" }, // 1165669102
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_GetObjectClass, "GetObjectClass" }, // 3201262396
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_RemoveCustomAnimationTrackUid, "RemoveCustomAnimationTrackUid" }, // 3093472519
		{ &Z_Construct_UFunction_UInterchangeAnimationTrackSetFactoryNode_SetCustomFrameRate, "SetCustomFrameRate" }, // 443504965
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InterchangeAnimationTrackSetFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimationTrackSetFactoryNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimationTrackSetFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::ClassParams = {
		&UInterchangeAnimationTrackSetFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeAnimationTrackSetFactoryNode>()
	{
		return UInterchangeAnimationTrackSetFactoryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationTrackSetFactoryNode);
	UInterchangeAnimationTrackSetFactoryNode::~UInterchangeAnimationTrackSetFactoryNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimationTrackSetFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimationTrackSetFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimationTrackSetFactoryNode, UInterchangeAnimationTrackSetFactoryNode::StaticClass, TEXT("UInterchangeAnimationTrackSetFactoryNode"), &Z_Registration_Info_UClass_UInterchangeAnimationTrackSetFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationTrackSetFactoryNode), 2093465732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimationTrackSetFactoryNode_h_1371239415(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimationTrackSetFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimationTrackSetFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
