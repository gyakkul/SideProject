// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/WorldSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldSubsystem_generated_h
#error "WorldSubsystem.generated.h already included, missing '#pragma once' in WorldSubsystem.h"
#endif
#define ENGINE_WorldSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldSubsystem(); \
	friend struct Z_Construct_UClass_UWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWorldSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUWorldSubsystem(); \
	friend struct Z_Construct_UClass_UWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWorldSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldSubsystem(UWorldSubsystem&&); \
	NO_API UWorldSubsystem(const UWorldSubsystem&); \
public: \
	NO_API virtual ~UWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldSubsystem(UWorldSubsystem&&); \
	NO_API UWorldSubsystem(const UWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWorldSubsystem) \
	NO_API virtual ~UWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldSubsystem>();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickableWorldSubsystem(); \
	friend struct Z_Construct_UClass_UTickableWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTickableWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTickableWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUTickableWorldSubsystem(); \
	friend struct Z_Construct_UClass_UTickableWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTickableWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTickableWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTickableWorldSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTickableWorldSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTickableWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableWorldSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTickableWorldSubsystem(UTickableWorldSubsystem&&); \
	NO_API UTickableWorldSubsystem(const UTickableWorldSubsystem&); \
public: \
	NO_API virtual ~UTickableWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTickableWorldSubsystem(UTickableWorldSubsystem&&); \
	NO_API UTickableWorldSubsystem(const UTickableWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTickableWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableWorldSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTickableWorldSubsystem) \
	NO_API virtual ~UTickableWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_52_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTickableWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
