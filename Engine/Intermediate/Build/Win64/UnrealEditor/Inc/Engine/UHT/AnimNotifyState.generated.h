// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifies/AnimNotifyState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class USkeletalMeshComponent;
struct FAnimNotifyEventReference;
#ifdef ENGINE_AnimNotifyState_generated_h
#error "AnimNotifyState.generated.h already included, missing '#pragma once' in AnimNotifyState.h"
#endif
#define ENGINE_AnimNotifyState_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_RPC_WRAPPERS \
	virtual float GetDefaultTriggerWeightThreshold_Implementation() const; \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetDefaultTriggerWeightThreshold); \
	DECLARE_FUNCTION(execGetNotifyName);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetDefaultTriggerWeightThreshold_Implementation() const; \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetDefaultTriggerWeightThreshold); \
	DECLARE_FUNCTION(execGetNotifyName);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotifyState(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotifyState(); \
	friend struct Z_Construct_UClass_UAnimNotifyState_Statics; \
public: \
	DECLARE_CLASS(UAnimNotifyState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotifyState)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState(UAnimNotifyState&&); \
	NO_API UAnimNotifyState(const UAnimNotifyState&); \
public: \
	NO_API virtual ~UAnimNotifyState();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotifyState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotifyState(UAnimNotifyState&&); \
	NO_API UAnimNotifyState(const UAnimNotifyState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotifyState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotifyState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotifyState) \
	NO_API virtual ~UAnimNotifyState();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimNotifyState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotifyState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
