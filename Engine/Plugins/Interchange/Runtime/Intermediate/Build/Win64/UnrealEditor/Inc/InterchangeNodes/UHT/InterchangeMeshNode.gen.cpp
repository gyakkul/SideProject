// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeMeshNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMeshNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSlotMaterialDependencyUid(Z_Param_SlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialDependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_MaterialDependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSlotMaterialDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMaterialDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSlotMaterialDependencyUid(Z_Param_SlotName,Z_Param_Out_OutMaterialDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSlotMaterialDependencies)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMaterialDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSlotMaterialDependencies(Z_Param_Out_OutMaterialDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveSceneInstanceUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSceneInstanceUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetSceneInstanceUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSceneInstanceUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSceneInstanceUid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSceneInstanceUid(Z_Param_Index,Z_Param_Out_OutDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSceneInstanceUids)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSceneInstanceUids(Z_Param_Out_OutDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSceneInstanceUidsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSceneInstanceUidsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveMorphTargetDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMorphTargetDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetMorphTargetDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMorphTargetDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetDependency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMorphTargetDependency(Z_Param_Index,Z_Param_Out_OutDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetDependencies)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMorphTargetDependencies(Z_Param_Out_OutDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetDependeciesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMorphTargetDependeciesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execRemoveSkeletonDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSkeletonDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetSkeletonDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkeletonDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSkeletonDependency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSkeletonDependency(Z_Param_Index,Z_Param_Out_OutDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSkeletonDependencies)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSkeletonDependencies(Z_Param_Out_OutDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetSkeletonDependeciesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkeletonDependeciesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomUVCount)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomUVCount(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomUVCount)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomUVCount(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexColor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexColor(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexColor)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexColor(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasSmoothGroup)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomHasSmoothGroup(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasSmoothGroup)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomHasSmoothGroup(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexTangent)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexTangent(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexTangent)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexTangent(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexBinormal)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexBinormal(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexBinormal)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexBinormal(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomHasVertexNormal)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomHasVertexNormal(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomHasVertexNormal)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomHasVertexNormal(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomBoundingBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomBoundingBox(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomBoundingBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomBoundingBox(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomPolygonCount)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomPolygonCount(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomPolygonCount)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomPolygonCount(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetCustomVertexCount)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomVertexCount(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetCustomVertexCount)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomVertexCount(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetAnimationCurvePayLoadKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationCurvePayLoadKey(Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetPayLoadKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPayLoadKey(Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetMorphTargetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MorphTargetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMorphTargetName(Z_Param_MorphTargetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execGetMorphTargetName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMorphTargetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMorphTargetName(Z_Param_Out_OutMorphTargetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetMorphTarget)
	{
		P_GET_UBOOL(Z_Param_bIsMorphTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMorphTarget(Z_Param_bIsMorphTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execIsMorphTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMorphTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execSetSkinnedMesh)
	{
		P_GET_UBOOL(Z_Param_bIsSkinnedMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkinnedMesh(Z_Param_bIsSkinnedMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeMeshNode::execIsSkinnedMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSkinnedMesh();
		P_NATIVE_END;
	}
	void UInterchangeMeshNode::StaticRegisterNativesUInterchangeMeshNode()
	{
		UClass* Class = UInterchangeMeshNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustomBoundingBox", &UInterchangeMeshNode::execGetCustomBoundingBox },
			{ "GetCustomHasSmoothGroup", &UInterchangeMeshNode::execGetCustomHasSmoothGroup },
			{ "GetCustomHasVertexBinormal", &UInterchangeMeshNode::execGetCustomHasVertexBinormal },
			{ "GetCustomHasVertexColor", &UInterchangeMeshNode::execGetCustomHasVertexColor },
			{ "GetCustomHasVertexNormal", &UInterchangeMeshNode::execGetCustomHasVertexNormal },
			{ "GetCustomHasVertexTangent", &UInterchangeMeshNode::execGetCustomHasVertexTangent },
			{ "GetCustomPolygonCount", &UInterchangeMeshNode::execGetCustomPolygonCount },
			{ "GetCustomUVCount", &UInterchangeMeshNode::execGetCustomUVCount },
			{ "GetCustomVertexCount", &UInterchangeMeshNode::execGetCustomVertexCount },
			{ "GetMorphTargetDependeciesCount", &UInterchangeMeshNode::execGetMorphTargetDependeciesCount },
			{ "GetMorphTargetDependencies", &UInterchangeMeshNode::execGetMorphTargetDependencies },
			{ "GetMorphTargetDependency", &UInterchangeMeshNode::execGetMorphTargetDependency },
			{ "GetMorphTargetName", &UInterchangeMeshNode::execGetMorphTargetName },
			{ "GetSceneInstanceUid", &UInterchangeMeshNode::execGetSceneInstanceUid },
			{ "GetSceneInstanceUids", &UInterchangeMeshNode::execGetSceneInstanceUids },
			{ "GetSceneInstanceUidsCount", &UInterchangeMeshNode::execGetSceneInstanceUidsCount },
			{ "GetSkeletonDependeciesCount", &UInterchangeMeshNode::execGetSkeletonDependeciesCount },
			{ "GetSkeletonDependencies", &UInterchangeMeshNode::execGetSkeletonDependencies },
			{ "GetSkeletonDependency", &UInterchangeMeshNode::execGetSkeletonDependency },
			{ "GetSlotMaterialDependencies", &UInterchangeMeshNode::execGetSlotMaterialDependencies },
			{ "GetSlotMaterialDependencyUid", &UInterchangeMeshNode::execGetSlotMaterialDependencyUid },
			{ "IsMorphTarget", &UInterchangeMeshNode::execIsMorphTarget },
			{ "IsSkinnedMesh", &UInterchangeMeshNode::execIsSkinnedMesh },
			{ "RemoveMorphTargetDependencyUid", &UInterchangeMeshNode::execRemoveMorphTargetDependencyUid },
			{ "RemoveSceneInstanceUid", &UInterchangeMeshNode::execRemoveSceneInstanceUid },
			{ "RemoveSkeletonDependencyUid", &UInterchangeMeshNode::execRemoveSkeletonDependencyUid },
			{ "RemoveSlotMaterialDependencyUid", &UInterchangeMeshNode::execRemoveSlotMaterialDependencyUid },
			{ "SetAnimationCurvePayLoadKey", &UInterchangeMeshNode::execSetAnimationCurvePayLoadKey },
			{ "SetCustomBoundingBox", &UInterchangeMeshNode::execSetCustomBoundingBox },
			{ "SetCustomHasSmoothGroup", &UInterchangeMeshNode::execSetCustomHasSmoothGroup },
			{ "SetCustomHasVertexBinormal", &UInterchangeMeshNode::execSetCustomHasVertexBinormal },
			{ "SetCustomHasVertexColor", &UInterchangeMeshNode::execSetCustomHasVertexColor },
			{ "SetCustomHasVertexNormal", &UInterchangeMeshNode::execSetCustomHasVertexNormal },
			{ "SetCustomHasVertexTangent", &UInterchangeMeshNode::execSetCustomHasVertexTangent },
			{ "SetCustomPolygonCount", &UInterchangeMeshNode::execSetCustomPolygonCount },
			{ "SetCustomUVCount", &UInterchangeMeshNode::execSetCustomUVCount },
			{ "SetCustomVertexCount", &UInterchangeMeshNode::execSetCustomVertexCount },
			{ "SetMorphTarget", &UInterchangeMeshNode::execSetMorphTarget },
			{ "SetMorphTargetDependencyUid", &UInterchangeMeshNode::execSetMorphTargetDependencyUid },
			{ "SetMorphTargetName", &UInterchangeMeshNode::execSetMorphTargetName },
			{ "SetPayLoadKey", &UInterchangeMeshNode::execSetPayLoadKey },
			{ "SetSceneInstanceUid", &UInterchangeMeshNode::execSetSceneInstanceUid },
			{ "SetSkeletonDependencyUid", &UInterchangeMeshNode::execSetSkeletonDependencyUid },
			{ "SetSkinnedMesh", &UInterchangeMeshNode::execSetSkinnedMesh },
			{ "SetSlotMaterialDependencyUid", &UInterchangeMeshNode::execSetSlotMaterialDependencyUid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics
	{
		struct InterchangeMeshNode_eventGetCustomBoundingBox_Parms
		{
			FBox AttributeValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomBoundingBox_Parms, AttributeValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomBoundingBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomBoundingBox_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query this mesh bounding box. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query this mesh bounding box. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::InterchangeMeshNode_eventGetCustomBoundingBox_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics
	{
		struct InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms
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
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query if this mesh has smooth group. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query if this mesh has smooth group. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasSmoothGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::InterchangeMeshNode_eventGetCustomHasSmoothGroup_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics
	{
		struct InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms
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
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query if this mesh has vertex bi-normal. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query if this mesh has vertex bi-normal. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexBinormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::InterchangeMeshNode_eventGetCustomHasVertexBinormal_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics
	{
		struct InterchangeMeshNode_eventGetCustomHasVertexColor_Parms
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
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexColor_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query if this mesh has vertex color. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query if this mesh has vertex color. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::InterchangeMeshNode_eventGetCustomHasVertexColor_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics
	{
		struct InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms
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
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query if this mesh has vertex normal. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query if this mesh has vertex normal. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::InterchangeMeshNode_eventGetCustomHasVertexNormal_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics
	{
		struct InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms
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
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query if this mesh has vertex tangent. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query if this mesh has vertex tangent. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomHasVertexTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::InterchangeMeshNode_eventGetCustomHasVertexTangent_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics
	{
		struct InterchangeMeshNode_eventGetCustomPolygonCount_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomPolygonCount_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomPolygonCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomPolygonCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query this mesh polygon count. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query this mesh polygon count. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomPolygonCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::InterchangeMeshNode_eventGetCustomPolygonCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics
	{
		struct InterchangeMeshNode_eventGetCustomUVCount_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomUVCount_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomUVCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomUVCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query this mesh UV count. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query this mesh UV count. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomUVCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::InterchangeMeshNode_eventGetCustomUVCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics
	{
		struct InterchangeMeshNode_eventGetCustomVertexCount_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetCustomVertexCount_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetCustomVertexCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetCustomVertexCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Query this mesh vertices count. Return false if the attribute was not set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Query this mesh vertices count. Return false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetCustomVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::InterchangeMeshNode_eventGetCustomVertexCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics
	{
		struct InterchangeMeshNode_eventGetMorphTargetDependeciesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependeciesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of morph target dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of morph target dependencies for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetDependeciesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::InterchangeMeshNode_eventGetMorphTargetDependeciesCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics
	{
		struct InterchangeMeshNode_eventGetMorphTargetDependencies_Parms
		{
			TArray<FString> OutDependencies;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::NewProp_OutDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the morph target dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve the morph target dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::InterchangeMeshNode_eventGetMorphTargetDependencies_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics
	{
		struct InterchangeMeshNode_eventGetMorphTargetDependency_Parms
		{
			int32 Index;
			FString OutDependency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependency_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetDependency_Parms, OutDependency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::NewProp_OutDependency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one morph target dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve one morph target dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::InterchangeMeshNode_eventGetMorphTargetDependency_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics
	{
		struct InterchangeMeshNode_eventGetMorphTargetName_Parms
		{
			FString OutMorphTargetName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_OutMorphTargetName = { "OutMorphTargetName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetMorphTargetName_Parms, OutMorphTargetName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetMorphTargetName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetMorphTargetName_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_OutMorphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Get the morph target name.\n\x09 * Return true if we successfully query the MorphTargetName attribute\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Get the morph target name.\nReturn true if we successfully query the MorphTargetName attribute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetMorphTargetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::InterchangeMeshNode_eventGetMorphTargetName_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics
	{
		struct InterchangeMeshNode_eventGetSceneInstanceUid_Parms
		{
			int32 Index;
			FString OutDependency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUid_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUid_Parms, OutDependency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::NewProp_OutDependency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve an asset instance this scene node is refering.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve an asset instance this scene node is refering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSceneInstanceUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::InterchangeMeshNode_eventGetSceneInstanceUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics
	{
		struct InterchangeMeshNode_eventGetSceneInstanceUids_Parms
		{
			TArray<FString> OutDependencies;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUids_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::NewProp_OutDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the asset instances this scene node is refering.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve the asset instances this scene node is refering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSceneInstanceUids", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::InterchangeMeshNode_eventGetSceneInstanceUids_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics
	{
		struct InterchangeMeshNode_eventGetSceneInstanceUidsCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSceneInstanceUidsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of scene node instancing this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of scene node instancing this mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSceneInstanceUidsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::InterchangeMeshNode_eventGetSceneInstanceUidsCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics
	{
		struct InterchangeMeshNode_eventGetSkeletonDependeciesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependeciesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the number of skeleton dependencies for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve the number of skeleton dependencies for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSkeletonDependeciesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::InterchangeMeshNode_eventGetSkeletonDependeciesCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics
	{
		struct InterchangeMeshNode_eventGetSkeletonDependencies_Parms
		{
			TArray<FString> OutDependencies;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependencies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutDependencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::NewProp_OutDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve the skeleton dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve the skeleton dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSkeletonDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::InterchangeMeshNode_eventGetSkeletonDependencies_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics
	{
		struct InterchangeMeshNode_eventGetSkeletonDependency_Parms
		{
			int32 Index;
			FString OutDependency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutDependency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependency_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSkeletonDependency_Parms, OutDependency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::NewProp_OutDependency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * This function allow to retrieve one skeleton dependency for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "This function allow to retrieve one skeleton dependency for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSkeletonDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::InterchangeMeshNode_eventGetSkeletonDependency_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics
	{
		struct InterchangeMeshNode_eventGetSlotMaterialDependencies_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp = { "OutMaterialDependencies_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies = { "OutMaterialDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSlotMaterialDependencies_Parms, OutMaterialDependencies), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::NewProp_OutMaterialDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Allow to retrieve the correspondence table between slot names and assigned materials for this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Allow to retrieve the correspondence table between slot names and assigned materials for this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSlotMaterialDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::InterchangeMeshNode_eventGetSlotMaterialDependencies_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics
	{
		struct InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency = { "OutMaterialDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms, OutMaterialDependency), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_OutMaterialDependency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Allow to retrieve one Material dependency for a given slot of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Allow to retrieve one Material dependency for a given slot of this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "GetSlotMaterialDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventGetSlotMaterialDependencyUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics
	{
		struct InterchangeMeshNode_eventIsMorphTarget_Parms
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
	void Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventIsMorphTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventIsMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Return true if this node represent a morph target\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Return true if this node represent a morph target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "IsMorphTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::InterchangeMeshNode_eventIsMorphTarget_Parms), Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics
	{
		struct InterchangeMeshNode_eventIsSkinnedMesh_Parms
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
	void Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventIsSkinnedMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventIsSkinnedMesh_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Return true if this node represent a skinned mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Return true if this node represent a skinned mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "IsSkinnedMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::InterchangeMeshNode_eventIsSkinnedMesh_Parms), Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics
	{
		struct InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Remove one morph target dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove one morph target dependency from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveMorphTargetDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::InterchangeMeshNode_eventRemoveMorphTargetDependencyUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics
	{
		struct InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Remove one asset instance this scene node is refering.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove one asset instance this scene node is refering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveSceneInstanceUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::InterchangeMeshNode_eventRemoveSceneInstanceUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics
	{
		struct InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Remove one skeleton dependency from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove one skeleton dependency from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveSkeletonDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::InterchangeMeshNode_eventRemoveSkeletonDependencyUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics
	{
		struct InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Remove the Material dependency associated with the given slot name from this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Remove the Material dependency associated with the given slot name from this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "RemoveSlotMaterialDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventRemoveSlotMaterialDependencyUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics
	{
		struct InterchangeMeshNode_eventSetAnimationCurvePayLoadKey_Parms
		{
			FString PayloadKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetAnimationCurvePayLoadKey_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::NewProp_PayloadKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::NewProp_PayloadKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetAnimationCurvePayLoadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::InterchangeMeshNode_eventSetAnimationCurvePayLoadKey_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics
	{
		struct InterchangeMeshNode_eventSetCustomBoundingBox_Parms
		{
			FBox AttributeValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomBoundingBox_Parms, AttributeValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomBoundingBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomBoundingBox_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh bounding box. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh bounding box. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::InterchangeMeshNode_eventSetCustomBoundingBox_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics
	{
		struct InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh has smooth group attribute. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh has smooth group attribute. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasSmoothGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::InterchangeMeshNode_eventSetCustomHasSmoothGroup_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics
	{
		struct InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh has vertex bi-normal attribute. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh has vertex bi-normal attribute. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexBinormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::InterchangeMeshNode_eventSetCustomHasVertexBinormal_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics
	{
		struct InterchangeMeshNode_eventSetCustomHasVertexColor_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexColor_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexColor_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh has vertex color attribute. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh has vertex color attribute. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::InterchangeMeshNode_eventSetCustomHasVertexColor_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics
	{
		struct InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh has vertex normal attribute. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh has vertex normal attribute. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::InterchangeMeshNode_eventSetCustomHasVertexNormal_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics
	{
		struct InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh has vertex tangent attribute. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh has vertex tangent attribute. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomHasVertexTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::InterchangeMeshNode_eventSetCustomHasVertexTangent_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics
	{
		struct InterchangeMeshNode_eventSetCustomPolygonCount_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomPolygonCount_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomPolygonCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomPolygonCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh polygon count. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh polygon count. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomPolygonCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::InterchangeMeshNode_eventSetCustomPolygonCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics
	{
		struct InterchangeMeshNode_eventSetCustomUVCount_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomUVCount_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomUVCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomUVCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh UV count attribute. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh UV count attribute. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomUVCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::InterchangeMeshNode_eventSetCustomUVCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics
	{
		struct InterchangeMeshNode_eventSetCustomVertexCount_Parms
		{
			int32 AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetCustomVertexCount_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetCustomVertexCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetCustomVertexCount_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/** Set this mesh vertices count. Return false if the attribute cannot be set.*/" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set this mesh vertices count. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetCustomVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::InterchangeMeshNode_eventSetCustomVertexCount_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics
	{
		struct InterchangeMeshNode_eventSetMorphTarget_Parms
		{
			bool bIsMorphTarget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMorphTarget_MetaData[];
#endif
		static void NewProp_bIsMorphTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMorphTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetMorphTarget_Parms*)Obj)->bIsMorphTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget = { "bIsMorphTarget", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetMorphTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTarget_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_bIsMorphTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Set the IsMorphTarget attribute to determine if this node represent a morph target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the IsMorphTarget attribute to determine if this node represent a morph target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetMorphTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::InterchangeMeshNode_eventSetMorphTarget_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics
	{
		struct InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Add one morph target dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add one morph target dependency to this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetMorphTargetDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::InterchangeMeshNode_eventSetMorphTargetDependencyUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics
	{
		struct InterchangeMeshNode_eventSetMorphTargetName_Parms
		{
			FString MorphTargetName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_MorphTargetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_MorphTargetName = { "MorphTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetMorphTargetName_Parms, MorphTargetName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_MorphTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_MorphTargetName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetMorphTargetName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetMorphTargetName_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_MorphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Set the MorphTargetName attribute to determine if this node represent a morph target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the MorphTargetName attribute to determine if this node represent a morph target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetMorphTargetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::InterchangeMeshNode_eventSetMorphTargetName_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics
	{
		struct InterchangeMeshNode_eventSetPayLoadKey_Parms
		{
			FString PayloadKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetPayLoadKey_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayloadKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::NewProp_PayloadKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetPayLoadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::InterchangeMeshNode_eventSetPayLoadKey_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics
	{
		struct InterchangeMeshNode_eventSetSceneInstanceUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetSceneInstanceUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetSceneInstanceUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSceneInstanceUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Add one asset instance this scene node is refering.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add one asset instance this scene node is refering." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSceneInstanceUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::InterchangeMeshNode_eventSetSceneInstanceUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics
	{
		struct InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Add one skeleton dependency to this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add one skeleton dependency to this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSkeletonDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::InterchangeMeshNode_eventSetSkeletonDependencyUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics
	{
		struct InterchangeMeshNode_eventSetSkinnedMesh_Parms
		{
			bool bIsSkinnedMesh;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSkinnedMesh_MetaData[];
#endif
		static void NewProp_bIsSkinnedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSkinnedMesh;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetSkinnedMesh_Parms*)Obj)->bIsSkinnedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh = { "bIsSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSkinnedMesh_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetSkinnedMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSkinnedMesh_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_bIsSkinnedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Mesh" },
		{ "Comment", "/**\n\x09 * Set the IsSkinnedMesh attribute to determine if this node represent a skinned mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Set the IsSkinnedMesh attribute to determine if this node represent a skinned mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSkinnedMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::InterchangeMeshNode_eventSetSkinnedMesh_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics
	{
		struct InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid = { "MaterialDependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms, MaterialDependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_MaterialDependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | StaticMesh" },
		{ "Comment", "/**\n\x09 * Add one Material dependency to a specific slot name of this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "Add one Material dependency to a specific slot name of this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeMeshNode, nullptr, "SetSlotMaterialDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::InterchangeMeshNode_eventSetSlotMaterialDependencyUid_Parms), Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMeshNode);
	UClass* Z_Construct_UClass_UInterchangeMeshNode_NoRegister()
	{
		return UInterchangeMeshNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeMeshNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeMeshNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeMeshNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomBoundingBox, "GetCustomBoundingBox" }, // 3571736260
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasSmoothGroup, "GetCustomHasSmoothGroup" }, // 1833648056
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexBinormal, "GetCustomHasVertexBinormal" }, // 505650314
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexColor, "GetCustomHasVertexColor" }, // 1449095895
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexNormal, "GetCustomHasVertexNormal" }, // 484210071
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomHasVertexTangent, "GetCustomHasVertexTangent" }, // 1877706118
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomPolygonCount, "GetCustomPolygonCount" }, // 919766033
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomUVCount, "GetCustomUVCount" }, // 2307624905
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetCustomVertexCount, "GetCustomVertexCount" }, // 2536626229
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependeciesCount, "GetMorphTargetDependeciesCount" }, // 1466705162
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependencies, "GetMorphTargetDependencies" }, // 2436926266
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetDependency, "GetMorphTargetDependency" }, // 2851533801
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetMorphTargetName, "GetMorphTargetName" }, // 3770072319
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUid, "GetSceneInstanceUid" }, // 3570797989
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUids, "GetSceneInstanceUids" }, // 223737853
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSceneInstanceUidsCount, "GetSceneInstanceUidsCount" }, // 3789998157
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependeciesCount, "GetSkeletonDependeciesCount" }, // 3470952608
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependencies, "GetSkeletonDependencies" }, // 2950208105
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSkeletonDependency, "GetSkeletonDependency" }, // 2779086082
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencies, "GetSlotMaterialDependencies" }, // 874849513
		{ &Z_Construct_UFunction_UInterchangeMeshNode_GetSlotMaterialDependencyUid, "GetSlotMaterialDependencyUid" }, // 2614464581
		{ &Z_Construct_UFunction_UInterchangeMeshNode_IsMorphTarget, "IsMorphTarget" }, // 1743105481
		{ &Z_Construct_UFunction_UInterchangeMeshNode_IsSkinnedMesh, "IsSkinnedMesh" }, // 4127922642
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveMorphTargetDependencyUid, "RemoveMorphTargetDependencyUid" }, // 140785837
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSceneInstanceUid, "RemoveSceneInstanceUid" }, // 3448072883
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSkeletonDependencyUid, "RemoveSkeletonDependencyUid" }, // 1324954206
		{ &Z_Construct_UFunction_UInterchangeMeshNode_RemoveSlotMaterialDependencyUid, "RemoveSlotMaterialDependencyUid" }, // 1863929883
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetAnimationCurvePayLoadKey, "SetAnimationCurvePayLoadKey" }, // 1855345704
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomBoundingBox, "SetCustomBoundingBox" }, // 3066421541
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasSmoothGroup, "SetCustomHasSmoothGroup" }, // 3716677449
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexBinormal, "SetCustomHasVertexBinormal" }, // 4064509002
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexColor, "SetCustomHasVertexColor" }, // 212741227
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexNormal, "SetCustomHasVertexNormal" }, // 2131805859
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomHasVertexTangent, "SetCustomHasVertexTangent" }, // 674781803
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomPolygonCount, "SetCustomPolygonCount" }, // 771837471
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomUVCount, "SetCustomUVCount" }, // 1342718312
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetCustomVertexCount, "SetCustomVertexCount" }, // 1998755643
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTarget, "SetMorphTarget" }, // 985604690
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetDependencyUid, "SetMorphTargetDependencyUid" }, // 202980075
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetMorphTargetName, "SetMorphTargetName" }, // 2090764350
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetPayLoadKey, "SetPayLoadKey" }, // 444195105
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSceneInstanceUid, "SetSceneInstanceUid" }, // 1464956857
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSkeletonDependencyUid, "SetSkeletonDependencyUid" }, // 2630409072
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSkinnedMesh, "SetSkinnedMesh" }, // 892743024
		{ &Z_Construct_UFunction_UInterchangeMeshNode_SetSlotMaterialDependencyUid, "SetSlotMaterialDependencyUid" }, // 3911021740
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeMeshNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeMeshNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeMeshNode.h" },
		{ "ToolTip", "ns UE" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeMeshNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMeshNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMeshNode_Statics::ClassParams = {
		&UInterchangeMeshNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeMeshNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMeshNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeMeshNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeMeshNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMeshNode.OuterSingleton, Z_Construct_UClass_UInterchangeMeshNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeMeshNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeMeshNode>()
	{
		return UInterchangeMeshNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMeshNode);
	UInterchangeMeshNode::~UInterchangeMeshNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMeshNode, UInterchangeMeshNode::StaticClass, TEXT("UInterchangeMeshNode"), &Z_Registration_Info_UClass_UInterchangeMeshNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMeshNode), 3380701944U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_1977755748(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
