// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAISense;
#ifdef AIMODULE_AIPerceptionStimuliSourceComponent_generated_h
#error "AIPerceptionStimuliSourceComponent.generated.h already included, missing '#pragma once' in AIPerceptionStimuliSourceComponent.h"
#endif
#define AIMODULE_AIPerceptionStimuliSourceComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterFromSense); \
	DECLARE_FUNCTION(execUnregisterFromPerceptionSystem); \
	DECLARE_FUNCTION(execRegisterForSense); \
	DECLARE_FUNCTION(execRegisterWithPerceptionSystem);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterFromSense); \
	DECLARE_FUNCTION(execUnregisterFromPerceptionSystem); \
	DECLARE_FUNCTION(execRegisterForSense); \
	DECLARE_FUNCTION(execRegisterWithPerceptionSystem);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIPerceptionStimuliSourceComponent(); \
	friend struct Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionStimuliSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionStimuliSourceComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAIPerceptionStimuliSourceComponent(); \
	friend struct Z_Construct_UClass_UAIPerceptionStimuliSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionStimuliSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionStimuliSourceComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionStimuliSourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionStimuliSourceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionStimuliSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionStimuliSourceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionStimuliSourceComponent(UAIPerceptionStimuliSourceComponent&&); \
	NO_API UAIPerceptionStimuliSourceComponent(const UAIPerceptionStimuliSourceComponent&); \
public: \
	NO_API virtual ~UAIPerceptionStimuliSourceComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionStimuliSourceComponent(UAIPerceptionStimuliSourceComponent&&); \
	NO_API UAIPerceptionStimuliSourceComponent(const UAIPerceptionStimuliSourceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionStimuliSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionStimuliSourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionStimuliSourceComponent) \
	NO_API virtual ~UAIPerceptionStimuliSourceComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIPerceptionStimuliSourceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionStimuliSourceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
