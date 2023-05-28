// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAnimSequenceFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UObject;
struct FSoftObjectPath;
#ifdef INTERCHANGEFACTORYNODES_InterchangeAnimSequenceFactoryNode_generated_h
#error "InterchangeAnimSequenceFactoryNode.generated.h already included, missing '#pragma once' in InterchangeAnimSequenceFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeAnimSequenceFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAnimationPayloadKeyForMorphTargetNodeUid); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForMorphTargetNodeUid); \
	DECLARE_FUNCTION(execGetAnimationPayloadKeyFromMorphTargetNodeUid); \
	DECLARE_FUNCTION(execGetMorphTargetNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execRemoveAnimationPayloadKeyForSceneNodeUid); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForSceneNodeUid); \
	DECLARE_FUNCTION(execGetAnimationPayloadKeyFromSceneNodeUid); \
	DECLARE_FUNCTION(execGetSceneNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execGetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNamesCount); \
	DECLARE_FUNCTION(execRemoveAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execSetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixes); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixesCount); \
	DECLARE_FUNCTION(execSetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execGetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNamesCount); \
	DECLARE_FUNCTION(execRemoveAnimatedMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execSetAnimatedMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execGetAnimatedMorphTargetDependency); \
	DECLARE_FUNCTION(execGetAnimatedMorphTargetDependencies); \
	DECLARE_FUNCTION(execGetAnimatedMorphTargetDependeciesCount); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execSetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execGetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execSetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execGetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execSetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execSetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execInitializeAnimSequenceNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAnimationPayloadKeyForMorphTargetNodeUid); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForMorphTargetNodeUid); \
	DECLARE_FUNCTION(execGetAnimationPayloadKeyFromMorphTargetNodeUid); \
	DECLARE_FUNCTION(execGetMorphTargetNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execRemoveAnimationPayloadKeyForSceneNodeUid); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForSceneNodeUid); \
	DECLARE_FUNCTION(execGetAnimationPayloadKeyFromSceneNodeUid); \
	DECLARE_FUNCTION(execGetSceneNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execGetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNamesCount); \
	DECLARE_FUNCTION(execRemoveAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execSetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixes); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixesCount); \
	DECLARE_FUNCTION(execSetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execGetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNamesCount); \
	DECLARE_FUNCTION(execRemoveAnimatedMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execSetAnimatedMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execGetAnimatedMorphTargetDependency); \
	DECLARE_FUNCTION(execGetAnimatedMorphTargetDependencies); \
	DECLARE_FUNCTION(execGetAnimatedMorphTargetDependeciesCount); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execSetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execGetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execSetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execGetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execSetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execSetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execInitializeAnimSequenceNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeAnimSequenceFactoryNode, NO_API)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimSequenceFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimSequenceFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimSequenceFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeAnimSequenceFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimSequenceFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimSequenceFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAnimSequenceFactoryNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeAnimSequenceFactoryNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimSequenceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimSequenceFactoryNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeAnimSequenceFactoryNode(UInterchangeAnimSequenceFactoryNode&&); \
	NO_API UInterchangeAnimSequenceFactoryNode(const UInterchangeAnimSequenceFactoryNode&); \
public: \
	NO_API virtual ~UInterchangeAnimSequenceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeAnimSequenceFactoryNode(UInterchangeAnimSequenceFactoryNode&&); \
	NO_API UInterchangeAnimSequenceFactoryNode(const UInterchangeAnimSequenceFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimSequenceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimSequenceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimSequenceFactoryNode) \
	NO_API virtual ~UInterchangeAnimSequenceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_29_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeAnimSequenceFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
