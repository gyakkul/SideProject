// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionReplay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPartitionReplay_generated_h
#error "WorldPartitionReplay.generated.h already included, missing '#pragma once' in WorldPartitionReplay.h"
#endif
#define ENGINE_WorldPartitionReplay_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldPartitionReplay(); \
	friend struct Z_Construct_UClass_AWorldPartitionReplay_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionReplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldPartitionReplay) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StreamingSourceNames=NETFIELD_REP_START, \
		NETFIELD_REP_END=StreamingSourceNames	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_INCLASS \
private: \
	static void StaticRegisterNativesAWorldPartitionReplay(); \
	friend struct Z_Construct_UClass_AWorldPartitionReplay_Statics; \
public: \
	DECLARE_CLASS(AWorldPartitionReplay, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldPartitionReplay) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StreamingSourceNames=NETFIELD_REP_START, \
		NETFIELD_REP_END=StreamingSourceNames	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldPartitionReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionReplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPartitionReplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionReplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPartitionReplay(AWorldPartitionReplay&&); \
	NO_API AWorldPartitionReplay(const AWorldPartitionReplay&); \
public: \
	NO_API virtual ~AWorldPartitionReplay();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldPartitionReplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldPartitionReplay(AWorldPartitionReplay&&); \
	NO_API AWorldPartitionReplay(const AWorldPartitionReplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldPartitionReplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldPartitionReplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldPartitionReplay) \
	NO_API virtual ~AWorldPartitionReplay();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_47_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h_50_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldPartitionReplay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldPartitionReplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionReplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
