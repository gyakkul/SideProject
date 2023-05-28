// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WorldPartitionStreamingSourceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionStreamingSourceComponent_generated_h
#error "WorldPartitionStreamingSourceComponent.generated.h already included, missing '#pragma once' in WorldPartitionStreamingSourceComponent.h"
#endif
#define ENGINE_WorldPartitionStreamingSourceComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsStreamingCompleted); \
	DECLARE_FUNCTION(execIsStreamingSourceEnabled); \
	DECLARE_FUNCTION(execDisableStreamingSource); \
	DECLARE_FUNCTION(execEnableStreamingSource);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsStreamingCompleted); \
	DECLARE_FUNCTION(execIsStreamingSourceEnabled); \
	DECLARE_FUNCTION(execDisableStreamingSource); \
	DECLARE_FUNCTION(execEnableStreamingSource);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldPartitionStreamingSourceComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionStreamingSourceComponent(); \
	friend struct Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionStreamingSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionStreamingSourceComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPartitionStreamingSourceComponent(); \
	friend struct Z_Construct_UClass_UWorldPartitionStreamingSourceComponent_Statics; \
public: \
	DECLARE_CLASS(UWorldPartitionStreamingSourceComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldPartitionStreamingSourceComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionStreamingSourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionStreamingSourceComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionStreamingSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionStreamingSourceComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionStreamingSourceComponent(UWorldPartitionStreamingSourceComponent&&); \
	NO_API UWorldPartitionStreamingSourceComponent(const UWorldPartitionStreamingSourceComponent&); \
public: \
	NO_API virtual ~UWorldPartitionStreamingSourceComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPartitionStreamingSourceComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPartitionStreamingSourceComponent(UWorldPartitionStreamingSourceComponent&&); \
	NO_API UWorldPartitionStreamingSourceComponent(const UWorldPartitionStreamingSourceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPartitionStreamingSourceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionStreamingSourceComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionStreamingSourceComponent) \
	NO_API virtual ~UWorldPartitionStreamingSourceComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldPartitionStreamingSourceComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldPartitionStreamingSourceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_WorldPartitionStreamingSourceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
