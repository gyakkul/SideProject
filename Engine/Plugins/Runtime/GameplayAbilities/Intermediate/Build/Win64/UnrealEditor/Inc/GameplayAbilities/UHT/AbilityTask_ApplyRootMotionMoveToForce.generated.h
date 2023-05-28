// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionMoveToForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ApplyRootMotionMoveToForce;
class UCurveVector;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;
#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToForce_generated_h
#error "AbilityTask_ApplyRootMotionMoveToForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionMoveToForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionMoveToForce_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_15_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionMoveToForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionMoveToForceDelegate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyRootMotionMoveToForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyRootMotionMoveToForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionMoveToForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionMoveToForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		Duration, \
		bSetNewMovementMode, \
		NewMovementMode, \
		bRestrictSpeedToExpected, \
		PathOffsetCurve, \
		NETFIELD_REP_END=PathOffsetCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionMoveToForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionMoveToForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionMoveToForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionMoveToForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StartLocation=NETFIELD_REP_START, \
		TargetLocation, \
		Duration, \
		bSetNewMovementMode, \
		NewMovementMode, \
		bRestrictSpeedToExpected, \
		PathOffsetCurve, \
		NETFIELD_REP_END=PathOffsetCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionMoveToForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionMoveToForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionMoveToForce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToForce(UAbilityTask_ApplyRootMotionMoveToForce&&); \
	NO_API UAbilityTask_ApplyRootMotionMoveToForce(const UAbilityTask_ApplyRootMotionMoveToForce&); \
public: \
	NO_API virtual ~UAbilityTask_ApplyRootMotionMoveToForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionMoveToForce(UAbilityTask_ApplyRootMotionMoveToForce&&); \
	NO_API UAbilityTask_ApplyRootMotionMoveToForce(const UAbilityTask_ApplyRootMotionMoveToForce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionMoveToForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionMoveToForce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionMoveToForce) \
	NO_API virtual ~UAbilityTask_ApplyRootMotionMoveToForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_ApplyRootMotionMoveToForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionMoveToForce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
