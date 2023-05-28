// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionReplicatedManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKPREDICTION_NetworkPredictionReplicatedManager_generated_h
#error "NetworkPredictionReplicatedManager.generated.h already included, missing '#pragma once' in NetworkPredictionReplicatedManager.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionReplicatedManager_generated_h

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSharedPackageMapItem_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<struct FSharedPackageMapItem>();

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSharedPackageMap_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<struct FSharedPackageMap>();

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_ACCESSORS
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANetworkPredictionReplicatedManager(); \
	friend struct Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics; \
public: \
	DECLARE_CLASS(ANetworkPredictionReplicatedManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), NO_API) \
	DECLARE_SERIALIZER(ANetworkPredictionReplicatedManager) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SharedPackageMap=NETFIELD_REP_START, \
		NETFIELD_REP_END=SharedPackageMap	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_INCLASS \
private: \
	static void StaticRegisterNativesANetworkPredictionReplicatedManager(); \
	friend struct Z_Construct_UClass_ANetworkPredictionReplicatedManager_Statics; \
public: \
	DECLARE_CLASS(ANetworkPredictionReplicatedManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NetworkPrediction"), NO_API) \
	DECLARE_SERIALIZER(ANetworkPredictionReplicatedManager) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SharedPackageMap=NETFIELD_REP_START, \
		NETFIELD_REP_END=SharedPackageMap	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANetworkPredictionReplicatedManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANetworkPredictionReplicatedManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionReplicatedManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionReplicatedManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkPredictionReplicatedManager(ANetworkPredictionReplicatedManager&&); \
	NO_API ANetworkPredictionReplicatedManager(const ANetworkPredictionReplicatedManager&); \
public: \
	NO_API virtual ~ANetworkPredictionReplicatedManager();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANetworkPredictionReplicatedManager(ANetworkPredictionReplicatedManager&&); \
	NO_API ANetworkPredictionReplicatedManager(const ANetworkPredictionReplicatedManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANetworkPredictionReplicatedManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANetworkPredictionReplicatedManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANetworkPredictionReplicatedManager) \
	NO_API virtual ~ANetworkPredictionReplicatedManager();


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_INCLASS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETWORKPREDICTION_API UClass* StaticClass<class ANetworkPredictionReplicatedManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionReplicatedManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
