// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionConstantForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ApplyRootMotionConstantForce;
class UCurveFloat;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;
#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionConstantForce_generated_h
#error "AbilityTask_ApplyRootMotionConstantForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionConstantForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionConstantForce_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_14_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionConstantForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionConstantForceDelegate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyRootMotionConstantForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyRootMotionConstantForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionConstantForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionConstantForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionConstantForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorldDirection=NETFIELD_REP_START, \
		Strength, \
		Duration, \
		bIsAdditive, \
		StrengthOverTime, \
		bEnableGravity, \
		NETFIELD_REP_END=bEnableGravity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionConstantForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionConstantForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionConstantForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionConstantForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorldDirection=NETFIELD_REP_START, \
		Strength, \
		Duration, \
		bIsAdditive, \
		StrengthOverTime, \
		bEnableGravity, \
		NETFIELD_REP_END=bEnableGravity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionConstantForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionConstantForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionConstantForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionConstantForce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionConstantForce(UAbilityTask_ApplyRootMotionConstantForce&&); \
	NO_API UAbilityTask_ApplyRootMotionConstantForce(const UAbilityTask_ApplyRootMotionConstantForce&); \
public: \
	NO_API virtual ~UAbilityTask_ApplyRootMotionConstantForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionConstantForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionConstantForce(UAbilityTask_ApplyRootMotionConstantForce&&); \
	NO_API UAbilityTask_ApplyRootMotionConstantForce(const UAbilityTask_ApplyRootMotionConstantForce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionConstantForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionConstantForce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionConstantForce) \
	NO_API virtual ~UAbilityTask_ApplyRootMotionConstantForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_ApplyRootMotionConstantForce."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_ApplyRootMotionConstantForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionConstantForce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
