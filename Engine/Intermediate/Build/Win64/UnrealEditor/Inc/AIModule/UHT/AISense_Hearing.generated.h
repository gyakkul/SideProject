// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Hearing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef AIMODULE_AISense_Hearing_generated_h
#error "AISense_Hearing.generated.h already included, missing '#pragma once' in AISense_Hearing.h"
#endif
#define AIMODULE_AISense_Hearing_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAINoiseEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAINoiseEvent>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReportNoiseEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReportNoiseEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Hearing(); \
	friend struct Z_Construct_UClass_UAISense_Hearing_Statics; \
public: \
	DECLARE_CLASS(UAISense_Hearing, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Hearing) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Hearing(); \
	friend struct Z_Construct_UClass_UAISense_Hearing_Statics; \
public: \
	DECLARE_CLASS(UAISense_Hearing, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Hearing) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Hearing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Hearing) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Hearing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Hearing); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Hearing(UAISense_Hearing&&); \
	NO_API UAISense_Hearing(const UAISense_Hearing&); \
public: \
	NO_API virtual ~UAISense_Hearing();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Hearing(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Hearing(UAISense_Hearing&&); \
	NO_API UAISense_Hearing(const UAISense_Hearing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Hearing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Hearing); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Hearing) \
	NO_API virtual ~UAISense_Hearing();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_63_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense_Hearing."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Hearing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
