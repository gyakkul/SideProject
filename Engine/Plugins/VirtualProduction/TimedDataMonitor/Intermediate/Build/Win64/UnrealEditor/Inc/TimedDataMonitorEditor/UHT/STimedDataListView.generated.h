// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "STimedDataListView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEDDATAMONITOREDITOR_STimedDataListView_generated_h
#error "STimedDataListView.generated.h already included, missing '#pragma once' in STimedDataListView.h"
#endif
#define TIMEDDATAMONITOREDITOR_STimedDataListView_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_TimedDataMonitor_Source_TimedDataMonitorEditor_Private_STimedDataListView_h


#define FOREACH_ENUM_ETIMEDDATAINPUTEVALUATIONOFFSETTYPE(op) \
	op(ETimedDataInputEvaluationOffsetType::Seconds) \
	op(ETimedDataInputEvaluationOffsetType::Frames) 

enum class ETimedDataInputEvaluationOffsetType : uint8;
template<> struct TIsUEnumClass<ETimedDataInputEvaluationOffsetType> { enum { Value = true }; };
template<> TIMEDDATAMONITOREDITOR_API UEnum* StaticEnum<ETimedDataInputEvaluationOffsetType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
