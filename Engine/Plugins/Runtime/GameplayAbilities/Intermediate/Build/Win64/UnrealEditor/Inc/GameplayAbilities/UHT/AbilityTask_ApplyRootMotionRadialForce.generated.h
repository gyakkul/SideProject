// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionRadialForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAbilityTask_ApplyRootMotionRadialForce;
class UCurveFloat;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;
#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionRadialForce_generated_h
#error "AbilityTask_ApplyRootMotionRadialForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionRadialForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionRadialForce_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_15_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionRadialForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionRadialForceDelegate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyRootMotionRadialForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyRootMotionRadialForce);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionRadialForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionRadialForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionRadialForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Location=NETFIELD_REP_START, \
		LocationActor, \
		Strength, \
		Duration, \
		Radius, \
		bIsPush, \
		bIsAdditive, \
		bNoZForce, \
		StrengthDistanceFalloff, \
		StrengthOverTime, \
		bUseFixedWorldDirection, \
		FixedWorldDirection, \
		NETFIELD_REP_END=FixedWorldDirection	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionRadialForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionRadialForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionRadialForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionRadialForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Location=NETFIELD_REP_START, \
		LocationActor, \
		Strength, \
		Duration, \
		Radius, \
		bIsPush, \
		bIsAdditive, \
		bNoZForce, \
		StrengthDistanceFalloff, \
		StrengthOverTime, \
		bUseFixedWorldDirection, \
		FixedWorldDirection, \
		NETFIELD_REP_END=FixedWorldDirection	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionRadialForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionRadialForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionRadialForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionRadialForce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionRadialForce(UAbilityTask_ApplyRootMotionRadialForce&&); \
	NO_API UAbilityTask_ApplyRootMotionRadialForce(const UAbilityTask_ApplyRootMotionRadialForce&); \
public: \
	NO_API virtual ~UAbilityTask_ApplyRootMotionRadialForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionRadialForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionRadialForce(UAbilityTask_ApplyRootMotionRadialForce&&); \
	NO_API UAbilityTask_ApplyRootMotionRadialForce(const UAbilityTask_ApplyRootMotionRadialForce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionRadialForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionRadialForce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionRadialForce) \
	NO_API virtual ~UAbilityTask_ApplyRootMotionRadialForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_ApplyRootMotionRadialForce."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_ApplyRootMotionRadialForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionRadialForce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
