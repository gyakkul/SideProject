// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MockAbilitySimulation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize100;
#ifdef NETWORKPREDICTIONEXTRAS_MockAbilitySimulation_generated_h
#error "MockAbilitySimulation.generated.h already included, missing '#pragma once' in MockAbilitySimulation.h"
#endif
#define NETWORKPREDICTIONEXTRAS_MockAbilitySimulation_generated_h

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_384_DELEGATE \
static void FMockAbilityNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityNotifyStateChange, bool bNewStateValue);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_411_DELEGATE \
static void FMockAbilityBlinkCueEvent_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityBlinkCueEvent, FVector DestinationLocation, int32 RandomValue, float ElapsedTimeSeconds);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_415_DELEGATE \
static void FMockAbilityBlinkCueRollback_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityBlinkCueRollback);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_419_DELEGATE \
static void FMockAbilityPhysicsGunFireEvent_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityPhysicsGunFireEvent, FVector Start, FVector End, bool bHasCooldown, TArray<FVector_NetQuantize100> const& HitLocations, float ElapsedTimeSeconds);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetBlinkWarmupTimeSeconds); \
	DECLARE_FUNCTION(execIsBlinking); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execIsSprinting);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxStamina); \
	DECLARE_FUNCTION(execGetStamina); \
	DECLARE_FUNCTION(execGetBlinkWarmupTimeSeconds); \
	DECLARE_FUNCTION(execIsBlinking); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execIsSprinting);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_ACCESSORS
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMockFlyingAbilityComponent(); \
	friend struct Z_Construct_UClass_UMockFlyingAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UMockFlyingAbilityComponent, UFlyingMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), NO_API) \
	DECLARE_SERIALIZER(UMockFlyingAbilityComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_INCLASS \
private: \
	static void StaticRegisterNativesUMockFlyingAbilityComponent(); \
	friend struct Z_Construct_UClass_UMockFlyingAbilityComponent_Statics; \
public: \
	DECLARE_CLASS(UMockFlyingAbilityComponent, UFlyingMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), NO_API) \
	DECLARE_SERIALIZER(UMockFlyingAbilityComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMockFlyingAbilityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMockFlyingAbilityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockFlyingAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockFlyingAbilityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMockFlyingAbilityComponent(UMockFlyingAbilityComponent&&); \
	NO_API UMockFlyingAbilityComponent(const UMockFlyingAbilityComponent&); \
public: \
	NO_API virtual ~UMockFlyingAbilityComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMockFlyingAbilityComponent(UMockFlyingAbilityComponent&&); \
	NO_API UMockFlyingAbilityComponent(const UMockFlyingAbilityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMockFlyingAbilityComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMockFlyingAbilityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMockFlyingAbilityComponent) \
	NO_API virtual ~UMockFlyingAbilityComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_353_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_INCLASS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_356_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<class UMockFlyingAbilityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
