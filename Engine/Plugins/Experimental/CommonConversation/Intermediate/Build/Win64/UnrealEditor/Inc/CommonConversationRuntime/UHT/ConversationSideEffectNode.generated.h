// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationSideEffectNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConversationContext;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationSideEffectNode_generated_h
#error "ConversationSideEffectNode.generated.h already included, missing '#pragma once' in ConversationSideEffectNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationSideEffectNode_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_RPC_WRAPPERS \
	virtual void ClientCauseSideEffect_Implementation(FConversationContext const& Context) const; \
	virtual void ServerCauseSideEffect_Implementation(FConversationContext const& Context) const; \
 \
	DECLARE_FUNCTION(execClientCauseSideEffect); \
	DECLARE_FUNCTION(execServerCauseSideEffect);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientCauseSideEffect_Implementation(FConversationContext const& Context) const; \
	virtual void ServerCauseSideEffect_Implementation(FConversationContext const& Context) const; \
 \
	DECLARE_FUNCTION(execClientCauseSideEffect); \
	DECLARE_FUNCTION(execServerCauseSideEffect);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationSideEffectNode(); \
	friend struct Z_Construct_UClass_UConversationSideEffectNode_Statics; \
public: \
	DECLARE_CLASS(UConversationSideEffectNode, UConversationSubNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationSideEffectNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUConversationSideEffectNode(); \
	friend struct Z_Construct_UClass_UConversationSideEffectNode_Statics; \
public: \
	DECLARE_CLASS(UConversationSideEffectNode, UConversationSubNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationSideEffectNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationSideEffectNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationSideEffectNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationSideEffectNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationSideEffectNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationSideEffectNode(UConversationSideEffectNode&&); \
	NO_API UConversationSideEffectNode(const UConversationSideEffectNode&); \
public: \
	NO_API virtual ~UConversationSideEffectNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationSideEffectNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationSideEffectNode(UConversationSideEffectNode&&); \
	NO_API UConversationSideEffectNode(const UConversationSideEffectNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationSideEffectNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationSideEffectNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationSideEffectNode) \
	NO_API virtual ~UConversationSideEffectNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationSideEffectNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
