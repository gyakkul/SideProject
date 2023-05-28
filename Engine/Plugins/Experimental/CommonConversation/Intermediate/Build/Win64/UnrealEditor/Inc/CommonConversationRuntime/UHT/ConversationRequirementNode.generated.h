// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationRequirementNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConversationRequirementResult : uint8;
struct FConversationContext;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationRequirementNode_generated_h
#error "ConversationRequirementNode.generated.h already included, missing '#pragma once' in ConversationRequirementNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationRequirementNode_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_RPC_WRAPPERS \
	virtual EConversationRequirementResult IsRequirementSatisfied_Implementation(FConversationContext const& Context) const; \
 \
	DECLARE_FUNCTION(execIsRequirementSatisfied);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EConversationRequirementResult IsRequirementSatisfied_Implementation(FConversationContext const& Context) const; \
 \
	DECLARE_FUNCTION(execIsRequirementSatisfied);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationRequirementNode(); \
	friend struct Z_Construct_UClass_UConversationRequirementNode_Statics; \
public: \
	DECLARE_CLASS(UConversationRequirementNode, UConversationSubNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationRequirementNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUConversationRequirementNode(); \
	friend struct Z_Construct_UClass_UConversationRequirementNode_Statics; \
public: \
	DECLARE_CLASS(UConversationRequirementNode, UConversationSubNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationRequirementNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationRequirementNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationRequirementNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationRequirementNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationRequirementNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationRequirementNode(UConversationRequirementNode&&); \
	NO_API UConversationRequirementNode(const UConversationRequirementNode&); \
public: \
	NO_API virtual ~UConversationRequirementNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationRequirementNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConversationRequirementNode(UConversationRequirementNode&&); \
	NO_API UConversationRequirementNode(const UConversationRequirementNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationRequirementNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationRequirementNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationRequirementNode) \
	NO_API virtual ~UConversationRequirementNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationRequirementNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h


#define FOREACH_ENUM_ECONVERSATIONREQUIREMENTRESULT(op) \
	op(EConversationRequirementResult::Passed) \
	op(EConversationRequirementResult::FailedButVisible) \
	op(EConversationRequirementResult::FailedAndHidden) 

enum class EConversationRequirementResult : uint8;
template<> struct TIsUEnumClass<EConversationRequirementResult> { enum { Value = true }; };
template<> COMMONCONVERSATIONRUNTIME_API UEnum* StaticEnum<EConversationRequirementResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
