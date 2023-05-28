// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayerAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataLayerType : uint8;
struct FColor;
#ifdef ENGINE_DataLayerAsset_generated_h
#error "DataLayerAsset.generated.h already included, missing '#pragma once' in DataLayerAsset.h"
#endif
#define ENGINE_DataLayerAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execGetType);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execGetType);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataLayerAsset(); \
	friend struct Z_Construct_UClass_UDataLayerAsset_Statics; \
public: \
	DECLARE_CLASS(UDataLayerAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerAsset)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDataLayerAsset(); \
	friend struct Z_Construct_UClass_UDataLayerAsset_Statics; \
public: \
	DECLARE_CLASS(UDataLayerAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDataLayerAsset)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayerAsset(UDataLayerAsset&&); \
	NO_API UDataLayerAsset(const UDataLayerAsset&); \
public: \
	NO_API virtual ~UDataLayerAsset();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataLayerAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataLayerAsset(UDataLayerAsset&&); \
	NO_API UDataLayerAsset(const UDataLayerAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataLayerAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataLayerAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataLayerAsset) \
	NO_API virtual ~UDataLayerAsset();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DataLayerAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDataLayerAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
