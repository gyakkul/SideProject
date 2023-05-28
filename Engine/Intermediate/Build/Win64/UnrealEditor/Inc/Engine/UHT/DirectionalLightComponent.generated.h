// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DirectionalLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DirectionalLightComponent_generated_h
#error "DirectionalLightComponent.generated.h already included, missing '#pragma once' in DirectionalLightComponent.h"
#endif
#define ENGINE_DirectionalLightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForwardShadingPriority); \
	DECLARE_FUNCTION(execSetAtmosphereSunLightIndex); \
	DECLARE_FUNCTION(execSetAtmosphereSunLight); \
	DECLARE_FUNCTION(execSetShadowAmount); \
	DECLARE_FUNCTION(execSetShadowSourceAngleFactor); \
	DECLARE_FUNCTION(execSetLightSourceSoftAngle); \
	DECLARE_FUNCTION(execSetLightSourceAngle); \
	DECLARE_FUNCTION(execSetLightShaftOverrideDirection); \
	DECLARE_FUNCTION(execSetOcclusionDepthRange); \
	DECLARE_FUNCTION(execSetOcclusionMaskDarkness); \
	DECLARE_FUNCTION(execSetEnableLightShaftOcclusion); \
	DECLARE_FUNCTION(execSetShadowCascadeBiasDistribution); \
	DECLARE_FUNCTION(execSetShadowDistanceFadeoutFraction); \
	DECLARE_FUNCTION(execSetCascadeTransitionFraction); \
	DECLARE_FUNCTION(execSetCascadeDistributionExponent); \
	DECLARE_FUNCTION(execSetDynamicShadowCascades); \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceStationaryLight); \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceMovableLight);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForwardShadingPriority); \
	DECLARE_FUNCTION(execSetAtmosphereSunLightIndex); \
	DECLARE_FUNCTION(execSetAtmosphereSunLight); \
	DECLARE_FUNCTION(execSetShadowAmount); \
	DECLARE_FUNCTION(execSetShadowSourceAngleFactor); \
	DECLARE_FUNCTION(execSetLightSourceSoftAngle); \
	DECLARE_FUNCTION(execSetLightSourceAngle); \
	DECLARE_FUNCTION(execSetLightShaftOverrideDirection); \
	DECLARE_FUNCTION(execSetOcclusionDepthRange); \
	DECLARE_FUNCTION(execSetOcclusionMaskDarkness); \
	DECLARE_FUNCTION(execSetEnableLightShaftOcclusion); \
	DECLARE_FUNCTION(execSetShadowCascadeBiasDistribution); \
	DECLARE_FUNCTION(execSetShadowDistanceFadeoutFraction); \
	DECLARE_FUNCTION(execSetCascadeTransitionFraction); \
	DECLARE_FUNCTION(execSetCascadeDistributionExponent); \
	DECLARE_FUNCTION(execSetDynamicShadowCascades); \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceStationaryLight); \
	DECLARE_FUNCTION(execSetDynamicShadowDistanceMovableLight);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDirectionalLightComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDirectionalLightComponent(); \
	friend struct Z_Construct_UClass_UDirectionalLightComponent_Statics; \
public: \
	DECLARE_CLASS(UDirectionalLightComponent, ULightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDirectionalLightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDirectionalLightComponent(); \
	friend struct Z_Construct_UClass_UDirectionalLightComponent_Statics; \
public: \
	DECLARE_CLASS(UDirectionalLightComponent, ULightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDirectionalLightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectionalLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectionalLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDirectionalLightComponent(UDirectionalLightComponent&&); \
	NO_API UDirectionalLightComponent(const UDirectionalLightComponent&); \
public: \
	NO_API virtual ~UDirectionalLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDirectionalLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDirectionalLightComponent(UDirectionalLightComponent&&); \
	NO_API UDirectionalLightComponent(const UDirectionalLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDirectionalLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDirectionalLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDirectionalLightComponent) \
	NO_API virtual ~UDirectionalLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DirectionalLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDirectionalLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
