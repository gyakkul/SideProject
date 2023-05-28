// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageMonitorUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STAGEMONITORCOMMON_StageMonitorUtils_generated_h
#error "StageMonitorUtils.generated.h already included, missing '#pragma once' in StageMonitorUtils.h"
#endif
#define STAGEMONITORCOMMON_StageMonitorUtils_generated_h

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFramePerformanceProviderMessage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStageProviderPeriodicMessage Super;


template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<struct FFramePerformanceProviderMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitorUtils_h


#define FOREACH_ENUM_ESTAGEMONITORNODESTATUS(op) \
	op(EStageMonitorNodeStatus::Unknown) \
	op(EStageMonitorNodeStatus::LoadingMap) \
	op(EStageMonitorNodeStatus::Ready) \
	op(EStageMonitorNodeStatus::HotReload) \
	op(EStageMonitorNodeStatus::ShaderCompiling) 

enum class EStageMonitorNodeStatus;
template<> struct TIsUEnumClass<EStageMonitorNodeStatus> { enum { Value = true }; };
template<> STAGEMONITORCOMMON_API UEnum* StaticEnum<EStageMonitorNodeStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
