// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationChoiceNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClientConversationOptionEntry;
struct FConversationContext;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationChoiceNode_generated_h
#error "ConversationChoiceNode.generated.h already included, missing '#pragma once' in ConversationChoiceNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationChoiceNode_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_RPC_WRAPPERS \
	virtual void FillChoice_Implementation(FConversationContext const& Context, FClientConversationOptionEntry& ChoiceEntry) const; \
 \
	DECLARE_FUNCTION(execFillChoice);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FillChoice_Implementation(FConversationContext const& Context, FClientConversationOptionEntry& ChoiceEntry) const; \
 \
	DECLARE_FUNCTION(execFillChoice);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationChoiceNode(); \
	friend struct Z_Construct_UClass_UConversationChoiceNode_Statics; \
public: \
	DECLARE_CLASS(UConversationChoiceNode, UConversationSubNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationChoiceNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUConversationChoiceNode(); \
	friend struct Z_Construct_UClass_UConversationChoiceNode_Statics; \
public: \
	DECLARE_CLASS(UConversationChoiceNode, UConversationSubNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationChoiceNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationChoiceNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationChoiceNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationChoiceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationChoiceNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationChoiceNode(UConversationChoiceNode&&); \
	NO_API UConversationChoiceNode(const UConversationChoiceNode&); \
public: \
	NO_API virtual ~UConversationChoiceNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationChoiceNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationChoiceNode(UConversationChoiceNode&&); \
	NO_API UConversationChoiceNode(const UConversationChoiceNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationChoiceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationChoiceNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationChoiceNode) \
	NO_API virtual ~UConversationChoiceNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationChoiceNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
