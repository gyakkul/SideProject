// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/ReplicationDriver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReplicationDriver_generated_h
#error "ReplicationDriver.generated.h already included, missing '#pragma once' in ReplicationDriver.h"
#endif
#define ENGINE_ReplicationDriver_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationDriver(); \
	friend struct Z_Construct_UClass_UReplicationDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationDriver) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUReplicationDriver(); \
	friend struct Z_Construct_UClass_UReplicationDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationDriver) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationDriver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationDriver(UReplicationDriver&&); \
	NO_API UReplicationDriver(const UReplicationDriver&); \
public: \
	NO_API virtual ~UReplicationDriver();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationDriver(UReplicationDriver&&); \
	NO_API UReplicationDriver(const UReplicationDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationDriver); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UReplicationDriver) \
	NO_API virtual ~UReplicationDriver();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_47_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplicationDriver>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReplicationConnectionDriver(); \
	friend struct Z_Construct_UClass_UReplicationConnectionDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationConnectionDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationConnectionDriver)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUReplicationConnectionDriver(); \
	friend struct Z_Construct_UClass_UReplicationConnectionDriver_Statics; \
public: \
	DECLARE_CLASS(UReplicationConnectionDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UReplicationConnectionDriver)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationConnectionDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationConnectionDriver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationConnectionDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationConnectionDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationConnectionDriver(UReplicationConnectionDriver&&); \
	NO_API UReplicationConnectionDriver(const UReplicationConnectionDriver&); \
public: \
	NO_API virtual ~UReplicationConnectionDriver();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplicationConnectionDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReplicationConnectionDriver(UReplicationConnectionDriver&&); \
	NO_API UReplicationConnectionDriver(const UReplicationConnectionDriver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplicationConnectionDriver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplicationConnectionDriver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplicationConnectionDriver) \
	NO_API virtual ~UReplicationConnectionDriver();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_111_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReplicationConnectionDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_ReplicationDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
