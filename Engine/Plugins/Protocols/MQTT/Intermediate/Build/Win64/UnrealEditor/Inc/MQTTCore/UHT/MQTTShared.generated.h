// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MQTTShared.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MQTTCORE_MQTTShared_generated_h
#error "MQTTShared.generated.h already included, missing '#pragma once' in MQTTShared.h"
#endif
#define MQTTCORE_MQTTShared_generated_h

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMQTTURL_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MQTTCORE_API UScriptStruct* StaticStruct<struct FMQTTURL>();

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMQTTTopic_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MQTTCORE_API UScriptStruct* StaticStruct<struct FMQTTTopic>();

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMQTTTopicFilter_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMQTTTopic Super;


template<> MQTTCORE_API UScriptStruct* StaticStruct<struct FMQTTTopicFilter>();

#define FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMQTTTopicTemplate_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMQTTTopic Super;


template<> MQTTCORE_API UScriptStruct* StaticStruct<struct FMQTTTopicTemplate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTShared_h


#define FOREACH_ENUM_EMQTTSCHEME(op) \
	op(EMQTTScheme::MQTT) \
	op(EMQTTScheme::MQTTS) 

enum class EMQTTScheme : uint8;
template<> struct TIsUEnumClass<EMQTTScheme> { enum { Value = true }; };
template<> MQTTCORE_API UEnum* StaticEnum<EMQTTScheme>();

#define FOREACH_ENUM_EMQTTQUALITYOFSERVICE(op) \
	op(EMQTTQualityOfService::Once) \
	op(EMQTTQualityOfService::AtLeastOnce) \
	op(EMQTTQualityOfService::ExactlyOnce) 

enum class EMQTTQualityOfService : uint8;
template<> struct TIsUEnumClass<EMQTTQualityOfService> { enum { Value = true }; };
template<> MQTTCORE_API UEnum* StaticEnum<EMQTTQualityOfService>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
