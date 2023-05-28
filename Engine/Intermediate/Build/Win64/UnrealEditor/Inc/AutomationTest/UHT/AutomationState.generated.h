// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONTEST_AutomationState_generated_h
#error "AutomationState.generated.h already included, missing '#pragma once' in AutomationState.h"
#endif
#define AUTOMATIONTEST_AutomationState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AutomationTest_Public_AutomationState_h


#define FOREACH_ENUM_EAUTOMATIONSTATE(op) \
	op(EAutomationState::NotRun) \
	op(EAutomationState::InProcess) \
	op(EAutomationState::Fail) \
	op(EAutomationState::Success) \
	op(EAutomationState::Skipped) 

enum class EAutomationState : uint8;
template<> struct TIsUEnumClass<EAutomationState> { enum { Value = true }; };
template<> AUTOMATIONTEST_API UEnum* StaticEnum<EAutomationState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
