// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertMessageData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERT_ConcertMessageData_generated_h
#error "ConcertMessageData.generated.h already included, missing '#pragma once' in ConcertMessageData.h"
#endif
#define CONCERT_ConcertMessageData_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_236_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertInstanceInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertInstanceInfo>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_264_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertServerInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertServerInfo>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertClientInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertClientInfo>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_351_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionClientInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionClientInfo>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_367_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionInfo_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionInfo>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_426_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionFilter_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionFilter>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_466_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertByteArray_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertByteArray>();

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h_497_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertSessionSerializedPayload_Statics; \
	CONCERT_API static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertSessionSerializedPayload>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertMessageData_h


#define FOREACH_ENUM_ECONCERTSERVERFLAGS(op) \
	op(EConcertServerFlags::None) \
	op(EConcertServerFlags::IgnoreSessionRequirement) 

enum class EConcertServerFlags : uint8;
template<> struct TIsUEnumClass<EConcertServerFlags> { enum { Value = true }; };
template<> CONCERT_API UEnum* StaticEnum<EConcertServerFlags>();

#define FOREACH_ENUM_ECONCERTSESSIONSTATE(op) \
	op(EConcertSessionState::Normal) \
	op(EConcertSessionState::Transient) 

enum class EConcertSessionState : uint8;
template<> struct TIsUEnumClass<EConcertSessionState> { enum { Value = true }; };
template<> CONCERT_API UEnum* StaticEnum<EConcertSessionState>();

#define FOREACH_ENUM_ECONCERTPAYLOADCOMPRESSIONTYPE(op) \
	op(EConcertPayloadCompressionType::None) \
	op(EConcertPayloadCompressionType::Heuristic) \
	op(EConcertPayloadCompressionType::Always) 

enum class EConcertPayloadCompressionType : uint8;
template<> struct TIsUEnumClass<EConcertPayloadCompressionType> { enum { Value = true }; };
template<> CONCERT_API UEnum* StaticEnum<EConcertPayloadCompressionType>();

#define FOREACH_ENUM_ECONCERTCOMPRESSIONDETAILS(op) \
	op(EConcertCompressionDetails::Uncompressed) \
	op(EConcertCompressionDetails::Compressed) \
	op(EConcertCompressionDetails::CompressWithOodle) \
	op(EConcertCompressionDetails::CompressForSpeed) \
	op(EConcertCompressionDetails::CompressForSize) 

enum class EConcertCompressionDetails : uint8;
template<> struct TIsUEnumClass<EConcertCompressionDetails> { enum { Value = true }; };
template<> CONCERT_API UEnum* StaticEnum<EConcertCompressionDetails>();

#define FOREACH_ENUM_ECONCERTPAYLOADSERIALIZATIONMETHOD(op) \
	op(EConcertPayloadSerializationMethod::Standard) \
	op(EConcertPayloadSerializationMethod::Cbor) 

enum class EConcertPayloadSerializationMethod : uint8;
template<> struct TIsUEnumClass<EConcertPayloadSerializationMethod> { enum { Value = true }; };
template<> CONCERT_API UEnum* StaticEnum<EConcertPayloadSerializationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
