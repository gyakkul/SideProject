// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Behaviour/Builtin/Conditional/RCBehaviourConditionalNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URCBehaviour;
#ifdef REMOTECONTROLLOGIC_RCBehaviourConditionalNode_generated_h
#error "RCBehaviourConditionalNode.generated.h already included, missing '#pragma once' in RCBehaviourConditionalNode.h"
#endif
#define REMOTECONTROLLOGIC_RCBehaviourConditionalNode_generated_h

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_RPC_WRAPPERS \
	virtual void OnPassed_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool IsSupported_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool Execute_Implementation(URCBehaviour* InBehaviour) const; \
 \
	DECLARE_FUNCTION(execOnPassed); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPassed_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool IsSupported_Implementation(URCBehaviour* InBehaviour) const; \
	virtual bool Execute_Implementation(URCBehaviour* InBehaviour) const; \
 \
	DECLARE_FUNCTION(execOnPassed); \
	DECLARE_FUNCTION(execIsSupported); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCBehaviourConditionalNode(); \
	friend struct Z_Construct_UClass_URCBehaviourConditionalNode_Statics; \
public: \
	DECLARE_CLASS(URCBehaviourConditionalNode, URCBehaviourNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), NO_API) \
	DECLARE_SERIALIZER(URCBehaviourConditionalNode)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesURCBehaviourConditionalNode(); \
	friend struct Z_Construct_UClass_URCBehaviourConditionalNode_Statics; \
public: \
	DECLARE_CLASS(URCBehaviourConditionalNode, URCBehaviourNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlLogic"), NO_API) \
	DECLARE_SERIALIZER(URCBehaviourConditionalNode)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCBehaviourConditionalNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCBehaviourConditionalNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviourConditionalNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviourConditionalNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCBehaviourConditionalNode(URCBehaviourConditionalNode&&); \
	NO_API URCBehaviourConditionalNode(const URCBehaviourConditionalNode&); \
public: \
	NO_API virtual ~URCBehaviourConditionalNode();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCBehaviourConditionalNode(URCBehaviourConditionalNode&&); \
	NO_API URCBehaviourConditionalNode(const URCBehaviourConditionalNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCBehaviourConditionalNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCBehaviourConditionalNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCBehaviourConditionalNode) \
	NO_API virtual ~URCBehaviourConditionalNode();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_11_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_INCLASS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTROLLOGIC_API UClass* StaticClass<class URCBehaviourConditionalNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Conditional_RCBehaviourConditionalNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
