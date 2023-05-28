// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LidarPointCloudComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULidarPointCloud;
enum class ELidarPointCloudSpriteShape : uint8;
struct FColor;
struct FLidarPointCloudPoint;
#ifdef LIDARPOINTCLOUDRUNTIME_LidarPointCloudComponent_generated_h
#error "LidarPointCloudComponent.generated.h already included, missing '#pragma once' in LidarPointCloudComponent.h"
#endif
#define LIDARPOINTCLOUDRUNTIME_LidarPointCloudComponent_generated_h

#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyRenderingParameters); \
	DECLARE_FUNCTION(execSetPointShape); \
	DECLARE_FUNCTION(execGetPointShape); \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemoveFirstPointByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execHasPointsByRay); \
	DECLARE_FUNCTION(execHasPointsInBox); \
	DECLARE_FUNCTION(execHasPointsInSphere); \
	DECLARE_FUNCTION(execGetPointCloud);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyRenderingParameters); \
	DECLARE_FUNCTION(execSetPointShape); \
	DECLARE_FUNCTION(execGetPointShape); \
	DECLARE_FUNCTION(execSetPointCloud); \
	DECLARE_FUNCTION(execRemovePointsByRay); \
	DECLARE_FUNCTION(execRemoveFirstPointByRay); \
	DECLARE_FUNCTION(execRemovePointsInBox); \
	DECLARE_FUNCTION(execRemovePointsInSphere); \
	DECLARE_FUNCTION(execApplyColorToPointsByRay); \
	DECLARE_FUNCTION(execApplyColorToFirstPointByRay); \
	DECLARE_FUNCTION(execApplyColorToPointsInBox); \
	DECLARE_FUNCTION(execApplyColorToPointsInSphere); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfFirstPointByRay); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInBox); \
	DECLARE_FUNCTION(execSetVisibilityOfPointsInSphere); \
	DECLARE_FUNCTION(execLineTraceMulti); \
	DECLARE_FUNCTION(execLineTraceSingle); \
	DECLARE_FUNCTION(execGetPointsInBoxAsCopies); \
	DECLARE_FUNCTION(execGetPointsInSphereAsCopies); \
	DECLARE_FUNCTION(execHasPointsByRay); \
	DECLARE_FUNCTION(execHasPointsInBox); \
	DECLARE_FUNCTION(execHasPointsInSphere); \
	DECLARE_FUNCTION(execGetPointCloud);


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_ACCESSORS
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULidarPointCloudComponent(); \
	friend struct Z_Construct_UClass_ULidarPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudComponent)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesULidarPointCloudComponent(); \
	friend struct Z_Construct_UClass_ULidarPointCloudComponent_Statics; \
public: \
	DECLARE_CLASS(ULidarPointCloudComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LidarPointCloudRuntime"), NO_API) \
	DECLARE_SERIALIZER(ULidarPointCloudComponent)


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULidarPointCloudComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULidarPointCloudComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudComponent(ULidarPointCloudComponent&&); \
	NO_API ULidarPointCloudComponent(const ULidarPointCloudComponent&); \
public: \
	NO_API virtual ~ULidarPointCloudComponent();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULidarPointCloudComponent(ULidarPointCloudComponent&&); \
	NO_API ULidarPointCloudComponent(const ULidarPointCloudComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULidarPointCloudComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULidarPointCloudComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULidarPointCloudComponent) \
	NO_API virtual ~ULidarPointCloudComponent();


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_23_PROLOG
#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_INCLASS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<class ULidarPointCloudComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h


#define FOREACH_ENUM_ELIDARPOINTCLOUDSPRITEORIENTATION(op) \
	op(ELidarPointCloudSpriteOrientation::PreferFacingCamera) \
	op(ELidarPointCloudSpriteOrientation::PreferFacingNormal) 

enum class ELidarPointCloudSpriteOrientation : uint8;
template<> struct TIsUEnumClass<ELidarPointCloudSpriteOrientation> { enum { Value = true }; };
template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudSpriteOrientation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
