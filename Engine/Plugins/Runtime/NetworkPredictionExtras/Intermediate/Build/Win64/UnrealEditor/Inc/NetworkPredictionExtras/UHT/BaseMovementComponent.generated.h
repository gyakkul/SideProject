// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APhysicsVolume;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NETWORKPREDICTIONEXTRAS_BaseMovementComponent_generated_h
#error "BaseMovementComponent.generated.h already included, missing '#pragma once' in BaseMovementComponent.h"
#endif
#define NETWORKPREDICTIONEXTRAS_BaseMovementComponent_generated_h

#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPhysicsVolumeChanged); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPhysicsVolumeChanged); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_ACCESSORS
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMovementComponent(); \
	friend struct Z_Construct_UClass_UBaseMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseMovementComponent, UNetworkPredictionComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), NO_API) \
	DECLARE_SERIALIZER(UBaseMovementComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBaseMovementComponent(); \
	friend struct Z_Construct_UClass_UBaseMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseMovementComponent, UNetworkPredictionComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPredictionExtras"), NO_API) \
	DECLARE_SERIALIZER(UBaseMovementComponent)


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseMovementComponent(UBaseMovementComponent&&); \
	NO_API UBaseMovementComponent(const UBaseMovementComponent&); \
public: \
	NO_API virtual ~UBaseMovementComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseMovementComponent(UBaseMovementComponent&&); \
	NO_API UBaseMovementComponent(const UBaseMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMovementComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBaseMovementComponent) \
	NO_API virtual ~UBaseMovementComponent();


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<class UBaseMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_BaseMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
