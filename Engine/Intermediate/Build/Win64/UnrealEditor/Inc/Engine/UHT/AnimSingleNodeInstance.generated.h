// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimSingleNodeInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimationAsset;
class UMirrorDataTable;
#ifdef ENGINE_AnimSingleNodeInstance_generated_h
#error "AnimSingleNodeInstance.generated.h already included, missing '#pragma once' in AnimSingleNodeInstance.h"
#endif
#define ENGINE_AnimSingleNodeInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_18_DELEGATE \
ENGINE_API void FPostEvaluateAnimEvent_DelegateWrapper(const FScriptDelegate& PostEvaluateAnimEvent);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPreviewCurveOverride); \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execSetAnimationAsset); \
	DECLARE_FUNCTION(execStopAnim); \
	DECLARE_FUNCTION(execPlayAnim); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execSetPlaying); \
	DECLARE_FUNCTION(execSetBlendSpacePosition); \
	DECLARE_FUNCTION(execSetPositionWithPreviousTime); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetReverse); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetMirrorDataTable); \
	DECLARE_FUNCTION(execSetMirrorDataTable);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPreviewCurveOverride); \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execSetAnimationAsset); \
	DECLARE_FUNCTION(execStopAnim); \
	DECLARE_FUNCTION(execPlayAnim); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execSetPlaying); \
	DECLARE_FUNCTION(execSetBlendSpacePosition); \
	DECLARE_FUNCTION(execSetPositionWithPreviousTime); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execSetReverse); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetMirrorDataTable); \
	DECLARE_FUNCTION(execSetMirrorDataTable);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSingleNodeInstance(); \
	friend struct Z_Construct_UClass_UAnimSingleNodeInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSingleNodeInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSingleNodeInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSingleNodeInstance(); \
	friend struct Z_Construct_UClass_UAnimSingleNodeInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSingleNodeInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimSingleNodeInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSingleNodeInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSingleNodeInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSingleNodeInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSingleNodeInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSingleNodeInstance(UAnimSingleNodeInstance&&); \
	NO_API UAnimSingleNodeInstance(const UAnimSingleNodeInstance&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSingleNodeInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSingleNodeInstance(UAnimSingleNodeInstance&&); \
	NO_API UAnimSingleNodeInstance(const UAnimSingleNodeInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSingleNodeInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSingleNodeInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSingleNodeInstance)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimSingleNodeInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimSingleNodeInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimSingleNodeInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
