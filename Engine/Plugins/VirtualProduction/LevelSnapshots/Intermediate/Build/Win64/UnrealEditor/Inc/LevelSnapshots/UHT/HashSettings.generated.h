// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/HashSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSNAPSHOTS_HashSettings_generated_h
#error "HashSettings.generated.h already included, missing '#pragma once' in HashSettings.h"
#endif
#define LEVELSNAPSHOTS_HashSettings_generated_h

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHashSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FHashSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Settings_HashSettings_h


#define FOREACH_ENUM_EHASHALGORITHMCHOOSEBEHAVIOR(op) \
	op(EHashAlgorithmChooseBehavior::UseFastest) \
	op(EHashAlgorithmChooseBehavior::UseCrc32) \
	op(EHashAlgorithmChooseBehavior::UseMD5) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
