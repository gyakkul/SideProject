// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeAnimSequenceFactoryNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimSequenceFactoryNode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode();
	INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeFactoryNodes();
// End Cross Module References
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimationPayloadKeyForMorphTargetNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MorphTargetNodeUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAnimationPayloadKeyForMorphTargetNodeUid(Z_Param_MorphTargetNodeUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeyForMorphTargetNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MorphTargetNodeUid);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAnimationPayloadKeyForMorphTargetNodeUid(Z_Param_MorphTargetNodeUid,Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimationPayloadKeyFromMorphTargetNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MorphTargetNodeUid);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAnimationPayloadKeyFromMorphTargetNodeUid(Z_Param_MorphTargetNodeUid,Z_Param_Out_OutPayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetMorphTargetNodeAnimationPayloadKeys)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutMorphTargetNodeAnimationPayloads);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMorphTargetNodeAnimationPayloadKeys(Z_Param_Out_OutMorphTargetNodeAnimationPayloads);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimationPayloadKeyForSceneNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SceneNodeUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAnimationPayloadKeyForSceneNodeUid(Z_Param_SceneNodeUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeyForSceneNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SceneNodeUid);
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAnimationPayloadKeyForSceneNodeUid(Z_Param_SceneNodeUid,Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimationPayloadKeyFromSceneNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SceneNodeUid);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAnimationPayloadKeyFromSceneNodeUid(Z_Param_SceneNodeUid,Z_Param_Out_OutPayloadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetSceneNodeAnimationPayloadKeys)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutSceneNodeAnimationPayloads);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSceneNodeAnimationPayloadKeys(Z_Param_Out_OutSceneNodeAnimationPayloads);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonSoftObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonSoftObjectPath)
	{
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonSoftObjectPath(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingNonCurveCustomAttributes)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDeleteExistingNonCurveCustomAttributes(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingNonCurveCustomAttributes)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDeleteExistingNonCurveCustomAttributes(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingCustomAttributeCurves)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDeleteExistingCustomAttributeCurves(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingCustomAttributeCurves)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDeleteExistingCustomAttributeCurves(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeStepCurveName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeStepCurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAnimatedAttributeStepCurveName(Z_Param_AttributeStepCurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeStepCurveName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeStepCurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAnimatedAttributeStepCurveName(Z_Param_AttributeStepCurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAttributeStepCurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedAttributeStepCurveName(Z_Param_Index,Z_Param_Out_OutAttributeStepCurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutAttributeStepCurveNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedAttributeStepCurveNames(Z_Param_Out_OutAttributeStepCurveNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNamesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnimatedAttributeStepCurveNamesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedMaterialCurveSuffixe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialCurveSuffixe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAnimatedMaterialCurveSuffixe(Z_Param_MaterialCurveSuffixe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimatedMaterialCurveSuffixe)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialCurveSuffixe);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAnimatedMaterialCurveSuffixe(Z_Param_MaterialCurveSuffixe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixe)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutMaterialCurveSuffixe);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedMaterialCurveSuffixe(Z_Param_Index,Z_Param_Out_OutMaterialCurveSuffixe);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixes)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutMaterialCurveSuffixes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedMaterialCurveSuffixes(Z_Param_Out_OutMaterialCurveSuffixes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnimatedMaterialCurveSuffixesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomMaterialDriveParameterOnCustomAttribute)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMaterialDriveParameterOnCustomAttribute(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomMaterialDriveParameterOnCustomAttribute)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomMaterialDriveParameterOnCustomAttribute(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeCurveName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeCurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAnimatedAttributeCurveName(Z_Param_AttributeCurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeCurveName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeCurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAnimatedAttributeCurveName(Z_Param_AttributeCurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAttributeCurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedAttributeCurveName(Z_Param_Index,Z_Param_Out_OutAttributeCurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutAttributeCurveNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedAttributeCurveNames(Z_Param_Out_OutAttributeCurveNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNamesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnimatedAttributeCurveNamesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedMorphTargetDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveAnimatedMorphTargetDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetAnimatedMorphTargetDependencyUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DependencyUid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAnimatedMorphTargetDependencyUid(Z_Param_DependencyUid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMorphTargetDependency)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutDependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedMorphTargetDependency(Z_Param_Index,Z_Param_Out_OutDependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMorphTargetDependencies)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutDependencies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAnimatedMorphTargetDependencies(Z_Param_Out_OutDependencies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetAnimatedMorphTargetDependeciesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAnimatedMorphTargetDependeciesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingMorphTargetCurves)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDeleteExistingMorphTargetCurves(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingMorphTargetCurves)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDeleteExistingMorphTargetCurves(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomRemoveCurveRedundantKeys)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomRemoveCurveRedundantKeys(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomRemoveCurveRedundantKeys)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomRemoveCurveRedundantKeys(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomDoNotImportCurveWithZero)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomDoNotImportCurveWithZero(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomDoNotImportCurveWithZero)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomDoNotImportCurveWithZero(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportAttributeCurves)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomImportAttributeCurves(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportAttributeCurves)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomImportAttributeCurves(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStop)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracksRangeStop(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStop)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracksRangeStop(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStart)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracksRangeStart(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStart)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracksRangeStart(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksSampleRate)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracksSampleRate(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksSampleRate)
	{
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracksSampleRate(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracks)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomImportBoneTracks(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracks)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomImportBoneTracks(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonFactoryNodeUid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSkeletonFactoryNodeUid(Z_Param_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonFactoryNodeUid)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSkeletonFactoryNodeUid(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execGetObjectClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetObjectClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeAnimSequenceFactoryNode::execInitializeAnimSequenceNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UniqueID);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeAnimSequenceNode(Z_Param_UniqueID,Z_Param_DisplayLabel);
		P_NATIVE_END;
	}
	void UInterchangeAnimSequenceFactoryNode::StaticRegisterNativesUInterchangeAnimSequenceFactoryNode()
	{
		UClass* Class = UInterchangeAnimSequenceFactoryNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimatedAttributeCurveName", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveName },
			{ "GetAnimatedAttributeCurveNames", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNames },
			{ "GetAnimatedAttributeCurveNamesCount", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeCurveNamesCount },
			{ "GetAnimatedAttributeStepCurveName", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveName },
			{ "GetAnimatedAttributeStepCurveNames", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNames },
			{ "GetAnimatedAttributeStepCurveNamesCount", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedAttributeStepCurveNamesCount },
			{ "GetAnimatedMaterialCurveSuffixe", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixe },
			{ "GetAnimatedMaterialCurveSuffixes", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixes },
			{ "GetAnimatedMaterialCurveSuffixesCount", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMaterialCurveSuffixesCount },
			{ "GetAnimatedMorphTargetDependeciesCount", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMorphTargetDependeciesCount },
			{ "GetAnimatedMorphTargetDependencies", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMorphTargetDependencies },
			{ "GetAnimatedMorphTargetDependency", &UInterchangeAnimSequenceFactoryNode::execGetAnimatedMorphTargetDependency },
			{ "GetAnimationPayloadKeyFromMorphTargetNodeUid", &UInterchangeAnimSequenceFactoryNode::execGetAnimationPayloadKeyFromMorphTargetNodeUid },
			{ "GetAnimationPayloadKeyFromSceneNodeUid", &UInterchangeAnimSequenceFactoryNode::execGetAnimationPayloadKeyFromSceneNodeUid },
			{ "GetCustomDeleteExistingCustomAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingCustomAttributeCurves },
			{ "GetCustomDeleteExistingMorphTargetCurves", &UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingMorphTargetCurves },
			{ "GetCustomDeleteExistingNonCurveCustomAttributes", &UInterchangeAnimSequenceFactoryNode::execGetCustomDeleteExistingNonCurveCustomAttributes },
			{ "GetCustomDoNotImportCurveWithZero", &UInterchangeAnimSequenceFactoryNode::execGetCustomDoNotImportCurveWithZero },
			{ "GetCustomImportAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportAttributeCurves },
			{ "GetCustomImportBoneTracks", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracks },
			{ "GetCustomImportBoneTracksRangeStart", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStart },
			{ "GetCustomImportBoneTracksRangeStop", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksRangeStop },
			{ "GetCustomImportBoneTracksSampleRate", &UInterchangeAnimSequenceFactoryNode::execGetCustomImportBoneTracksSampleRate },
			{ "GetCustomMaterialDriveParameterOnCustomAttribute", &UInterchangeAnimSequenceFactoryNode::execGetCustomMaterialDriveParameterOnCustomAttribute },
			{ "GetCustomRemoveCurveRedundantKeys", &UInterchangeAnimSequenceFactoryNode::execGetCustomRemoveCurveRedundantKeys },
			{ "GetCustomSkeletonFactoryNodeUid", &UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonFactoryNodeUid },
			{ "GetCustomSkeletonSoftObjectPath", &UInterchangeAnimSequenceFactoryNode::execGetCustomSkeletonSoftObjectPath },
			{ "GetMorphTargetNodeAnimationPayloadKeys", &UInterchangeAnimSequenceFactoryNode::execGetMorphTargetNodeAnimationPayloadKeys },
			{ "GetObjectClass", &UInterchangeAnimSequenceFactoryNode::execGetObjectClass },
			{ "GetSceneNodeAnimationPayloadKeys", &UInterchangeAnimSequenceFactoryNode::execGetSceneNodeAnimationPayloadKeys },
			{ "InitializeAnimSequenceNode", &UInterchangeAnimSequenceFactoryNode::execInitializeAnimSequenceNode },
			{ "RemoveAnimatedAttributeCurveName", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeCurveName },
			{ "RemoveAnimatedAttributeStepCurveName", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedAttributeStepCurveName },
			{ "RemoveAnimatedMaterialCurveSuffixe", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedMaterialCurveSuffixe },
			{ "RemoveAnimatedMorphTargetDependencyUid", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimatedMorphTargetDependencyUid },
			{ "RemoveAnimationPayloadKeyForMorphTargetNodeUid", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimationPayloadKeyForMorphTargetNodeUid },
			{ "RemoveAnimationPayloadKeyForSceneNodeUid", &UInterchangeAnimSequenceFactoryNode::execRemoveAnimationPayloadKeyForSceneNodeUid },
			{ "SetAnimatedAttributeCurveName", &UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeCurveName },
			{ "SetAnimatedAttributeStepCurveName", &UInterchangeAnimSequenceFactoryNode::execSetAnimatedAttributeStepCurveName },
			{ "SetAnimatedMaterialCurveSuffixe", &UInterchangeAnimSequenceFactoryNode::execSetAnimatedMaterialCurveSuffixe },
			{ "SetAnimatedMorphTargetDependencyUid", &UInterchangeAnimSequenceFactoryNode::execSetAnimatedMorphTargetDependencyUid },
			{ "SetAnimationPayloadKeyForMorphTargetNodeUid", &UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeyForMorphTargetNodeUid },
			{ "SetAnimationPayloadKeyForSceneNodeUid", &UInterchangeAnimSequenceFactoryNode::execSetAnimationPayloadKeyForSceneNodeUid },
			{ "SetCustomDeleteExistingCustomAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingCustomAttributeCurves },
			{ "SetCustomDeleteExistingMorphTargetCurves", &UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingMorphTargetCurves },
			{ "SetCustomDeleteExistingNonCurveCustomAttributes", &UInterchangeAnimSequenceFactoryNode::execSetCustomDeleteExistingNonCurveCustomAttributes },
			{ "SetCustomDoNotImportCurveWithZero", &UInterchangeAnimSequenceFactoryNode::execSetCustomDoNotImportCurveWithZero },
			{ "SetCustomImportAttributeCurves", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportAttributeCurves },
			{ "SetCustomImportBoneTracks", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracks },
			{ "SetCustomImportBoneTracksRangeStart", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStart },
			{ "SetCustomImportBoneTracksRangeStop", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksRangeStop },
			{ "SetCustomImportBoneTracksSampleRate", &UInterchangeAnimSequenceFactoryNode::execSetCustomImportBoneTracksSampleRate },
			{ "SetCustomMaterialDriveParameterOnCustomAttribute", &UInterchangeAnimSequenceFactoryNode::execSetCustomMaterialDriveParameterOnCustomAttribute },
			{ "SetCustomRemoveCurveRedundantKeys", &UInterchangeAnimSequenceFactoryNode::execSetCustomRemoveCurveRedundantKeys },
			{ "SetCustomSkeletonFactoryNodeUid", &UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonFactoryNodeUid },
			{ "SetCustomSkeletonSoftObjectPath", &UInterchangeAnimSequenceFactoryNode::execSetCustomSkeletonSoftObjectPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms
		{
			int32 Index;
			FString OutAttributeCurveName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeCurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_OutAttributeCurveName = { "OutAttributeCurveName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms, OutAttributeCurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::NewProp_OutAttributeCurveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get an animated attribute curve name point by the specified index. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get an animated attribute curve name point by the specified index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeCurveName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveName_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNames_Parms
		{
			TArray<FString> OutAttributeCurveNames;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeCurveNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttributeCurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames_Inner = { "OutAttributeCurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames = { "OutAttributeCurveNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNames_Parms, OutAttributeCurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::NewProp_OutAttributeCurveNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get all animated attribute curve names. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get all animated attribute curve names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNames_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNamesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNamesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Return how many animated attribute curve names this anim sequence drive (curve are FRichCurve of type float). */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Return how many animated attribute curve names this anim sequence drive (curve are FRichCurve of type float)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeCurveNamesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeCurveNamesCount_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms
		{
			int32 Index;
			FString OutAttributeStepCurveName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeStepCurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_OutAttributeStepCurveName = { "OutAttributeStepCurveName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms, OutAttributeStepCurveName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::NewProp_OutAttributeStepCurveName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get an animated attribute step curve name point by the specified index. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get an animated attribute step curve name point by the specified index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeStepCurveName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveName_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNames_Parms
		{
			TArray<FString> OutAttributeStepCurveNames;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutAttributeStepCurveNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttributeStepCurveNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames_Inner = { "OutAttributeStepCurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames = { "OutAttributeStepCurveNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNames_Parms, OutAttributeStepCurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::NewProp_OutAttributeStepCurveNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get all animated attribute step curve names. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get all animated attribute step curve names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeStepCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNames_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNamesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNamesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Return how many animated attribute step curve names this anim sequence drive. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Return how many animated attribute step curve names this anim sequence drive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedAttributeStepCurveNamesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedAttributeStepCurveNamesCount_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms
		{
			int32 Index;
			FString OutMaterialCurveSuffixe;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialCurveSuffixe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_OutMaterialCurveSuffixe = { "OutMaterialCurveSuffixe", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms, OutMaterialCurveSuffixe), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::NewProp_OutMaterialCurveSuffixe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get an animated material curve suffixe point by the specified index. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get an animated material curve suffixe point by the specified index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMaterialCurveSuffixe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixe_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixes_Parms
		{
			TArray<FString> OutMaterialCurveSuffixes;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMaterialCurveSuffixes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMaterialCurveSuffixes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes_Inner = { "OutMaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes = { "OutMaterialCurveSuffixes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixes_Parms, OutMaterialCurveSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::NewProp_OutMaterialCurveSuffixes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get all animated material curve suffixes. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get all animated material curve suffixes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMaterialCurveSuffixes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixes_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Return how many animated material curve suffixes this anim sequence drive (curve are FRichCurve of type float). */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Return how many animated material curve suffixes this anim sequence drive (curve are FRichCurve of type float)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMaterialCurveSuffixesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMaterialCurveSuffixesCount_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependeciesCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependeciesCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** return how many animated moprh target (moprh target are translated into a mesh node and can be animated with a float curve) this anim sequence depends on. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "return how many animated moprh target (moprh target are translated into a mesh node and can be animated with a float curve) this anim sequence depends on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMorphTargetDependeciesCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependeciesCount_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependencies_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::NewProp_OutDependencies_Inner = { "OutDependencies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::NewProp_OutDependencies = { "OutDependencies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependencies_Parms, OutDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::NewProp_OutDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::NewProp_OutDependencies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get all animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve) this anim sequence depends on. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get all animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve) this anim sequence depends on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMorphTargetDependencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependencies_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependency_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependency_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::NewProp_OutDependency = { "OutDependency", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependency_Parms, OutDependency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::NewProp_OutDependency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get an animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve) point by the specified index. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get an animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve) point by the specified index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimatedMorphTargetDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimatedMorphTargetDependency_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromMorphTargetNodeUid_Parms
		{
			FString MorphTargetNodeUid;
			FString OutPayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNodeUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetNodeUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid = { "MorphTargetNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromMorphTargetNodeUid_Parms, MorphTargetNodeUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromMorphTargetNodeUid_Parms, OutPayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromMorphTargetNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromMorphTargetNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_OutPayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimationPayloadKeyFromMorphTargetNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromMorphTargetNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromSceneNodeUid_Parms
		{
			FString SceneNodeUid;
			FString OutPayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodeUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SceneNodeUid;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutPayloadKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_SceneNodeUid = { "SceneNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromSceneNodeUid_Parms, SceneNodeUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_OutPayloadKey = { "OutPayloadKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromSceneNodeUid_Parms, OutPayloadKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromSceneNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromSceneNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_SceneNodeUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_OutPayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetAnimationPayloadKeyFromSceneNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventGetAnimationPayloadKeyFromSceneNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DeleteExistingCustomAttributeCurves, return false if the attribute is not set.\n\x09 * \n\x09 * Note - If true, all previous custom attribute curves will be deleted when doing a re-import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DeleteExistingCustomAttributeCurves, return false if the attribute is not set.\n\nNote - If true, all previous custom attribute curves will be deleted when doing a re-import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDeleteExistingCustomAttributeCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingCustomAttributeCurves_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DeleteExistingMorphTargetCurves, return false if the attribute is not set.\n\x09 * \n\x09 * Note - If true, all previous moprh target curves will be deleted when doing a re-import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DeleteExistingMorphTargetCurves, return false if the attribute is not set.\n\nNote - If true, all previous moprh target curves will be deleted when doing a re-import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDeleteExistingMorphTargetCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingMorphTargetCurves_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DeleteExistingNonCurveCustomAttributes, return false if the attribute is not set.\n\x09 * \n\x09 * Note - If true, all previous non-curve custom attributes will be deleted when doing a re-import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DeleteExistingNonCurveCustomAttributes, return false if the attribute is not set.\n\nNote - If true, all previous non-curve custom attributes will be deleted when doing a re-import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDeleteExistingNonCurveCustomAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDeleteExistingNonCurveCustomAttributes_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute DoNotImportCurveWithZero, return false if the attribute is not set.\n\x09 * \n\x09 * Note - If value is true, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute DoNotImportCurveWithZero, return false if the attribute is not set.\n\nNote - If value is true, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomDoNotImportCurveWithZero", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomDoNotImportCurveWithZero_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09  * Get the import attribute curves state. If true this mean we want to import all user custom attributes\n\x09  * we can find on a node.\n\x09  * \n\x09  * Return false if the attribute is not set.\n\x09  */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import attribute curves state. If true this mean we want to import all user custom attributes\nwe can find on a node.\n\nReturn false if the attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportAttributeCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportAttributeCurves_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the import bone tracks state. The attribute will be true if we need to import bone tracks.\n\x09 * False if we do not import bone tracks.\n\x09 * \n\x09 * Note - Return false if the attribute is not set. Return true if the attribute exist and can be query.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks state. The attribute will be true if we need to import bone tracks.\nFalse if we do not import bone tracks.\n\nNote - Return false if the attribute is not set. Return true if the attribute exist and can be query." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracks_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms
		{
			double AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the import bone tracks start time in second. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks start time in second. Return false if the attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracksRangeStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStart_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms
		{
			double AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the import bone tracks end time in second. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks end time in second. Return false if the attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracksRangeStop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksRangeStop_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms
		{
			double AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the import bone tracks sample rate. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the import bone tracks sample rate. Return false if the attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomImportBoneTracksSampleRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomImportBoneTracksSampleRate_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute MaterialDriveParameterOnCustomAttribute, return false if the attribute is not set.\n\x09 *\n\x09 * Note - If true, Set Material Curve Type for all custom attributes that exists.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute MaterialDriveParameterOnCustomAttribute, return false if the attribute is not set.\n\nNote - If true, Set Material Curve Type for all custom attributes that exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomMaterialDriveParameterOnCustomAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomMaterialDriveParameterOnCustomAttribute_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms
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
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Get the custom attribute RemoveCurveRedundantKeys, return false if the attribute is not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the custom attribute RemoveCurveRedundantKeys, return false if the attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomRemoveCurveRedundantKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomRemoveCurveRedundantKeys_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the skeleton factory node unique id. Return false if the attribute is not set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the skeleton factory node unique id. Return false if the attribute is not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomSkeletonFactoryNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonFactoryNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms
		{
			FSoftObjectPath AttributeValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Query the optional existing USkeleton this anim must use. The anim sequence factory will use this skeleton instead of the imported one\n\x09 * (from GetCustomSkeletonFactoryNodeUid) if this attribute is set and the skeleton pointer is valid.\n\x09 * Pipeline set this attribute in case the user want to specify an existing skeleton.\n\x09 * Return false if the attribute was not set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Query the optional existing USkeleton this anim must use. The anim sequence factory will use this skeleton instead of the imported one\n(from GetCustomSkeletonFactoryNodeUid) if this attribute is set and the skeleton pointer is valid.\nPipeline set this attribute in case the user want to specify an existing skeleton.\nReturn false if the attribute was not set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetCustomSkeletonSoftObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::InterchangeAnimSequenceFactoryNode_eventGetCustomSkeletonSoftObjectPath_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms
		{
			TMap<FString,FString> OutMorphTargetNodeAnimationPayloads;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetNodeAnimationPayloads_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutMorphTargetNodeAnimationPayloads_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutMorphTargetNodeAnimationPayloads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_ValueProp = { "OutMorphTargetNodeAnimationPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_Key_KeyProp = { "OutMorphTargetNodeAnimationPayloads_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads = { "OutMorphTargetNodeAnimationPayloads", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms, OutMorphTargetNodeAnimationPayloads), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::NewProp_OutMorphTargetNodeAnimationPayloads,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetMorphTargetNodeAnimationPayloadKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetMorphTargetNodeAnimationPayloadKeys_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetObjectClass_Parms
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetObjectClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Get the class this node want to create */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Get the class this node want to create" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetObjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::InterchangeAnimSequenceFactoryNode_eventGetObjectClass_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventGetSceneNodeAnimationPayloadKeys_Parms
		{
			TMap<FString,FString> OutSceneNodeAnimationPayloads;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSceneNodeAnimationPayloads_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutSceneNodeAnimationPayloads_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutSceneNodeAnimationPayloads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloads_ValueProp = { "OutSceneNodeAnimationPayloads", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloads_Key_KeyProp = { "OutSceneNodeAnimationPayloads_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloads = { "OutSceneNodeAnimationPayloads", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventGetSceneNodeAnimationPayloadKeys_Parms, OutSceneNodeAnimationPayloads), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloads_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloads_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::NewProp_OutSceneNodeAnimationPayloads,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "GetSceneNodeAnimationPayloadKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::InterchangeAnimSequenceFactoryNode_eventGetSceneNodeAnimationPayloadKeys_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms
		{
			FString UniqueID;
			FString DisplayLabel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_UniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms, UniqueID), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_DisplayLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_DisplayLabel = { "DisplayLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms, DisplayLabel), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_DisplayLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_DisplayLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_UniqueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::NewProp_DisplayLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Initialize node data\n\x09 * @param UniqueID - The uniqueId for this node\n\x09 * @param DisplayLabel - The name of the node\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Initialize node data\n@param UniqueID - The uniqueId for this node\n@param DisplayLabel - The name of the node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "InitializeAnimSequenceNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::InterchangeAnimSequenceFactoryNode_eventInitializeAnimSequenceNode_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms
		{
			FString AttributeCurveName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeCurveName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName = { "AttributeCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms, AttributeCurveName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Remove one animated attribute curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Remove one animated attribute curve name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimatedAttributeCurveName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeCurveName_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms
		{
			FString AttributeStepCurveName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeStepCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeStepCurveName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName = { "AttributeStepCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms, AttributeStepCurveName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Remove one animated attribute step curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Remove one animated attribute step curve name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimatedAttributeStepCurveName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedAttributeStepCurveName_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms
		{
			FString MaterialCurveSuffixe;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixe_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixe;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe = { "MaterialCurveSuffixe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms, MaterialCurveSuffixe), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Remove one animated material curve suffixe. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Remove one animated material curve suffixe." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimatedMaterialCurveSuffixe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMaterialCurveSuffixe_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMorphTargetDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMorphTargetDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMorphTargetDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMorphTargetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Remove one animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve). Return false if we cannot remove the moprh target unique id. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Remove one animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve). Return false if we cannot remove the moprh target unique id." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimatedMorphTargetDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimatedMorphTargetDependencyUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForMorphTargetNodeUid_Parms
		{
			FString MorphTargetNodeUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNodeUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetNodeUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid = { "MorphTargetNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForMorphTargetNodeUid_Parms, MorphTargetNodeUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForMorphTargetNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForMorphTargetNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimationPayloadKeyForMorphTargetNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForMorphTargetNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForSceneNodeUid_Parms
		{
			FString SceneNodeUid;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodeUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SceneNodeUid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid = { "SceneNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForSceneNodeUid_Parms, SceneNodeUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForSceneNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForSceneNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "RemoveAnimationPayloadKeyForSceneNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventRemoveAnimationPayloadKeyForSceneNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms
		{
			FString AttributeCurveName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeCurveName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName = { "AttributeCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms, AttributeCurveName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_AttributeCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Add an animated attribute curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Add an animated attribute curve name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimatedAttributeCurveName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeCurveName_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms
		{
			FString AttributeStepCurveName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeStepCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeStepCurveName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName = { "AttributeStepCurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms, AttributeStepCurveName), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_AttributeStepCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Add an animated attribute step curve name. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Add an animated attribute step curve name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimatedAttributeStepCurveName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedAttributeStepCurveName_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms
		{
			FString MaterialCurveSuffixe;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialCurveSuffixe_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialCurveSuffixe;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe = { "MaterialCurveSuffixe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms, MaterialCurveSuffixe), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_MaterialCurveSuffixe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Add an animated material curve suffixe. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Add an animated material curve suffixe." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimatedMaterialCurveSuffixe", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedMaterialCurveSuffixe_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetAnimatedMorphTargetDependencyUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid = { "DependencyUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimatedMorphTargetDependencyUid_Parms, DependencyUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetAnimatedMorphTargetDependencyUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimatedMorphTargetDependencyUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_DependencyUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Add an animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve). */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Add an animated moprh target unique id (moprh target are translated into a mesh node and can be animated with a float curve)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimatedMorphTargetDependencyUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimatedMorphTargetDependencyUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms
		{
			FString MorphTargetNodeUid;
			FString PayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetNodeUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MorphTargetNodeUid;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid = { "MorphTargetNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms, MorphTargetNodeUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_MorphTargetNodeUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimationPayloadKeyForMorphTargetNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForMorphTargetNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms
		{
			FString SceneNodeUid;
			FString PayloadKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneNodeUid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SceneNodeUid;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid = { "SceneNodeUid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms, SceneNodeUid), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_PayloadKey_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_SceneNodeUid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_PayloadKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | SkeletalAnimationTrack" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetAnimationPayloadKeyForSceneNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventSetAnimationPayloadKeyForSceneNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute cannot be set.\n\x09 * \n\x09 * Note - If true, all previous custom attribute curves will be deleted when doing a re-import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DeleteExistingCustomAttributeCurves. Return false if the attribute cannot be set.\n\nNote - If true, all previous custom attribute curves will be deleted when doing a re-import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDeleteExistingCustomAttributeCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingCustomAttributeCurves_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute cannot be set.\n\x09 * \n\x09 * Note - If true, all previous moprh target curves will be deleted when doing a re-import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DeleteExistingMorphTargetCurves. Return false if the attribute cannot be set.\n\nNote - If true, all previous moprh target curves will be deleted when doing a re-import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDeleteExistingMorphTargetCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingMorphTargetCurves_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute cannot be set.\n\x09 * \n\x09 * Note - If true, all previous non-curve custom attributes will be deleted when doing a re-import.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DeleteExistingNonCurveCustomAttributes. Return false if the attribute cannot be set.\n\nNote - If true, all previous non-curve custom attributes will be deleted when doing a re-import." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDeleteExistingNonCurveCustomAttributes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDeleteExistingNonCurveCustomAttributes_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute DoNotImportCurveWithZero. Return false if the attribute cannot be set.\n\x09 * \n\x09 * Note - If value is true, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute DoNotImportCurveWithZero. Return false if the attribute cannot be set.\n\nNote - If value is true, do not import if it doesn't have any value other than zero. This is to avoid adding extra curves to evaluate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomDoNotImportCurveWithZero", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomDoNotImportCurveWithZero_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import attribute curves state. Return false if the attribute cannot be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import attribute curves state. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportAttributeCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportAttributeCurves_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks state. Pass true to import bone tracks, false to not import bone tracks. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks state. Pass true to import bone tracks, false to not import bone tracks." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracks_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms
		{
			double AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks start time in second. Return false if the attribute cannot be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks start time in second. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracksRangeStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStart_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms
		{
			double AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks end time in second. Return false if the attribute cannot be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks end time in second. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracksRangeStop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksRangeStop_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms
		{
			double AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the import bone tracks sample rate. Return false if the attribute cannot be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the import bone tracks sample rate. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomImportBoneTracksSampleRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomImportBoneTracksSampleRate_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute cannot be set.\n\x09 *\n\x09 * Note - If true, Set Material Curve Type for all custom attributes that exists.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute MaterialDriveParameterOnCustomAttribute. Return false if the attribute cannot be set.\n\nNote - If true, Set Material Curve Type for all custom attributes that exists." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomMaterialDriveParameterOnCustomAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomMaterialDriveParameterOnCustomAttribute_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the custom attribute RemoveCurveRedundantKeys. Return false if the attribute cannot be set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the custom attribute RemoveCurveRedundantKeys. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomRemoveCurveRedundantKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomRemoveCurveRedundantKeys_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics
	{
		struct InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms, AttributeValue), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/** Set the skeleton factory node unique id. Return false if the attribute cannot be set. */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the skeleton factory node unique id. Return false if the attribute cannot be set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomSkeletonFactoryNodeUid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonFactoryNodeUid_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms
		{
			FSoftObjectPath AttributeValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms, AttributeValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | AnimSequence" },
		{ "Comment", "/**\n\x09 * Set the optional existing USkeleton this anim must use. The AnimSequence factory will use this skeleton instead of the imported one\n\x09 * (from GetCustomSkeletonFactoryNodeUid) if this attribute is set and the skeleton pointer is valid.\n\x09 * Pipeline set this attribute in case the user want to specify an existing skeleton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "Set the optional existing USkeleton this anim must use. The AnimSequence factory will use this skeleton instead of the imported one\n(from GetCustomSkeletonFactoryNodeUid) if this attribute is set and the skeleton pointer is valid.\nPipeline set this attribute in case the user want to specify an existing skeleton." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, nullptr, "SetCustomSkeletonSoftObjectPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::InterchangeAnimSequenceFactoryNode_eventSetCustomSkeletonSoftObjectPath_Parms), Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimSequenceFactoryNode);
	UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_NoRegister()
	{
		return UInterchangeAnimSequenceFactoryNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeFactoryNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveName, "GetAnimatedAttributeCurveName" }, // 1604400382
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNames, "GetAnimatedAttributeCurveNames" }, // 2446050881
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeCurveNamesCount, "GetAnimatedAttributeCurveNamesCount" }, // 3302610077
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveName, "GetAnimatedAttributeStepCurveName" }, // 1430129394
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNames, "GetAnimatedAttributeStepCurveNames" }, // 2000188540
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedAttributeStepCurveNamesCount, "GetAnimatedAttributeStepCurveNamesCount" }, // 789811803
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixe, "GetAnimatedMaterialCurveSuffixe" }, // 305794
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixes, "GetAnimatedMaterialCurveSuffixes" }, // 2226141154
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMaterialCurveSuffixesCount, "GetAnimatedMaterialCurveSuffixesCount" }, // 2436025909
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependeciesCount, "GetAnimatedMorphTargetDependeciesCount" }, // 2794658798
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependencies, "GetAnimatedMorphTargetDependencies" }, // 1538615131
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimatedMorphTargetDependency, "GetAnimatedMorphTargetDependency" }, // 1457088801
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromMorphTargetNodeUid, "GetAnimationPayloadKeyFromMorphTargetNodeUid" }, // 764425887
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetAnimationPayloadKeyFromSceneNodeUid, "GetAnimationPayloadKeyFromSceneNodeUid" }, // 1447679354
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingCustomAttributeCurves, "GetCustomDeleteExistingCustomAttributeCurves" }, // 3451958210
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingMorphTargetCurves, "GetCustomDeleteExistingMorphTargetCurves" }, // 3354083415
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDeleteExistingNonCurveCustomAttributes, "GetCustomDeleteExistingNonCurveCustomAttributes" }, // 3328622342
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomDoNotImportCurveWithZero, "GetCustomDoNotImportCurveWithZero" }, // 3342435286
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportAttributeCurves, "GetCustomImportAttributeCurves" }, // 2242036285
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracks, "GetCustomImportBoneTracks" }, // 4234378832
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStart, "GetCustomImportBoneTracksRangeStart" }, // 593156316
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksRangeStop, "GetCustomImportBoneTracksRangeStop" }, // 3622691403
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomImportBoneTracksSampleRate, "GetCustomImportBoneTracksSampleRate" }, // 2189994502
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomMaterialDriveParameterOnCustomAttribute, "GetCustomMaterialDriveParameterOnCustomAttribute" }, // 2638653813
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomRemoveCurveRedundantKeys, "GetCustomRemoveCurveRedundantKeys" }, // 2357295883
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonFactoryNodeUid, "GetCustomSkeletonFactoryNodeUid" }, // 852704079
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetCustomSkeletonSoftObjectPath, "GetCustomSkeletonSoftObjectPath" }, // 1981335962
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetMorphTargetNodeAnimationPayloadKeys, "GetMorphTargetNodeAnimationPayloadKeys" }, // 617460573
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetObjectClass, "GetObjectClass" }, // 3522503577
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_GetSceneNodeAnimationPayloadKeys, "GetSceneNodeAnimationPayloadKeys" }, // 3173850068
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_InitializeAnimSequenceNode, "InitializeAnimSequenceNode" }, // 1570523214
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeCurveName, "RemoveAnimatedAttributeCurveName" }, // 3628248697
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedAttributeStepCurveName, "RemoveAnimatedAttributeStepCurveName" }, // 293420504
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMaterialCurveSuffixe, "RemoveAnimatedMaterialCurveSuffixe" }, // 1433979314
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimatedMorphTargetDependencyUid, "RemoveAnimatedMorphTargetDependencyUid" }, // 3384715696
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForMorphTargetNodeUid, "RemoveAnimationPayloadKeyForMorphTargetNodeUid" }, // 3821609753
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_RemoveAnimationPayloadKeyForSceneNodeUid, "RemoveAnimationPayloadKeyForSceneNodeUid" }, // 1080802278
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeCurveName, "SetAnimatedAttributeCurveName" }, // 2768318242
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedAttributeStepCurveName, "SetAnimatedAttributeStepCurveName" }, // 3023094384
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMaterialCurveSuffixe, "SetAnimatedMaterialCurveSuffixe" }, // 238089205
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimatedMorphTargetDependencyUid, "SetAnimatedMorphTargetDependencyUid" }, // 2719119622
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForMorphTargetNodeUid, "SetAnimationPayloadKeyForMorphTargetNodeUid" }, // 1729464779
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetAnimationPayloadKeyForSceneNodeUid, "SetAnimationPayloadKeyForSceneNodeUid" }, // 2484910933
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingCustomAttributeCurves, "SetCustomDeleteExistingCustomAttributeCurves" }, // 4090564625
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingMorphTargetCurves, "SetCustomDeleteExistingMorphTargetCurves" }, // 2271996289
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDeleteExistingNonCurveCustomAttributes, "SetCustomDeleteExistingNonCurveCustomAttributes" }, // 4268902741
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomDoNotImportCurveWithZero, "SetCustomDoNotImportCurveWithZero" }, // 3123049169
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportAttributeCurves, "SetCustomImportAttributeCurves" }, // 658761532
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracks, "SetCustomImportBoneTracks" }, // 1656207971
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStart, "SetCustomImportBoneTracksRangeStart" }, // 3426356790
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksRangeStop, "SetCustomImportBoneTracksRangeStop" }, // 4050875120
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomImportBoneTracksSampleRate, "SetCustomImportBoneTracksSampleRate" }, // 3937397189
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomMaterialDriveParameterOnCustomAttribute, "SetCustomMaterialDriveParameterOnCustomAttribute" }, // 24020152
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomRemoveCurveRedundantKeys, "SetCustomRemoveCurveRedundantKeys" }, // 343556084
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonFactoryNodeUid, "SetCustomSkeletonFactoryNodeUid" }, // 2947887079
		{ &Z_Construct_UFunction_UInterchangeAnimSequenceFactoryNode_SetCustomSkeletonSoftObjectPath, "SetCustomSkeletonSoftObjectPath" }, // 1930078606
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//ns UE::Interchange\n" },
		{ "IncludePath", "InterchangeAnimSequenceFactoryNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeAnimSequenceFactoryNode.h" },
		{ "ToolTip", "ns UE::Interchange" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeAnimSequenceFactoryNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::ClassParams = {
		&UInterchangeAnimSequenceFactoryNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.OuterSingleton, Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode.OuterSingleton;
	}
	template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<UInterchangeAnimSequenceFactoryNode>()
	{
		return UInterchangeAnimSequenceFactoryNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimSequenceFactoryNode);
	UInterchangeAnimSequenceFactoryNode::~UInterchangeAnimSequenceFactoryNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeAnimSequenceFactoryNode)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode, UInterchangeAnimSequenceFactoryNode::StaticClass, TEXT("UInterchangeAnimSequenceFactoryNode"), &Z_Registration_Info_UClass_UInterchangeAnimSequenceFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimSequenceFactoryNode), 1229368220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_2407837011(TEXT("/Script/InterchangeFactoryNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
