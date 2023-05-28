// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToActorForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_ApplyRootMotionMoveToActorForce;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;
enum class ERootMotionMoveToActorTargetOffsetType : uint8;
struct FGameplayAbilityTargetDataHandle;
#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToActorForce_generated_h
#error "AbilityTask_ApplyRootMotionMoveToActorForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionMoveToActorForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToActorForce_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_18_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionMoveToActorForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionMoveToActorForceDelegate, bool DestinationReached, bool TimedOut, FVector FinalTargetLocation);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_TargetLocation); \
	DECLARE_FUNCTION(execOnTargetActorSwapped); \
	DECLARE_FUNCTION(execApplyRootMotionMoveToTargetDataActorForce); \
	DECLARE_FUNCTION(execApplyRootMotionMoveToActorForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_TargetLocation); \
	DECLARE_FUNCTION(execOnTargetActorSwapped); \
	DECLARE_FUNCTION(execApplyRootMotionMoveToTargetDataActorForce); \
	DECLARE_FUNCTION(execApplyRootMotionMoveToActorForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToActorForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionMoveToActorForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionMoveToActorForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		TargetActor, \
		TargetLocationOffset, \
		OffsetAlignment, \
		Duration, \
		bDisableDestinationReachedInterrupt, \
		bSetNewMovementMode, \
		NewMovementMode, \
		bRestrictSpeedToExpected, \
		PathOffsetCurve, \
		TimeMappingCurve, \
		TargetLerpSpeedHorizontalCurve, \
		TargetLerpSpeedVerticalCurve, \
		NETFIELD_REP_END=TargetLerpSpeedVerticalCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToActorForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToActorForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionMoveToActorForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionMoveToActorForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		TargetActor, \
		TargetLocationOffset, \
		OffsetAlignment, \
		Duration, \
		bDisableDestinationReachedInterrupt, \
		bSetNewMovementMode, \
		NewMovementMode, \
		bRestrictSpeedToExpected, \
		PathOffsetCurve, \
		TimeMappingCurve, \
		TargetLerpSpeedHorizontalCurve, \
		TargetLerpSpeedVerticalCurve, \
		NETFIELD_REP_END=TargetLerpSpeedVerticalCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToActorForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionMoveToActorForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionMoveToActorForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionMoveToActorForce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToActorForce(UAbilityTask_ApplyRootMotionMoveToActorForce&&); \
	NO_API UAbilityTask_ApplyRootMotionMoveToActorForce(const UAbilityTask_ApplyRootMotionMoveToActorForce&); \
public: \
	NO_API virtual ~UAbilityTask_ApplyRootMotionMoveToActorForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToActorForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToActorForce(UAbilityTask_ApplyRootMotionMoveToActorForce&&); \
	NO_API UAbilityTask_ApplyRootMotionMoveToActorForce(const UAbilityTask_ApplyRootMotionMoveToActorForce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionMoveToActorForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionMoveToActorForce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionMoveToActorForce) \
	NO_API virtual ~UAbilityTask_ApplyRootMotionMoveToActorForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_ApplyRootMotionMoveToActorForce."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_ApplyRootMotionMoveToActorForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToActorForce_h


#define FOREACH_ENUM_EROOTMOTIONMOVETOACTORTARGETOFFSETTYPE(op) \
	op(ERootMotionMoveToActorTargetOffsetType::AlignFromTargetToSource) \
	op(ERootMotionMoveToActorTargetOffsetType::AlignToTargetForward) \
	op(ERootMotionMoveToActorTargetOffsetType::AlignToWorldSpace) 

enum class ERootMotionMoveToActorTargetOffsetType : uint8;
template<> struct TIsUEnumClass<ERootMotionMoveToActorTargetOffsetType> { enum { Value = true }; };
template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<ERootMotionMoveToActorTargetOffsetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
