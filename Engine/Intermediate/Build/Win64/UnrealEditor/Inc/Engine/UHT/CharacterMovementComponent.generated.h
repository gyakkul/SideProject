// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UPrimitiveComponent;
struct FFindFloorResult;
struct FHitResult;
struct FNavAvoidanceMask;
#ifdef ENGINE_CharacterMovementComponent_generated_h
#error "CharacterMovementComponent.generated.h already included, missing '#pragma once' in CharacterMovementComponent.h"
#endif
#define ENGINE_CharacterMovementComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterMovementComponentPostPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCharacterMovementComponentPostPhysicsTickFunction>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterMovementComponentPrePhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCharacterMovementComponentPrePhysicsTickFunction>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCapsuleTouched); \
	DECLARE_FUNCTION(execK2_ComputeFloorDist); \
	DECLARE_FUNCTION(execK2_FindFloor); \
	DECLARE_FUNCTION(execSetWalkableFloorZ); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ); \
	DECLARE_FUNCTION(execSetWalkableFloorAngle); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle); \
	DECLARE_FUNCTION(execIsWalkable); \
	DECLARE_FUNCTION(execGetValidPerchRadius); \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execGetCrouchedHalfHeight); \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight); \
	DECLARE_FUNCTION(execClearAccumulatedForces); \
	DECLARE_FUNCTION(execGetAnalogInputModifier); \
	DECLARE_FUNCTION(execGetCurrentAcceleration); \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration); \
	DECLARE_FUNCTION(execGetMaxAcceleration); \
	DECLARE_FUNCTION(execGetMinAnalogSpeed); \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime); \
	DECLARE_FUNCTION(execGetMaxJumpHeight); \
	DECLARE_FUNCTION(execCalcVelocity); \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity); \
	DECLARE_FUNCTION(execGetMovementBase); \
	DECLARE_FUNCTION(execDisableMovement); \
	DECLARE_FUNCTION(execIsWalking); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execGetCharacterOwner); \
	DECLARE_FUNCTION(execSetAvoidanceEnabled); \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execGetLastUpdateRequestedVelocity); \
	DECLARE_FUNCTION(execGetLastUpdateVelocity); \
	DECLARE_FUNCTION(execGetLastUpdateRotation); \
	DECLARE_FUNCTION(execGetLastUpdateLocation);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCapsuleTouched); \
	DECLARE_FUNCTION(execK2_ComputeFloorDist); \
	DECLARE_FUNCTION(execK2_FindFloor); \
	DECLARE_FUNCTION(execSetWalkableFloorZ); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorZ); \
	DECLARE_FUNCTION(execSetWalkableFloorAngle); \
	DECLARE_FUNCTION(execK2_GetWalkableFloorAngle); \
	DECLARE_FUNCTION(execIsWalkable); \
	DECLARE_FUNCTION(execGetValidPerchRadius); \
	DECLARE_FUNCTION(execGetPerchRadiusThreshold); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execGetCrouchedHalfHeight); \
	DECLARE_FUNCTION(execSetCrouchedHalfHeight); \
	DECLARE_FUNCTION(execClearAccumulatedForces); \
	DECLARE_FUNCTION(execGetAnalogInputModifier); \
	DECLARE_FUNCTION(execGetCurrentAcceleration); \
	DECLARE_FUNCTION(execGetMaxBrakingDeceleration); \
	DECLARE_FUNCTION(execGetMaxAcceleration); \
	DECLARE_FUNCTION(execGetMinAnalogSpeed); \
	DECLARE_FUNCTION(execGetMaxJumpHeightWithJumpTime); \
	DECLARE_FUNCTION(execGetMaxJumpHeight); \
	DECLARE_FUNCTION(execCalcVelocity); \
	DECLARE_FUNCTION(execGetImpartedMovementBaseVelocity); \
	DECLARE_FUNCTION(execGetMovementBase); \
	DECLARE_FUNCTION(execDisableMovement); \
	DECLARE_FUNCTION(execIsWalking); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execGetCharacterOwner); \
	DECLARE_FUNCTION(execSetAvoidanceEnabled); \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execGetLastUpdateRequestedVelocity); \
	DECLARE_FUNCTION(execGetLastUpdateVelocity); \
	DECLARE_FUNCTION(execGetLastUpdateRotation); \
	DECLARE_FUNCTION(execGetLastUpdateLocation);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCharacterMovementComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCharacterMovementComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UCharacterMovementComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public: \
	NO_API virtual ~UCharacterMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterMovementComponent(UCharacterMovementComponent&&); \
	NO_API UCharacterMovementComponent(const UCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterMovementComponent) \
	NO_API virtual ~UCharacterMovementComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_134_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h_137_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
