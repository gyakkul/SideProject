// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SceneComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhysicsVolume;
class USceneComponent;
enum class EAttachmentRule : uint8;
enum class EDetachmentRule : uint8;
struct FHitResult;
#ifdef ENGINE_SceneComponent_generated_h
#error "SceneComponent.generated.h already included, missing '#pragma once' in SceneComponent.h"
#endif
#define ENGINE_SceneComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_82_DELEGATE \
ENGINE_API void FPhysicsVolumeChanged_DelegateWrapper(const FMulticastScriptDelegate& PhysicsVolumeChanged, APhysicsVolume* NewVolume);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_83_DELEGATE \
ENGINE_API void FIsRootComponentChanged_DelegateWrapper(const FMulticastScriptDelegate& IsRootComponentChanged, USceneComponent* UpdatedComponent, bool bIsRootComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMobility); \
	DECLARE_FUNCTION(execK2_SetWorldLocationAndRotation); \
	DECLARE_FUNCTION(execSetAbsolute); \
	DECLARE_FUNCTION(execK2_SetRelativeLocationAndRotation); \
	DECLARE_FUNCTION(execGetPhysicsVolume); \
	DECLARE_FUNCTION(execSetHiddenInGame); \
	DECLARE_FUNCTION(execToggleVisibility); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetComponentVelocity); \
	DECLARE_FUNCTION(execDoesSocketExist); \
	DECLARE_FUNCTION(execGetSocketQuaternion); \
	DECLARE_FUNCTION(execGetSocketRotation); \
	DECLARE_FUNCTION(execGetSocketLocation); \
	DECLARE_FUNCTION(execGetSocketTransform); \
	DECLARE_FUNCTION(execGetAllSocketNames); \
	DECLARE_FUNCTION(execK2_DetachFromComponent); \
	DECLARE_FUNCTION(execDetachFromParent); \
	DECLARE_FUNCTION(execK2_AttachToComponent); \
	DECLARE_FUNCTION(execK2_AttachTo); \
	DECLARE_FUNCTION(execGetChildrenComponents); \
	DECLARE_FUNCTION(execGetChildComponent); \
	DECLARE_FUNCTION(execGetNumChildrenComponents); \
	DECLARE_FUNCTION(execGetParentComponents); \
	DECLARE_FUNCTION(execGetAttachSocketName); \
	DECLARE_FUNCTION(execGetAttachParent); \
	DECLARE_FUNCTION(execIsAnySimulatingPhysics); \
	DECLARE_FUNCTION(execIsSimulatingPhysics); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execK2_GetComponentToWorld); \
	DECLARE_FUNCTION(execK2_GetComponentScale); \
	DECLARE_FUNCTION(execK2_GetComponentRotation); \
	DECLARE_FUNCTION(execK2_GetComponentLocation); \
	DECLARE_FUNCTION(execK2_AddWorldTransformKeepScale); \
	DECLARE_FUNCTION(execK2_AddWorldTransform); \
	DECLARE_FUNCTION(execK2_AddWorldRotation); \
	DECLARE_FUNCTION(execK2_AddWorldOffset); \
	DECLARE_FUNCTION(execK2_SetWorldTransform); \
	DECLARE_FUNCTION(execSetWorldScale3D); \
	DECLARE_FUNCTION(execK2_SetWorldRotation); \
	DECLARE_FUNCTION(execK2_SetWorldLocation); \
	DECLARE_FUNCTION(execK2_AddLocalTransform); \
	DECLARE_FUNCTION(execK2_AddLocalRotation); \
	DECLARE_FUNCTION(execK2_AddLocalOffset); \
	DECLARE_FUNCTION(execK2_AddRelativeRotation); \
	DECLARE_FUNCTION(execK2_AddRelativeLocation); \
	DECLARE_FUNCTION(execSetRelativeScale3D); \
	DECLARE_FUNCTION(execResetRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeRotation); \
	DECLARE_FUNCTION(execK2_SetRelativeLocation); \
	DECLARE_FUNCTION(execOnRep_Visibility); \
	DECLARE_FUNCTION(execOnRep_AttachSocketName); \
	DECLARE_FUNCTION(execOnRep_AttachChildren); \
	DECLARE_FUNCTION(execOnRep_AttachParent); \
	DECLARE_FUNCTION(execOnRep_Transform); \
	DECLARE_FUNCTION(execSetShouldUpdatePhysicsVolume); \
	DECLARE_FUNCTION(execGetShouldUpdatePhysicsVolume);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMobility); \
	DECLARE_FUNCTION(execK2_SetWorldLocationAndRotation); \
	DECLARE_FUNCTION(execSetAbsolute); \
	DECLARE_FUNCTION(execK2_SetRelativeLocationAndRotation); \
	DECLARE_FUNCTION(execGetPhysicsVolume); \
	DECLARE_FUNCTION(execSetHiddenInGame); \
	DECLARE_FUNCTION(execToggleVisibility); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execGetComponentVelocity); \
	DECLARE_FUNCTION(execDoesSocketExist); \
	DECLARE_FUNCTION(execGetSocketQuaternion); \
	DECLARE_FUNCTION(execGetSocketRotation); \
	DECLARE_FUNCTION(execGetSocketLocation); \
	DECLARE_FUNCTION(execGetSocketTransform); \
	DECLARE_FUNCTION(execGetAllSocketNames); \
	DECLARE_FUNCTION(execK2_DetachFromComponent); \
	DECLARE_FUNCTION(execDetachFromParent); \
	DECLARE_FUNCTION(execK2_AttachToComponent); \
	DECLARE_FUNCTION(execK2_AttachTo); \
	DECLARE_FUNCTION(execGetChildrenComponents); \
	DECLARE_FUNCTION(execGetChildComponent); \
	DECLARE_FUNCTION(execGetNumChildrenComponents); \
	DECLARE_FUNCTION(execGetParentComponents); \
	DECLARE_FUNCTION(execGetAttachSocketName); \
	DECLARE_FUNCTION(execGetAttachParent); \
	DECLARE_FUNCTION(execIsAnySimulatingPhysics); \
	DECLARE_FUNCTION(execIsSimulatingPhysics); \
	DECLARE_FUNCTION(execGetRightVector); \
	DECLARE_FUNCTION(execGetUpVector); \
	DECLARE_FUNCTION(execGetForwardVector); \
	DECLARE_FUNCTION(execK2_GetComponentToWorld); \
	DECLARE_FUNCTION(execK2_GetComponentScale); \
	DECLARE_FUNCTION(execK2_GetComponentRotation); \
	DECLARE_FUNCTION(execK2_GetComponentLocation); \
	DECLARE_FUNCTION(execK2_AddWorldTransformKeepScale); \
	DECLARE_FUNCTION(execK2_AddWorldTransform); \
	DECLARE_FUNCTION(execK2_AddWorldRotation); \
	DECLARE_FUNCTION(execK2_AddWorldOffset); \
	DECLARE_FUNCTION(execK2_SetWorldTransform); \
	DECLARE_FUNCTION(execSetWorldScale3D); \
	DECLARE_FUNCTION(execK2_SetWorldRotation); \
	DECLARE_FUNCTION(execK2_SetWorldLocation); \
	DECLARE_FUNCTION(execK2_AddLocalTransform); \
	DECLARE_FUNCTION(execK2_AddLocalRotation); \
	DECLARE_FUNCTION(execK2_AddLocalOffset); \
	DECLARE_FUNCTION(execK2_AddRelativeRotation); \
	DECLARE_FUNCTION(execK2_AddRelativeLocation); \
	DECLARE_FUNCTION(execSetRelativeScale3D); \
	DECLARE_FUNCTION(execResetRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeTransform); \
	DECLARE_FUNCTION(execK2_SetRelativeRotation); \
	DECLARE_FUNCTION(execK2_SetRelativeLocation); \
	DECLARE_FUNCTION(execOnRep_Visibility); \
	DECLARE_FUNCTION(execOnRep_AttachSocketName); \
	DECLARE_FUNCTION(execOnRep_AttachChildren); \
	DECLARE_FUNCTION(execOnRep_AttachParent); \
	DECLARE_FUNCTION(execOnRep_Transform); \
	DECLARE_FUNCTION(execSetShouldUpdatePhysicsVolume); \
	DECLARE_FUNCTION(execGetShouldUpdatePhysicsVolume);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSceneComponent(); \
	friend struct Z_Construct_UClass_USceneComponent_Statics; \
public: \
	DECLARE_CLASS(USceneComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USceneComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachParent=NETFIELD_REP_START, \
		AttachSocketName, \
		AttachChildren, \
		RelativeLocation, \
		RelativeRotation, \
		RelativeScale3D, \
		bAbsoluteLocation, \
		bAbsoluteRotation, \
		bAbsoluteScale, \
		bVisible, \
		bShouldBeAttached, \
		bShouldSnapLocationWhenAttached, \
		bShouldSnapRotationWhenAttached, \
		bShouldSnapScaleWhenAttached, \
		Mobility, \
		NETFIELD_REP_END=Mobility	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_INCLASS \
private: \
	static void StaticRegisterNativesUSceneComponent(); \
	friend struct Z_Construct_UClass_USceneComponent_Statics; \
public: \
	DECLARE_CLASS(USceneComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_USceneComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USceneComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		AttachParent=NETFIELD_REP_START, \
		AttachSocketName, \
		AttachChildren, \
		RelativeLocation, \
		RelativeRotation, \
		RelativeScale3D, \
		bAbsoluteLocation, \
		bAbsoluteRotation, \
		bAbsoluteScale, \
		bVisible, \
		bShouldBeAttached, \
		bShouldSnapLocationWhenAttached, \
		bShouldSnapRotationWhenAttached, \
		bShouldSnapScaleWhenAttached, \
		Mobility, \
		NETFIELD_REP_END=Mobility	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USceneComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneComponent(USceneComponent&&); \
	NO_API USceneComponent(const USceneComponent&); \
public: \
	NO_API virtual ~USceneComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USceneComponent(USceneComponent&&); \
	NO_API USceneComponent(const USceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneComponent) \
	NO_API virtual ~USceneComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_91_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h_1691_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSceneComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSceneComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SceneComponent_h


#define FOREACH_ENUM_EDETAILMODE(op) \
	op(DM_Low) \
	op(DM_Medium) \
	op(DM_High) 

enum EDetailMode : int;
template<> ENGINE_API UEnum* StaticEnum<EDetailMode>();

#define FOREACH_ENUM_ERELATIVETRANSFORMSPACE(op) \
	op(RTS_World) \
	op(RTS_Actor) \
	op(RTS_Component) \
	op(RTS_ParentBoneSpace) 

enum ERelativeTransformSpace : int;
template<> ENGINE_API UEnum* StaticEnum<ERelativeTransformSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
