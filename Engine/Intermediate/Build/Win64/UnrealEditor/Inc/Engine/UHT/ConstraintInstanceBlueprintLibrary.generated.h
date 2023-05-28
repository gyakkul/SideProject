// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ConstraintInstanceBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstraintInstanceAccessor;
#ifdef ENGINE_ConstraintInstanceBlueprintLibrary_generated_h
#error "ConstraintInstanceBlueprintLibrary.generated.h already included, missing '#pragma once' in ConstraintInstanceBlueprintLibrary.h"
#endif
#define ENGINE_ConstraintInstanceBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyParams); \
	DECLARE_FUNCTION(execGetAngularDriveParams); \
	DECLARE_FUNCTION(execSetAngularDriveParams); \
	DECLARE_FUNCTION(execGetAngularVelocityTarget); \
	DECLARE_FUNCTION(execSetAngularVelocityTarget); \
	DECLARE_FUNCTION(execGetAngularOrientationTarget); \
	DECLARE_FUNCTION(execSetAngularOrientationTarget); \
	DECLARE_FUNCTION(execGetAngularDriveMode); \
	DECLARE_FUNCTION(execSetAngularDriveMode); \
	DECLARE_FUNCTION(execGetAngularVelocityDriveSLERP); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveSLERP); \
	DECLARE_FUNCTION(execGetAngularVelocityDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveTwistAndSwing); \
	DECLARE_FUNCTION(execGetOrientationDriveSLERP); \
	DECLARE_FUNCTION(execSetOrientationDriveSLERP); \
	DECLARE_FUNCTION(execGetOrientationDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetOrientationDriveTwistAndSwing); \
	DECLARE_FUNCTION(execGetLinearDriveParams); \
	DECLARE_FUNCTION(execSetLinearDriveParams); \
	DECLARE_FUNCTION(execGetLinearVelocityTarget); \
	DECLARE_FUNCTION(execSetLinearVelocityTarget); \
	DECLARE_FUNCTION(execGetLinearPositionTarget); \
	DECLARE_FUNCTION(execSetLinearPositionTarget); \
	DECLARE_FUNCTION(execGetLinearVelocityDrive); \
	DECLARE_FUNCTION(execSetLinearVelocityDrive); \
	DECLARE_FUNCTION(execGetLinearPositionDrive); \
	DECLARE_FUNCTION(execSetLinearPositionDrive); \
	DECLARE_FUNCTION(execGetAngularPlasticity); \
	DECLARE_FUNCTION(execSetAngularPlasticity); \
	DECLARE_FUNCTION(execGetAngularBreakable); \
	DECLARE_FUNCTION(execSetAngularBreakable); \
	DECLARE_FUNCTION(execGetAngularSoftTwistLimitParams); \
	DECLARE_FUNCTION(execSetAngularSoftTwistLimitParams); \
	DECLARE_FUNCTION(execGetAngularSoftSwingLimitParams); \
	DECLARE_FUNCTION(execSetAngularSoftSwingLimitParams); \
	DECLARE_FUNCTION(execGetAngularLimits); \
	DECLARE_FUNCTION(execSetAngularLimits); \
	DECLARE_FUNCTION(execSetContactTransferScale); \
	DECLARE_FUNCTION(execGetContactTransferScale); \
	DECLARE_FUNCTION(execGetLinearPlasticity); \
	DECLARE_FUNCTION(execSetLinearPlasticity); \
	DECLARE_FUNCTION(execGetLinearBreakable); \
	DECLARE_FUNCTION(execSetLinearBreakable); \
	DECLARE_FUNCTION(execGetLinearSoftLimitParams); \
	DECLARE_FUNCTION(execSetLinearSoftLimitParams); \
	DECLARE_FUNCTION(execGetLinearLimits); \
	DECLARE_FUNCTION(execSetLinearLimits); \
	DECLARE_FUNCTION(execGetMassConditioningEnabled); \
	DECLARE_FUNCTION(execSetMassConditioningEnabled); \
	DECLARE_FUNCTION(execGetParentDominates); \
	DECLARE_FUNCTION(execSetParentDominates); \
	DECLARE_FUNCTION(execGetProjectionParams); \
	DECLARE_FUNCTION(execSetProjectionParams); \
	DECLARE_FUNCTION(execGetDisableCollsion); \
	DECLARE_FUNCTION(execSetDisableCollision); \
	DECLARE_FUNCTION(execGetAttachedBodyNames);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyParams); \
	DECLARE_FUNCTION(execGetAngularDriveParams); \
	DECLARE_FUNCTION(execSetAngularDriveParams); \
	DECLARE_FUNCTION(execGetAngularVelocityTarget); \
	DECLARE_FUNCTION(execSetAngularVelocityTarget); \
	DECLARE_FUNCTION(execGetAngularOrientationTarget); \
	DECLARE_FUNCTION(execSetAngularOrientationTarget); \
	DECLARE_FUNCTION(execGetAngularDriveMode); \
	DECLARE_FUNCTION(execSetAngularDriveMode); \
	DECLARE_FUNCTION(execGetAngularVelocityDriveSLERP); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveSLERP); \
	DECLARE_FUNCTION(execGetAngularVelocityDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetAngularVelocityDriveTwistAndSwing); \
	DECLARE_FUNCTION(execGetOrientationDriveSLERP); \
	DECLARE_FUNCTION(execSetOrientationDriveSLERP); \
	DECLARE_FUNCTION(execGetOrientationDriveTwistAndSwing); \
	DECLARE_FUNCTION(execSetOrientationDriveTwistAndSwing); \
	DECLARE_FUNCTION(execGetLinearDriveParams); \
	DECLARE_FUNCTION(execSetLinearDriveParams); \
	DECLARE_FUNCTION(execGetLinearVelocityTarget); \
	DECLARE_FUNCTION(execSetLinearVelocityTarget); \
	DECLARE_FUNCTION(execGetLinearPositionTarget); \
	DECLARE_FUNCTION(execSetLinearPositionTarget); \
	DECLARE_FUNCTION(execGetLinearVelocityDrive); \
	DECLARE_FUNCTION(execSetLinearVelocityDrive); \
	DECLARE_FUNCTION(execGetLinearPositionDrive); \
	DECLARE_FUNCTION(execSetLinearPositionDrive); \
	DECLARE_FUNCTION(execGetAngularPlasticity); \
	DECLARE_FUNCTION(execSetAngularPlasticity); \
	DECLARE_FUNCTION(execGetAngularBreakable); \
	DECLARE_FUNCTION(execSetAngularBreakable); \
	DECLARE_FUNCTION(execGetAngularSoftTwistLimitParams); \
	DECLARE_FUNCTION(execSetAngularSoftTwistLimitParams); \
	DECLARE_FUNCTION(execGetAngularSoftSwingLimitParams); \
	DECLARE_FUNCTION(execSetAngularSoftSwingLimitParams); \
	DECLARE_FUNCTION(execGetAngularLimits); \
	DECLARE_FUNCTION(execSetAngularLimits); \
	DECLARE_FUNCTION(execSetContactTransferScale); \
	DECLARE_FUNCTION(execGetContactTransferScale); \
	DECLARE_FUNCTION(execGetLinearPlasticity); \
	DECLARE_FUNCTION(execSetLinearPlasticity); \
	DECLARE_FUNCTION(execGetLinearBreakable); \
	DECLARE_FUNCTION(execSetLinearBreakable); \
	DECLARE_FUNCTION(execGetLinearSoftLimitParams); \
	DECLARE_FUNCTION(execSetLinearSoftLimitParams); \
	DECLARE_FUNCTION(execGetLinearLimits); \
	DECLARE_FUNCTION(execSetLinearLimits); \
	DECLARE_FUNCTION(execGetMassConditioningEnabled); \
	DECLARE_FUNCTION(execSetMassConditioningEnabled); \
	DECLARE_FUNCTION(execGetParentDominates); \
	DECLARE_FUNCTION(execSetParentDominates); \
	DECLARE_FUNCTION(execGetProjectionParams); \
	DECLARE_FUNCTION(execSetProjectionParams); \
	DECLARE_FUNCTION(execGetDisableCollsion); \
	DECLARE_FUNCTION(execSetDisableCollision); \
	DECLARE_FUNCTION(execGetAttachedBodyNames);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintInstanceBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UConstraintInstanceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UConstraintInstanceBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUConstraintInstanceBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UConstraintInstanceBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UConstraintInstanceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UConstraintInstanceBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstraintInstanceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintInstanceBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintInstanceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintInstanceBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstraintInstanceBlueprintLibrary(UConstraintInstanceBlueprintLibrary&&); \
	NO_API UConstraintInstanceBlueprintLibrary(const UConstraintInstanceBlueprintLibrary&); \
public: \
	NO_API virtual ~UConstraintInstanceBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConstraintInstanceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConstraintInstanceBlueprintLibrary(UConstraintInstanceBlueprintLibrary&&); \
	NO_API UConstraintInstanceBlueprintLibrary(const UConstraintInstanceBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintInstanceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintInstanceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintInstanceBlueprintLibrary) \
	NO_API virtual ~UConstraintInstanceBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UConstraintInstanceBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ConstraintInstanceBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
