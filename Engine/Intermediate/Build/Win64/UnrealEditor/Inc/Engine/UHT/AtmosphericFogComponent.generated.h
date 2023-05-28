// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Atmosphere/AtmosphericFogComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_AtmosphericFogComponent_generated_h
#error "AtmosphericFogComponent.generated.h already included, missing '#pragma once' in AtmosphericFogComponent.h"
#endif
#define ENGINE_AtmosphericFogComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPrecomputeParams); \
	DECLARE_FUNCTION(execDisableGroundScattering); \
	DECLARE_FUNCTION(execDisableSunDisk); \
	DECLARE_FUNCTION(execSetDistanceOffset); \
	DECLARE_FUNCTION(execSetStartDistance); \
	DECLARE_FUNCTION(execSetAltitudeScale); \
	DECLARE_FUNCTION(execSetDistanceScale); \
	DECLARE_FUNCTION(execSetDensityOffset); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetFogMultiplier); \
	DECLARE_FUNCTION(execSetSunMultiplier); \
	DECLARE_FUNCTION(execSetDefaultLightColor); \
	DECLARE_FUNCTION(execSetDefaultBrightness);


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPrecomputeParams); \
	DECLARE_FUNCTION(execDisableGroundScattering); \
	DECLARE_FUNCTION(execDisableSunDisk); \
	DECLARE_FUNCTION(execSetDistanceOffset); \
	DECLARE_FUNCTION(execSetStartDistance); \
	DECLARE_FUNCTION(execSetAltitudeScale); \
	DECLARE_FUNCTION(execSetDistanceScale); \
	DECLARE_FUNCTION(execSetDensityOffset); \
	DECLARE_FUNCTION(execSetDensityMultiplier); \
	DECLARE_FUNCTION(execSetFogMultiplier); \
	DECLARE_FUNCTION(execSetSunMultiplier); \
	DECLARE_FUNCTION(execSetDefaultLightColor); \
	DECLARE_FUNCTION(execSetDefaultBrightness);


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAtmosphericFogComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAtmosphericFogComponent(); \
	friend struct Z_Construct_UClass_UAtmosphericFogComponent_Statics; \
public: \
	DECLARE_CLASS(UAtmosphericFogComponent, USkyAtmosphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAtmosphericFogComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAtmosphericFogComponent(); \
	friend struct Z_Construct_UClass_UAtmosphericFogComponent_Statics; \
public: \
	DECLARE_CLASS(UAtmosphericFogComponent, USkyAtmosphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAtmosphericFogComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtmosphericFogComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAtmosphericFogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtmosphericFogComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAtmosphericFogComponent(UAtmosphericFogComponent&&); \
	ENGINE_API UAtmosphericFogComponent(const UAtmosphericFogComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAtmosphericFogComponent(UAtmosphericFogComponent&&); \
	ENGINE_API UAtmosphericFogComponent(const UAtmosphericFogComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAtmosphericFogComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAtmosphericFogComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAtmosphericFogComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AtmosphericFogComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAtmosphericFogComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
