// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/IKRigComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIKRigGoal;
#ifdef IKRIG_IKRigComponent_generated_h
#error "IKRigComponent.generated.h already included, missing '#pragma once' in IKRigComponent.h"
#endif
#define IKRIG_IKRigComponent_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearAllGoals); \
	DECLARE_FUNCTION(execSetIKRigGoal); \
	DECLARE_FUNCTION(execSetIKRigGoalTransform); \
	DECLARE_FUNCTION(execSetIKRigGoalPositionAndRotation);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAllGoals); \
	DECLARE_FUNCTION(execSetIKRigGoal); \
	DECLARE_FUNCTION(execSetIKRigGoalTransform); \
	DECLARE_FUNCTION(execSetIKRigGoalPositionAndRotation);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIKRigComponent(); \
	friend struct Z_Construct_UClass_UIKRigComponent_Statics; \
public: \
	DECLARE_CLASS(UIKRigComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRigComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIKRigComponent*>(this); }


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUIKRigComponent(); \
	friend struct Z_Construct_UClass_UIKRigComponent_Statics; \
public: \
	DECLARE_CLASS(UIKRigComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IKRig"), NO_API) \
	DECLARE_SERIALIZER(UIKRigComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UIKRigComponent*>(this); }


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRigComponent(UIKRigComponent&&); \
	NO_API UIKRigComponent(const UIKRigComponent&); \
public: \
	NO_API virtual ~UIKRigComponent();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIKRigComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIKRigComponent(UIKRigComponent&&); \
	NO_API UIKRigComponent(const UIKRigComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIKRigComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKRigComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKRigComponent) \
	NO_API virtual ~UIKRigComponent();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_13_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_INCLASS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKRigComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
