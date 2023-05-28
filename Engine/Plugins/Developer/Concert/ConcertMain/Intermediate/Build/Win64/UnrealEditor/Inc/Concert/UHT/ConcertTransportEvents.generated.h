// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertTransportEvents.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERT_ConcertTransportEvents_generated_h
#error "ConcertTransportEvents.generated.h already included, missing '#pragma once' in ConcertTransportEvents.h"
#endif
#define CONCERT_ConcertTransportEvents_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertLog_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONCERT_API UScriptStruct* StaticStruct<struct FConcertLog>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertMain_Source_Concert_Public_ConcertTransportEvents_h


#define FOREACH_ENUM_ECONCERTLOGMESSAGEACTION(op) \
	op(EConcertLogMessageAction::None) \
	op(EConcertLogMessageAction::Send) \
	op(EConcertLogMessageAction::Publish) \
	op(EConcertLogMessageAction::Receive) \
	op(EConcertLogMessageAction::Queue) \
	op(EConcertLogMessageAction::Discard) \
	op(EConcertLogMessageAction::Duplicate) \
	op(EConcertLogMessageAction::TimeOut) \
	op(EConcertLogMessageAction::Process) \
	op(EConcertLogMessageAction::EndpointDiscovery) \
	op(EConcertLogMessageAction::EndpointTimeOut) \
	op(EConcertLogMessageAction::EndpointClosure) 

enum class EConcertLogMessageAction : uint8;
template<> struct TIsUEnumClass<EConcertLogMessageAction> { enum { Value = true }; };
template<> CONCERT_API UEnum* StaticEnum<EConcertLogMessageAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
