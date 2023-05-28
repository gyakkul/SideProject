// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKPREDICTION_NetworkPredictionConfig_generated_h
#error "NetworkPredictionConfig.generated.h already included, missing '#pragma once' in NetworkPredictionConfig.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionConfig_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionConfig_h


#define FOREACH_ENUM_ENETWORKPREDICTIONTICKINGPOLICY(op) \
	op(ENetworkPredictionTickingPolicy::Independent) \
	op(ENetworkPredictionTickingPolicy::Fixed) \
	op(ENetworkPredictionTickingPolicy::All) 

enum class ENetworkPredictionTickingPolicy : uint8;
template<> struct TIsUEnumClass<ENetworkPredictionTickingPolicy> { enum { Value = true }; };
template<> NETWORKPREDICTION_API UEnum* StaticEnum<ENetworkPredictionTickingPolicy>();

#define FOREACH_ENUM_ENETWORKLOD(op) \
	op(ENetworkLOD::Interpolated) \
	op(ENetworkLOD::SimExtrapolate) \
	op(ENetworkLOD::ForwardPredict) \
	op(ENetworkLOD::All) 

enum class ENetworkLOD : uint8;
template<> struct TIsUEnumClass<ENetworkLOD> { enum { Value = true }; };
template<> NETWORKPREDICTION_API UEnum* StaticEnum<ENetworkLOD>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
