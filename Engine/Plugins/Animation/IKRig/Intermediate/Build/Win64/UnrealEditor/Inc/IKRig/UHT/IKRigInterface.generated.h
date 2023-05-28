// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorComponents/IKRigInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FIKRigGoal;
#ifdef IKRIG_IKRigInterface_generated_h
#error "IKRigInterface.generated.h already included, missing '#pragma once' in IKRigInterface.h"
#endif
#define IKRIG_IKRigInterface_generated_h

#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_RPC_WRAPPERS \
	virtual void AddIKGoals_Implementation(TMap<FName,FIKRigGoal>& OutGoals) {}; \
 \
	DECLARE_FUNCTION(execAddIKGoals);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddIKGoals_Implementation(TMap<FName,FIKRigGoal>& OutGoals) {}; \
 \
	DECLARE_FUNCTION(execAddIKGoals);


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_ACCESSORS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKGoalCreatorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKGoalCreatorInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKGoalCreatorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKGoalCreatorInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IKRIG_API UIKGoalCreatorInterface(UIKGoalCreatorInterface&&); \
	IKRIG_API UIKGoalCreatorInterface(const UIKGoalCreatorInterface&); \
public: \
	IKRIG_API virtual ~UIKGoalCreatorInterface();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IKRIG_API UIKGoalCreatorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IKRIG_API UIKGoalCreatorInterface(UIKGoalCreatorInterface&&); \
	IKRIG_API UIKGoalCreatorInterface(const UIKGoalCreatorInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IKRIG_API, UIKGoalCreatorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIKGoalCreatorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIKGoalCreatorInterface) \
	IKRIG_API virtual ~UIKGoalCreatorInterface();


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIKGoalCreatorInterface(); \
	friend struct Z_Construct_UClass_UIKGoalCreatorInterface_Statics; \
public: \
	DECLARE_CLASS(UIKGoalCreatorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IKRig"), IKRIG_API) \
	DECLARE_SERIALIZER(UIKGoalCreatorInterface)


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIKGoalCreatorInterface() {} \
public: \
	typedef UIKGoalCreatorInterface UClassType; \
	typedef IIKGoalCreatorInterface ThisClass; \
	static void Execute_AddIKGoals(UObject* O, TMap<FName,FIKRigGoal>& OutGoals); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIKGoalCreatorInterface() {} \
public: \
	typedef UIKGoalCreatorInterface UClassType; \
	typedef IIKGoalCreatorInterface ThisClass; \
	static void Execute_AddIKGoals(UObject* O, TMap<FName,FIKRigGoal>& OutGoals); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_10_PROLOG
#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_ACCESSORS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IKRIG_API UClass* StaticClass<class UIKGoalCreatorInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
