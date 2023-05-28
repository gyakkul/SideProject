// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QosBeaconClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EQosResponseType : uint8;
#ifdef QOS_QosBeaconClient_generated_h
#error "QosBeaconClient.generated.h already included, missing '#pragma once' in QosBeaconClient.h"
#endif
#define QOS_QosBeaconClient_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_RPC_WRAPPERS \
	virtual void ClientQosResponse_Implementation(EQosResponseType Response); \
	virtual bool ServerQosRequest_Validate(const FString& ); \
	virtual void ServerQosRequest_Implementation(const FString& InSessionId); \
 \
	DECLARE_FUNCTION(execClientQosResponse); \
	DECLARE_FUNCTION(execServerQosRequest);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientQosResponse_Implementation(EQosResponseType Response); \
	virtual bool ServerQosRequest_Validate(const FString& ); \
	virtual void ServerQosRequest_Implementation(const FString& InSessionId); \
 \
	DECLARE_FUNCTION(execClientQosResponse); \
	DECLARE_FUNCTION(execServerQosRequest);


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQosBeaconClient(); \
	friend struct Z_Construct_UClass_AQosBeaconClient_Statics; \
public: \
	DECLARE_CLASS(AQosBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Qos"), NO_API) \
	DECLARE_SERIALIZER(AQosBeaconClient)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAQosBeaconClient(); \
	friend struct Z_Construct_UClass_AQosBeaconClient_Statics; \
public: \
	DECLARE_CLASS(AQosBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Qos"), NO_API) \
	DECLARE_SERIALIZER(AQosBeaconClient)


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQosBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQosBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQosBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQosBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQosBeaconClient(AQosBeaconClient&&); \
	NO_API AQosBeaconClient(const AQosBeaconClient&); \
public: \
	NO_API virtual ~AQosBeaconClient();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQosBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQosBeaconClient(AQosBeaconClient&&); \
	NO_API AQosBeaconClient(const AQosBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQosBeaconClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQosBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQosBeaconClient) \
	NO_API virtual ~AQosBeaconClient();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_35_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class QosBeaconClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QOS_API UClass* StaticClass<class AQosBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosBeaconClient_h


#define FOREACH_ENUM_EQOSRESPONSETYPE(op) \
	op(EQosResponseType::NoResponse) \
	op(EQosResponseType::Success) \
	op(EQosResponseType::Failure) 

enum class EQosResponseType : uint8;
template<> struct TIsUEnumClass<EQosResponseType> { enum { Value = true }; };
template<> QOS_API UEnum* StaticEnum<EQosResponseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
