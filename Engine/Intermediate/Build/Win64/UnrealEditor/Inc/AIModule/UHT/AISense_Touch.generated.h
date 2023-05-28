// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISense_Touch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef AIMODULE_AISense_Touch_generated_h
#error "AISense_Touch.generated.h already included, missing '#pragma once' in AISense_Touch.h"
#endif
#define AIMODULE_AISense_Touch_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITouchEvent_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAITouchEvent>();

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReportTouchEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReportTouchEvent);


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAISense_Touch(); \
	friend struct Z_Construct_UClass_UAISense_Touch_Statics; \
public: \
	DECLARE_CLASS(UAISense_Touch, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Touch)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUAISense_Touch(); \
	friend struct Z_Construct_UClass_UAISense_Touch_Statics; \
public: \
	DECLARE_CLASS(UAISense_Touch, UAISense, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISense_Touch)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Touch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Touch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Touch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Touch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Touch(UAISense_Touch&&); \
	NO_API UAISense_Touch(const UAISense_Touch&); \
public: \
	NO_API virtual ~UAISense_Touch();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISense_Touch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISense_Touch(UAISense_Touch&&); \
	NO_API UAISense_Touch(const UAISense_Touch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISense_Touch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISense_Touch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISense_Touch) \
	NO_API virtual ~UAISense_Touch();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_38_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AISense_Touch."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISense_Touch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
