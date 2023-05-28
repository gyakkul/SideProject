// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PointLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PointLightComponent_generated_h
#error "PointLightComponent.generated.h already included, missing '#pragma once' in PointLightComponent.h"
#endif
#define ENGINE_PointLightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSourceLength); \
	DECLARE_FUNCTION(execSetSoftSourceRadius); \
	DECLARE_FUNCTION(execSetSourceRadius); \
	DECLARE_FUNCTION(execSetInverseExposureBlend); \
	DECLARE_FUNCTION(execSetLightFalloffExponent); \
	DECLARE_FUNCTION(execSetUseInverseSquaredFalloff);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSourceLength); \
	DECLARE_FUNCTION(execSetSoftSourceRadius); \
	DECLARE_FUNCTION(execSetSourceRadius); \
	DECLARE_FUNCTION(execSetInverseExposureBlend); \
	DECLARE_FUNCTION(execSetLightFalloffExponent); \
	DECLARE_FUNCTION(execSetUseInverseSquaredFalloff);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPointLightComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointLightComponent(); \
	friend struct Z_Construct_UClass_UPointLightComponent_Statics; \
public: \
	DECLARE_CLASS(UPointLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPointLightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPointLightComponent(); \
	friend struct Z_Construct_UClass_UPointLightComponent_Statics; \
public: \
	DECLARE_CLASS(UPointLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPointLightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointLightComponent(UPointLightComponent&&); \
	NO_API UPointLightComponent(const UPointLightComponent&); \
public: \
	NO_API virtual ~UPointLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPointLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPointLightComponent(UPointLightComponent&&); \
	NO_API UPointLightComponent(const UPointLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPointLightComponent) \
	NO_API virtual ~UPointLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PointLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPointLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PointLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
