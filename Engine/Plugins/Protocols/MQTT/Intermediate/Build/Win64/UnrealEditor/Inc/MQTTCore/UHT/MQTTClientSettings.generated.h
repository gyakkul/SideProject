// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MQTTClientSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MQTTCORE_MQTTClientSettings_generated_h
#error "MQTTClientSettings.generated.h already included, missing '#pragma once' in MQTTClientSettings.h"
#endif
#define MQTTCORE_MQTTClientSettings_generated_h

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_RPC_WRAPPERS
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_ACCESSORS
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMQTTClientSettings(); \
	friend struct Z_Construct_UClass_UMQTTClientSettings_Statics; \
public: \
	DECLARE_CLASS(UMQTTClientSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTClientSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MQTT");} \



#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMQTTClientSettings(); \
	friend struct Z_Construct_UClass_UMQTTClientSettings_Statics; \
public: \
	DECLARE_CLASS(UMQTTClientSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MQTTCore"), NO_API) \
	DECLARE_SERIALIZER(UMQTTClientSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MQTT");} \



#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTClientSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTClientSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTClientSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTClientSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTClientSettings(UMQTTClientSettings&&); \
	NO_API UMQTTClientSettings(const UMQTTClientSettings&); \
public: \
	NO_API virtual ~UMQTTClientSettings();


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMQTTClientSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMQTTClientSettings(UMQTTClientSettings&&); \
	NO_API UMQTTClientSettings(const UMQTTClientSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMQTTClientSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMQTTClientSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMQTTClientSettings) \
	NO_API virtual ~UMQTTClientSettings();


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_14_PROLOG
#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_INCLASS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_ACCESSORS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MQTTCORE_API UClass* StaticClass<class UMQTTClientSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTClientSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
