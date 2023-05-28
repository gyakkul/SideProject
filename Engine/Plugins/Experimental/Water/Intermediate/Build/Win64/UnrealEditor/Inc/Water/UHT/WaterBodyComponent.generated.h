// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBody;
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPrimitiveComponent;
class UWaterSplineComponent;
class UWaterWavesBase;
#ifdef WATER_WaterBodyComponent_generated_h
#error "WaterBodyComponent.generated.h already included, missing '#pragma once' in WaterBodyComponent.h"
#endif
#define WATER_WaterBodyComponent_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUnderwaterPostProcessSettings_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FUnderwaterPostProcessSettings>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMaxWaveHeight); \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterSurfaceInfoAtLocation); \
	DECLARE_FUNCTION(execSetWaterAndUnderWaterPostProcessMaterial); \
	DECLARE_FUNCTION(execGetWaterInfoMaterialInstance); \
	DECLARE_FUNCTION(execGetUnderwaterPostProcessMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterLODMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterial); \
	DECLARE_FUNCTION(execGetWaterWaves); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetWaterBodyActor); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetStandardRenderableComponents); \
	DECLARE_FUNCTION(execGetCollisionComponents);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMaxWaveHeight); \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterSurfaceInfoAtLocation); \
	DECLARE_FUNCTION(execSetWaterAndUnderWaterPostProcessMaterial); \
	DECLARE_FUNCTION(execGetWaterInfoMaterialInstance); \
	DECLARE_FUNCTION(execGetUnderwaterPostProcessMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterLODMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterMaterial); \
	DECLARE_FUNCTION(execGetWaterWaves); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetWaterBodyActor); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetStandardRenderableComponents); \
	DECLARE_FUNCTION(execGetCollisionComponents);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWaterBodyComponent, NO_API)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterBodyComponent(); \
	friend struct Z_Construct_UClass_UWaterBodyComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterBodyComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterBodyComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_INCLASS \
private: \
	static void StaticRegisterNativesUWaterBodyComponent(); \
	friend struct Z_Construct_UClass_UWaterBodyComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterBodyComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterBodyComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBodyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBodyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterBodyComponent(UWaterBodyComponent&&); \
	NO_API UWaterBodyComponent(const UWaterBodyComponent&); \
public: \
	NO_API virtual ~UWaterBodyComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterBodyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterBodyComponent(UWaterBodyComponent&&); \
	NO_API UWaterBodyComponent(const UWaterBodyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterBodyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterBodyComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterBodyComponent) \
	NO_API virtual ~UWaterBodyComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_137_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h_140_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBodyComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterBodyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
