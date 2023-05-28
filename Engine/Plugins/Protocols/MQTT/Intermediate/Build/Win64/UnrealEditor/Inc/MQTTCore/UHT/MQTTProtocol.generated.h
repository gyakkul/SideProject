// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MQTTProtocol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MQTTCORE_MQTTProtocol_generated_h
#error "MQTTProtocol.generated.h already included, missing '#pragma once' in MQTTProtocol.h"
#endif
#define MQTTCORE_MQTTProtocol_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Protocols_MQTT_Source_MQTTCore_Public_MQTTProtocol_h


#define FOREACH_ENUM_EMQTTCONNECTRETURNCODE(op) \
	op(EMQTTConnectReturnCode::Accepted) \
	op(EMQTTConnectReturnCode::RefusedProtocolVersion) \
	op(EMQTTConnectReturnCode::RefusedIdentifierRejected) \
	op(EMQTTConnectReturnCode::RefusedServerUnavailable) \
	op(EMQTTConnectReturnCode::RefusedBadUsernamePassword) \
	op(EMQTTConnectReturnCode::RefusedNotAuthorized) \
	op(EMQTTConnectReturnCode::AlreadyConnected) \
	op(EMQTTConnectReturnCode::InvalidURL) \
	op(EMQTTConnectReturnCode::SocketError) 

enum class EMQTTConnectReturnCode : uint8;
template<> struct TIsUEnumClass<EMQTTConnectReturnCode> { enum { Value = true }; };
template<> MQTTCORE_API UEnum* StaticEnum<EMQTTConnectReturnCode>();

#define FOREACH_ENUM_EMQTTSUBSCRIBERETURNCODE(op) \
	op(EMQTTSubscribeReturnCode::Success_QoS0) \
	op(EMQTTSubscribeReturnCode::Success_QoS1) \
	op(EMQTTSubscribeReturnCode::Success_QoS2) \
	op(EMQTTSubscribeReturnCode::Failure) 

enum class EMQTTSubscribeReturnCode : uint8;
template<> struct TIsUEnumClass<EMQTTSubscribeReturnCode> { enum { Value = true }; };
template<> MQTTCORE_API UEnum* StaticEnum<EMQTTSubscribeReturnCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
