// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DisplayClusterRootActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IDisplayClusterStageActor;
class UDisplayClusterCameraComponent;
class UDisplayClusterStageGeometryComponent;
class UProceduralMeshComponent;
class USceneComponent;
#ifdef DISPLAYCLUSTER_DisplayClusterRootActor_generated_h
#error "DisplayClusterRootActor.generated.h already included, missing '#pragma once' in DisplayClusterRootActor.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterRootActor_generated_h

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateProceduralMeshComponentData); \
	DECLARE_FUNCTION(execSetFreezeOuterViewports); \
	DECLARE_FUNCTION(execSetReplaceTextureFlagForAllViewports); \
	DECLARE_FUNCTION(execGetCommonViewPoint); \
	DECLARE_FUNCTION(execGetDefaultCamera); \
	DECLARE_FUNCTION(execGetStageGeometryComponent); \
	DECLARE_FUNCTION(execMakeStageActorFlushToWall); \
	DECLARE_FUNCTION(execGetFlushPositionAndNormal);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateProceduralMeshComponentData); \
	DECLARE_FUNCTION(execSetFreezeOuterViewports); \
	DECLARE_FUNCTION(execSetReplaceTextureFlagForAllViewports); \
	DECLARE_FUNCTION(execGetCommonViewPoint); \
	DECLARE_FUNCTION(execGetDefaultCamera); \
	DECLARE_FUNCTION(execGetStageGeometryComponent); \
	DECLARE_FUNCTION(execMakeStageActorFlushToWall); \
	DECLARE_FUNCTION(execGetFlushPositionAndNormal);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_ACCESSORS
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADisplayClusterRootActor(); \
	friend struct Z_Construct_UClass_ADisplayClusterRootActor_Statics; \
public: \
	DECLARE_CLASS(ADisplayClusterRootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), NO_API) \
	DECLARE_SERIALIZER(ADisplayClusterRootActor)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_INCLASS \
private: \
	static void StaticRegisterNativesADisplayClusterRootActor(); \
	friend struct Z_Construct_UClass_ADisplayClusterRootActor_Statics; \
public: \
	DECLARE_CLASS(ADisplayClusterRootActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), NO_API) \
	DECLARE_SERIALIZER(ADisplayClusterRootActor)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADisplayClusterRootActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADisplayClusterRootActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADisplayClusterRootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADisplayClusterRootActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADisplayClusterRootActor(ADisplayClusterRootActor&&); \
	NO_API ADisplayClusterRootActor(const ADisplayClusterRootActor&); \
public:


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADisplayClusterRootActor(ADisplayClusterRootActor&&); \
	NO_API ADisplayClusterRootActor(const ADisplayClusterRootActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADisplayClusterRootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADisplayClusterRootActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADisplayClusterRootActor)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_47_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_INCLASS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISPLAYCLUSTER_API UClass* StaticClass<class ADisplayClusterRootActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterRootActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
