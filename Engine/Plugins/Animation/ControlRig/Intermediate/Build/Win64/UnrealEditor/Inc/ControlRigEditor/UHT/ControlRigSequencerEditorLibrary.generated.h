// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ControlRigSequencerEditorLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimSeqExportOption;
class UAnimSequence;
class UControlRig;
class UControlRigSnapSettings;
class ULevelSequence;
class UMovieSceneControlRigParameterSection;
class UMovieSceneControlRigParameterTrack;
class UMovieSceneSection;
class UMovieSceneTrack;
class UMovieSceneUserImportFBXControlRigSettings;
class UObject;
class USkeletalMeshComponent;
class UTickableConstraint;
class UTransformableHandle;
class UWorld;
enum class EAnimToolBlendOperation : uint8;
enum class EControlRigFKRigExecuteMode : uint8;
enum class ESequenceTimeUnit : uint8;
enum class ETransformConstraintType : uint8;
struct FControlRigSequencerBindingProxy;
struct FControlRigSnapperSelection;
struct FEulerTransform;
struct FFrameNumber;
struct FMovieSceneBindingProxy;
struct FRigElementKey;
struct FRigSpacePickerBakeSettings;
struct FTransformNoScale;
#ifdef CONTROLRIGEDITOR_ControlRigSequencerEditorLibrary_generated_h
#error "ControlRigSequencerEditorLibrary.generated.h already included, missing '#pragma once' in ControlRigSequencerEditorLibrary.h"
#endif
#define CONTROLRIGEDITOR_ControlRigSequencerEditorLibrary_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigSequencerBindingProxy_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FControlRigSequencerBindingProxy>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetControlRigApplyMode); \
	DECLARE_FUNCTION(execGetFKControlRigApplyMode); \
	DECLARE_FUNCTION(execIsFKControlRig); \
	DECLARE_FUNCTION(execHideAllControls); \
	DECLARE_FUNCTION(execShowAllControls); \
	DECLARE_FUNCTION(execSetControlsMask); \
	DECLARE_FUNCTION(execGetControlsMask); \
	DECLARE_FUNCTION(execRenameControlRigControlChannels); \
	DECLARE_FUNCTION(execMoveControlRigSpace); \
	DECLARE_FUNCTION(execDeleteControlRigSpace); \
	DECLARE_FUNCTION(execBakeControlRigSpace); \
	DECLARE_FUNCTION(execSetControlRigSpace); \
	DECLARE_FUNCTION(execGetWorldSpaceReferenceKey); \
	DECLARE_FUNCTION(execGetDefaultParentKey); \
	DECLARE_FUNCTION(execCollapseControlRigAnimLayers); \
	DECLARE_FUNCTION(execImportFBXToControlRigTrack); \
	DECLARE_FUNCTION(execSetLocalControlRigTransforms); \
	DECLARE_FUNCTION(execSetLocalControlRigTransform); \
	DECLARE_FUNCTION(execGetLocalControlRigTransforms); \
	DECLARE_FUNCTION(execGetLocalControlRigTransform); \
	DECLARE_FUNCTION(execSetLocalControlRigTransformNoScales); \
	DECLARE_FUNCTION(execSetLocalControlRigTransformNoScale); \
	DECLARE_FUNCTION(execGetLocalControlRigTransformNoScales); \
	DECLARE_FUNCTION(execGetLocalControlRigTransformNoScale); \
	DECLARE_FUNCTION(execSetLocalControlRigEulerTransforms); \
	DECLARE_FUNCTION(execSetLocalControlRigEulerTransform); \
	DECLARE_FUNCTION(execGetLocalControlRigEulerTransforms); \
	DECLARE_FUNCTION(execGetLocalControlRigEulerTransform); \
	DECLARE_FUNCTION(execSetLocalControlRigScales); \
	DECLARE_FUNCTION(execSetLocalControlRigScale); \
	DECLARE_FUNCTION(execGetLocalControlRigScales); \
	DECLARE_FUNCTION(execGetLocalControlRigScale); \
	DECLARE_FUNCTION(execSetLocalControlRigRotators); \
	DECLARE_FUNCTION(execSetLocalControlRigRotator); \
	DECLARE_FUNCTION(execGetLocalControlRigRotators); \
	DECLARE_FUNCTION(execGetLocalControlRigRotator); \
	DECLARE_FUNCTION(execSetLocalControlRigPositions); \
	DECLARE_FUNCTION(execSetLocalControlRigPosition); \
	DECLARE_FUNCTION(execGetLocalControlRigPositions); \
	DECLARE_FUNCTION(execGetLocalControlRigPosition); \
	DECLARE_FUNCTION(execSetLocalControlRigVector2Ds); \
	DECLARE_FUNCTION(execSetLocalControlRigVector2D); \
	DECLARE_FUNCTION(execGetLocalControlRigVector2Ds); \
	DECLARE_FUNCTION(execGetLocalControlRigVector2D); \
	DECLARE_FUNCTION(execSetLocalControlRigInts); \
	DECLARE_FUNCTION(execSetLocalControlRigInt); \
	DECLARE_FUNCTION(execGetLocalControlRigInts); \
	DECLARE_FUNCTION(execGetLocalControlRigInt); \
	DECLARE_FUNCTION(execSetLocalControlRigBools); \
	DECLARE_FUNCTION(execSetLocalControlRigBool); \
	DECLARE_FUNCTION(execGetLocalControlRigBools); \
	DECLARE_FUNCTION(execGetLocalControlRigBool); \
	DECLARE_FUNCTION(execSetLocalControlRigFloats); \
	DECLARE_FUNCTION(execSetLocalControlRigFloat); \
	DECLARE_FUNCTION(execGetLocalControlRigFloats); \
	DECLARE_FUNCTION(execGetLocalControlRigFloat); \
	DECLARE_FUNCTION(execSetControlRigWorldTransforms); \
	DECLARE_FUNCTION(execSetControlRigWorldTransform); \
	DECLARE_FUNCTION(execGetControlRigWorldTransforms); \
	DECLARE_FUNCTION(execGetControlRigWorldTransform); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentWorldTransforms); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentWorldTransform); \
	DECLARE_FUNCTION(execGetActorWorldTransforms); \
	DECLARE_FUNCTION(execGetActorWorldTransform); \
	DECLARE_FUNCTION(execSnapControlRig); \
	DECLARE_FUNCTION(execBlendValuesOnSelected); \
	DECLARE_FUNCTION(execTweenControlRig); \
	DECLARE_FUNCTION(execCompensateAll); \
	DECLARE_FUNCTION(execCompensate); \
	DECLARE_FUNCTION(execDeleteConstraintKey); \
	DECLARE_FUNCTION(execMoveConstraintKey); \
	DECLARE_FUNCTION(execGetConstraintsForHandle); \
	DECLARE_FUNCTION(execSetConstraintActiveKey); \
	DECLARE_FUNCTION(execGetConstraintKeys); \
	DECLARE_FUNCTION(execAddConstraint); \
	DECLARE_FUNCTION(execBakeConstraint); \
	DECLARE_FUNCTION(execBakeToControlRig); \
	DECLARE_FUNCTION(execLoadAnimSequenceIntoControlRigSection); \
	DECLARE_FUNCTION(execFindOrCreateControlRigComponentTrack); \
	DECLARE_FUNCTION(execFindOrCreateControlRigTrack); \
	DECLARE_FUNCTION(execGetControlRigs); \
	DECLARE_FUNCTION(execGetVisibleControlRigs);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetControlRigApplyMode); \
	DECLARE_FUNCTION(execGetFKControlRigApplyMode); \
	DECLARE_FUNCTION(execIsFKControlRig); \
	DECLARE_FUNCTION(execHideAllControls); \
	DECLARE_FUNCTION(execShowAllControls); \
	DECLARE_FUNCTION(execSetControlsMask); \
	DECLARE_FUNCTION(execGetControlsMask); \
	DECLARE_FUNCTION(execRenameControlRigControlChannels); \
	DECLARE_FUNCTION(execMoveControlRigSpace); \
	DECLARE_FUNCTION(execDeleteControlRigSpace); \
	DECLARE_FUNCTION(execBakeControlRigSpace); \
	DECLARE_FUNCTION(execSetControlRigSpace); \
	DECLARE_FUNCTION(execGetWorldSpaceReferenceKey); \
	DECLARE_FUNCTION(execGetDefaultParentKey); \
	DECLARE_FUNCTION(execCollapseControlRigAnimLayers); \
	DECLARE_FUNCTION(execImportFBXToControlRigTrack); \
	DECLARE_FUNCTION(execSetLocalControlRigTransforms); \
	DECLARE_FUNCTION(execSetLocalControlRigTransform); \
	DECLARE_FUNCTION(execGetLocalControlRigTransforms); \
	DECLARE_FUNCTION(execGetLocalControlRigTransform); \
	DECLARE_FUNCTION(execSetLocalControlRigTransformNoScales); \
	DECLARE_FUNCTION(execSetLocalControlRigTransformNoScale); \
	DECLARE_FUNCTION(execGetLocalControlRigTransformNoScales); \
	DECLARE_FUNCTION(execGetLocalControlRigTransformNoScale); \
	DECLARE_FUNCTION(execSetLocalControlRigEulerTransforms); \
	DECLARE_FUNCTION(execSetLocalControlRigEulerTransform); \
	DECLARE_FUNCTION(execGetLocalControlRigEulerTransforms); \
	DECLARE_FUNCTION(execGetLocalControlRigEulerTransform); \
	DECLARE_FUNCTION(execSetLocalControlRigScales); \
	DECLARE_FUNCTION(execSetLocalControlRigScale); \
	DECLARE_FUNCTION(execGetLocalControlRigScales); \
	DECLARE_FUNCTION(execGetLocalControlRigScale); \
	DECLARE_FUNCTION(execSetLocalControlRigRotators); \
	DECLARE_FUNCTION(execSetLocalControlRigRotator); \
	DECLARE_FUNCTION(execGetLocalControlRigRotators); \
	DECLARE_FUNCTION(execGetLocalControlRigRotator); \
	DECLARE_FUNCTION(execSetLocalControlRigPositions); \
	DECLARE_FUNCTION(execSetLocalControlRigPosition); \
	DECLARE_FUNCTION(execGetLocalControlRigPositions); \
	DECLARE_FUNCTION(execGetLocalControlRigPosition); \
	DECLARE_FUNCTION(execSetLocalControlRigVector2Ds); \
	DECLARE_FUNCTION(execSetLocalControlRigVector2D); \
	DECLARE_FUNCTION(execGetLocalControlRigVector2Ds); \
	DECLARE_FUNCTION(execGetLocalControlRigVector2D); \
	DECLARE_FUNCTION(execSetLocalControlRigInts); \
	DECLARE_FUNCTION(execSetLocalControlRigInt); \
	DECLARE_FUNCTION(execGetLocalControlRigInts); \
	DECLARE_FUNCTION(execGetLocalControlRigInt); \
	DECLARE_FUNCTION(execSetLocalControlRigBools); \
	DECLARE_FUNCTION(execSetLocalControlRigBool); \
	DECLARE_FUNCTION(execGetLocalControlRigBools); \
	DECLARE_FUNCTION(execGetLocalControlRigBool); \
	DECLARE_FUNCTION(execSetLocalControlRigFloats); \
	DECLARE_FUNCTION(execSetLocalControlRigFloat); \
	DECLARE_FUNCTION(execGetLocalControlRigFloats); \
	DECLARE_FUNCTION(execGetLocalControlRigFloat); \
	DECLARE_FUNCTION(execSetControlRigWorldTransforms); \
	DECLARE_FUNCTION(execSetControlRigWorldTransform); \
	DECLARE_FUNCTION(execGetControlRigWorldTransforms); \
	DECLARE_FUNCTION(execGetControlRigWorldTransform); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentWorldTransforms); \
	DECLARE_FUNCTION(execGetSkeletalMeshComponentWorldTransform); \
	DECLARE_FUNCTION(execGetActorWorldTransforms); \
	DECLARE_FUNCTION(execGetActorWorldTransform); \
	DECLARE_FUNCTION(execSnapControlRig); \
	DECLARE_FUNCTION(execBlendValuesOnSelected); \
	DECLARE_FUNCTION(execTweenControlRig); \
	DECLARE_FUNCTION(execCompensateAll); \
	DECLARE_FUNCTION(execCompensate); \
	DECLARE_FUNCTION(execDeleteConstraintKey); \
	DECLARE_FUNCTION(execMoveConstraintKey); \
	DECLARE_FUNCTION(execGetConstraintsForHandle); \
	DECLARE_FUNCTION(execSetConstraintActiveKey); \
	DECLARE_FUNCTION(execGetConstraintKeys); \
	DECLARE_FUNCTION(execAddConstraint); \
	DECLARE_FUNCTION(execBakeConstraint); \
	DECLARE_FUNCTION(execBakeToControlRig); \
	DECLARE_FUNCTION(execLoadAnimSequenceIntoControlRigSection); \
	DECLARE_FUNCTION(execFindOrCreateControlRigComponentTrack); \
	DECLARE_FUNCTION(execFindOrCreateControlRigTrack); \
	DECLARE_FUNCTION(execGetControlRigs); \
	DECLARE_FUNCTION(execGetVisibleControlRigs);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigSequencerEditorLibrary(); \
	friend struct Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics; \
public: \
	DECLARE_CLASS(UControlRigSequencerEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UControlRigSequencerEditorLibrary)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigSequencerEditorLibrary(); \
	friend struct Z_Construct_UClass_UControlRigSequencerEditorLibrary_Statics; \
public: \
	DECLARE_CLASS(UControlRigSequencerEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UControlRigSequencerEditorLibrary)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigSequencerEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigSequencerEditorLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigSequencerEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigSequencerEditorLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigSequencerEditorLibrary(UControlRigSequencerEditorLibrary&&); \
	NO_API UControlRigSequencerEditorLibrary(const UControlRigSequencerEditorLibrary&); \
public: \
	NO_API virtual ~UControlRigSequencerEditorLibrary();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigSequencerEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigSequencerEditorLibrary(UControlRigSequencerEditorLibrary&&); \
	NO_API UControlRigSequencerEditorLibrary(const UControlRigSequencerEditorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigSequencerEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigSequencerEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigSequencerEditorLibrary) \
	NO_API virtual ~UControlRigSequencerEditorLibrary();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_64_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h_69_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UControlRigSequencerEditorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_ControlRigSequencerEditorLibrary_h


#define FOREACH_ENUM_EANIMTOOLBLENDOPERATION(op) \
	op(EAnimToolBlendOperation::Tween) \
	op(EAnimToolBlendOperation::BlendToNeighbor) \
	op(EAnimToolBlendOperation::PushPull) 

enum class EAnimToolBlendOperation : uint8;
template<> struct TIsUEnumClass<EAnimToolBlendOperation> { enum { Value = true }; };
template<> CONTROLRIGEDITOR_API UEnum* StaticEnum<EAnimToolBlendOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
