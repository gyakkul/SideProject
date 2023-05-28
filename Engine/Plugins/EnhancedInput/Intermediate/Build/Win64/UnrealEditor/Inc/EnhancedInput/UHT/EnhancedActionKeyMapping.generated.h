// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedActionKeyMapping.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENHANCEDINPUT_EnhancedActionKeyMapping_generated_h
#error "EnhancedActionKeyMapping.generated.h already included, missing '#pragma once' in EnhancedActionKeyMapping.h"
#endif
#define ENHANCEDINPUT_EnhancedActionKeyMapping_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerMappableKeyOptions_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FPlayerMappableKeyOptions>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnhancedActionKeyMapping_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FEnhancedActionKeyMapping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedActionKeyMapping_h


#define FOREACH_ENUM_EPLAYERMAPPABLEKEYSETTINGBEHAVIORS(op) \
	op(EPlayerMappableKeySettingBehaviors::InheritSettingsFromAction) \
	op(EPlayerMappableKeySettingBehaviors::OverrideSettings) \
	op(EPlayerMappableKeySettingBehaviors::IgnoreSettings) 

enum class EPlayerMappableKeySettingBehaviors : uint8;
template<> struct TIsUEnumClass<EPlayerMappableKeySettingBehaviors> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EPlayerMappableKeySettingBehaviors>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
