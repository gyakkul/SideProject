// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/PawnSensingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef AIMODULE_PawnSensingComponent_generated_h
#error "PawnSensingComponent.generated.h already included, missing '#pragma once' in PawnSensingComponent.h"
#endif
#define AIMODULE_PawnSensingComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_25_DELEGATE \
static void FSeePawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& SeePawnDelegate, APawn* Pawn);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_26_DELEGATE \
static void FHearNoiseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HearNoiseDelegate, APawn* Instigator, FVector const& Location, float Volume);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPeripheralVisionCosine); \
	DECLARE_FUNCTION(execGetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetSensingUpdatesEnabled); \
	DECLARE_FUNCTION(execSetSensingInterval);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPeripheralVisionCosine); \
	DECLARE_FUNCTION(execGetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetPeripheralVisionAngle); \
	DECLARE_FUNCTION(execSetSensingUpdatesEnabled); \
	DECLARE_FUNCTION(execSetSensingInterval);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnSensingComponent(); \
	friend struct Z_Construct_UClass_UPawnSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnSensingComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPawnSensingComponent(); \
	friend struct Z_Construct_UClass_UPawnSensingComponent_Statics; \
public: \
	DECLARE_CLASS(UPawnSensingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UPawnSensingComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnSensingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnSensingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnSensingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnSensingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnSensingComponent(UPawnSensingComponent&&); \
	NO_API UPawnSensingComponent(const UPawnSensingComponent&); \
public: \
	NO_API virtual ~UPawnSensingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnSensingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnSensingComponent(UPawnSensingComponent&&); \
	NO_API UPawnSensingComponent(const UPawnSensingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnSensingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnSensingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnSensingComponent) \
	NO_API virtual ~UPawnSensingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PawnSensingComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UPawnSensingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
