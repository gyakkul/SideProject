// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Damage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef AIMODULE_AISense_Damage_generated_h
#error "AISense_Damage.generated.h already included, missing '#pragma once' in AISense_Damage.h"
#endif
#define AIMODULE_AISense_Damage_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDamageEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDamageEvent>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReportDamageEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReportDamageEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Damage(); \
	friend struct Z_Construct_UClass_UAISense_Damage_Statics; \
public: \
	DECLARE_CLASS(UAISense_Damage, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Damage)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Damage(); \
	friend struct Z_Construct_UClass_UAISense_Damage_Statics; \
public: \
	DECLARE_CLASS(UAISense_Damage, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Damage)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Damage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Damage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Damage(UAISense_Damage&&); \
	NO_API UAISense_Damage(const UAISense_Damage&); \
public: \
	NO_API virtual ~UAISense_Damage();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Damage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Damage(UAISense_Damage&&); \
	NO_API UAISense_Damage(const UAISense_Damage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Damage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Damage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Damage) \
	NO_API virtual ~UAISense_Damage();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_59_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_62_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense_Damage."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Damage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
