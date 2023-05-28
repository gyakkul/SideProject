// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectTrace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ObjectTrace_generated_h
#error "ObjectTrace.generated.h already included, missing '#pragma once' in ObjectTrace.h"
#endif
#define ENGINE_ObjectTrace_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectTraceWorldSubsystem(); \
	friend struct Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UObjectTraceWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UObjectTraceWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUObjectTraceWorldSubsystem(); \
	friend struct Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UObjectTraceWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UObjectTraceWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectTraceWorldSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectTraceWorldSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTraceWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTraceWorldSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectTraceWorldSubsystem(UObjectTraceWorldSubsystem&&); \
	NO_API UObjectTraceWorldSubsystem(const UObjectTraceWorldSubsystem&); \
public: \
	NO_API virtual ~UObjectTraceWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectTraceWorldSubsystem(UObjectTraceWorldSubsystem&&); \
	NO_API UObjectTraceWorldSubsystem(const UObjectTraceWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectTraceWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectTraceWorldSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectTraceWorldSubsystem) \
	NO_API virtual ~UObjectTraceWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UObjectTraceWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_ObjectTrace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
