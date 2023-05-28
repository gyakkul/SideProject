// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TriggerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TriggerBase_generated_h
#error "TriggerBase.generated.h already included, missing '#pragma once' in TriggerBase.h"
#endif
#define ENGINE_TriggerBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerBase(); \
	friend struct Z_Construct_UClass_ATriggerBase_Statics; \
public: \
	DECLARE_CLASS(ATriggerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATriggerBase(); \
	friend struct Z_Construct_UClass_ATriggerBase_Statics; \
public: \
	DECLARE_CLASS(ATriggerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ATriggerBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ATriggerBase(ATriggerBase&&); \
	ENGINE_API ATriggerBase(const ATriggerBase&); \
public: \
	ENGINE_API virtual ~ATriggerBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ATriggerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ATriggerBase(ATriggerBase&&); \
	ENGINE_API ATriggerBase(const ATriggerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ATriggerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBase) \
	ENGINE_API virtual ~ATriggerBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ATriggerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
