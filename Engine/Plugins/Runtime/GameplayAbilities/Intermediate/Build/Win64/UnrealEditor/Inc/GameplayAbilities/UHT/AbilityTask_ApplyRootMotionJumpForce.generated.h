// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Tasks/AbilityTask_ApplyRootMotionJumpForce.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_ApplyRootMotionJumpForce;
class UCurveFloat;
class UCurveVector;
class UGameplayAbility;
enum class ERootMotionFinishVelocityMode : uint8;
struct FHitResult;
#ifdef GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionJumpForce_generated_h
#error "AbilityTask_ApplyRootMotionJumpForce.generated.h already included, missing '#pragma once' in AbilityTask_ApplyRootMotionJumpForce.h"
#endif
#define GAMEPLAYABILITIES_AbilityTask_ApplyRootMotionJumpForce_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_15_DELEGATE \
GAMEPLAYABILITIES_API void FApplyRootMotionJumpForceDelegate_DelegateWrapper(const FMulticastScriptDelegate& ApplyRootMotionJumpForceDelegate);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyRootMotionJumpForce); \
	DECLARE_FUNCTION(execOnLandedCallback); \
	DECLARE_FUNCTION(execFinish);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyRootMotionJumpForce); \
	DECLARE_FUNCTION(execOnLandedCallback); \
	DECLARE_FUNCTION(execFinish);


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionJumpForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionJumpForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionJumpForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Rotation=NETFIELD_REP_START, \
		Distance, \
		Height, \
		Duration, \
		MinimumLandedTriggerTime, \
		bFinishOnLanded, \
		PathOffsetCurve, \
		TimeMappingCurve, \
		NETFIELD_REP_END=TimeMappingCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAbilityTask_ApplyRootMotionJumpForce(); \
	friend struct Z_Construct_UClass_UAbilityTask_ApplyRootMotionJumpForce_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_ApplyRootMotionJumpForce, UAbilityTask_ApplyRootMotion_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_ApplyRootMotionJumpForce) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Rotation=NETFIELD_REP_START, \
		Distance, \
		Height, \
		Duration, \
		MinimumLandedTriggerTime, \
		bFinishOnLanded, \
		PathOffsetCurve, \
		TimeMappingCurve, \
		NETFIELD_REP_END=TimeMappingCurve	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionJumpForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionJumpForce) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionJumpForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionJumpForce); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionJumpForce(UAbilityTask_ApplyRootMotionJumpForce&&); \
	NO_API UAbilityTask_ApplyRootMotionJumpForce(const UAbilityTask_ApplyRootMotionJumpForce&); \
public: \
	NO_API virtual ~UAbilityTask_ApplyRootMotionJumpForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_ApplyRootMotionJumpForce(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilityTask_ApplyRootMotionJumpForce(UAbilityTask_ApplyRootMotionJumpForce&&); \
	NO_API UAbilityTask_ApplyRootMotionJumpForce(const UAbilityTask_ApplyRootMotionJumpForce&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_ApplyRootMotionJumpForce); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_ApplyRootMotionJumpForce); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_ApplyRootMotionJumpForce) \
	NO_API virtual ~UAbilityTask_ApplyRootMotionJumpForce();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilityTask_ApplyRootMotionJumpForce."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilityTask_ApplyRootMotionJumpForce>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_ApplyRootMotionJumpForce_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
