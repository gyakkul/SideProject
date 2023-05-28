// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataLayerRuntimeState : uint8;
enum class EDataLayerType : uint8;
struct FColor;
#ifdef ENGINE_DataLayerInstance_generated_h
#error "DataLayerInstance.generated.h already included, missing '#pragma once' in DataLayerInstance.h"
#endif
#define ENGINE_DataLayerInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInitialRuntimeState); \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execIsEffectiveVisible); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsInitiallyVisible); \
	DECLARE_FUNCTION(execGetType);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInitialRuntimeState); \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execIsEffectiveVisible); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsInitiallyVisible); \
	DECLARE_FUNCTION(execGetType);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerInstance(); \
	friend struct Z_Construct_UClass_UDataLayerInstance_Statics; \
public: \
	DECLARE_CLASS(UDataLayerInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerInstance) \
	DECLARE_WITHIN(AWorldDataLayers) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerInstance(); \
	friend struct Z_Construct_UClass_UDataLayerInstance_Statics; \
public: \
	DECLARE_CLASS(UDataLayerInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerInstance) \
	DECLARE_WITHIN(AWorldDataLayers) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayerInstance(UDataLayerInstance&&); \
	NO_API UDataLayerInstance(const UDataLayerInstance&); \
public: \
	NO_API virtual ~UDataLayerInstance();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayerInstance(UDataLayerInstance&&); \
	NO_API UDataLayerInstance(const UDataLayerInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerInstance) \
	NO_API virtual ~UDataLayerInstance();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_42_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataLayerInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataLayerInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerInstance_h


#define FOREACH_ENUM_EDATALAYERRUNTIMESTATE(op) \
	op(EDataLayerRuntimeState::Unloaded) \
	op(EDataLayerRuntimeState::Loaded) \
	op(EDataLayerRuntimeState::Activated) 

enum class EDataLayerRuntimeState : uint8;
template<> struct TIsUEnumClass<EDataLayerRuntimeState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EDataLayerRuntimeState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
