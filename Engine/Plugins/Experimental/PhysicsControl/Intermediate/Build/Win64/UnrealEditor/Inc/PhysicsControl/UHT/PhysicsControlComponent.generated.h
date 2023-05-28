// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsControlComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FPhysicsControlLimbBones;
 struct FPhysicsControlNames;
class UMeshComponent;
class USkeletalMeshComponent;
enum class EPhysicsControlType : uint8;
enum class EPhysicsMovementType : uint8;
struct FPhysicsControlData;
struct FPhysicsControlLimbSetupData;
struct FPhysicsControlMultiplier;
struct FPhysicsControlNames;
struct FPhysicsControlSettings;
struct FPhysicsControlTarget;
#ifdef PHYSICSCONTROL_PhysicsControlComponent_generated_h
#error "PhysicsControlComponent.generated.h already included, missing '#pragma once' in PhysicsControlComponent.h"
#endif
#define PHYSICSCONTROL_PhysicsControlComponent_generated_h

#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSetsContainingBodyModifier); \
	DECLARE_FUNCTION(execGetSetsContainingControl); \
	DECLARE_FUNCTION(execAddBodyModifiersToSet); \
	DECLARE_FUNCTION(execAddBodyModifierToSet); \
	DECLARE_FUNCTION(execGetBodyModifierNamesInSet); \
	DECLARE_FUNCTION(execGetAllBodyModifierNames); \
	DECLARE_FUNCTION(execGetControlNamesInSet); \
	DECLARE_FUNCTION(execGetAllControlNames); \
	DECLARE_FUNCTION(execAddControlsToSet); \
	DECLARE_FUNCTION(execAddControlToSet); \
	DECLARE_FUNCTION(execCreateControlsAndBodyModifiersFromLimbBones); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetBodyModifiersUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetBodyModifierUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifiersGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifierGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifiersCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifierCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetMovementType); \
	DECLARE_FUNCTION(execSetBodyModifiersMovementType); \
	DECLARE_FUNCTION(execSetBodyModifierMovementType); \
	DECLARE_FUNCTION(execSetBodyModifierKinematicTarget); \
	DECLARE_FUNCTION(execDestroyBodyModifiersInSet); \
	DECLARE_FUNCTION(execDestroyBodyModifiers); \
	DECLARE_FUNCTION(execDestroyBodyModifier); \
	DECLARE_FUNCTION(execCreateBodyModifiersFromLimbBones); \
	DECLARE_FUNCTION(execCreateBodyModifiersFromSkeletalMeshBelow); \
	DECLARE_FUNCTION(execCreateNamedBodyModifier); \
	DECLARE_FUNCTION(execCreateBodyModifier); \
	DECLARE_FUNCTION(execGetControlEnabled); \
	DECLARE_FUNCTION(execGetControlAutoDisable); \
	DECLARE_FUNCTION(execGetControlTarget); \
	DECLARE_FUNCTION(execGetControlMultiplier); \
	DECLARE_FUNCTION(execGetControlData); \
	DECLARE_FUNCTION(execSetControlsInSetDisableCollision); \
	DECLARE_FUNCTION(execSetControlsDisableCollision); \
	DECLARE_FUNCTION(execSetControlDisableCollision); \
	DECLARE_FUNCTION(execSetControlsInSetAutoDisable); \
	DECLARE_FUNCTION(execSetControlsAutoDisable); \
	DECLARE_FUNCTION(execSetControlAutoDisable); \
	DECLARE_FUNCTION(execSetControlsInSetEnabled); \
	DECLARE_FUNCTION(execSetControlsEnabled); \
	DECLARE_FUNCTION(execSetControlEnabled); \
	DECLARE_FUNCTION(execSetControlsInSetUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlsUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlTargetPoses); \
	DECLARE_FUNCTION(execSetControlTargetOrientation); \
	DECLARE_FUNCTION(execSetControlTargetPosition); \
	DECLARE_FUNCTION(execSetControlTargetPositionAndOrientation); \
	DECLARE_FUNCTION(execSetControlTargetsInSet); \
	DECLARE_FUNCTION(execSetControlTargets); \
	DECLARE_FUNCTION(execSetControlTarget); \
	DECLARE_FUNCTION(execResetControlPoint); \
	DECLARE_FUNCTION(execSetControlPoint); \
	DECLARE_FUNCTION(execSetControlAngularData); \
	DECLARE_FUNCTION(execSetControlLinearData); \
	DECLARE_FUNCTION(execSetControlMultipliersInSet); \
	DECLARE_FUNCTION(execSetControlMultipliers); \
	DECLARE_FUNCTION(execSetControlMultiplier); \
	DECLARE_FUNCTION(execSetControlDatasInSet); \
	DECLARE_FUNCTION(execSetControlDatas); \
	DECLARE_FUNCTION(execSetControlData); \
	DECLARE_FUNCTION(execDestroyControlsInSet); \
	DECLARE_FUNCTION(execDestroyControls); \
	DECLARE_FUNCTION(execDestroyControl); \
	DECLARE_FUNCTION(execCreateControlsFromLimbBonesAndConstraintProfile); \
	DECLARE_FUNCTION(execCreateControlsFromLimbBones); \
	DECLARE_FUNCTION(execGetLimbBonesFromSkeletalMesh); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshAndConstraintProfile); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMesh); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshAndConstraintProfileBelow); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshBelow); \
	DECLARE_FUNCTION(execCreateNamedControl); \
	DECLARE_FUNCTION(execCreateControl);


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSetsContainingBodyModifier); \
	DECLARE_FUNCTION(execGetSetsContainingControl); \
	DECLARE_FUNCTION(execAddBodyModifiersToSet); \
	DECLARE_FUNCTION(execAddBodyModifierToSet); \
	DECLARE_FUNCTION(execGetBodyModifierNamesInSet); \
	DECLARE_FUNCTION(execGetAllBodyModifierNames); \
	DECLARE_FUNCTION(execGetControlNamesInSet); \
	DECLARE_FUNCTION(execGetAllControlNames); \
	DECLARE_FUNCTION(execAddControlsToSet); \
	DECLARE_FUNCTION(execAddControlToSet); \
	DECLARE_FUNCTION(execCreateControlsAndBodyModifiersFromLimbBones); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetBodyModifiersUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetBodyModifierUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifiersGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifierGravityMultiplier); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifiersCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifierCollisionType); \
	DECLARE_FUNCTION(execSetBodyModifiersInSetMovementType); \
	DECLARE_FUNCTION(execSetBodyModifiersMovementType); \
	DECLARE_FUNCTION(execSetBodyModifierMovementType); \
	DECLARE_FUNCTION(execSetBodyModifierKinematicTarget); \
	DECLARE_FUNCTION(execDestroyBodyModifiersInSet); \
	DECLARE_FUNCTION(execDestroyBodyModifiers); \
	DECLARE_FUNCTION(execDestroyBodyModifier); \
	DECLARE_FUNCTION(execCreateBodyModifiersFromLimbBones); \
	DECLARE_FUNCTION(execCreateBodyModifiersFromSkeletalMeshBelow); \
	DECLARE_FUNCTION(execCreateNamedBodyModifier); \
	DECLARE_FUNCTION(execCreateBodyModifier); \
	DECLARE_FUNCTION(execGetControlEnabled); \
	DECLARE_FUNCTION(execGetControlAutoDisable); \
	DECLARE_FUNCTION(execGetControlTarget); \
	DECLARE_FUNCTION(execGetControlMultiplier); \
	DECLARE_FUNCTION(execGetControlData); \
	DECLARE_FUNCTION(execSetControlsInSetDisableCollision); \
	DECLARE_FUNCTION(execSetControlsDisableCollision); \
	DECLARE_FUNCTION(execSetControlDisableCollision); \
	DECLARE_FUNCTION(execSetControlsInSetAutoDisable); \
	DECLARE_FUNCTION(execSetControlsAutoDisable); \
	DECLARE_FUNCTION(execSetControlAutoDisable); \
	DECLARE_FUNCTION(execSetControlsInSetEnabled); \
	DECLARE_FUNCTION(execSetControlsEnabled); \
	DECLARE_FUNCTION(execSetControlEnabled); \
	DECLARE_FUNCTION(execSetControlsInSetUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlsUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlUseSkeletalAnimation); \
	DECLARE_FUNCTION(execSetControlTargetPoses); \
	DECLARE_FUNCTION(execSetControlTargetOrientation); \
	DECLARE_FUNCTION(execSetControlTargetPosition); \
	DECLARE_FUNCTION(execSetControlTargetPositionAndOrientation); \
	DECLARE_FUNCTION(execSetControlTargetsInSet); \
	DECLARE_FUNCTION(execSetControlTargets); \
	DECLARE_FUNCTION(execSetControlTarget); \
	DECLARE_FUNCTION(execResetControlPoint); \
	DECLARE_FUNCTION(execSetControlPoint); \
	DECLARE_FUNCTION(execSetControlAngularData); \
	DECLARE_FUNCTION(execSetControlLinearData); \
	DECLARE_FUNCTION(execSetControlMultipliersInSet); \
	DECLARE_FUNCTION(execSetControlMultipliers); \
	DECLARE_FUNCTION(execSetControlMultiplier); \
	DECLARE_FUNCTION(execSetControlDatasInSet); \
	DECLARE_FUNCTION(execSetControlDatas); \
	DECLARE_FUNCTION(execSetControlData); \
	DECLARE_FUNCTION(execDestroyControlsInSet); \
	DECLARE_FUNCTION(execDestroyControls); \
	DECLARE_FUNCTION(execDestroyControl); \
	DECLARE_FUNCTION(execCreateControlsFromLimbBonesAndConstraintProfile); \
	DECLARE_FUNCTION(execCreateControlsFromLimbBones); \
	DECLARE_FUNCTION(execGetLimbBonesFromSkeletalMesh); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshAndConstraintProfile); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMesh); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshAndConstraintProfileBelow); \
	DECLARE_FUNCTION(execCreateControlsFromSkeletalMeshBelow); \
	DECLARE_FUNCTION(execCreateNamedControl); \
	DECLARE_FUNCTION(execCreateControl);


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_ACCESSORS
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsControlComponent(); \
	friend struct Z_Construct_UClass_UPhysicsControlComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsControlComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsControlComponent)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsControlComponent(); \
	friend struct Z_Construct_UClass_UPhysicsControlComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsControlComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsControl"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsControlComponent)


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsControlComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsControlComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsControlComponent(UPhysicsControlComponent&&); \
	NO_API UPhysicsControlComponent(const UPhysicsControlComponent&); \
public: \
	NO_API virtual ~UPhysicsControlComponent();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsControlComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsControlComponent(UPhysicsControlComponent&&); \
	NO_API UPhysicsControlComponent(const UPhysicsControlComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsControlComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsControlComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsControlComponent) \
	NO_API virtual ~UPhysicsControlComponent();


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_49_PROLOG
#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_ACCESSORS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_INCLASS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_ACCESSORS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PhysicsControlComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSCONTROL_API UClass* StaticClass<class UPhysicsControlComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PhysicsControl_Source_PhysicsControl_Public_PhysicsControlComponent_h


#define FOREACH_ENUM_EPHYSICSCONTROLTYPE(op) \
	op(EPhysicsControlType::WorldSpace) \
	op(EPhysicsControlType::ParentSpace) 

enum class EPhysicsControlType : uint8;
template<> struct TIsUEnumClass<EPhysicsControlType> { enum { Value = true }; };
template<> PHYSICSCONTROL_API UEnum* StaticEnum<EPhysicsControlType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
