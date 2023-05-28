// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODActor_generated_h
#error "HLODActor.generated.h already included, missing '#pragma once' in HLODActor.h"
#endif
#define ENGINE_HLODActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldPartitionHLOD, NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionHLOD(); \
	friend struct Z_Construct_UClass_AWorldPartitionHLOD_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionHLOD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldPartitionHLOD) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPartitionHLOD(); \
	friend struct Z_Construct_UClass_AWorldPartitionHLOD_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionHLOD, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldPartitionHLOD) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionHLOD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPartitionHLOD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionHLOD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPartitionHLOD(AWorldPartitionHLOD&&); \
	NO_API AWorldPartitionHLOD(const AWorldPartitionHLOD&); \
public: \
	NO_API virtual ~AWorldPartitionHLOD();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPartitionHLOD(AWorldPartitionHLOD&&); \
	NO_API AWorldPartitionHLOD(const AWorldPartitionHLOD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPartitionHLOD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionHLOD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionHLOD) \
	NO_API virtual ~AWorldPartitionHLOD();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldPartitionHLOD."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldPartitionHLOD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
