// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/HLOD/HLODLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODLayer_generated_h
#error "HLODLayer.generated.h already included, missing '#pragma once' in HLODLayer.h"
#endif
#define ENGINE_HLODLayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHLODLayer(); \
	friend struct Z_Construct_UClass_UHLODLayer_Statics; \
public: \
	DECLARE_CLASS(UHLODLayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHLODLayer) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUHLODLayer(); \
	friend struct Z_Construct_UClass_UHLODLayer_Statics; \
public: \
	DECLARE_CLASS(UHLODLayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UHLODLayer) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHLODLayer(UHLODLayer&&); \
	NO_API UHLODLayer(const UHLODLayer&); \
public: \
	NO_API virtual ~UHLODLayer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHLODLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHLODLayer(UHLODLayer&&); \
	NO_API UHLODLayer(const UHLODLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHLODLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODLayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHLODLayer) \
	NO_API virtual ~UHLODLayer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_37_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HLODLayer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHLODLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h


#define FOREACH_ENUM_EHLODLAYERTYPE(op) \
	op(EHLODLayerType::Instancing) \
	op(EHLODLayerType::MeshMerge) \
	op(EHLODLayerType::MeshSimplify) \
	op(EHLODLayerType::MeshApproximate) \
	op(EHLODLayerType::Custom) 

enum class EHLODLayerType : uint8;
template<> struct TIsUEnumClass<EHLODLayerType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EHLODLayerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
