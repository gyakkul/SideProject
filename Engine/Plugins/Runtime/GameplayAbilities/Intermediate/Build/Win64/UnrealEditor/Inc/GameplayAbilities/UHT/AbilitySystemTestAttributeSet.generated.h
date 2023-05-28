// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystemTestAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_AbilitySystemTestAttributeSet_generated_h
#error "AbilitySystemTestAttributeSet.generated.h already included, missing '#pragma once' in AbilitySystemTestAttributeSet.h"
#endif
#define GAMEPLAYABILITIES_AbilitySystemTestAttributeSet_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilitySystemTestAttributeSet(); \
	friend struct Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemTestAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemTestAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		Health, \
		Mana, \
		MaxMana, \
		SpellDamage, \
		PhysicalDamage, \
		CritChance, \
		CritMultiplier, \
		ArmorDamageReduction, \
		DodgeChance, \
		LifeSteal, \
		Strength, \
		NETFIELD_REP_END=Strength	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAbilitySystemTestAttributeSet) \
public:


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAbilitySystemTestAttributeSet(); \
	friend struct Z_Construct_UClass_UAbilitySystemTestAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UAbilitySystemTestAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayAbilities"), NO_API) \
	DECLARE_SERIALIZER(UAbilitySystemTestAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		Health, \
		Mana, \
		MaxMana, \
		SpellDamage, \
		PhysicalDamage, \
		CritChance, \
		CritMultiplier, \
		ArmorDamageReduction, \
		DodgeChance, \
		LifeSteal, \
		Strength, \
		NETFIELD_REP_END=Strength	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAbilitySystemTestAttributeSet) \
public:


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemTestAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemTestAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemTestAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemTestAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemTestAttributeSet(UAbilitySystemTestAttributeSet&&); \
	NO_API UAbilitySystemTestAttributeSet(const UAbilitySystemTestAttributeSet&); \
public: \
	NO_API virtual ~UAbilitySystemTestAttributeSet();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilitySystemTestAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilitySystemTestAttributeSet(UAbilitySystemTestAttributeSet&&); \
	NO_API UAbilitySystemTestAttributeSet(const UAbilitySystemTestAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilitySystemTestAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilitySystemTestAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilitySystemTestAttributeSet) \
	NO_API virtual ~UAbilitySystemTestAttributeSet();


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_10_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AbilitySystemTestAttributeSet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYABILITIES_API UClass* StaticClass<class UAbilitySystemTestAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_AbilitySystemTestAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
