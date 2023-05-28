// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UAnimationGraph;
class UAnimBlueprint;
class UAnimBoneCompressionSettings;
class UAnimCurveCompressionSettings;
class UAnimGraphNode_Base;
class UAnimMetaData;
class UAnimMontage;
class UAnimNotify;
class UAnimNotifyState;
class UAnimSequence;
class UAnimSequenceBase;
class USkeletalMesh;
class USkeleton;
enum class EAnimInterpolationType : uint8;
enum class ERawCurveTrackTypes : uint8;
struct FAnimNotifyEvent;
struct FAnimSyncMarker;
struct FLinearColor;
struct FQualifiedFrameTime;
#ifdef ANIMATIONBLUEPRINTLIBRARY_AnimationBlueprintLibrary_generated_h
#error "AnimationBlueprintLibrary.generated.h already included, missing '#pragma once' in AnimationBlueprintLibrary.h"
#endif
#define ANIMATIONBLUEPRINTLIBRARY_AnimationBlueprintLibrary_generated_h

#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_56_DELEGATE \
ANIMATIONBLUEPRINTLIBRARY_API void FOnNotifyReplaced_DelegateWrapper(const FScriptDelegate& OnNotifyReplaced, const UAnimNotify* OldNotify, const UAnimNotify* NewNotify);


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_59_DELEGATE \
ANIMATIONBLUEPRINTLIBRARY_API void FOnNotifyStateReplaced_DelegateWrapper(const FScriptDelegate& OnNotifyStateReplaced, const UAnimNotifyState* OldNotifyState, const UAnimNotifyState* NewNotifyState);


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddNodeAssetOverride); \
	DECLARE_FUNCTION(execGetNodesOfClass); \
	DECLARE_FUNCTION(execGetAnimationGraphs); \
	DECLARE_FUNCTION(execFindBonePathToRoot); \
	DECLARE_FUNCTION(execEvaluateRootBoneTimecodeSubframeAttributeAtTime); \
	DECLARE_FUNCTION(execEvaluateRootBoneTimecodeAttributesAtTime); \
	DECLARE_FUNCTION(execIsValidTime); \
	DECLARE_FUNCTION(execGetTimeAtFrame); \
	DECLARE_FUNCTION(execGetFrameAtTime); \
	DECLARE_FUNCTION(execSetRateScale); \
	DECLARE_FUNCTION(execGetRateScale); \
	DECLARE_FUNCTION(execGetSequenceLength); \
	DECLARE_FUNCTION(execRemoveAllVirtualBones); \
	DECLARE_FUNCTION(execRemoveVirtualBones); \
	DECLARE_FUNCTION(execRemoveVirtualBone); \
	DECLARE_FUNCTION(execAddVirtualBone); \
	DECLARE_FUNCTION(execGetBonePosesForFrame); \
	DECLARE_FUNCTION(execGetBonePosesForTime); \
	DECLARE_FUNCTION(execGetBonePoseForFrame); \
	DECLARE_FUNCTION(execGetBonePoseForTime); \
	DECLARE_FUNCTION(execContainsMetaDataOfClass); \
	DECLARE_FUNCTION(execGetMetaDataOfClass); \
	DECLARE_FUNCTION(execGetMetaData); \
	DECLARE_FUNCTION(execRemoveMetaDataOfClass); \
	DECLARE_FUNCTION(execRemoveMetaData); \
	DECLARE_FUNCTION(execRemoveAllMetaData); \
	DECLARE_FUNCTION(execAddMetaDataObject); \
	DECLARE_FUNCTION(execAddMetaData); \
	DECLARE_FUNCTION(execDoesCurveExist); \
	DECLARE_FUNCTION(execFinalizeBoneAnimation); \
	DECLARE_FUNCTION(execRemoveAllBoneAnimation); \
	DECLARE_FUNCTION(execRemoveBoneAnimation); \
	DECLARE_FUNCTION(execCopyAnimationCurveNamesToSkeleton); \
	DECLARE_FUNCTION(execGetTransformationKeys); \
	DECLARE_FUNCTION(execGetVectorKeys); \
	DECLARE_FUNCTION(execGetFloatKeys); \
	DECLARE_FUNCTION(execDoesBoneNameExist); \
	DECLARE_FUNCTION(execAddVectorCurveKeys); \
	DECLARE_FUNCTION(execAddVectorCurveKey); \
	DECLARE_FUNCTION(execAddFloatCurveKeys); \
	DECLARE_FUNCTION(execAddFloatCurveKey); \
	DECLARE_FUNCTION(execAddTransformationCurveKeys); \
	DECLARE_FUNCTION(execAddTransformationCurveKey); \
	DECLARE_FUNCTION(execRemoveAllCurveData); \
	DECLARE_FUNCTION(execRemoveCurve); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execGetAnimationNotifyEventsForTrack); \
	DECLARE_FUNCTION(execGetAnimationSyncMarkersForTrack); \
	DECLARE_FUNCTION(execGetAnimNotifyEventDuration); \
	DECLARE_FUNCTION(execGetAnimNotifyEventTriggerTime); \
	DECLARE_FUNCTION(execIsValidAnimNotifyTrackName); \
	DECLARE_FUNCTION(execRemoveAllAnimationNotifyTracks); \
	DECLARE_FUNCTION(execRemoveAnimationNotifyTrack); \
	DECLARE_FUNCTION(execAddAnimationNotifyTrack); \
	DECLARE_FUNCTION(execGetAnimationNotifyTrackNames); \
	DECLARE_FUNCTION(execCopyAnimNotifiesFromSequence); \
	DECLARE_FUNCTION(execReplaceAnimNotifies); \
	DECLARE_FUNCTION(execReplaceAnimNotifyStates); \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByTrack); \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByName); \
	DECLARE_FUNCTION(execAddAnimationNotifyStateEventObject); \
	DECLARE_FUNCTION(execAddAnimationNotifyEventObject); \
	DECLARE_FUNCTION(execAddAnimationNotifyStateEvent); \
	DECLARE_FUNCTION(execAddAnimationNotifyEvent); \
	DECLARE_FUNCTION(execGetAnimationNotifyEventNames); \
	DECLARE_FUNCTION(execGetAnimationNotifyEvents); \
	DECLARE_FUNCTION(execRemoveAllAnimationSyncMarkers); \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByTrack); \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByName); \
	DECLARE_FUNCTION(execIsValidAnimationSyncMarkerName); \
	DECLARE_FUNCTION(execAddAnimationSyncMarker); \
	DECLARE_FUNCTION(execGetUniqueMarkerNames); \
	DECLARE_FUNCTION(execGetAnimationSyncMarkers); \
	DECLARE_FUNCTION(execSetIsRootMotionLockForced); \
	DECLARE_FUNCTION(execIsRootMotionLockForced); \
	DECLARE_FUNCTION(execSetRootMotionLockType); \
	DECLARE_FUNCTION(execGetRootMotionLockType); \
	DECLARE_FUNCTION(execSetRootMotionEnabled); \
	DECLARE_FUNCTION(execIsRootMotionEnabled); \
	DECLARE_FUNCTION(execSetAnimationInterpolationType); \
	DECLARE_FUNCTION(execGetAnimationInterpolationType); \
	DECLARE_FUNCTION(execSetAdditiveBasePoseType); \
	DECLARE_FUNCTION(execGetAdditiveBasePoseType); \
	DECLARE_FUNCTION(execSetAdditiveAnimationType); \
	DECLARE_FUNCTION(execGetAdditiveAnimationType); \
	DECLARE_FUNCTION(execSetCurveCompressionSettings); \
	DECLARE_FUNCTION(execGetCurveCompressionSettings); \
	DECLARE_FUNCTION(execSetBoneCompressionSettings); \
	DECLARE_FUNCTION(execGetBoneCompressionSettings); \
	DECLARE_FUNCTION(execIsValidRawAnimationTrackName); \
	DECLARE_FUNCTION(execGetRawTrackData); \
	DECLARE_FUNCTION(execGetRawTrackScaleData); \
	DECLARE_FUNCTION(execGetRawTrackRotationData); \
	DECLARE_FUNCTION(execGetRawTrackPositionData); \
	DECLARE_FUNCTION(execGetAnimationCurveNames); \
	DECLARE_FUNCTION(execGetMontageSlotNames); \
	DECLARE_FUNCTION(execGetAnimationTrackNames); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetNumFrames);


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddNodeAssetOverride); \
	DECLARE_FUNCTION(execGetNodesOfClass); \
	DECLARE_FUNCTION(execGetAnimationGraphs); \
	DECLARE_FUNCTION(execFindBonePathToRoot); \
	DECLARE_FUNCTION(execEvaluateRootBoneTimecodeSubframeAttributeAtTime); \
	DECLARE_FUNCTION(execEvaluateRootBoneTimecodeAttributesAtTime); \
	DECLARE_FUNCTION(execIsValidTime); \
	DECLARE_FUNCTION(execGetTimeAtFrame); \
	DECLARE_FUNCTION(execGetFrameAtTime); \
	DECLARE_FUNCTION(execSetRateScale); \
	DECLARE_FUNCTION(execGetRateScale); \
	DECLARE_FUNCTION(execGetSequenceLength); \
	DECLARE_FUNCTION(execRemoveAllVirtualBones); \
	DECLARE_FUNCTION(execRemoveVirtualBones); \
	DECLARE_FUNCTION(execRemoveVirtualBone); \
	DECLARE_FUNCTION(execAddVirtualBone); \
	DECLARE_FUNCTION(execGetBonePosesForFrame); \
	DECLARE_FUNCTION(execGetBonePosesForTime); \
	DECLARE_FUNCTION(execGetBonePoseForFrame); \
	DECLARE_FUNCTION(execGetBonePoseForTime); \
	DECLARE_FUNCTION(execContainsMetaDataOfClass); \
	DECLARE_FUNCTION(execGetMetaDataOfClass); \
	DECLARE_FUNCTION(execGetMetaData); \
	DECLARE_FUNCTION(execRemoveMetaDataOfClass); \
	DECLARE_FUNCTION(execRemoveMetaData); \
	DECLARE_FUNCTION(execRemoveAllMetaData); \
	DECLARE_FUNCTION(execAddMetaDataObject); \
	DECLARE_FUNCTION(execAddMetaData); \
	DECLARE_FUNCTION(execDoesCurveExist); \
	DECLARE_FUNCTION(execFinalizeBoneAnimation); \
	DECLARE_FUNCTION(execRemoveAllBoneAnimation); \
	DECLARE_FUNCTION(execRemoveBoneAnimation); \
	DECLARE_FUNCTION(execCopyAnimationCurveNamesToSkeleton); \
	DECLARE_FUNCTION(execGetTransformationKeys); \
	DECLARE_FUNCTION(execGetVectorKeys); \
	DECLARE_FUNCTION(execGetFloatKeys); \
	DECLARE_FUNCTION(execDoesBoneNameExist); \
	DECLARE_FUNCTION(execAddVectorCurveKeys); \
	DECLARE_FUNCTION(execAddVectorCurveKey); \
	DECLARE_FUNCTION(execAddFloatCurveKeys); \
	DECLARE_FUNCTION(execAddFloatCurveKey); \
	DECLARE_FUNCTION(execAddTransformationCurveKeys); \
	DECLARE_FUNCTION(execAddTransformationCurveKey); \
	DECLARE_FUNCTION(execRemoveAllCurveData); \
	DECLARE_FUNCTION(execRemoveCurve); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execGetAnimationNotifyEventsForTrack); \
	DECLARE_FUNCTION(execGetAnimationSyncMarkersForTrack); \
	DECLARE_FUNCTION(execGetAnimNotifyEventDuration); \
	DECLARE_FUNCTION(execGetAnimNotifyEventTriggerTime); \
	DECLARE_FUNCTION(execIsValidAnimNotifyTrackName); \
	DECLARE_FUNCTION(execRemoveAllAnimationNotifyTracks); \
	DECLARE_FUNCTION(execRemoveAnimationNotifyTrack); \
	DECLARE_FUNCTION(execAddAnimationNotifyTrack); \
	DECLARE_FUNCTION(execGetAnimationNotifyTrackNames); \
	DECLARE_FUNCTION(execCopyAnimNotifiesFromSequence); \
	DECLARE_FUNCTION(execReplaceAnimNotifies); \
	DECLARE_FUNCTION(execReplaceAnimNotifyStates); \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByTrack); \
	DECLARE_FUNCTION(execRemoveAnimationNotifyEventsByName); \
	DECLARE_FUNCTION(execAddAnimationNotifyStateEventObject); \
	DECLARE_FUNCTION(execAddAnimationNotifyEventObject); \
	DECLARE_FUNCTION(execAddAnimationNotifyStateEvent); \
	DECLARE_FUNCTION(execAddAnimationNotifyEvent); \
	DECLARE_FUNCTION(execGetAnimationNotifyEventNames); \
	DECLARE_FUNCTION(execGetAnimationNotifyEvents); \
	DECLARE_FUNCTION(execRemoveAllAnimationSyncMarkers); \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByTrack); \
	DECLARE_FUNCTION(execRemoveAnimationSyncMarkersByName); \
	DECLARE_FUNCTION(execIsValidAnimationSyncMarkerName); \
	DECLARE_FUNCTION(execAddAnimationSyncMarker); \
	DECLARE_FUNCTION(execGetUniqueMarkerNames); \
	DECLARE_FUNCTION(execGetAnimationSyncMarkers); \
	DECLARE_FUNCTION(execSetIsRootMotionLockForced); \
	DECLARE_FUNCTION(execIsRootMotionLockForced); \
	DECLARE_FUNCTION(execSetRootMotionLockType); \
	DECLARE_FUNCTION(execGetRootMotionLockType); \
	DECLARE_FUNCTION(execSetRootMotionEnabled); \
	DECLARE_FUNCTION(execIsRootMotionEnabled); \
	DECLARE_FUNCTION(execSetAnimationInterpolationType); \
	DECLARE_FUNCTION(execGetAnimationInterpolationType); \
	DECLARE_FUNCTION(execSetAdditiveBasePoseType); \
	DECLARE_FUNCTION(execGetAdditiveBasePoseType); \
	DECLARE_FUNCTION(execSetAdditiveAnimationType); \
	DECLARE_FUNCTION(execGetAdditiveAnimationType); \
	DECLARE_FUNCTION(execSetCurveCompressionSettings); \
	DECLARE_FUNCTION(execGetCurveCompressionSettings); \
	DECLARE_FUNCTION(execSetBoneCompressionSettings); \
	DECLARE_FUNCTION(execGetBoneCompressionSettings); \
	DECLARE_FUNCTION(execIsValidRawAnimationTrackName); \
	DECLARE_FUNCTION(execGetRawTrackData); \
	DECLARE_FUNCTION(execGetRawTrackScaleData); \
	DECLARE_FUNCTION(execGetRawTrackRotationData); \
	DECLARE_FUNCTION(execGetRawTrackPositionData); \
	DECLARE_FUNCTION(execGetAnimationCurveNames); \
	DECLARE_FUNCTION(execGetMontageSlotNames); \
	DECLARE_FUNCTION(execGetAnimationTrackNames); \
	DECLARE_FUNCTION(execGetNumKeys); \
	DECLARE_FUNCTION(execGetNumFrames);


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_ACCESSORS
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBlueprintLibrary)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UAnimationBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimationBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), NO_API) \
	DECLARE_SERIALIZER(UAnimationBlueprintLibrary)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBlueprintLibrary(UAnimationBlueprintLibrary&&); \
	NO_API UAnimationBlueprintLibrary(const UAnimationBlueprintLibrary&); \
public: \
	NO_API virtual ~UAnimationBlueprintLibrary();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationBlueprintLibrary(UAnimationBlueprintLibrary&&); \
	NO_API UAnimationBlueprintLibrary(const UAnimationBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationBlueprintLibrary) \
	NO_API virtual ~UAnimationBlueprintLibrary();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_62_PROLOG
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_ACCESSORS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_INCLASS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_ACCESSORS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<class UAnimationBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimationBlueprintLibrary_h


#define FOREACH_ENUM_ESMARTNAMECONTAINERTYPE(op) \
	op(ESmartNameContainerType::SNCT_CurveMapping) \
	op(ESmartNameContainerType::SNCT_TrackCurveMapping) 

enum class ESmartNameContainerType : uint8;
template<> struct TIsUEnumClass<ESmartNameContainerType> { enum { Value = true }; };
template<> ANIMATIONBLUEPRINTLIBRARY_API UEnum* StaticEnum<ESmartNameContainerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
