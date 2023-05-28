// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassProcessingTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSENTITY_MassProcessingTypes_generated_h
#error "MassProcessingTypes.generated.h already included, missing '#pragma once' in MassProcessingTypes.h"
#endif
#define MASSENTITY_MassProcessingTypes_generated_h

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcessorAuxDataBase_Statics; \
	MASSENTITY_API static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FProcessorAuxDataBase>();

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassProcessingContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassProcessingContext>();

#define FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassRuntimePipeline_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MASSENTITY_API UScriptStruct* StaticStruct<struct FMassRuntimePipeline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassProcessingTypes_h


#define FOREACH_ENUM_EPROCESSOREXECUTIONFLAGS(op) \
	op(EProcessorExecutionFlags::None) \
	op(EProcessorExecutionFlags::Standalone) \
	op(EProcessorExecutionFlags::Server) \
	op(EProcessorExecutionFlags::Client) \
	op(EProcessorExecutionFlags::Editor) \
	op(EProcessorExecutionFlags::AllNetModes) \
	op(EProcessorExecutionFlags::All) 

enum class EProcessorExecutionFlags : uint8;
template<> struct TIsUEnumClass<EProcessorExecutionFlags> { enum { Value = true }; };
template<> MASSENTITY_API UEnum* StaticEnum<EProcessorExecutionFlags>();

#define FOREACH_ENUM_EMASSPROCESSINGPHASE(op) \
	op(EMassProcessingPhase::PrePhysics) \
	op(EMassProcessingPhase::StartPhysics) \
	op(EMassProcessingPhase::DuringPhysics) \
	op(EMassProcessingPhase::EndPhysics) \
	op(EMassProcessingPhase::PostPhysics) \
	op(EMassProcessingPhase::FrameEnd) 

enum class EMassProcessingPhase : uint8;
template<> struct TIsUEnumClass<EMassProcessingPhase> { enum { Value = true }; };
template<> MASSENTITY_API UEnum* StaticEnum<EMassProcessingPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
