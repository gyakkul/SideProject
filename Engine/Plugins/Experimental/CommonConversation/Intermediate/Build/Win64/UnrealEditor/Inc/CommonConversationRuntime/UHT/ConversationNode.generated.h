// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FLinearColor;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationNode_generated_h
#error "ConversationNode.generated.h already included, missing '#pragma once' in ConversationNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationNode_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConversationNodeHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONCONVERSATIONRUNTIME_API UScriptStruct* StaticStruct<struct FConversationNodeHandle>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugParticipantColor);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugParticipantColor);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationNode(); \
	friend struct Z_Construct_UClass_UConversationNode_Statics; \
public: \
	DECLARE_CLASS(UConversationNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUConversationNode(); \
	friend struct Z_Construct_UClass_UConversationNode_Statics; \
public: \
	DECLARE_CLASS(UConversationNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationNode(UConversationNode&&); \
	NO_API UConversationNode(const UConversationNode&); \
public: \
	NO_API virtual ~UConversationNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationNode(UConversationNode&&); \
	NO_API UConversationNode(const UConversationNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationNode) \
	NO_API virtual ~UConversationNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_70_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ConversationNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationNode>();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationNodeWithLinks(); \
	friend struct Z_Construct_UClass_UConversationNodeWithLinks_Statics; \
public: \
	DECLARE_CLASS(UConversationNodeWithLinks, UConversationNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationNodeWithLinks)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUConversationNodeWithLinks(); \
	friend struct Z_Construct_UClass_UConversationNodeWithLinks_Statics; \
public: \
	DECLARE_CLASS(UConversationNodeWithLinks, UConversationNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationNodeWithLinks)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationNodeWithLinks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationNodeWithLinks) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationNodeWithLinks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationNodeWithLinks); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationNodeWithLinks(UConversationNodeWithLinks&&); \
	NO_API UConversationNodeWithLinks(const UConversationNodeWithLinks&); \
public: \
	NO_API virtual ~UConversationNodeWithLinks();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationNodeWithLinks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationNodeWithLinks(UConversationNodeWithLinks&&); \
	NO_API UConversationNodeWithLinks(const UConversationNodeWithLinks&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationNodeWithLinks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationNodeWithLinks); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationNodeWithLinks) \
	NO_API virtual ~UConversationNodeWithLinks();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_169_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationNodeWithLinks>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
