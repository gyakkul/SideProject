// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISenseEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISenseEvent_generated_h
#error "AISenseEvent.generated.h already included, missing '#pragma once' in AISenseEvent.h"
#endif
#define AIMODULE_AISenseEvent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISenseEvent(); \
	friend struct Z_Construct_UClass_UAISenseEvent_Statics; \
public: \
	DECLARE_CLASS(UAISenseEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISenseEvent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAISenseEvent(); \
	friend struct Z_Construct_UClass_UAISenseEvent_Statics; \
public: \
	DECLARE_CLASS(UAISenseEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISenseEvent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISenseEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISenseEvent(UAISenseEvent&&); \
	NO_API UAISenseEvent(const UAISenseEvent&); \
public: \
	NO_API virtual ~UAISenseEvent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISenseEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISenseEvent(UAISenseEvent&&); \
	NO_API UAISenseEvent(const UAISenseEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISenseEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISenseEvent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISenseEvent) \
	NO_API virtual ~UAISenseEvent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISenseEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
