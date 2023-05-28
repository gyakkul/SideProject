// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAISense;
struct FActorPerceptionBlueprintInfo;
struct FActorPerceptionUpdateInfo;
struct FAIStimulus;
#ifdef AIMODULE_AIPerceptionComponent_generated_h
#error "AIPerceptionComponent.generated.h already included, missing '#pragma once' in AIPerceptionComponent.h"
#endif
#define AIMODULE_AIPerceptionComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_22_DELEGATE \
AIMODULE_API void FPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PerceptionUpdatedDelegate, TArray<AActor*> const& UpdatedActors);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_23_DELEGATE \
AIMODULE_API void FActorPerceptionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionUpdatedDelegate, AActor* Actor, FAIStimulus Stimulus);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_24_DELEGATE \
AIMODULE_API void FActorPerceptionForgetUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionForgetUpdatedDelegate, AActor* Actor);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorPerceptionUpdateInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FActorPerceptionUpdateInfo>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_47_DELEGATE \
AIMODULE_API void FActorPerceptionInfoUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ActorPerceptionInfoUpdatedDelegate, FActorPerceptionUpdateInfo const& UpdateInfo);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorPerceptionBlueprintInfo_Statics; \
	AIMODULE_API static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FActorPerceptionBlueprintInfo>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSenseEnabled); \
	DECLARE_FUNCTION(execGetActorsPerception); \
	DECLARE_FUNCTION(execGetPerceivedActors); \
	DECLARE_FUNCTION(execGetKnownPerceivedActors); \
	DECLARE_FUNCTION(execGetCurrentlyPerceivedActors); \
	DECLARE_FUNCTION(execGetPerceivedHostileActorsBySense); \
	DECLARE_FUNCTION(execGetPerceivedHostileActors); \
	DECLARE_FUNCTION(execForgetAll); \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate); \
	DECLARE_FUNCTION(execOnOwnerEndPlay);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSenseEnabled); \
	DECLARE_FUNCTION(execGetActorsPerception); \
	DECLARE_FUNCTION(execGetPerceivedActors); \
	DECLARE_FUNCTION(execGetKnownPerceivedActors); \
	DECLARE_FUNCTION(execGetCurrentlyPerceivedActors); \
	DECLARE_FUNCTION(execGetPerceivedHostileActorsBySense); \
	DECLARE_FUNCTION(execGetPerceivedHostileActors); \
	DECLARE_FUNCTION(execForgetAll); \
	DECLARE_FUNCTION(execRequestStimuliListenerUpdate); \
	DECLARE_FUNCTION(execOnOwnerEndPlay);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionComponent(); \
	friend struct Z_Construct_UClass_UAIPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_INCLASS \
private: \
	static void StaticRegisterNativesUAIPerceptionComponent(); \
	friend struct Z_Construct_UClass_UAIPerceptionComponent_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionComponent(UAIPerceptionComponent&&); \
	NO_API UAIPerceptionComponent(const UAIPerceptionComponent&); \
public: \
	NO_API virtual ~UAIPerceptionComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionComponent(UAIPerceptionComponent&&); \
	NO_API UAIPerceptionComponent(const UAIPerceptionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionComponent) \
	NO_API virtual ~UAIPerceptionComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_207_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h_210_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIPerceptionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIPerceptionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
