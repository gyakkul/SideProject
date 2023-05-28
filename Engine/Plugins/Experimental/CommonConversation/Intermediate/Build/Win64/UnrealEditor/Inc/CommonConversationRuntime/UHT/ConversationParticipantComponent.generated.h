// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationParticipantComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAdvanceConversationRequest;
struct FClientConversationMessagePayload;
struct FClientConversationOptionEntry;
struct FConversationNodeHandle;
struct FConversationParticipants;
struct FGameplayTag;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationParticipantComponent_generated_h
#error "ConversationParticipantComponent.generated.h already included, missing '#pragma once' in ConversationParticipantComponent.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationParticipantComponent_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_13_DELEGATE \
COMMONCONVERSATIONRUNTIME_API void FOnConversationStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnConversationStatusChanged, bool bIsInConversation);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_RPC_WRAPPERS \
	virtual void ClientStartConversation_Implementation(const FGameplayTag AsParticipant); \
	virtual void ClientUpdateConversations_Implementation(int32 InConversationsActive); \
	virtual void ClientUpdateConversationTaskChoiceData_Implementation(FConversationNodeHandle Handle, FClientConversationOptionEntry const& OptionEntry); \
	virtual void ClientUpdateConversation_Implementation(FClientConversationMessagePayload const& Message); \
	virtual void ClientExecuteTaskAndSideEffects_Implementation(FConversationNodeHandle Handle); \
	virtual void ClientUpdateParticipants_Implementation(FConversationParticipants const& InParticipants); \
	virtual void ServerAdvanceConversation_Implementation(FAdvanceConversationRequest const& InChoicePicked); \
 \
	DECLARE_FUNCTION(execOnRep_ConversationsActive); \
	DECLARE_FUNCTION(execClientStartConversation); \
	DECLARE_FUNCTION(execClientUpdateConversations); \
	DECLARE_FUNCTION(execClientUpdateConversationTaskChoiceData); \
	DECLARE_FUNCTION(execClientUpdateConversation); \
	DECLARE_FUNCTION(execClientExecuteTaskAndSideEffects); \
	DECLARE_FUNCTION(execClientUpdateParticipants); \
	DECLARE_FUNCTION(execServerAdvanceConversation); \
	DECLARE_FUNCTION(execIsInActiveConversation); \
	DECLARE_FUNCTION(execGetParticipantDisplayName); \
	DECLARE_FUNCTION(execRequestServerAdvanceConversation);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientStartConversation_Implementation(const FGameplayTag AsParticipant); \
	virtual void ClientUpdateConversations_Implementation(int32 InConversationsActive); \
	virtual void ClientUpdateConversationTaskChoiceData_Implementation(FConversationNodeHandle Handle, FClientConversationOptionEntry const& OptionEntry); \
	virtual void ClientUpdateConversation_Implementation(FClientConversationMessagePayload const& Message); \
	virtual void ClientExecuteTaskAndSideEffects_Implementation(FConversationNodeHandle Handle); \
	virtual void ClientUpdateParticipants_Implementation(FConversationParticipants const& InParticipants); \
	virtual void ServerAdvanceConversation_Implementation(FAdvanceConversationRequest const& InChoicePicked); \
 \
	DECLARE_FUNCTION(execOnRep_ConversationsActive); \
	DECLARE_FUNCTION(execClientStartConversation); \
	DECLARE_FUNCTION(execClientUpdateConversations); \
	DECLARE_FUNCTION(execClientUpdateConversationTaskChoiceData); \
	DECLARE_FUNCTION(execClientUpdateConversation); \
	DECLARE_FUNCTION(execClientExecuteTaskAndSideEffects); \
	DECLARE_FUNCTION(execClientUpdateParticipants); \
	DECLARE_FUNCTION(execServerAdvanceConversation); \
	DECLARE_FUNCTION(execIsInActiveConversation); \
	DECLARE_FUNCTION(execGetParticipantDisplayName); \
	DECLARE_FUNCTION(execRequestServerAdvanceConversation);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationParticipantComponent(); \
	friend struct Z_Construct_UClass_UConversationParticipantComponent_Statics; \
public: \
	DECLARE_CLASS(UConversationParticipantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationParticipantComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ConversationsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=ConversationsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUConversationParticipantComponent(); \
	friend struct Z_Construct_UClass_UConversationParticipantComponent_Statics; \
public: \
	DECLARE_CLASS(UConversationParticipantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationParticipantComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ConversationsActive=NETFIELD_REP_START, \
		NETFIELD_REP_END=ConversationsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationParticipantComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationParticipantComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationParticipantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationParticipantComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationParticipantComponent(UConversationParticipantComponent&&); \
	NO_API UConversationParticipantComponent(const UConversationParticipantComponent&); \
public: \
	NO_API virtual ~UConversationParticipantComponent();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationParticipantComponent(UConversationParticipantComponent&&); \
	NO_API UConversationParticipantComponent(const UConversationParticipantComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationParticipantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationParticipantComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationParticipantComponent) \
	NO_API virtual ~UConversationParticipantComponent();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationParticipantComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationParticipantComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
