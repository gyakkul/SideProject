// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataLayerAsset;
class UDataLayerInstance;
enum class EDataLayerRuntimeState : uint8;
enum class EDataLayerState : uint8;
struct FActorDataLayer;
#ifdef ENGINE_DataLayerSubsystem_generated_h
#error "DataLayerSubsystem.generated.h already included, missing '#pragma once' in DataLayerSubsystem.h"
#endif
#define ENGINE_DataLayerSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_20_DELEGATE \
ENGINE_API void FOnDataLayerRuntimeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDataLayerRuntimeStateChanged, const UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDataLayerRuntimeStateByLabel); \
	DECLARE_FUNCTION(execSetDataLayerRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerEffectiveRuntimeStateByLabel); \
	DECLARE_FUNCTION(execGetDataLayerEffectiveRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerRuntimeStateByLabel); \
	DECLARE_FUNCTION(execGetDataLayerRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerFromLabel); \
	DECLARE_FUNCTION(execGetDataLayerFromName); \
	DECLARE_FUNCTION(execGetDataLayer); \
	DECLARE_FUNCTION(execGetLoadedDataLayerNames); \
	DECLARE_FUNCTION(execGetActiveDataLayerNames); \
	DECLARE_FUNCTION(execGetDataLayerStateByLabel); \
	DECLARE_FUNCTION(execGetDataLayerState); \
	DECLARE_FUNCTION(execSetDataLayerStateByLabel); \
	DECLARE_FUNCTION(execSetDataLayerState); \
	DECLARE_FUNCTION(execSetDataLayerInstanceRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceEffectiveRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceFromAsset);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDataLayerRuntimeStateByLabel); \
	DECLARE_FUNCTION(execSetDataLayerRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerEffectiveRuntimeStateByLabel); \
	DECLARE_FUNCTION(execGetDataLayerEffectiveRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerRuntimeStateByLabel); \
	DECLARE_FUNCTION(execGetDataLayerRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerFromLabel); \
	DECLARE_FUNCTION(execGetDataLayerFromName); \
	DECLARE_FUNCTION(execGetDataLayer); \
	DECLARE_FUNCTION(execGetLoadedDataLayerNames); \
	DECLARE_FUNCTION(execGetActiveDataLayerNames); \
	DECLARE_FUNCTION(execGetDataLayerStateByLabel); \
	DECLARE_FUNCTION(execGetDataLayerState); \
	DECLARE_FUNCTION(execSetDataLayerStateByLabel); \
	DECLARE_FUNCTION(execSetDataLayerState); \
	DECLARE_FUNCTION(execSetDataLayerInstanceRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceEffectiveRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceRuntimeState); \
	DECLARE_FUNCTION(execGetDataLayerInstanceFromAsset);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerSubsystem(); \
	friend struct Z_Construct_UClass_UDataLayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataLayerSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerSubsystem(); \
	friend struct Z_Construct_UClass_UDataLayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataLayerSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayerSubsystem(UDataLayerSubsystem&&); \
	NO_API UDataLayerSubsystem(const UDataLayerSubsystem&); \
public: \
	NO_API virtual ~UDataLayerSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayerSubsystem(UDataLayerSubsystem&&); \
	NO_API UDataLayerSubsystem(const UDataLayerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataLayerSubsystem) \
	NO_API virtual ~UDataLayerSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataLayerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
