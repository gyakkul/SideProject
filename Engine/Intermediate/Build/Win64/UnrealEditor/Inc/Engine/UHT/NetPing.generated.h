// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/NetPing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetPing_generated_h
#error "NetPing.generated.h already included, missing '#pragma once' in NetPing.h"
#endif
#define ENGINE_NetPing_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_NetPing_h


#define FOREACH_ENUM_EPINGTYPE(op) \
	op(EPingType::None) \
	op(EPingType::RoundTrip) \
	op(EPingType::RoundTripExclFrame) \
	op(EPingType::ICMP) \
	op(EPingType::UDPQoS) \
	op(EPingType::Max) \
	op(EPingType::Count) 

enum class EPingType : uint32;
template<> struct TIsUEnumClass<EPingType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPingType>();

#define FOREACH_ENUM_EPINGAVERAGETYPE(op) \
	op(EPingAverageType::None) \
	op(EPingAverageType::MovingAverage) \
	op(EPingAverageType::PlayerStateAvg) 

enum class EPingAverageType : uint8;
template<> struct TIsUEnumClass<EPingAverageType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPingAverageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
