// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayInteractionsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EGameplayTaskActuationResult : uint8;
#ifdef GAMEPLAYINTERACTIONSMODULE_GameplayInteractionsTypes_generated_h
#error "GameplayInteractionsTypes.generated.h already included, missing '#pragma once' in GameplayInteractionsTypes.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_GameplayInteractionsTypes_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionAbortContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionAbortContext>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionSlotUserData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSmartObjectSlotStateData Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionSlotUserData>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionStateTreeTask_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskBase Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionStateTreeTask>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayInteractionStateTreeCondition_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeConditionBase Super;


template<> GAMEPLAYINTERACTIONSMODULE_API UScriptStruct* StaticStruct<struct FGameplayInteractionStateTreeCondition>();

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h_146_DELEGATE \
GAMEPLAYINTERACTIONSMODULE_API void FGameplayTaskActuationCompleted_DelegateWrapper(const FMulticastScriptDelegate& GameplayTaskActuationCompleted, EGameplayTaskActuationResult Result, AActor* Actor);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Public_GameplayInteractionsTypes_h


#define FOREACH_ENUM_EGAMEPLAYINTERACTIONABORTREASON(op) \
	op(EGameplayInteractionAbortReason::Unset) \
	op(EGameplayInteractionAbortReason::ExternalAbort) \
	op(EGameplayInteractionAbortReason::InternalAbort) 

enum class EGameplayInteractionAbortReason : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionAbortReason> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionAbortReason>();

#define FOREACH_ENUM_EGAMEPLAYINTERACTIONMODIFYGAMEPLAYTAGOPERATION(op) \
	op(EGameplayInteractionModifyGameplayTagOperation::Add) \
	op(EGameplayInteractionModifyGameplayTagOperation::Remove) 

enum class EGameplayInteractionModifyGameplayTagOperation : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionModifyGameplayTagOperation> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionModifyGameplayTagOperation>();

#define FOREACH_ENUM_EGAMEPLAYINTERACTIONTASKMODIFY(op) \
	op(EGameplayInteractionTaskModify::OnEnterStateUndoOnExitState) \
	op(EGameplayInteractionTaskModify::OnEnterState) \
	op(EGameplayInteractionTaskModify::OnExitState) \
	op(EGameplayInteractionTaskModify::OnExitStateFailed) \
	op(EGameplayInteractionTaskModify::OnExitStateSucceeded) 

enum class EGameplayInteractionTaskModify : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionTaskModify> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionTaskModify>();

#define FOREACH_ENUM_EGAMEPLAYINTERACTIONTASKTRIGGER(op) \
	op(EGameplayInteractionTaskTrigger::OnEnterState) \
	op(EGameplayInteractionTaskTrigger::OnExitState) \
	op(EGameplayInteractionTaskTrigger::OnExitStateSucceeded) \
	op(EGameplayInteractionTaskTrigger::OnExitStateFailed) 

enum class EGameplayInteractionTaskTrigger : uint8;
template<> struct TIsUEnumClass<EGameplayInteractionTaskTrigger> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayInteractionTaskTrigger>();

#define FOREACH_ENUM_EGAMEPLAYTASKACTUATIONRESULT(op) \
	op(EGameplayTaskActuationResult::None) \
	op(EGameplayTaskActuationResult::RequestFailed) \
	op(EGameplayTaskActuationResult::Failed) \
	op(EGameplayTaskActuationResult::Succeeded) 

enum class EGameplayTaskActuationResult : uint8;
template<> struct TIsUEnumClass<EGameplayTaskActuationResult> { enum { Value = true }; };
template<> GAMEPLAYINTERACTIONSMODULE_API UEnum* StaticEnum<EGameplayTaskActuationResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
