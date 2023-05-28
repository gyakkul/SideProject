// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertTransportMessages.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTTRANSPORT_ConcertTransportMessages_generated_h
#error "ConcertTransportMessages.generated.h already included, missing '#pragma once' in ConcertTransportMessages.h"
#endif
#define CONCERTTRANSPORT_ConcertTransportMessages_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertMessageData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct();


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertMessageData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertEventData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertEventData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertRequestData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertRequestData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertResponseData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertResponseData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_168_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertEndpointDiscoveryEvent_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertEventData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertEndpointDiscoveryEvent>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertEndpointClosedData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertEndpointClosedData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertReliableHandshakeData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertEndpointDiscoveryEvent Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertReliableHandshakeData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertAckData_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertAckData>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_224_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertKeepAlive_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct(); \
	typedef FConcertMessageData Super;


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertKeepAlive>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSendResendPending_Statics; \
	CONCERTTRANSPORT_API static class UScriptStruct* StaticStruct();


template<> CONCERTTRANSPORT_API UScriptStruct* StaticStruct<struct FConcertSendResendPending>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_ConcertTransport_Public_ConcertTransportMessages_h


#define FOREACH_ENUM_ECONCERTMESSAGEFLAGS(op) \
	op(EConcertMessageFlags::None) \
	op(EConcertMessageFlags::ReliableOrdered) \
	op(EConcertMessageFlags::UniqueId) 

enum class EConcertMessageFlags : uint8;
template<> struct TIsUEnumClass<EConcertMessageFlags> { enum { Value = true }; };
template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertMessageFlags>();

#define FOREACH_ENUM_ECONCERTRESPONSECODE(op) \
	op(EConcertResponseCode::Pending) \
	op(EConcertResponseCode::Success) \
	op(EConcertResponseCode::Failed) \
	op(EConcertResponseCode::InvalidRequest) \
	op(EConcertResponseCode::UnknownRequest) \
	op(EConcertResponseCode::TimedOut) 

enum class EConcertResponseCode : uint8;
template<> struct TIsUEnumClass<EConcertResponseCode> { enum { Value = true }; };
template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertResponseCode>();

#define FOREACH_ENUM_ECONCERTRELIABLEHANDSHAKESTATE(op) \
	op(EConcertReliableHandshakeState::None) \
	op(EConcertReliableHandshakeState::Negotiate) \
	op(EConcertReliableHandshakeState::Success) 

enum class EConcertReliableHandshakeState : uint8;
template<> struct TIsUEnumClass<EConcertReliableHandshakeState> { enum { Value = true }; };
template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertReliableHandshakeState>();

#define FOREACH_ENUM_ECONCERTMESSAGEVERSION(op) \
	op(EConcertMessageVersion::BeforeVersioning) \
	op(EConcertMessageVersion::Initial) \
	op(EConcertMessageVersion::VersionPlusOne) \
	op(EConcertMessageVersion::LatestVersion) 

enum class EConcertMessageVersion : uint32;
template<> struct TIsUEnumClass<EConcertMessageVersion> { enum { Value = true }; };
template<> CONCERTTRANSPORT_API UEnum* StaticEnum<EConcertMessageVersion>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
