// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionPhysicsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKPREDICTION_NetworkPredictionPhysicsComponent_generated_h
#error "NetworkPredictionPhysicsComponent.generated.h already included, missing '#pragma once' in NetworkPredictionPhysicsComponent.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionPhysicsComponent_generated_h

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_ACCESSORS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPredictionPhysicsComponent(); \
	friend struct Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkPredictionPhysicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), NO_API) \
	DECLARE_SERIALIZER(UNetworkPredictionPhysicsComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetworkPredictionProxy=NETFIELD_REP_START, \
		ReplicationProxy, \
		NETFIELD_REP_END=ReplicationProxy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkPredictionPhysicsComponent(); \
	friend struct Z_Construct_UClass_UNetworkPredictionPhysicsComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkPredictionPhysicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), NO_API) \
	DECLARE_SERIALIZER(UNetworkPredictionPhysicsComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetworkPredictionProxy=NETFIELD_REP_START, \
		ReplicationProxy, \
		NETFIELD_REP_END=ReplicationProxy	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkPredictionPhysicsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkPredictionPhysicsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkPredictionPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionPhysicsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkPredictionPhysicsComponent(UNetworkPredictionPhysicsComponent&&); \
	NO_API UNetworkPredictionPhysicsComponent(const UNetworkPredictionPhysicsComponent&); \
public: \
	NO_API virtual ~UNetworkPredictionPhysicsComponent();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkPredictionPhysicsComponent(UNetworkPredictionPhysicsComponent&&); \
	NO_API UNetworkPredictionPhysicsComponent(const UNetworkPredictionPhysicsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkPredictionPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionPhysicsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkPredictionPhysicsComponent) \
	NO_API virtual ~UNetworkPredictionPhysicsComponent();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKPREDICTION_API UClass* StaticClass<class UNetworkPredictionPhysicsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionPhysicsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
