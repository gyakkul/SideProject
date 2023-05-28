// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockCharacterAbilitySimulation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKPREDICTIONEXTRAS_MockCharacterAbilitySimulation_generated_h
#error "MockCharacterAbilitySimulation.generated.h already included, missing '#pragma once' in MockCharacterAbilitySimulation.h"
#endif
#define NETWORKPREDICTIONEXTRAS_MockCharacterAbilitySimulation_generated_h

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_187_DELEGATE \
static void FMockCharacterAbilityNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityNotifyStateChange, bool bNewStateValue);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_222_DELEGATE \
static void FMockCharacterAbilityBlinkCueEvent_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityBlinkCueEvent, FVector DestinationLocation, int32 RandomValue, float ElapsedTimeSeconds);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_226_DELEGATE \
static void FMockCharacterAbilityBlinkCueRollback_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityBlinkCueRollback);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetBlinkWarmupTimeSeconds); \
	DECLARE_FUNCTION(execIsJumping); \
	DECLARE_FUNCTION(execIsBlinking); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execIsSprinting);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetBlinkWarmupTimeSeconds); \
	DECLARE_FUNCTION(execIsJumping); \
	DECLARE_FUNCTION(execIsBlinking); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execIsSprinting);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_ACCESSORS
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockCharacterAbilityComponent(); \
	friend struct Z_Construct_UClass_UMockCharacterAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UMockCharacterAbilityComponent, UCharacterMotionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), NO_API) \
	DECLARE_SERIALIZER(UMockCharacterAbilityComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUMockCharacterAbilityComponent(); \
	friend struct Z_Construct_UClass_UMockCharacterAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UMockCharacterAbilityComponent, UCharacterMotionComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), NO_API) \
	DECLARE_SERIALIZER(UMockCharacterAbilityComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockCharacterAbilityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockCharacterAbilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockCharacterAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockCharacterAbilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMockCharacterAbilityComponent(UMockCharacterAbilityComponent&&); \
	NO_API UMockCharacterAbilityComponent(const UMockCharacterAbilityComponent&); \
public: \
	NO_API virtual ~UMockCharacterAbilityComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMockCharacterAbilityComponent(UMockCharacterAbilityComponent&&); \
	NO_API UMockCharacterAbilityComponent(const UMockCharacterAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockCharacterAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockCharacterAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMockCharacterAbilityComponent) \
	NO_API virtual ~UMockCharacterAbilityComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_154_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_INCLASS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_157_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<class UMockCharacterAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
