// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterSubsystem_generated_h
#error "WaterSubsystem.generated.h already included, missing '#pragma once' in WaterSubsystem.h"
#endif
#define WATER_WaterSubsystem_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_17_DELEGATE \
WATER_API void FOnCameraUnderwaterStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCameraUnderwaterStateChanged, bool bIsUnderWater, float DepthUnderwater);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_18_DELEGATE \
WATER_API void FOnWaterScalabilityChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWaterScalabilityChanged);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanTotalHeight); \
	DECLARE_FUNCTION(execGetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanBaseHeight); \
	DECLARE_FUNCTION(execPrintToWaterLog); \
	DECLARE_FUNCTION(execGetCameraUnderwaterDepth); \
	DECLARE_FUNCTION(execGetSmoothedWorldTimeSeconds); \
	DECLARE_FUNCTION(execGetWaterTimeSeconds); \
	DECLARE_FUNCTION(execIsWaterRenderingEnabled); \
	DECLARE_FUNCTION(execGetShallowWaterSimulationRenderTargetSize); \
	DECLARE_FUNCTION(execGetShallowWaterMaxImpulseForces); \
	DECLARE_FUNCTION(execGetShallowWaterMaxDynamicForces); \
	DECLARE_FUNCTION(execIsUnderwaterPostProcessEnabled); \
	DECLARE_FUNCTION(execIsShallowWaterSimulationEnabled);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanTotalHeight); \
	DECLARE_FUNCTION(execGetOceanFloodHeight); \
	DECLARE_FUNCTION(execGetOceanBaseHeight); \
	DECLARE_FUNCTION(execPrintToWaterLog); \
	DECLARE_FUNCTION(execGetCameraUnderwaterDepth); \
	DECLARE_FUNCTION(execGetSmoothedWorldTimeSeconds); \
	DECLARE_FUNCTION(execGetWaterTimeSeconds); \
	DECLARE_FUNCTION(execIsWaterRenderingEnabled); \
	DECLARE_FUNCTION(execGetShallowWaterSimulationRenderTargetSize); \
	DECLARE_FUNCTION(execGetShallowWaterMaxImpulseForces); \
	DECLARE_FUNCTION(execGetShallowWaterMaxDynamicForces); \
	DECLARE_FUNCTION(execIsUnderwaterPostProcessEnabled); \
	DECLARE_FUNCTION(execIsShallowWaterSimulationEnabled);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterSubsystem(); \
	friend struct Z_Construct_UClass_UWaterSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWaterSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSubsystem)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUWaterSubsystem(); \
	friend struct Z_Construct_UClass_UWaterSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWaterSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSubsystem)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSubsystem(UWaterSubsystem&&); \
	NO_API UWaterSubsystem(const UWaterSubsystem&); \
public: \
	NO_API virtual ~UWaterSubsystem();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSubsystem(UWaterSubsystem&&); \
	NO_API UWaterSubsystem(const UWaterSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterSubsystem) \
	NO_API virtual ~UWaterSubsystem();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_70_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
