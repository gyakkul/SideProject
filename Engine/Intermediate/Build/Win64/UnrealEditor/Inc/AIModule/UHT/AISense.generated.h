// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISense_generated_h
#error "AISense.generated.h already included, missing '#pragma once' in AISense.h"
#endif
#define AIMODULE_AISense_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense(); \
	friend struct Z_Construct_UClass_UAISense_Statics; \
public: \
	DECLARE_CLASS(UAISense, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUAISense(); \
	friend struct Z_Construct_UClass_UAISense_Statics; \
public: \
	DECLARE_CLASS(UAISense, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense(UAISense&&); \
	NO_API UAISense(const UAISense&); \
public: \
	NO_API virtual ~UAISense();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense(UAISense&&); \
	NO_API UAISense(const UAISense&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense) \
	NO_API virtual ~UAISense();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_18_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
