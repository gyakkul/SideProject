// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Scene.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Scene_generated_h
#error "Scene.generated.h already included, missing '#pragma once' in Scene.h"
#endif
#define ENGINE_Scene_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorGradePerRangeSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FColorGradePerRangeSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FColorGradingSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FColorGradingSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFilmStockSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFilmStockSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_255_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGaussianSumBloomSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGaussianSumBloomSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_375_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConvolutionBloomSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FConvolutionBloomSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_430_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensBloomSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLensBloomSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_457_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensImperfectionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLensImperfectionSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_488_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLensSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLensSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_514_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraExposureSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraExposureSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_615_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightedBlendable_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWeightedBlendable>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_645_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightedBlendables_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWeightedBlendables>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_675_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPostProcessSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPostProcessSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScene(); \
	friend struct Z_Construct_UClass_UScene_Statics; \
public: \
	DECLARE_CLASS(UScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UScene)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_INCLASS \
private: \
	static void StaticRegisterNativesUScene(); \
	friend struct Z_Construct_UClass_UScene_Statics; \
public: \
	DECLARE_CLASS(UScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UScene)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScene) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScene); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScene(UScene&&); \
	NO_API UScene(const UScene&); \
public: \
	NO_API virtual ~UScene();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UScene(UScene&&); \
	NO_API UScene(const UScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScene); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScene) \
	NO_API virtual ~UScene();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2371_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h_2374_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Scene."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UScene>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Scene_h


#define FOREACH_ENUM_EDEPTHOFFIELDMETHOD(op) \
	op(DOFM_BokehDOF) \
	op(DOFM_Gaussian) \
	op(DOFM_CircleDOF) 

enum EDepthOfFieldMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EDepthOfFieldMethod>();

#define FOREACH_ENUM_EAUTOEXPOSUREMETHOD(op) \
	op(AEM_Histogram) \
	op(AEM_Basic) \
	op(AEM_Manual) 

enum EAutoExposureMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EAutoExposureMethod>();

#define FOREACH_ENUM_EBLOOMMETHOD(op) \
	op(BM_SOG) \
	op(BM_FFT) 

enum EBloomMethod : int;
template<> ENGINE_API UEnum* StaticEnum<EBloomMethod>();

#define FOREACH_ENUM_ETEMPERATUREMETHOD(op) \
	op(TEMP_WhiteBalance) \
	op(TEMP_ColorTemperature) 

enum ETemperatureMethod : int;
template<> ENGINE_API UEnum* StaticEnum<ETemperatureMethod>();

#define FOREACH_ENUM_ELIGHTUNITS(op) \
	op(ELightUnits::Unitless) \
	op(ELightUnits::Candelas) \
	op(ELightUnits::Lumens) 

enum class ELightUnits : uint8;
template<> struct TIsUEnumClass<ELightUnits> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELightUnits>();

#define FOREACH_ENUM_EREFLECTIONSTYPE(op) \
	op(EReflectionsType::ScreenSpace) \
	op(EReflectionsType::RayTracing) 

enum class EReflectionsType : uint8;
template<> struct TIsUEnumClass<EReflectionsType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EReflectionsType>();

#define FOREACH_ENUM_ELUMENRAYLIGHTINGMODEOVERRIDE(op) \
	op(ELumenRayLightingModeOverride::Default) \
	op(ELumenRayLightingModeOverride::SurfaceCache) \
	op(ELumenRayLightingModeOverride::HitLighting) 

enum class ELumenRayLightingModeOverride : uint8;
template<> struct TIsUEnumClass<ELumenRayLightingModeOverride> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ELumenRayLightingModeOverride>();

#define FOREACH_ENUM_ETRANSLUCENCYTYPE(op) \
	op(ETranslucencyType::Raster) \
	op(ETranslucencyType::RayTracing) 

enum class ETranslucencyType : uint8;
template<> struct TIsUEnumClass<ETranslucencyType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETranslucencyType>();

#define FOREACH_ENUM_ERAYTRACINGGLOBALILLUMINATIONTYPE(op) \
	op(ERayTracingGlobalIlluminationType::Disabled) \
	op(ERayTracingGlobalIlluminationType::BruteForce) \
	op(ERayTracingGlobalIlluminationType::FinalGather) 

enum class ERayTracingGlobalIlluminationType : uint8;
template<> struct TIsUEnumClass<ERayTracingGlobalIlluminationType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERayTracingGlobalIlluminationType>();

#define FOREACH_ENUM_EREFLECTEDANDREFRACTEDRAYTRACEDSHADOWS(op) \
	op(EReflectedAndRefractedRayTracedShadows::Disabled) \
	op(EReflectedAndRefractedRayTracedShadows::Hard_shadows) \
	op(EReflectedAndRefractedRayTracedShadows::Area_shadows) 

enum class EReflectedAndRefractedRayTracedShadows : uint8;
template<> struct TIsUEnumClass<EReflectedAndRefractedRayTracedShadows> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EReflectedAndRefractedRayTracedShadows>();

#define FOREACH_ENUM_EMOBILEPLANARREFLECTIONMODE(op) \
	op(EMobilePlanarReflectionMode::Usual) \
	op(EMobilePlanarReflectionMode::MobilePPRExclusive) \
	op(EMobilePlanarReflectionMode::MobilePPR) 

namespace EMobilePlanarReflectionMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMobilePlanarReflectionMode::Type>();

#define FOREACH_ENUM_EMOBILEPIXELPROJECTEDREFLECTIONQUALITY(op) \
	op(EMobilePixelProjectedReflectionQuality::Disabled) \
	op(EMobilePixelProjectedReflectionQuality::BestPerformance) \
	op(EMobilePixelProjectedReflectionQuality::BetterQuality) \
	op(EMobilePixelProjectedReflectionQuality::BestQuality) 

namespace EMobilePixelProjectedReflectionQuality { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMobilePixelProjectedReflectionQuality::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
