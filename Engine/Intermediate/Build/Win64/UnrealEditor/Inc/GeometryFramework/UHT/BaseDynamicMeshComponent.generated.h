// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BaseDynamicMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UMaterialInterface;
enum class EDynamicMeshComponentColorOverrideMode : uint8;
struct FColor;
#ifdef GEOMETRYFRAMEWORK_BaseDynamicMeshComponent_generated_h
#error "BaseDynamicMeshComponent.generated.h already included, missing '#pragma once' in BaseDynamicMeshComponent.h"
#endif
#define GEOMETRYFRAMEWORK_BaseDynamicMeshComponent_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_SPARSE_DATA
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEnableRaytracing); \
	DECLARE_FUNCTION(execSetEnableRaytracing); \
	DECLARE_FUNCTION(execGetSecondaryBuffersVisibility); \
	DECLARE_FUNCTION(execSetSecondaryBuffersVisibility); \
	DECLARE_FUNCTION(execGetSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execClearSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execSetSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execGetOverrideRenderMaterial); \
	DECLARE_FUNCTION(execHasOverrideRenderMaterial); \
	DECLARE_FUNCTION(execClearOverrideRenderMaterial); \
	DECLARE_FUNCTION(execSetOverrideRenderMaterial); \
	DECLARE_FUNCTION(execGetViewModeOverridesEnabled); \
	DECLARE_FUNCTION(execSetViewModeOverridesEnabled); \
	DECLARE_FUNCTION(execGetShadowsEnabled); \
	DECLARE_FUNCTION(execSetShadowsEnabled); \
	DECLARE_FUNCTION(execGetFlatShadingEnabled); \
	DECLARE_FUNCTION(execSetEnableFlatShading); \
	DECLARE_FUNCTION(execGetConstantOverrideColor); \
	DECLARE_FUNCTION(execSetConstantOverrideColor); \
	DECLARE_FUNCTION(execGetColorOverrideMode); \
	DECLARE_FUNCTION(execSetColorOverrideMode); \
	DECLARE_FUNCTION(execGetEnableWireframeRenderPass); \
	DECLARE_FUNCTION(execSetEnableWireframeRenderPass); \
	DECLARE_FUNCTION(execGetDynamicMesh);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEnableRaytracing); \
	DECLARE_FUNCTION(execSetEnableRaytracing); \
	DECLARE_FUNCTION(execGetSecondaryBuffersVisibility); \
	DECLARE_FUNCTION(execSetSecondaryBuffersVisibility); \
	DECLARE_FUNCTION(execGetSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execClearSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execSetSecondaryRenderMaterial); \
	DECLARE_FUNCTION(execGetOverrideRenderMaterial); \
	DECLARE_FUNCTION(execHasOverrideRenderMaterial); \
	DECLARE_FUNCTION(execClearOverrideRenderMaterial); \
	DECLARE_FUNCTION(execSetOverrideRenderMaterial); \
	DECLARE_FUNCTION(execGetViewModeOverridesEnabled); \
	DECLARE_FUNCTION(execSetViewModeOverridesEnabled); \
	DECLARE_FUNCTION(execGetShadowsEnabled); \
	DECLARE_FUNCTION(execSetShadowsEnabled); \
	DECLARE_FUNCTION(execGetFlatShadingEnabled); \
	DECLARE_FUNCTION(execSetEnableFlatShading); \
	DECLARE_FUNCTION(execGetConstantOverrideColor); \
	DECLARE_FUNCTION(execSetConstantOverrideColor); \
	DECLARE_FUNCTION(execGetColorOverrideMode); \
	DECLARE_FUNCTION(execSetColorOverrideMode); \
	DECLARE_FUNCTION(execGetEnableWireframeRenderPass); \
	DECLARE_FUNCTION(execSetEnableWireframeRenderPass); \
	DECLARE_FUNCTION(execGetDynamicMesh);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_ACCESSORS
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseDynamicMeshComponent(); \
	friend struct Z_Construct_UClass_UBaseDynamicMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseDynamicMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), NO_API) \
	DECLARE_SERIALIZER(UBaseDynamicMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseDynamicMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUBaseDynamicMeshComponent(); \
	friend struct Z_Construct_UClass_UBaseDynamicMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseDynamicMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), NO_API) \
	DECLARE_SERIALIZER(UBaseDynamicMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UBaseDynamicMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseDynamicMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseDynamicMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseDynamicMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseDynamicMeshComponent(UBaseDynamicMeshComponent&&); \
	NO_API UBaseDynamicMeshComponent(const UBaseDynamicMeshComponent&); \
public: \
	NO_API virtual ~UBaseDynamicMeshComponent();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseDynamicMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseDynamicMeshComponent(UBaseDynamicMeshComponent&&); \
	NO_API UBaseDynamicMeshComponent(const UBaseDynamicMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseDynamicMeshComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseDynamicMeshComponent) \
	NO_API virtual ~UBaseDynamicMeshComponent();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_79_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_ACCESSORS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_SPARSE_DATA \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_ACCESSORS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h_87_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BaseDynamicMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UBaseDynamicMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Components_BaseDynamicMeshComponent_h


#define FOREACH_ENUM_EDYNAMICMESHCOMPONENTTANGENTSMODE(op) \
	op(EDynamicMeshComponentTangentsMode::NoTangents) \
	op(EDynamicMeshComponentTangentsMode::AutoCalculated) \
	op(EDynamicMeshComponentTangentsMode::ExternallyProvided) 

enum class EDynamicMeshComponentTangentsMode : uint8;
template<> struct TIsUEnumClass<EDynamicMeshComponentTangentsMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentTangentsMode>();

#define FOREACH_ENUM_EDYNAMICMESHCOMPONENTCOLOROVERRIDEMODE(op) \
	op(EDynamicMeshComponentColorOverrideMode::None) \
	op(EDynamicMeshComponentColorOverrideMode::VertexColors) \
	op(EDynamicMeshComponentColorOverrideMode::Polygroups) \
	op(EDynamicMeshComponentColorOverrideMode::Constant) 

enum class EDynamicMeshComponentColorOverrideMode : uint8;
template<> struct TIsUEnumClass<EDynamicMeshComponentColorOverrideMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentColorOverrideMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
