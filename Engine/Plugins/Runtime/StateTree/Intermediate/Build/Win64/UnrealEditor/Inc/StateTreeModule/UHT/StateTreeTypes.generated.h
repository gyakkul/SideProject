// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEMODULE_StateTreeTypes_generated_h
#error "StateTreeTypes.generated.h already included, missing '#pragma once' in StateTreeTypes.h"
#endif
#define STATETREEMODULE_StateTreeTypes_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_163_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeStateHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeStateHandle>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeIndex16_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeIndex16>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_265_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeIndex8_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeIndex8>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_317_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeTransitionRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeTransitionRequest>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_345_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeActiveStates_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeActiveStates>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_500_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeRandomTimeDuration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeRandomTimeDuration>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_563_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeTransitionResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeTransitionResult>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_618_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompactStateTransition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FCompactStateTransition>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_661_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompactStateTreeState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FCompactStateTreeState>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_738_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompactStateTreeParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FCompactStateTreeParameters>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_761_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeExternalDataHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeExternalDataHandle>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_822_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeExternalDataDesc_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeExternalDataDesc>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_894_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeStructRef_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeStructRef>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_1091_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeExecutionState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeExecutionState>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h_1133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeStateLink_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeStateLink>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeTypes_h


#define FOREACH_ENUM_ESTATETREERUNSTATUS(op) \
	op(EStateTreeRunStatus::Running) \
	op(EStateTreeRunStatus::Failed) \
	op(EStateTreeRunStatus::Succeeded) \
	op(EStateTreeRunStatus::Unset) 

enum class EStateTreeRunStatus : uint8;
template<> struct TIsUEnumClass<EStateTreeRunStatus> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeRunStatus>();

#define FOREACH_ENUM_ESTATETREESTATECHANGETYPE(op) \
	op(EStateTreeStateChangeType::None) \
	op(EStateTreeStateChangeType::Changed) \
	op(EStateTreeStateChangeType::Sustained) 

enum class EStateTreeStateChangeType : uint8;
template<> struct TIsUEnumClass<EStateTreeStateChangeType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateChangeType>();

#define FOREACH_ENUM_ESTATETREETRANSITIONTYPE(op) \
	op(EStateTreeTransitionType::None) \
	op(EStateTreeTransitionType::Succeeded) \
	op(EStateTreeTransitionType::Failed) \
	op(EStateTreeTransitionType::GotoState) \
	op(EStateTreeTransitionType::NextState) \
	op(EStateTreeTransitionType::NotSet) 

enum class EStateTreeTransitionType : uint8;
template<> struct TIsUEnumClass<EStateTreeTransitionType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionType>();

#define FOREACH_ENUM_ESTATETREECONDITIONOPERAND(op) \
	op(EStateTreeConditionOperand::Copy) \
	op(EStateTreeConditionOperand::And) \
	op(EStateTreeConditionOperand::Or) 

enum class EStateTreeConditionOperand : uint8;
template<> struct TIsUEnumClass<EStateTreeConditionOperand> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeConditionOperand>();

#define FOREACH_ENUM_ESTATETREESTATETYPE(op) \
	op(EStateTreeStateType::State) \
	op(EStateTreeStateType::Group) \
	op(EStateTreeStateType::Linked) \
	op(EStateTreeStateType::Subtree) 

enum class EStateTreeStateType : uint8;
template<> struct TIsUEnumClass<EStateTreeStateType> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeStateType>();

#define FOREACH_ENUM_ESTATETREETRANSITIONTRIGGER(op) \
	op(EStateTreeTransitionTrigger::None) \
	op(EStateTreeTransitionTrigger::OnStateCompleted) \
	op(EStateTreeTransitionTrigger::OnStateSucceeded) \
	op(EStateTreeTransitionTrigger::OnStateFailed) \
	op(EStateTreeTransitionTrigger::OnTick) \
	op(EStateTreeTransitionTrigger::OnEvent) 

enum class EStateTreeTransitionTrigger : uint8;
template<> struct TIsUEnumClass<EStateTreeTransitionTrigger> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionTrigger>();

#define FOREACH_ENUM_ESTATETREETRANSITIONPRIORITY(op) \
	op(EStateTreeTransitionPriority::None) \
	op(EStateTreeTransitionPriority::Normal) \
	op(EStateTreeTransitionPriority::Medium) \
	op(EStateTreeTransitionPriority::High) \
	op(EStateTreeTransitionPriority::Critical) 

enum class EStateTreeTransitionPriority : uint8;
template<> struct TIsUEnumClass<EStateTreeTransitionPriority> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeTransitionPriority>();

#define FOREACH_ENUM_ESTATETREEEXTERNALDATAREQUIREMENT(op) \
	op(EStateTreeExternalDataRequirement::Required) \
	op(EStateTreeExternalDataRequirement::Optional) 

enum class EStateTreeExternalDataRequirement : uint8;
template<> struct TIsUEnumClass<EStateTreeExternalDataRequirement> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeExternalDataRequirement>();

#define FOREACH_ENUM_ESTATETREEPROPERTYUSAGE(op) \
	op(EStateTreePropertyUsage::Invalid) \
	op(EStateTreePropertyUsage::Context) \
	op(EStateTreePropertyUsage::Input) \
	op(EStateTreePropertyUsage::Parameter) \
	op(EStateTreePropertyUsage::Output) 

enum class EStateTreePropertyUsage : uint8;
template<> struct TIsUEnumClass<EStateTreePropertyUsage> { enum { Value = true }; };
template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreePropertyUsage>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
