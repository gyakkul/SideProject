// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TriggerSphere.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerSphere_generated_h
#error "TriggerSphere.generated.h already included, missing '#pragma once' in TriggerSphere.h"
#endif
#define ENGINE_TriggerSphere_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerSphere(); \
	friend struct Z_Construct_UClass_ATriggerSphere_Statics; \
public: \
	DECLARE_CLASS(ATriggerSphere, ATriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerSphere)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATriggerSphere(); \
	friend struct Z_Construct_UClass_ATriggerSphere_Statics; \
public: \
	DECLARE_CLASS(ATriggerSphere, ATriggerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ATriggerSphere)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerSphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerSphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerSphere(ATriggerSphere&&); \
	NO_API ATriggerSphere(const ATriggerSphere&); \
public: \
	NO_API virtual ~ATriggerSphere();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerSphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerSphere(ATriggerSphere&&); \
	NO_API ATriggerSphere(const ATriggerSphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerSphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerSphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerSphere) \
	NO_API virtual ~ATriggerSphere();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerSphere."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerSphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerSphere_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
