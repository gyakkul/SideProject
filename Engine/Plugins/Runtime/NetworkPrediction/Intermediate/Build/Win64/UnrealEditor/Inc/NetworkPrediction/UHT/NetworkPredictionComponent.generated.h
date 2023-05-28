// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FServerReplicationRPCParameter;
#ifdef NETWORKPREDICTION_NetworkPredictionComponent_generated_h
#error "NetworkPredictionComponent.generated.h already included, missing '#pragma once' in NetworkPredictionComponent.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionComponent_generated_h

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_RPC_WRAPPERS \
	virtual bool ServerReceiveClientInput_Validate(FServerReplicationRPCParameter const& ); \
	virtual void ServerReceiveClientInput_Implementation(FServerReplicationRPCParameter const& ProxyParameter); \
 \
	DECLARE_FUNCTION(execServerReceiveClientInput);


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerReceiveClientInput_Validate(FServerReplicationRPCParameter const& ); \
	virtual void ServerReceiveClientInput_Implementation(FServerReplicationRPCParameter const& ProxyParameter); \
 \
	DECLARE_FUNCTION(execServerReceiveClientInput);


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPredictionComponent(); \
	friend struct Z_Construct_UClass_UNetworkPredictionComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkPredictionComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), NO_API) \
	DECLARE_SERIALIZER(UNetworkPredictionComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetworkPredictionProxy=NETFIELD_REP_START, \
		ReplicationProxy_Autonomous, \
		ReplicationProxy_Simulated, \
		ReplicationProxy_Replay, \
		NETFIELD_REP_END=ReplicationProxy_Replay	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkPredictionComponent(); \
	friend struct Z_Construct_UClass_UNetworkPredictionComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkPredictionComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), NO_API) \
	DECLARE_SERIALIZER(UNetworkPredictionComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NetworkPredictionProxy=NETFIELD_REP_START, \
		ReplicationProxy_Autonomous, \
		ReplicationProxy_Simulated, \
		ReplicationProxy_Replay, \
		NETFIELD_REP_END=ReplicationProxy_Replay	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkPredictionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkPredictionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkPredictionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkPredictionComponent(UNetworkPredictionComponent&&); \
	NO_API UNetworkPredictionComponent(const UNetworkPredictionComponent&); \
public: \
	NO_API virtual ~UNetworkPredictionComponent();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkPredictionComponent(UNetworkPredictionComponent&&); \
	NO_API UNetworkPredictionComponent(const UNetworkPredictionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkPredictionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPredictionComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetworkPredictionComponent) \
	NO_API virtual ~UNetworkPredictionComponent();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKPREDICTION_API UClass* StaticClass<class UNetworkPredictionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
