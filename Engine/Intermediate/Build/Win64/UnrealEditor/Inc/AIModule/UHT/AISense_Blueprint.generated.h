// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Blueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UAIPerceptionComponent;
class UAISenseEvent;
#ifdef AIMODULE_AISense_Blueprint_generated_h
#error "AISense_Blueprint.generated.h already included, missing '#pragma once' in AISense_Blueprint.h"
#endif
#define AIMODULE_AISense_Blueprint_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllListenerComponents); \
	DECLARE_FUNCTION(execGetAllListenerActors);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllListenerComponents); \
	DECLARE_FUNCTION(execGetAllListenerActors);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Blueprint(); \
	friend struct Z_Construct_UClass_UAISense_Blueprint_Statics; \
public: \
	DECLARE_CLASS(UAISense_Blueprint, UAISense, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Blueprint)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Blueprint(); \
	friend struct Z_Construct_UClass_UAISense_Blueprint_Statics; \
public: \
	DECLARE_CLASS(UAISense_Blueprint, UAISense, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Blueprint)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Blueprint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Blueprint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Blueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Blueprint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Blueprint(UAISense_Blueprint&&); \
	NO_API UAISense_Blueprint(const UAISense_Blueprint&); \
public: \
	NO_API virtual ~UAISense_Blueprint();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Blueprint(UAISense_Blueprint&&); \
	NO_API UAISense_Blueprint(const UAISense_Blueprint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Blueprint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Blueprint); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Blueprint) \
	NO_API virtual ~UAISense_Blueprint();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_17_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Blueprint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
