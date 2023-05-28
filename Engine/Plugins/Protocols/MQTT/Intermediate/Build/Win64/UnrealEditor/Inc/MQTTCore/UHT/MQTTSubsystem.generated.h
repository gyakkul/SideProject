// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MQTTSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMQTTClientObject;
class UObject;
struct FJsonObjectWrapper;
struct FMQTTClientMessage;
struct FMQTTURL;
#ifdef MQTTCORE_MQTTSubsystem_generated_h
#error "MQTTSubsystem.generated.h already included, missing '#pragma once' in MQTTSubsystem.h"
#endif
#define MQTTCORE_MQTTSubsystem_generated_h

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPayloadJson); \
	DECLARE_FUNCTION(execGetPayloadString); \
	DECLARE_FUNCTION(execGetOrCreateClient); \
	DECLARE_FUNCTION(execGetOrCreateClient_WithProjectURL);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPayloadJson); \
	DECLARE_FUNCTION(execGetPayloadString); \
	DECLARE_FUNCTION(execGetOrCreateClient); \
	DECLARE_FUNCTION(execGetOrCreateClient_WithProjectURL);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_ACCESSORS
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMQTTSubsystem(); \
	friend struct Z_Construct_UClass_UMQTTSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMQTTSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTSubsystem)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMQTTSubsystem(); \
	friend struct Z_Construct_UClass_UMQTTSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMQTTSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTSubsystem)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTSubsystem(UMQTTSubsystem&&); \
	NO_API UMQTTSubsystem(const UMQTTSubsystem&); \
public: \
	NO_API virtual ~UMQTTSubsystem();


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTSubsystem(UMQTTSubsystem&&); \
	NO_API UMQTTSubsystem(const UMQTTSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMQTTSubsystem) \
	NO_API virtual ~UMQTTSubsystem();


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_20_PROLOG
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_INCLASS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MQTTCORE_API UClass* StaticClass<class UMQTTSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
