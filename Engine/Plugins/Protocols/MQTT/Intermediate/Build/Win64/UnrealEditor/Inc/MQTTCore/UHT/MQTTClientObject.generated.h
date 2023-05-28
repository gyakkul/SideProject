// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MQTTClientObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMQTTSubscriptionObject;
enum class EMQTTConnectReturnCode : uint8;
enum class EMQTTQualityOfService : uint8;
enum class EMQTTSubscribeReturnCode : uint8;
struct FMQTTClientMessage;
struct FMQTTURL;
#ifdef MQTTCORE_MQTTClientObject_generated_h
#error "MQTTClientObject.generated.h already included, missing '#pragma once' in MQTTClientObject.h"
#endif
#define MQTTCORE_MQTTClientObject_generated_h

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_21_DELEGATE \
static MQTTCORE_API void FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMQTTClientMessage const& Message);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execSetOnMessageHandler);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execSetOnMessageHandler);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_ACCESSORS
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMQTTSubscriptionObject(); \
	friend struct Z_Construct_UClass_UMQTTSubscriptionObject_Statics; \
public: \
	DECLARE_CLASS(UMQTTSubscriptionObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTSubscriptionObject)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMQTTSubscriptionObject(); \
	friend struct Z_Construct_UClass_UMQTTSubscriptionObject_Statics; \
public: \
	DECLARE_CLASS(UMQTTSubscriptionObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTSubscriptionObject)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTSubscriptionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTSubscriptionObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTSubscriptionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTSubscriptionObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTSubscriptionObject(UMQTTSubscriptionObject&&); \
	NO_API UMQTTSubscriptionObject(const UMQTTSubscriptionObject&); \
public:


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTSubscriptionObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTSubscriptionObject(UMQTTSubscriptionObject&&); \
	NO_API UMQTTSubscriptionObject(const UMQTTSubscriptionObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTSubscriptionObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTSubscriptionObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTSubscriptionObject)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_13_PROLOG
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_INCLASS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MQTTCORE_API UClass* StaticClass<class UMQTTSubscriptionObject>();

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_60_DELEGATE \
static MQTTCORE_API void FOnConnectDelegate_DelegateWrapper(const FScriptDelegate& OnConnectDelegate, EMQTTConnectReturnCode ReturnCode);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_61_DELEGATE \
static MQTTCORE_API void FOnDisconnectDelegate_DelegateWrapper(const FScriptDelegate& OnDisconnectDelegate);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_62_DELEGATE \
static MQTTCORE_API void FOnPublishDelegate_DelegateWrapper(const FScriptDelegate& OnPublishDelegate);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_63_DELEGATE \
static MQTTCORE_API void FOnSubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnSubscribeDelegate, EMQTTSubscribeReturnCode ReturnCode);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_64_DELEGATE \
static MQTTCORE_API void FOnUnsubscribeDelegate_DelegateWrapper(const FScriptDelegate& OnUnsubscribeDelegate);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_65_DELEGATE \
static MQTTCORE_API void FOnMessageDelegate_DelegateWrapper(const FScriptDelegate& OnMessageDelegate, FMQTTClientMessage const& Message);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_SPARSE_DATA
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execGetClientId); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribeMany); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetURL); \
	DECLARE_FUNCTION(execGetClientId); \
	DECLARE_FUNCTION(execUnsubscribe); \
	DECLARE_FUNCTION(execSubscribeMany); \
	DECLARE_FUNCTION(execSubscribe); \
	DECLARE_FUNCTION(execPublish); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_ACCESSORS
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMQTTClientObject(); \
	friend struct Z_Construct_UClass_UMQTTClientObject_Statics; \
public: \
	DECLARE_CLASS(UMQTTClientObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTClientObject)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUMQTTClientObject(); \
	friend struct Z_Construct_UClass_UMQTTClientObject_Statics; \
public: \
	DECLARE_CLASS(UMQTTClientObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTClientObject)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTClientObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTClientObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTClientObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTClientObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTClientObject(UMQTTClientObject&&); \
	NO_API UMQTTClientObject(const UMQTTClientObject&); \
public:


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTClientObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTClientObject(UMQTTClientObject&&); \
	NO_API UMQTTClientObject(const UMQTTClientObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTClientObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTClientObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTClientObject)


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_52_PROLOG
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_INCLASS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MQTTCORE_API UClass* StaticClass<class UMQTTClientObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
