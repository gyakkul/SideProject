// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/AITask_UseGameplayInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class UAITask_UseGameplayInteraction;
struct FSmartObjectClaimHandle;
#ifdef GAMEPLAYINTERACTIONSMODULE_AITask_UseGameplayInteraction_generated_h
#error "AITask_UseGameplayInteraction.generated.h already included, missing '#pragma once' in AITask_UseGameplayInteraction.h"
#endif
#define GAMEPLAYINTERACTIONSMODULE_AITask_UseGameplayInteraction_generated_h

#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestAbort); \
	DECLARE_FUNCTION(execUseClaimedGameplayInteractionSmartObject);


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestAbort); \
	DECLARE_FUNCTION(execUseClaimedGameplayInteractionSmartObject);


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_ACCESSORS
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAITask_UseGameplayInteraction(); \
	friend struct Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics; \
public: \
	DECLARE_CLASS(UAITask_UseGameplayInteraction, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_UseGameplayInteraction)


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUAITask_UseGameplayInteraction(); \
	friend struct Z_Construct_UClass_UAITask_UseGameplayInteraction_Statics; \
public: \
	DECLARE_CLASS(UAITask_UseGameplayInteraction, UAITask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayInteractionsModule"), NO_API) \
	DECLARE_SERIALIZER(UAITask_UseGameplayInteraction)


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAITask_UseGameplayInteraction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_UseGameplayInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_UseGameplayInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_UseGameplayInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_UseGameplayInteraction(UAITask_UseGameplayInteraction&&); \
	NO_API UAITask_UseGameplayInteraction(const UAITask_UseGameplayInteraction&); \
public: \
	NO_API virtual ~UAITask_UseGameplayInteraction();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAITask_UseGameplayInteraction(UAITask_UseGameplayInteraction&&); \
	NO_API UAITask_UseGameplayInteraction(const UAITask_UseGameplayInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAITask_UseGameplayInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAITask_UseGameplayInteraction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAITask_UseGameplayInteraction) \
	NO_API virtual ~UAITask_UseGameplayInteraction();


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_INCLASS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYINTERACTIONSMODULE_API UClass* StaticClass<class UAITask_UseGameplayInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GameplayInteractions_Source_GameplayInteractionsModule_Private_AI_AITask_UseGameplayInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
