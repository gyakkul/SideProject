// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Recorder/TakeRecorderParameters.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TAKERECORDER_TakeRecorderParameters_generated_h
#error "TakeRecorderParameters.generated.h already included, missing '#pragma once' in TakeRecorderParameters.h"
#endif
#define TAKERECORDER_TakeRecorderParameters_generated_h

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTakeRecorderUserParameters_Statics; \
	TAKERECORDER_API static class UScriptStruct* StaticStruct();


template<> TAKERECORDER_API UScriptStruct* StaticStruct<struct FTakeRecorderUserParameters>();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTakeRecorderProjectParameters_Statics; \
	TAKERECORDER_API static class UScriptStruct* StaticStruct();


template<> TAKERECORDER_API UScriptStruct* StaticStruct<struct FTakeRecorderProjectParameters>();

#define FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTakeRecorderParameters_Statics; \
	TAKERECORDER_API static class UScriptStruct* StaticStruct();


template<> TAKERECORDER_API UScriptStruct* StaticStruct<struct FTakeRecorderParameters>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_Recorder_TakeRecorderParameters_h


#define FOREACH_ENUM_ETAKERECORDERMODE(op) \
	op(ETakeRecorderMode::RecordNewSequence) \
	op(ETakeRecorderMode::RecordIntoSequence) 

enum class ETakeRecorderMode : uint8;
template<> struct TIsUEnumClass<ETakeRecorderMode> { enum { Value = true }; };
template<> TAKERECORDER_API UEnum* StaticEnum<ETakeRecorderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
