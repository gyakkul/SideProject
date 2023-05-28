// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWorldPartitionRuntimeCellState : uint8;
struct FWorldPartitionStreamingQuerySource;
#ifdef ENGINE_WorldPartitionSubsystem_generated_h
#error "WorldPartitionSubsystem.generated.h already included, missing '#pragma once' in WorldPartitionSubsystem.h"
#endif
#define ENGINE_WorldPartitionSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsAllStreamingCompleted); \
	DECLARE_FUNCTION(execIsStreamingCompleted);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAllStreamingCompleted); \
	DECLARE_FUNCTION(execIsStreamingCompleted);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionSubsystem(); \
	friend struct Z_Construct_UClass_UWorldPartitionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionSubsystem(); \
	friend struct Z_Construct_UClass_UWorldPartitionSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionSubsystem(UWorldPartitionSubsystem&&); \
	NO_API UWorldPartitionSubsystem(const UWorldPartitionSubsystem&); \
public: \
	NO_API virtual ~UWorldPartitionSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionSubsystem(UWorldPartitionSubsystem&&); \
	NO_API UWorldPartitionSubsystem(const UWorldPartitionSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPartitionSubsystem) \
	NO_API virtual ~UWorldPartitionSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
