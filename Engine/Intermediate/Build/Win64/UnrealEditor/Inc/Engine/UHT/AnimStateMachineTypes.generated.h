// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimStateMachineTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimStateMachineTypes_generated_h
#error "AnimStateMachineTypes.generated.h already included, missing '#pragma once' in AnimStateMachineTypes.h"
#endif
#define ENGINE_AnimStateMachineTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTransitionRule_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTransitionRule>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_139_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateBase_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationStateBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTransitionBetweenStates_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationStateBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTransitionBetweenStates>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_249_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedStateExitTransition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedStateExitTransition>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedAnimationState_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedAnimationState>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_350_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBakedAnimationStateMachine_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBakedAnimationStateMachine>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStateMachineTypes(); \
	friend struct Z_Construct_UClass_UAnimStateMachineTypes_Statics; \
public: \
	DECLARE_CLASS(UAnimStateMachineTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimStateMachineTypes)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStateMachineTypes(); \
	friend struct Z_Construct_UClass_UAnimStateMachineTypes_Statics; \
public: \
	DECLARE_CLASS(UAnimStateMachineTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimStateMachineTypes)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimStateMachineTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateMachineTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimStateMachineTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateMachineTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimStateMachineTypes(UAnimStateMachineTypes&&); \
	NO_API UAnimStateMachineTypes(const UAnimStateMachineTypes&); \
public: \
	NO_API virtual ~UAnimStateMachineTypes();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimStateMachineTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimStateMachineTypes(UAnimStateMachineTypes&&); \
	NO_API UAnimStateMachineTypes(const UAnimStateMachineTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimStateMachineTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStateMachineTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStateMachineTypes) \
	NO_API virtual ~UAnimStateMachineTypes();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_396_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h_399_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStateMachineTypes."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimStateMachineTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimStateMachineTypes_h


#define FOREACH_ENUM_ETRANSITIONREQUESTQUEUEMODE(op) \
	op(ETransitionRequestQueueMode::Shared) \
	op(ETransitionRequestQueueMode::Unique) 

enum class ETransitionRequestQueueMode : uint8;
template<> struct TIsUEnumClass<ETransitionRequestQueueMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETransitionRequestQueueMode>();

#define FOREACH_ENUM_ETRANSITIONREQUESTOVERWRITEMODE(op) \
	op(ETransitionRequestOverwriteMode::Append) \
	op(ETransitionRequestOverwriteMode::Ignore) \
	op(ETransitionRequestOverwriteMode::Overwrite) 

enum class ETransitionRequestOverwriteMode : uint8;
template<> struct TIsUEnumClass<ETransitionRequestOverwriteMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETransitionRequestOverwriteMode>();

#define FOREACH_ENUM_ETRANSITIONBLENDMODE(op) \
	op(ETransitionBlendMode::TBM_Linear) \
	op(ETransitionBlendMode::TBM_Cubic) 

namespace ETransitionBlendMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ETransitionBlendMode::Type>();

#define FOREACH_ENUM_ETRANSITIONLOGICTYPE(op) \
	op(ETransitionLogicType::TLT_StandardBlend) \
	op(ETransitionLogicType::TLT_Inertialization) \
	op(ETransitionLogicType::TLT_Custom) 

namespace ETransitionLogicType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ETransitionLogicType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
