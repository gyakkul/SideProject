// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimNotifies/AnimNotify.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
class USkeletalMeshComponent;
struct FAnimNotifyEventReference;
#ifdef ENGINE_AnimNotify_generated_h
#error "AnimNotify.generated.h already included, missing '#pragma once' in AnimNotify.h"
#endif
#define ENGINE_AnimNotify_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBranchingPointNotifyPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBranchingPointNotifyPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_RPC_WRAPPERS \
	virtual float GetDefaultTriggerWeightThreshold_Implementation() const; \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetDefaultTriggerWeightThreshold); \
	DECLARE_FUNCTION(execGetNotifyName);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetDefaultTriggerWeightThreshold_Implementation() const; \
	virtual FString GetNotifyName_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetDefaultTriggerWeightThreshold); \
	DECLARE_FUNCTION(execGetNotifyName);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNotify(); \
	friend struct Z_Construct_UClass_UAnimNotify_Statics; \
public: \
	DECLARE_CLASS(UAnimNotify, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotify)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUAnimNotify(); \
	friend struct Z_Construct_UClass_UAnimNotify_Statics; \
public: \
	DECLARE_CLASS(UAnimNotify, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimNotify)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotify(UAnimNotify&&); \
	NO_API UAnimNotify(const UAnimNotify&); \
public: \
	NO_API virtual ~UAnimNotify();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimNotify(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimNotify(UAnimNotify&&); \
	NO_API UAnimNotify(const UAnimNotify&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimNotify); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNotify); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNotify) \
	NO_API virtual ~UAnimNotify();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_44_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimNotify."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimNotify>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
