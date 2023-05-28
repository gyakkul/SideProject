// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeSceneNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSceneNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeSceneNode::execRemoveSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSlotMaterialDependencyUid(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execSetSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialDependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_MaterialDependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMaterialDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_Out_OutMaterialDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetSlotMaterialDependencies)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMaterialDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSlotMaterialDependencies(Z_Param_Out_OutMaterialDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomTimeZeroGlobalTransform)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GlobalOffsetTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bForceRecache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomTimeZeroGlobalTransform(Z_Param_BaseNodeContainer,Z_Param_Out_GlobalOffsetTransform,Z_Param_Out_AttributeValue,Z_Param_bForceRecache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execSetCustomTimeZeroLocalTransform)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bResetCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomTimeZeroLocalTransform(Z_Param_BaseNodeContainer,Z_Param_Out_AttributeValue,Z_Param_bResetCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomTimeZeroLocalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomTimeZeroLocalTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomBindPoseGlobalTransform)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GlobalOffsetTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bForceRecache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomBindPoseGlobalTransform(Z_Param_BaseNodeContainer,Z_Param_Out_GlobalOffsetTransform,Z_Param_Out_AttributeValue,Z_Param_bForceRecache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execSetCustomBindPoseLocalTransform)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bResetCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomBindPoseLocalTransform(Z_Param_BaseNodeContainer,Z_Param_Out_AttributeValue,Z_Param_bResetCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomBindPoseLocalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomBindPoseLocalTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execSetCustomGeometricTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomGeometricTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomGeometricTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomGeometricTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomGlobalTransform)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_GlobalOffsetTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bForceRecache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomGlobalTransform(Z_Param_BaseNodeContainer,Z_Param_Out_GlobalOffsetTransform,Z_Param_Out_AttributeValue,Z_Param_bForceRecache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execSetCustomLocalTransform)
	{
		P_GET_OBJECT(UInterchangeBaseNodeContainer,Z_Param_BaseNodeContainer);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_GET_UBOOL(Z_Param_bResetCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomLocalTransform(Z_Param_BaseNodeContainer,Z_Param_Out_AttributeValue,Z_Param_bResetCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomLocalTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomLocalTransform(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execSetCustomAssetInstanceUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomAssetInstanceUid(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetCustomAssetInstanceUid)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomAssetInstanceUid(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execRemoveSpecializedType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SpecializedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSpecializedType(Z_Param_SpecializedType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execAddSpecializedType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SpecializedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSpecializedType(Z_Param_SpecializedType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetSpecializedTypes)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutSpecializedTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSpecializedTypes(Z_Param_Out_OutSpecializedTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetSpecializedType)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutSpecializedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSpecializedType(Z_Param_Index,Z_Param_Out_OutSpecializedType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execGetSpecializedTypeCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSpecializedTypeCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeSceneNode::execIsSpecializedTypeContains)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SpecializedType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSpecializedTypeContains(Z_Param_SpecializedType);
		P_NATIVE_END;
	}
	void UInterchangeSceneNode::StaticRegisterNativesUInterchangeSceneNode()
	{
		UClass* Class = UInterchangeSceneNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSpecializedType", &UInterchangeSceneNode::execAddSpecializedType },
			{ "GetCustomAssetInstanceUid", &UInterchangeSceneNode::execGetCustomAssetInstanceUid },
			{ "GetCustomBindPoseGlobalTransform", &UInterchangeSceneNode::execGetCustomBindPoseGlobalTransform },
			{ "GetCustomBindPoseLocalTransform", &UInterchangeSceneNode::execGetCustomBindPoseLocalTransform },
			{ "GetCustomGeometricTransform", &UInterchangeSceneNode::execGetCustomGeometricTransform },
			{ "GetCustomGlobalTransform", &UInterchangeSceneNode::execGetCustomGlobalTransform },
			{ "GetCustomLocalTransform", &UInterchangeSceneNode::execGetCustomLocalTransform },
			{ "GetCustomTimeZeroGlobalTransform", &UInterchangeSceneNode::execGetCustomTimeZeroGlobalTransform },
			{ "GetCustomTimeZeroLocalTransform", &UInterchangeSceneNode::execGetCustomTimeZeroLocalTransform },
			{ "GetSlotMaterialDependencies", &UInterchangeSceneNode::execGetSlotMaterialDependencies },
			{ "GetSlotMaterialDependencyUid", &UInterchangeSceneNode::execGetSlotMaterialDependencyUid },
			{ "GetSpecializedType", &UInterchangeSceneNode::execGetSpecializedType },
			{ "GetSpecializedTypeCount", &UInterchangeSceneNode::execGetSpecializedTypeCount },
			{ "GetSpecializedTypes", &UInterchangeSceneNode::execGetSpecializedTypes },
			{ "IsSpecializedTypeContains", &UInterchangeSceneNode::execIsSpecializedTypeContains },
			{ "RemoveSlotMaterialDependencyUid", &UInterchangeSceneNode::execRemoveSlotMaterialDependencyUid },
			{ "RemoveSpecializedType", &UInterchangeSceneNode::execRemoveSpecializedType },
			{ "SetCustomAssetInstanceUid", &UInterchangeSceneNode::execSetCustomAssetInstanceUid },
			{ "SetCustomBindPoseLocalTransform", &UInterchangeSceneNode::execSetCustomBindPoseLocalTransform },
			{ "SetCustomGeometricTransform", &UInterchangeSceneNode::execSetCustomGeometricTransform },
			{ "SetCustomLocalTransform", &UInterchangeSceneNode::execSetCustomLocalTransform },
			{ "SetCustomTimeZeroLocalTransform", &UInterchangeSceneNode::execSetCustomTimeZeroLocalTransform },
			{ "SetSlotMaterialDependencyUid", &UInterchangeSceneNode::execSetSlotMaterialDependencyUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics
	{
		struct InterchangeSceneNode_eventAddSpecializedType_Parms
		{
			FString SpecializedType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecializedType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpecializedType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_SpecializedType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_SpecializedType = { "SpecializedType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventAddSpecializedType_Parms, SpecializedType), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_SpecializedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_SpecializedType_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventAddSpecializedType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventAddSpecializedType_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_SpecializedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "AddSpecializedType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::InterchangeSceneNode_eventAddSpecializedType_Parms), Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics
	{
		struct InterchangeSceneNode_eventGetCustomAssetInstanceUid_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomAssetInstanceUid_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomAssetInstanceUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomAssetInstanceUid_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/** Get which asset, if any, a scene node is instantiating. Return false if the Attribute was not set previously.*/" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get which asset, if any, a scene node is instantiating. Return false if the Attribute was not set previously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomAssetInstanceUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::InterchangeSceneNode_eventGetCustomAssetInstanceUid_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics
	{
		struct InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms
		{
			const UInterchangeBaseNodeContainer* BaseNodeContainer;
			FTransform GlobalOffsetTransform;
			FTransform AttributeValue;
			bool bForceRecache;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalOffsetTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bForceRecache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRecache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_GlobalOffsetTransform = { "GlobalOffsetTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms, GlobalOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_bForceRecache_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms*)Obj)->bForceRecache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_bForceRecache = { "bForceRecache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_bForceRecache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_GlobalOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_bForceRecache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Joint" },
		{ "Comment", "/** Get the bind pose scene node global transform. This value is computed with all parent bind pose local transform. */" },
		{ "CPP_Default_bForceRecache", "false" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the bind pose scene node global transform. This value is computed with all parent bind pose local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomBindPoseGlobalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::InterchangeSceneNode_eventGetCustomBindPoseGlobalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics
	{
		struct InterchangeSceneNode_eventGetCustomBindPoseLocalTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomBindPoseLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomBindPoseLocalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomBindPoseLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Joint" },
		{ "Comment", "/** Get the bind pose scene node local transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the bind pose scene node local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomBindPoseLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::InterchangeSceneNode_eventGetCustomBindPoseLocalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics
	{
		struct InterchangeSceneNode_eventGetCustomGeometricTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomGeometricTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomGeometricTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomGeometricTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/** Get the geometric offset. Any mesh attach to this scene node will be offset using this transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the geometric offset. Any mesh attach to this scene node will be offset using this transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomGeometricTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::InterchangeSceneNode_eventGetCustomGeometricTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics
	{
		struct InterchangeSceneNode_eventGetCustomGlobalTransform_Parms
		{
			const UInterchangeBaseNodeContainer* BaseNodeContainer;
			FTransform GlobalOffsetTransform;
			FTransform AttributeValue;
			bool bForceRecache;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalOffsetTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bForceRecache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRecache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomGlobalTransform_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_GlobalOffsetTransform = { "GlobalOffsetTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomGlobalTransform_Parms, GlobalOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomGlobalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_bForceRecache_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomGlobalTransform_Parms*)Obj)->bForceRecache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_bForceRecache = { "bForceRecache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_bForceRecache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomGlobalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_GlobalOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_bForceRecache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/** Get the default scene node global transform. This value is computed with all parent local transform. */" },
		{ "CPP_Default_bForceRecache", "false" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the default scene node global transform. This value is computed with all parent local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomGlobalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::InterchangeSceneNode_eventGetCustomGlobalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics
	{
		struct InterchangeSceneNode_eventGetCustomLocalTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomLocalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/**\n\x09 * Get the default scene node local transform.\n\x09 * Default transform is the local transform we have in the node(no bind pose, no time evaluation).\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the default scene node local transform.\nDefault transform is the local transform we have in the node(no bind pose, no time evaluation)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::InterchangeSceneNode_eventGetCustomLocalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics
	{
		struct InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms
		{
			const UInterchangeBaseNodeContainer* BaseNodeContainer;
			FTransform GlobalOffsetTransform;
			FTransform AttributeValue;
			bool bForceRecache;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOffsetTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalOffsetTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bForceRecache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceRecache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_GlobalOffsetTransform = { "GlobalOffsetTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms, GlobalOffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_GlobalOffsetTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_bForceRecache_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms*)Obj)->bForceRecache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_bForceRecache = { "bForceRecache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_bForceRecache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_GlobalOffsetTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_bForceRecache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Joint" },
		{ "Comment", "/** Get the time zero scene node global transform. This value is computed with all parent timezero local transform. */" },
		{ "CPP_Default_bForceRecache", "false" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the time zero scene node global transform. This value is computed with all parent timezero local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomTimeZeroGlobalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::InterchangeSceneNode_eventGetCustomTimeZeroGlobalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics
	{
		struct InterchangeSceneNode_eventGetCustomTimeZeroLocalTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetCustomTimeZeroLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetCustomTimeZeroLocalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetCustomTimeZeroLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Joint" },
		{ "Comment", "/** Get the time zero scene node local transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the time zero scene node local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetCustomTimeZeroLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::InterchangeSceneNode_eventGetCustomTimeZeroLocalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics
	{
		struct InterchangeSceneNode_eventGetSlotMaterialDependencies_Parms
		{
			TMap<FString,FString> OutMaterialDependencies;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependencies_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutMaterialDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp = { "OutMaterialDependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetSlotMaterialDependencies_Parms, OutMaterialDependencies), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Meshes" },
		{ "Comment", "/**\n\x09 * Allow to retrieve the correspondence table between slot names and assigned materials for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Allow to retrieve the correspondence table between slot names and assigned materials for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetSlotMaterialDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::InterchangeSceneNode_eventGetSlotMaterialDependencies_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics
	{
		struct InterchangeSceneNode_eventGetSlotMaterialDependencyUid_Parms
		{
			FString SlotName;
			FString OutMaterialDependency;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialDependency;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency = { "OutMaterialDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetSlotMaterialDependencyUid_Parms, OutMaterialDependency), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventGetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventGetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Meshes" },
		{ "Comment", "/**\n\x09 * Allow to retrieve one Material dependency for a given slot of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Allow to retrieve one Material dependency for a given slot of this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetSlotMaterialDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::InterchangeSceneNode_eventGetSlotMaterialDependencyUid_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics
	{
		struct InterchangeSceneNode_eventGetSpecializedType_Parms
		{
			int32 Index;
			FString OutSpecializedType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSpecializedType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetSpecializedType_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::NewProp_OutSpecializedType = { "OutSpecializedType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetSpecializedType_Parms, OutSpecializedType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::NewProp_OutSpecializedType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetSpecializedType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::InterchangeSceneNode_eventGetSpecializedType_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics
	{
		struct InterchangeSceneNode_eventGetSpecializedTypeCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetSpecializedTypeCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/** Get the Specialized type this scene node represent (Joint, LODGroup, ...).*/" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Get the Specialized type this scene node represent (Joint, LODGroup, ...)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetSpecializedTypeCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::InterchangeSceneNode_eventGetSpecializedTypeCount_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics
	{
		struct InterchangeSceneNode_eventGetSpecializedTypes_Parms
		{
			TArray<FString> OutSpecializedTypes;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSpecializedTypes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutSpecializedTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::NewProp_OutSpecializedTypes_Inner = { "OutSpecializedTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::NewProp_OutSpecializedTypes = { "OutSpecializedTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventGetSpecializedTypes_Parms, OutSpecializedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::NewProp_OutSpecializedTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::NewProp_OutSpecializedTypes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "GetSpecializedTypes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::InterchangeSceneNode_eventGetSpecializedTypes_Parms), Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics
	{
		struct InterchangeSceneNode_eventIsSpecializedTypeContains_Parms
		{
			FString SpecializedType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecializedType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpecializedType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_SpecializedType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_SpecializedType = { "SpecializedType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventIsSpecializedTypeContains_Parms, SpecializedType), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_SpecializedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_SpecializedType_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventIsSpecializedTypeContains_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventIsSpecializedTypeContains_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_SpecializedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "IsSpecializedTypeContains", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::InterchangeSceneNode_eventIsSpecializedTypeContains_Parms), Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics
	{
		struct InterchangeSceneNode_eventRemoveSlotMaterialDependencyUid_Parms
		{
			FString SlotName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventRemoveSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventRemoveSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventRemoveSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Meshes" },
		{ "Comment", "/**\n\x09 * Remove the Material dependency associated with the given slot name from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Remove the Material dependency associated with the given slot name from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "RemoveSlotMaterialDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeSceneNode_eventRemoveSlotMaterialDependencyUid_Parms), Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics
	{
		struct InterchangeSceneNode_eventRemoveSpecializedType_Parms
		{
			FString SpecializedType;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecializedType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SpecializedType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_SpecializedType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_SpecializedType = { "SpecializedType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventRemoveSpecializedType_Parms, SpecializedType), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_SpecializedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_SpecializedType_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventRemoveSpecializedType_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventRemoveSpecializedType_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_SpecializedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "RemoveSpecializedType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::InterchangeSceneNode_eventRemoveSpecializedType_Parms), Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics
	{
		struct InterchangeSceneNode_eventSetCustomAssetInstanceUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomAssetInstanceUid_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomAssetInstanceUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomAssetInstanceUid_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/** Add asset this scene node is instantiating */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Add asset this scene node is instantiating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "SetCustomAssetInstanceUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::InterchangeSceneNode_eventSetCustomAssetInstanceUid_Parms), Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics
	{
		struct InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms
		{
			const UInterchangeBaseNodeContainer* BaseNodeContainer;
			FTransform AttributeValue;
			bool bResetCache;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bResetCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetCache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_bResetCache_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms*)Obj)->bResetCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_bResetCache = { "bResetCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_bResetCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_bResetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Joint" },
		{ "Comment", "/** Set the bind pose scene node local transform. */" },
		{ "CPP_Default_bResetCache", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Set the bind pose scene node local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "SetCustomBindPoseLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::InterchangeSceneNode_eventSetCustomBindPoseLocalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics
	{
		struct InterchangeSceneNode_eventSetCustomGeometricTransform_Parms
		{
			FTransform AttributeValue;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomGeometricTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomGeometricTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomGeometricTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/** Set the geometric offset. Any mesh attach to this scene node will be offset using this transform. */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Set the geometric offset. Any mesh attach to this scene node will be offset using this transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "SetCustomGeometricTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::InterchangeSceneNode_eventSetCustomGeometricTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics
	{
		struct InterchangeSceneNode_eventSetCustomLocalTransform_Parms
		{
			const UInterchangeBaseNodeContainer* BaseNodeContainer;
			FTransform AttributeValue;
			bool bResetCache;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bResetCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetCache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomLocalTransform_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_bResetCache_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomLocalTransform_Parms*)Obj)->bResetCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_bResetCache = { "bResetCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_bResetCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomLocalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_bResetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Scene" },
		{ "Comment", "/**\n\x09 * Set the default scene node local transform.\n\x09 * Default transform is the local transform we have in the node(no bind pose, no time evaluation).\n\x09 */" },
		{ "CPP_Default_bResetCache", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Set the default scene node local transform.\nDefault transform is the local transform we have in the node(no bind pose, no time evaluation)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "SetCustomLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::InterchangeSceneNode_eventSetCustomLocalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics
	{
		struct InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms
		{
			const UInterchangeBaseNodeContainer* BaseNodeContainer;
			FTransform AttributeValue;
			bool bResetCache;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseNodeContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseNodeContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
		static void NewProp_bResetCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetCache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_BaseNodeContainer = { "BaseNodeContainer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms, BaseNodeContainer), Z_Construct_UClass_UInterchangeBaseNodeContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_BaseNodeContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms, AttributeValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_bResetCache_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms*)Obj)->bResetCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_bResetCache = { "bResetCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_bResetCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_BaseNodeContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_bResetCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Joint" },
		{ "Comment", "/** Set the time zero scene node local transform. */" },
		{ "CPP_Default_bResetCache", "true" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Set the time zero scene node local transform." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "SetCustomTimeZeroLocalTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::InterchangeSceneNode_eventSetCustomTimeZeroLocalTransform_Parms), Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics
	{
		struct InterchangeSceneNode_eventSetSlotMaterialDependencyUid_Parms
		{
			FString SlotName;
			FString MaterialDependencyUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDependencyUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialDependencyUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid = { "MaterialDependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeSceneNode_eventSetSlotMaterialDependencyUid_Parms, MaterialDependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeSceneNode_eventSetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeSceneNode_eventSetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Meshes" },
		{ "Comment", "/**\n\x09 * Add one Material dependency to a specific slot name of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "Add one Material dependency to a specific slot name of this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeSceneNode, nullptr, "SetSlotMaterialDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::InterchangeSceneNode_eventSetSlotMaterialDependencyUid_Parms), Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSceneNode);
	UClass* Z_Construct_UClass_UInterchangeSceneNode_NoRegister()
	{
		return UInterchangeSceneNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSceneNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSceneNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeSceneNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeSceneNode_AddSpecializedType, "AddSpecializedType" }, // 4044537330
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomAssetInstanceUid, "GetCustomAssetInstanceUid" }, // 1795456757
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseGlobalTransform, "GetCustomBindPoseGlobalTransform" }, // 1402463746
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomBindPoseLocalTransform, "GetCustomBindPoseLocalTransform" }, // 2117706583
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGeometricTransform, "GetCustomGeometricTransform" }, // 1230235160
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomGlobalTransform, "GetCustomGlobalTransform" }, // 1373712152
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomLocalTransform, "GetCustomLocalTransform" }, // 1023164337
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroGlobalTransform, "GetCustomTimeZeroGlobalTransform" }, // 54710583
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetCustomTimeZeroLocalTransform, "GetCustomTimeZeroLocalTransform" }, // 3308482803
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencies, "GetSlotMaterialDependencies" }, // 2322414352
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetSlotMaterialDependencyUid, "GetSlotMaterialDependencyUid" }, // 2812697973
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedType, "GetSpecializedType" }, // 1051923274
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypeCount, "GetSpecializedTypeCount" }, // 892844148
		{ &Z_Construct_UFunction_UInterchangeSceneNode_GetSpecializedTypes, "GetSpecializedTypes" }, // 1930998212
		{ &Z_Construct_UFunction_UInterchangeSceneNode_IsSpecializedTypeContains, "IsSpecializedTypeContains" }, // 1517644989
		{ &Z_Construct_UFunction_UInterchangeSceneNode_RemoveSlotMaterialDependencyUid, "RemoveSlotMaterialDependencyUid" }, // 1338056649
		{ &Z_Construct_UFunction_UInterchangeSceneNode_RemoveSpecializedType, "RemoveSpecializedType" }, // 995062531
		{ &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomAssetInstanceUid, "SetCustomAssetInstanceUid" }, // 2047899885
		{ &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomBindPoseLocalTransform, "SetCustomBindPoseLocalTransform" }, // 4032979568
		{ &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomGeometricTransform, "SetCustomGeometricTransform" }, // 1881735
		{ &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomLocalTransform, "SetCustomLocalTransform" }, // 791948932
		{ &Z_Construct_UFunction_UInterchangeSceneNode_SetCustomTimeZeroLocalTransform, "SetCustomTimeZeroLocalTransform" }, // 4000142569
		{ &Z_Construct_UFunction_UInterchangeSceneNode_SetSlotMaterialDependencyUid, "SetSlotMaterialDependencyUid" }, // 2315406541
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSceneNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The scene node represent a transform node in the scene\n * Scene node can have animations: Use UInterchangeAnimationAPI to get\\set animation datas\n * Scene node can have user defined attribute. Use UInterchangeUserDefinedAttributesAPI to get\\set user define attribute data\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeSceneNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeSceneNode.h" },
		{ "ToolTip", "The scene node represent a transform node in the scene\nScene node can have animations: Use UInterchangeAnimationAPI to get\\set animation datas\nScene node can have user defined attribute. Use UInterchangeUserDefinedAttributesAPI to get\\set user define attribute data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSceneNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSceneNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSceneNode_Statics::ClassParams = {
		&UInterchangeSceneNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSceneNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSceneNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSceneNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSceneNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSceneNode.OuterSingleton, Z_Construct_UClass_UInterchangeSceneNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSceneNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeSceneNode>()
	{
		return UInterchangeSceneNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSceneNode);
	UInterchangeSceneNode::~UInterchangeSceneNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSceneNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSceneNode, UInterchangeSceneNode::StaticClass, TEXT("UInterchangeSceneNode"), &Z_Registration_Info_UClass_UInterchangeSceneNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSceneNode), 70575065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_2209862997(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeSceneNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
