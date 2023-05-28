// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationTaskNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConversationRequirementResult : uint8;
struct FConversationContext;
struct FConversationNodeParameterPair;
struct FConversationTaskResult;
struct FLinearColor;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationTaskNode_generated_h
#error "ConversationTaskNode.generated.h already included, missing '#pragma once' in ConversationTaskNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationTaskNode_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_RPC_WRAPPERS \
	virtual void GatherStaticExtraData_Implementation(FConversationContext const& Context, TArray<FConversationNodeParameterPair>& InOutExtraData) const; \
	virtual void ExecuteClientEffects_Implementation(FConversationContext const& Context) const; \
	virtual FConversationTaskResult ExecuteTaskNode_Implementation(FConversationContext const& Context) const; \
	virtual EConversationRequirementResult IsRequirementSatisfied_Implementation(FConversationContext const& Context) const; \
	virtual bool GetNodeBodyColor_Implementation(FLinearColor& BodyColor) const; \
 \
	DECLARE_FUNCTION(execGatherStaticExtraData); \
	DECLARE_FUNCTION(execExecuteClientEffects); \
	DECLARE_FUNCTION(execExecuteTaskNode); \
	DECLARE_FUNCTION(execIsRequirementSatisfied); \
	DECLARE_FUNCTION(execGetNodeBodyColor);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GatherStaticExtraData_Implementation(FConversationContext const& Context, TArray<FConversationNodeParameterPair>& InOutExtraData) const; \
	virtual void ExecuteClientEffects_Implementation(FConversationContext const& Context) const; \
	virtual FConversationTaskResult ExecuteTaskNode_Implementation(FConversationContext const& Context) const; \
	virtual EConversationRequirementResult IsRequirementSatisfied_Implementation(FConversationContext const& Context) const; \
	virtual bool GetNodeBodyColor_Implementation(FLinearColor& BodyColor) const; \
 \
	DECLARE_FUNCTION(execGatherStaticExtraData); \
	DECLARE_FUNCTION(execExecuteClientEffects); \
	DECLARE_FUNCTION(execExecuteTaskNode); \
	DECLARE_FUNCTION(execIsRequirementSatisfied); \
	DECLARE_FUNCTION(execGetNodeBodyColor);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationTaskNode(); \
	friend struct Z_Construct_UClass_UConversationTaskNode_Statics; \
public: \
	DECLARE_CLASS(UConversationTaskNode, UConversationNodeWithLinks, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationTaskNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUConversationTaskNode(); \
	friend struct Z_Construct_UClass_UConversationTaskNode_Statics; \
public: \
	DECLARE_CLASS(UConversationTaskNode, UConversationNodeWithLinks, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationTaskNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationTaskNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationTaskNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationTaskNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationTaskNode(UConversationTaskNode&&); \
	NO_API UConversationTaskNode(const UConversationTaskNode&); \
public: \
	NO_API virtual ~UConversationTaskNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationTaskNode(UConversationTaskNode&&); \
	NO_API UConversationTaskNode(const UConversationTaskNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationTaskNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationTaskNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationTaskNode) \
	NO_API virtual ~UConversationTaskNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_40_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationTaskNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
