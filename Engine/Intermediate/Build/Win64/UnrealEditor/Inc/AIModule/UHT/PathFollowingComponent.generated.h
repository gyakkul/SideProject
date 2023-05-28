// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/PathFollowingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ANavigationData;
struct FHitResult;
#ifdef AIMODULE_PathFollowingComponent_generated_h
#error "PathFollowingComponent.generated.h already included, missing '#pragma once' in PathFollowingComponent.h"
#endif
#define AIMODULE_PathFollowingComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnNavDataRegistered); \
	DECLARE_FUNCTION(execGetPathDestination); \
	DECLARE_FUNCTION(execGetPathActionType); \
	DECLARE_FUNCTION(execOnActorBump);


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnNavDataRegistered); \
	DECLARE_FUNCTION(execGetPathDestination); \
	DECLARE_FUNCTION(execGetPathActionType); \
	DECLARE_FUNCTION(execOnActorBump);


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathFollowingComponent(); \
	friend struct Z_Construct_UClass_UPathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UPathFollowingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPathFollowingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPathFollowingComponent*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_INCLASS \
private: \
	static void StaticRegisterNativesUPathFollowingComponent(); \
	friend struct Z_Construct_UClass_UPathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UPathFollowingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPathFollowingComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPathFollowingComponent*>(this); }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFollowingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathFollowingComponent(UPathFollowingComponent&&); \
	NO_API UPathFollowingComponent(const UPathFollowingComponent&); \
public: \
	NO_API virtual ~UPathFollowingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPathFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPathFollowingComponent(UPathFollowingComponent&&); \
	NO_API UPathFollowingComponent(const UPathFollowingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathFollowingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPathFollowingComponent) \
	NO_API virtual ~UPathFollowingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_215_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_218_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PathFollowingComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPathFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h


#define FOREACH_ENUM_EPATHFOLLOWINGSTATUS(op) \
	op(EPathFollowingStatus::Idle) \
	op(EPathFollowingStatus::Waiting) \
	op(EPathFollowingStatus::Paused) \
	op(EPathFollowingStatus::Moving) 

namespace EPathFollowingStatus { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingStatus::Type>();

#define FOREACH_ENUM_EPATHFOLLOWINGRESULT(op) \
	op(EPathFollowingResult::Success) \
	op(EPathFollowingResult::Blocked) \
	op(EPathFollowingResult::OffPath) \
	op(EPathFollowingResult::Aborted) \
	op(EPathFollowingResult::Skipped_DEPRECATED) \
	op(EPathFollowingResult::Invalid) 

namespace EPathFollowingResult { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingResult::Type>();

#define FOREACH_ENUM_EPATHFOLLOWINGACTION(op) \
	op(EPathFollowingAction::Error) \
	op(EPathFollowingAction::NoMove) \
	op(EPathFollowingAction::DirectMove) \
	op(EPathFollowingAction::PartialPath) \
	op(EPathFollowingAction::PathToGoal) 

namespace EPathFollowingAction { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingAction::Type>();

#define FOREACH_ENUM_EPATHFOLLOWINGREQUESTRESULT(op) \
	op(EPathFollowingRequestResult::Failed) \
	op(EPathFollowingRequestResult::AlreadyAtGoal) \
	op(EPathFollowingRequestResult::RequestSuccessful) 

namespace EPathFollowingRequestResult { enum Type : int; }
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingRequestResult::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
