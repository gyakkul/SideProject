// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UConversationInstance;
class UConversationParticipantComponent;
struct FAdvanceConversationRequest;
struct FClientConversationMessage;
struct FConversationContext;
struct FConversationNodeHandle;
struct FConversationTaskResult;
struct FGameplayTag;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationContext_generated_h
#error "ConversationContext.generated.h already included, missing '#pragma once' in ConversationContext.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationContext_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationTaskResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationTaskResult>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationContext>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindConversationComponent); \
	DECLARE_FUNCTION(execGetConversationParticipantActor); \
	DECLARE_FUNCTION(execGetConversationParticipant); \
	DECLARE_FUNCTION(execCanConversationContinue); \
	DECLARE_FUNCTION(execAbortConversation); \
	DECLARE_FUNCTION(execReturnToConversationStart); \
	DECLARE_FUNCTION(execReturnToCurrentClientChoice); \
	DECLARE_FUNCTION(execReturnToLastClientChoice); \
	DECLARE_FUNCTION(execPauseConversationAndSendClientChoices); \
	DECLARE_FUNCTION(execAdvanceConversationWithChoice); \
	DECLARE_FUNCTION(execAdvanceConversation); \
	DECLARE_FUNCTION(execMakeConversationParticipant); \
	DECLARE_FUNCTION(execGetCurrentConversationNodeHandle); \
	DECLARE_FUNCTION(execGetConversationInstance);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindConversationComponent); \
	DECLARE_FUNCTION(execGetConversationParticipantActor); \
	DECLARE_FUNCTION(execGetConversationParticipant); \
	DECLARE_FUNCTION(execCanConversationContinue); \
	DECLARE_FUNCTION(execAbortConversation); \
	DECLARE_FUNCTION(execReturnToConversationStart); \
	DECLARE_FUNCTION(execReturnToCurrentClientChoice); \
	DECLARE_FUNCTION(execReturnToLastClientChoice); \
	DECLARE_FUNCTION(execPauseConversationAndSendClientChoices); \
	DECLARE_FUNCTION(execAdvanceConversationWithChoice); \
	DECLARE_FUNCTION(execAdvanceConversation); \
	DECLARE_FUNCTION(execMakeConversationParticipant); \
	DECLARE_FUNCTION(execGetCurrentConversationNodeHandle); \
	DECLARE_FUNCTION(execGetConversationInstance);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationContextHelpers(); \
	friend struct Z_Construct_UClass_UConversationContextHelpers_Statics; \
public: \
	DECLARE_CLASS(UConversationContextHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationContextHelpers)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_INCLASS \
private: \
	static void StaticRegisterNativesUConversationContextHelpers(); \
	friend struct Z_Construct_UClass_UConversationContextHelpers_Statics; \
public: \
	DECLARE_CLASS(UConversationContextHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationContextHelpers)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationContextHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationContextHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationContextHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationContextHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationContextHelpers(UConversationContextHelpers&&); \
	NO_API UConversationContextHelpers(const UConversationContextHelpers&); \
public: \
	NO_API virtual ~UConversationContextHelpers();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationContextHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationContextHelpers(UConversationContextHelpers&&); \
	NO_API UConversationContextHelpers(const UConversationContextHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationContextHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationContextHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationContextHelpers) \
	NO_API virtual ~UConversationContextHelpers();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_236_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_239_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationContextHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h


#define FOREACH_ENUM_ECONVERSATIONTASKRESULTTYPE(op) \
	op(EConversationTaskResultType::Invalid) \
	op(EConversationTaskResultType::AbortConversation) \
	op(EConversationTaskResultType::AdvanceConversation) \
	op(EConversationTaskResultType::AdvanceConversationWithChoice) \
	op(EConversationTaskResultType::PauseConversationAndSendClientChoices) \
	op(EConversationTaskResultType::ReturnToLastClientChoice) \
	op(EConversationTaskResultType::ReturnToCurrentClientChoice) \
	op(EConversationTaskResultType::ReturnToConversationStart) 

enum class EConversationTaskResultType : uint8;
template<> struct TIsUEnumClass<EConversationTaskResultType> { enum { Value = true }; };
template<> COMMONCONVERSATIONRUNTIME_API UEnum* StaticEnum<EConversationTaskResultType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
