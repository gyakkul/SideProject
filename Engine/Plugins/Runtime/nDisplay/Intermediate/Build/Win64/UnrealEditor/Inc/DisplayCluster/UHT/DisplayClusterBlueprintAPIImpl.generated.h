// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/DisplayClusterBlueprintAPIImpl.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADisplayClusterRootActor;
class IDisplayClusterClusterEventListener;
enum class EDisplayClusterNodeRole : uint8;
enum class EDisplayClusterOperationMode : uint8;
struct FDisplayClusterClusterEventBinary;
struct FDisplayClusterClusterEventJson;
#ifdef DISPLAYCLUSTER_DisplayClusterBlueprintAPIImpl_generated_h
#error "DisplayClusterBlueprintAPIImpl.generated.h already included, missing '#pragma once' in DisplayClusterBlueprintAPIImpl.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterBlueprintAPIImpl_generated_h

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendClusterEventBinaryTo); \
	DECLARE_FUNCTION(execSendClusterEventJsonTo); \
	DECLARE_FUNCTION(execEmitClusterEventBinary); \
	DECLARE_FUNCTION(execEmitClusterEventJson); \
	DECLARE_FUNCTION(execRemoveClusterEventListener); \
	DECLARE_FUNCTION(execAddClusterEventListener); \
	DECLARE_FUNCTION(execIsBackup); \
	DECLARE_FUNCTION(execIsSecondary); \
	DECLARE_FUNCTION(execIsPrimary); \
	DECLARE_FUNCTION(execGetClusterRole); \
	DECLARE_FUNCTION(execGetActiveNodesAmount); \
	DECLARE_FUNCTION(execGetActiveNodeIds); \
	DECLARE_FUNCTION(execGetNodeId); \
	DECLARE_FUNCTION(execGetRootActor); \
	DECLARE_FUNCTION(execGetOperationMode); \
	DECLARE_FUNCTION(execIsModuleInitialized);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendClusterEventBinaryTo); \
	DECLARE_FUNCTION(execSendClusterEventJsonTo); \
	DECLARE_FUNCTION(execEmitClusterEventBinary); \
	DECLARE_FUNCTION(execEmitClusterEventJson); \
	DECLARE_FUNCTION(execRemoveClusterEventListener); \
	DECLARE_FUNCTION(execAddClusterEventListener); \
	DECLARE_FUNCTION(execIsBackup); \
	DECLARE_FUNCTION(execIsSecondary); \
	DECLARE_FUNCTION(execIsPrimary); \
	DECLARE_FUNCTION(execGetClusterRole); \
	DECLARE_FUNCTION(execGetActiveNodesAmount); \
	DECLARE_FUNCTION(execGetActiveNodeIds); \
	DECLARE_FUNCTION(execGetNodeId); \
	DECLARE_FUNCTION(execGetRootActor); \
	DECLARE_FUNCTION(execGetOperationMode); \
	DECLARE_FUNCTION(execIsModuleInitialized);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterBlueprintAPIImpl(); \
	friend struct Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics; \
public: \
	DECLARE_CLASS(UDisplayClusterBlueprintAPIImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayCluster"), NO_API) \
	DECLARE_SERIALIZER(UDisplayClusterBlueprintAPIImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterBlueprintAPIImpl*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDisplayClusterBlueprintAPIImpl(); \
	friend struct Z_Construct_UClass_UDisplayClusterBlueprintAPIImpl_Statics; \
public: \
	DECLARE_CLASS(UDisplayClusterBlueprintAPIImpl, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DisplayCluster"), NO_API) \
	DECLARE_SERIALIZER(UDisplayClusterBlueprintAPIImpl) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterBlueprintAPIImpl*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterBlueprintAPIImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterBlueprintAPIImpl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterBlueprintAPIImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterBlueprintAPIImpl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterBlueprintAPIImpl(UDisplayClusterBlueprintAPIImpl&&); \
	NO_API UDisplayClusterBlueprintAPIImpl(const UDisplayClusterBlueprintAPIImpl&); \
public: \
	NO_API virtual ~UDisplayClusterBlueprintAPIImpl();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterBlueprintAPIImpl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterBlueprintAPIImpl(UDisplayClusterBlueprintAPIImpl&&); \
	NO_API UDisplayClusterBlueprintAPIImpl(const UDisplayClusterBlueprintAPIImpl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterBlueprintAPIImpl); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterBlueprintAPIImpl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterBlueprintAPIImpl) \
	NO_API virtual ~UDisplayClusterBlueprintAPIImpl();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISPLAYCLUSTER_API UClass* StaticClass<class UDisplayClusterBlueprintAPIImpl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Blueprints_DisplayClusterBlueprintAPIImpl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
