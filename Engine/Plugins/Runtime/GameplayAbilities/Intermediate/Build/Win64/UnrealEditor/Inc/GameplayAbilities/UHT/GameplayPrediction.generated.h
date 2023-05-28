// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayPrediction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYABILITIES_GameplayPrediction_generated_h
#error "GameplayPrediction.generated.h already included, missing '#pragma once' in GameplayPrediction.h"
#endif
#define GAMEPLAYABILITIES_GameplayPrediction_generated_h

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_293_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPredictionKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FPredictionKey>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_532_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedPredictionKeyItem_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FReplicatedPredictionKeyItem>();

#define FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h_555_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedPredictionKeyMap_Statics; \
	GAMEPLAYABILITIES_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FReplicatedPredictionKeyMap, PredictionKeys, GAMEPLAYABILITIES_API );


template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<struct FReplicatedPredictionKeyMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayPrediction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
