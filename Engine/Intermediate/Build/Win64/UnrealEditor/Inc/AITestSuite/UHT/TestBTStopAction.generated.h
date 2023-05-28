// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/TestBTStopAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AITESTSUITE_TestBTStopAction_generated_h
#error "TestBTStopAction.generated.h already included, missing '#pragma once' in TestBTStopAction.h"
#endif
#define AITESTSUITE_TestBTStopAction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AITestSuite_Classes_BehaviorTree_TestBTStopAction_h


#define FOREACH_ENUM_EBTTESTSTOPACTION(op) \
	op(EBTTestStopAction::StopTree) \
	op(EBTTestStopAction::UnInitialize) \
	op(EBTTestStopAction::Cleanup) \
	op(EBTTestStopAction::RestartTree) \
	op(EBTTestStopAction::StartTree) 

enum class EBTTestStopAction : uint8;
template<> struct TIsUEnumClass<EBTTestStopAction> { enum { Value = true }; };
template<> AITESTSUITE_API UEnum* StaticEnum<EBTTestStopAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
