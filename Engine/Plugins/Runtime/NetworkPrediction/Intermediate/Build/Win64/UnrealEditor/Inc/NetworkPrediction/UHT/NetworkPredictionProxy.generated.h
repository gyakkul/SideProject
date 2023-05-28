// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NetworkPredictionProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETWORKPREDICTION_NetworkPredictionProxy_generated_h
#error "NetworkPredictionProxy.generated.h already included, missing '#pragma once' in NetworkPredictionProxy.h"
#endif
#define NETWORKPREDICTION_NetworkPredictionProxy_generated_h

#define FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPredictionProxy_Statics; \
	NETWORKPREDICTION_API static class UScriptStruct* StaticStruct();


template<> NETWORKPREDICTION_API UScriptStruct* StaticStruct<struct FNetworkPredictionProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_NetworkPrediction_Source_NetworkPrediction_Public_NetworkPredictionProxy_h


#define FOREACH_ENUM_ENETWORKPREDICTIONSTATEREAD(op) \
	op(ENetworkPredictionStateRead::Simulation) \
	op(ENetworkPredictionStateRead::Presentation) 

enum class ENetworkPredictionStateRead;
template<> struct TIsUEnumClass<ENetworkPredictionStateRead> { enum { Value = true }; };
template<> NETWORKPREDICTION_API UEnum* StaticEnum<ENetworkPredictionStateRead>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
