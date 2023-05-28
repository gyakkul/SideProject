// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VREditorInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AVREditorTeleporter;
class UMotionControllerComponent;
class UStaticMesh;
class UVREditorMode;
enum class EControllerHand : uint8;
enum class EControllerType : uint8;
struct FLinearColor;
#ifdef VREDITOR_VREditorInteractor_generated_h
#error "VREditorInteractor.generated.h already included, missing '#pragma once' in VREditorInteractor.h"
#endif
#define VREDITOR_VREditorInteractor_generated_h

#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_SPARSE_DATA
#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_RPC_WRAPPERS \
	virtual void UpdateHandMeshRelativeTransform_Implementation(); \
	virtual float GetSlideDelta_Implementation() const; \
	virtual void SetupComponent_Implementation(AActor* OwningActor); \
	virtual void Init_Implementation(UVREditorMode* InVRMode); \
 \
	DECLARE_FUNCTION(execUpdateHandMeshRelativeTransform); \
	DECLARE_FUNCTION(execReplaceHandMeshComponent); \
	DECLARE_FUNCTION(execGetSelectAndMoveTriggerValue); \
	DECLARE_FUNCTION(execIsClickingOnUI); \
	DECLARE_FUNCTION(execIsHoveringOverUI); \
	DECLARE_FUNCTION(execTryOverrideControllerType); \
	DECLARE_FUNCTION(execSetControllerType); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execGetControllerSide); \
	DECLARE_FUNCTION(execGetTeleportActor); \
	DECLARE_FUNCTION(execSetForceLaserColor); \
	DECLARE_FUNCTION(execGetLaserEnd); \
	DECLARE_FUNCTION(execGetLaserStart); \
	DECLARE_FUNCTION(execGetLastTrackpadPosition); \
	DECLARE_FUNCTION(execGetTrackpadPosition); \
	DECLARE_FUNCTION(execIsTouchingTrackpad); \
	DECLARE_FUNCTION(execSetForceShowLaser); \
	DECLARE_FUNCTION(execGetSlideDelta); \
	DECLARE_FUNCTION(execGetControllerHandSide); \
	DECLARE_FUNCTION(execSetControllerHandSide); \
	DECLARE_FUNCTION(execGetMotionControllerComponent); \
	DECLARE_FUNCTION(execGetHMDDeviceType); \
	DECLARE_FUNCTION(execSetupComponent); \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateHandMeshRelativeTransform_Implementation(); \
	virtual float GetSlideDelta_Implementation() const; \
	virtual void SetupComponent_Implementation(AActor* OwningActor); \
	virtual void Init_Implementation(UVREditorMode* InVRMode); \
 \
	DECLARE_FUNCTION(execUpdateHandMeshRelativeTransform); \
	DECLARE_FUNCTION(execReplaceHandMeshComponent); \
	DECLARE_FUNCTION(execGetSelectAndMoveTriggerValue); \
	DECLARE_FUNCTION(execIsClickingOnUI); \
	DECLARE_FUNCTION(execIsHoveringOverUI); \
	DECLARE_FUNCTION(execTryOverrideControllerType); \
	DECLARE_FUNCTION(execSetControllerType); \
	DECLARE_FUNCTION(execGetControllerType); \
	DECLARE_FUNCTION(execGetControllerSide); \
	DECLARE_FUNCTION(execGetTeleportActor); \
	DECLARE_FUNCTION(execSetForceLaserColor); \
	DECLARE_FUNCTION(execGetLaserEnd); \
	DECLARE_FUNCTION(execGetLaserStart); \
	DECLARE_FUNCTION(execGetLastTrackpadPosition); \
	DECLARE_FUNCTION(execGetTrackpadPosition); \
	DECLARE_FUNCTION(execIsTouchingTrackpad); \
	DECLARE_FUNCTION(execSetForceShowLaser); \
	DECLARE_FUNCTION(execGetSlideDelta); \
	DECLARE_FUNCTION(execGetControllerHandSide); \
	DECLARE_FUNCTION(execSetControllerHandSide); \
	DECLARE_FUNCTION(execGetMotionControllerComponent); \
	DECLARE_FUNCTION(execGetHMDDeviceType); \
	DECLARE_FUNCTION(execSetupComponent); \
	DECLARE_FUNCTION(execInit);


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_ACCESSORS
#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVREditorInteractor(); \
	friend struct Z_Construct_UClass_UVREditorInteractor_Statics; \
public: \
	DECLARE_CLASS(UVREditorInteractor, UViewportInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorInteractor)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUVREditorInteractor(); \
	friend struct Z_Construct_UClass_UVREditorInteractor_Statics; \
public: \
	DECLARE_CLASS(UVREditorInteractor, UViewportInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VREditor"), NO_API) \
	DECLARE_SERIALIZER(UVREditorInteractor)


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVREditorInteractor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVREditorInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorInteractor(UVREditorInteractor&&); \
	NO_API UVREditorInteractor(const UVREditorInteractor&); \
public: \
	NO_API virtual ~UVREditorInteractor();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVREditorInteractor(UVREditorInteractor&&); \
	NO_API UVREditorInteractor(const UVREditorInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVREditorInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVREditorInteractor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVREditorInteractor) \
	NO_API virtual ~UVREditorInteractor();


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_41_PROLOG
#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_SPARSE_DATA \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_RPC_WRAPPERS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_ACCESSORS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_INCLASS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_SPARSE_DATA \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_ACCESSORS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREDITOR_API UClass* StaticClass<class UVREditorInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_VREditor_Public_VREditorInteractor_h


#define FOREACH_ENUM_ECONTROLLERTYPE(op) \
	op(EControllerType::Laser) \
	op(EControllerType::AssistingLaser) \
	op(EControllerType::UI) \
	op(EControllerType::Navigation) \
	op(EControllerType::Unknown) 

enum class EControllerType : uint8;
template<> struct TIsUEnumClass<EControllerType> { enum { Value = true }; };
template<> VREDITOR_API UEnum* StaticEnum<EControllerType>();

#define FOREACH_ENUM_ETOUCHSWIPEDIRECTION(op) \
	op(ETouchSwipeDirection::None) \
	op(ETouchSwipeDirection::Left) \
	op(ETouchSwipeDirection::Right) \
	op(ETouchSwipeDirection::Up) \
	op(ETouchSwipeDirection::Down) 

enum class ETouchSwipeDirection : uint8;
template<> struct TIsUEnumClass<ETouchSwipeDirection> { enum { Value = true }; };
template<> VREDITOR_API UEnum* StaticEnum<ETouchSwipeDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
