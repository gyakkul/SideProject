// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DynamicMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UMaterialInterface;
enum class EDynamicMeshComponentTangentsMode : uint8;
#ifdef GEOMETRYFRAMEWORK_DynamicMeshComponent_generated_h
#error "DynamicMeshComponent.generated.h already included, missing '#pragma once' in DynamicMeshComponent.h"
#endif
#define GEOMETRYFRAMEWORK_DynamicMeshComponent_generated_h

#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_SPARSE_DATA
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCollision); \
	DECLARE_FUNCTION(execSetDeferredCollisionUpdatesEnabled); \
	DECLARE_FUNCTION(execSetComplexAsSimpleCollisionEnabled); \
	DECLARE_FUNCTION(execEnableComplexAsSimpleCollision); \
	DECLARE_FUNCTION(execGetTangentsType); \
	DECLARE_FUNCTION(execSetTangentsType); \
	DECLARE_FUNCTION(execValidateMaterialSlots); \
	DECLARE_FUNCTION(execConfigureMaterialSet); \
	DECLARE_FUNCTION(execSetDynamicMesh);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCollision); \
	DECLARE_FUNCTION(execSetDeferredCollisionUpdatesEnabled); \
	DECLARE_FUNCTION(execSetComplexAsSimpleCollisionEnabled); \
	DECLARE_FUNCTION(execEnableComplexAsSimpleCollision); \
	DECLARE_FUNCTION(execGetTangentsType); \
	DECLARE_FUNCTION(execSetTangentsType); \
	DECLARE_FUNCTION(execValidateMaterialSlots); \
	DECLARE_FUNCTION(execConfigureMaterialSet); \
	DECLARE_FUNCTION(execSetDynamicMesh);


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_ACCESSORS
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicMeshComponent(); \
	friend struct Z_Construct_UClass_UDynamicMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicMeshComponent, UBaseDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), NO_API) \
	DECLARE_SERIALIZER(UDynamicMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUDynamicMeshComponent(); \
	friend struct Z_Construct_UClass_UDynamicMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UDynamicMeshComponent, UBaseDynamicMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryFramework"), NO_API) \
	DECLARE_SERIALIZER(UDynamicMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDynamicMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicMeshComponent(UDynamicMeshComponent&&); \
	NO_API UDynamicMeshComponent(const UDynamicMeshComponent&); \
public: \
	NO_API virtual ~UDynamicMeshComponent();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDynamicMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDynamicMeshComponent(UDynamicMeshComponent&&); \
	NO_API UDynamicMeshComponent(const UDynamicMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDynamicMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDynamicMeshComponent) \
	NO_API virtual ~UDynamicMeshComponent();


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_62_PROLOG
#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_SPARSE_DATA \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_ACCESSORS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_INCLASS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_SPARSE_DATA \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_ACCESSORS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h_65_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DynamicMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<class UDynamicMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GeometryFramework_Public_Components_DynamicMeshComponent_h


#define FOREACH_ENUM_EDYNAMICMESHCOMPONENTRENDERUPDATEMODE(op) \
	op(EDynamicMeshComponentRenderUpdateMode::NoUpdate) \
	op(EDynamicMeshComponentRenderUpdateMode::FullUpdate) \
	op(EDynamicMeshComponentRenderUpdateMode::FastUpdate) 

enum class EDynamicMeshComponentRenderUpdateMode;
template<> struct TIsUEnumClass<EDynamicMeshComponentRenderUpdateMode> { enum { Value = true }; };
template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshComponentRenderUpdateMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
