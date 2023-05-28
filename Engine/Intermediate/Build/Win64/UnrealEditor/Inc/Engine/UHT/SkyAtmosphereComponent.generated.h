// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SkyAtmosphereComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDirectionalLightComponent;
struct FLinearColor;
#ifdef ENGINE_SkyAtmosphereComponent_generated_h
#error "SkyAtmosphereComponent.generated.h already included, missing '#pragma once' in SkyAtmosphereComponent.h"
#endif
#define ENGINE_SkyAtmosphereComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTentDistribution_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTentDistribution>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAtmosphereTransmitanceOnGroundAtPlanetTop); \
	DECLARE_FUNCTION(execSetHeightFogContribution); \
	DECLARE_FUNCTION(execSetAerialPespectiveViewDistanceScale); \
	DECLARE_FUNCTION(execSetSkyLuminanceFactor); \
	DECLARE_FUNCTION(execSetOtherAbsorption); \
	DECLARE_FUNCTION(execSetOtherAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieExponentialDistribution); \
	DECLARE_FUNCTION(execSetMieAnisotropy); \
	DECLARE_FUNCTION(execSetMieAbsorption); \
	DECLARE_FUNCTION(execSetMieAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieScattering); \
	DECLARE_FUNCTION(execSetMieScatteringScale); \
	DECLARE_FUNCTION(execSetRayleighExponentialDistribution); \
	DECLARE_FUNCTION(execSetRayleighScattering); \
	DECLARE_FUNCTION(execSetRayleighScatteringScale); \
	DECLARE_FUNCTION(execSetMultiScatteringFactor); \
	DECLARE_FUNCTION(execSetAtmosphereHeight); \
	DECLARE_FUNCTION(execResetAtmosphereLightDirectionOverride); \
	DECLARE_FUNCTION(execGetOverridenAtmosphereLightDirection); \
	DECLARE_FUNCTION(execIsAtmosphereLightDirectionOverriden); \
	DECLARE_FUNCTION(execOverrideAtmosphereLightDirection);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAtmosphereTransmitanceOnGroundAtPlanetTop); \
	DECLARE_FUNCTION(execSetHeightFogContribution); \
	DECLARE_FUNCTION(execSetAerialPespectiveViewDistanceScale); \
	DECLARE_FUNCTION(execSetSkyLuminanceFactor); \
	DECLARE_FUNCTION(execSetOtherAbsorption); \
	DECLARE_FUNCTION(execSetOtherAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieExponentialDistribution); \
	DECLARE_FUNCTION(execSetMieAnisotropy); \
	DECLARE_FUNCTION(execSetMieAbsorption); \
	DECLARE_FUNCTION(execSetMieAbsorptionScale); \
	DECLARE_FUNCTION(execSetMieScattering); \
	DECLARE_FUNCTION(execSetMieScatteringScale); \
	DECLARE_FUNCTION(execSetRayleighExponentialDistribution); \
	DECLARE_FUNCTION(execSetRayleighScattering); \
	DECLARE_FUNCTION(execSetRayleighScatteringScale); \
	DECLARE_FUNCTION(execSetMultiScatteringFactor); \
	DECLARE_FUNCTION(execSetAtmosphereHeight); \
	DECLARE_FUNCTION(execResetAtmosphereLightDirectionOverride); \
	DECLARE_FUNCTION(execGetOverridenAtmosphereLightDirection); \
	DECLARE_FUNCTION(execIsAtmosphereLightDirectionOverriden); \
	DECLARE_FUNCTION(execOverrideAtmosphereLightDirection);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkyAtmosphereComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyAtmosphereComponent(); \
	friend struct Z_Construct_UClass_USkyAtmosphereComponent_Statics; \
public: \
	DECLARE_CLASS(USkyAtmosphereComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkyAtmosphereComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUSkyAtmosphereComponent(); \
	friend struct Z_Construct_UClass_USkyAtmosphereComponent_Statics; \
public: \
	DECLARE_CLASS(USkyAtmosphereComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkyAtmosphereComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkyAtmosphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyAtmosphereComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkyAtmosphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyAtmosphereComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkyAtmosphereComponent(USkyAtmosphereComponent&&); \
	ENGINE_API USkyAtmosphereComponent(const USkyAtmosphereComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkyAtmosphereComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkyAtmosphereComponent(USkyAtmosphereComponent&&); \
	ENGINE_API USkyAtmosphereComponent(const USkyAtmosphereComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkyAtmosphereComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyAtmosphereComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyAtmosphereComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_45_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyAtmosphereComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkyAtmosphereComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkyAtmosphere(); \
	friend struct Z_Construct_UClass_ASkyAtmosphere_Statics; \
public: \
	DECLARE_CLASS(ASkyAtmosphere, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASkyAtmosphere)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_INCLASS \
private: \
	static void StaticRegisterNativesASkyAtmosphere(); \
	friend struct Z_Construct_UClass_ASkyAtmosphere_Statics; \
public: \
	DECLARE_CLASS(ASkyAtmosphere, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ASkyAtmosphere)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASkyAtmosphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyAtmosphere) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASkyAtmosphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyAtmosphere); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASkyAtmosphere(ASkyAtmosphere&&); \
	ENGINE_API ASkyAtmosphere(const ASkyAtmosphere&); \
public: \
	ENGINE_API virtual ~ASkyAtmosphere();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ASkyAtmosphere(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ASkyAtmosphere(ASkyAtmosphere&&); \
	ENGINE_API ASkyAtmosphere(const ASkyAtmosphere&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ASkyAtmosphere); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkyAtmosphere); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASkyAtmosphere) \
	ENGINE_API virtual ~ASkyAtmosphere();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_278_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h_281_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyAtmosphere."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ASkyAtmosphere>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SkyAtmosphereComponent_h


#define FOREACH_ENUM_ESKYATMOSPHERETRANSFORMMODE(op) \
	op(ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin) \
	op(ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform) \
	op(ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform) 

enum class ESkyAtmosphereTransformMode : uint8;
template<> struct TIsUEnumClass<ESkyAtmosphereTransformMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESkyAtmosphereTransformMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
