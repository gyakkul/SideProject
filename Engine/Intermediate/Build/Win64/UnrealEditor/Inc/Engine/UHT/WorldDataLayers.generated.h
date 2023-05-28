// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/WorldDataLayers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataLayerInstance;
enum class EDataLayerRuntimeState : uint8;
#ifdef ENGINE_WorldDataLayers_generated_h
#error "WorldDataLayers.generated.h already included, missing '#pragma once' in WorldDataLayers.h"
#endif
#define ENGINE_WorldDataLayers_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorPlacementDataLayers>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_RPC_WRAPPERS \
	virtual void OnDataLayerRuntimeStateChanged_Implementation(const UDataLayerInstance* InDataLayer, EDataLayerRuntimeState InState); \
 \
	DECLARE_FUNCTION(execOnRep_EffectiveLoadedDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_EffectiveActiveDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_LoadedDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_ActiveDataLayerNames); \
	DECLARE_FUNCTION(execOnDataLayerRuntimeStateChanged);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnDataLayerRuntimeStateChanged_Implementation(const UDataLayerInstance* InDataLayer, EDataLayerRuntimeState InState); \
 \
	DECLARE_FUNCTION(execOnRep_EffectiveLoadedDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_EffectiveActiveDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_LoadedDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_ActiveDataLayerNames); \
	DECLARE_FUNCTION(execOnDataLayerRuntimeStateChanged);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldDataLayers(); \
	friend struct Z_Construct_UClass_AWorldDataLayers_Statics; \
public: \
	DECLARE_CLASS(AWorldDataLayers, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldDataLayers) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepActiveDataLayerNames=NETFIELD_REP_START, \
		RepLoadedDataLayerNames, \
		RepEffectiveActiveDataLayerNames, \
		RepEffectiveLoadedDataLayerNames, \
		NETFIELD_REP_END=RepEffectiveLoadedDataLayerNames	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAWorldDataLayers(); \
	friend struct Z_Construct_UClass_AWorldDataLayers_Statics; \
public: \
	DECLARE_CLASS(AWorldDataLayers, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AWorldDataLayers) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepActiveDataLayerNames=NETFIELD_REP_START, \
		RepLoadedDataLayerNames, \
		RepEffectiveActiveDataLayerNames, \
		RepEffectiveLoadedDataLayerNames, \
		NETFIELD_REP_END=RepEffectiveLoadedDataLayerNames	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldDataLayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldDataLayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldDataLayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldDataLayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldDataLayers(AWorldDataLayers&&); \
	NO_API AWorldDataLayers(const AWorldDataLayers&); \
public: \
	NO_API virtual ~AWorldDataLayers();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldDataLayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldDataLayers(AWorldDataLayers&&); \
	NO_API AWorldDataLayers(const AWorldDataLayers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldDataLayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldDataLayers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldDataLayers) \
	NO_API virtual ~AWorldDataLayers();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_39_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_42_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldDataLayers."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldDataLayers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
