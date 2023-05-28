// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/IDisplayClusterBlueprintAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADisplayClusterRootActor;
class IDisplayClusterClusterEventListener;
enum class EDisplayClusterNodeRole : uint8;
enum class EDisplayClusterOperationMode : uint8;
struct FDisplayClusterClusterEventBinary;
struct FDisplayClusterClusterEventJson;
#ifdef DISPLAYCLUSTER_IDisplayClusterBlueprintAPI_generated_h
#error "IDisplayClusterBlueprintAPI.generated.h already included, missing '#pragma once' in IDisplayClusterBlueprintAPI.h"
#endif
#define DISPLAYCLUSTER_IDisplayClusterBlueprintAPI_generated_h

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendClusterEventBinaryTo); \
	DECLARE_FUNCTION(execSendClusterEventJsonTo); \
	DECLARE_FUNCTION(execEmitClusterEventBinary); \
	DECLARE_FUNCTION(execEmitClusterEventJson); \
	DECLARE_FUNCTION(execRemoveClusterEventListener); \
	DECLARE_FUNCTION(execAddClusterEventListener); \
	DECLARE_FUNCTION(execGetClusterRole); \
	DECLARE_FUNCTION(execIsBackup); \
	DECLARE_FUNCTION(execIsSecondary); \
	DECLARE_FUNCTION(execIsPrimary); \
	DECLARE_FUNCTION(execGetActiveNodesAmount); \
	DECLARE_FUNCTION(execGetActiveNodeIds); \
	DECLARE_FUNCTION(execGetNodeId); \
	DECLARE_FUNCTION(execGetRootActor); \
	DECLARE_FUNCTION(execGetOperationMode); \
	DECLARE_FUNCTION(execIsModuleInitialized);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendClusterEventBinaryTo); \
	DECLARE_FUNCTION(execSendClusterEventJsonTo); \
	DECLARE_FUNCTION(execEmitClusterEventBinary); \
	DECLARE_FUNCTION(execEmitClusterEventJson); \
	DECLARE_FUNCTION(execRemoveClusterEventListener); \
	DECLARE_FUNCTION(execAddClusterEventListener); \
	DECLARE_FUNCTION(execGetClusterRole); \
	DECLARE_FUNCTION(execIsBackup); \
	DECLARE_FUNCTION(execIsSecondary); \
	DECLARE_FUNCTION(execIsPrimary); \
	DECLARE_FUNCTION(execGetActiveNodesAmount); \
	DECLARE_FUNCTION(execGetActiveNodeIds); \
	DECLARE_FUNCTION(execGetNodeId); \
	DECLARE_FUNCTION(execGetRootActor); \
	DECLARE_FUNCTION(execGetOperationMode); \
	DECLARE_FUNCTION(execIsModuleInitialized);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_ACCESSORS
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterBlueprintAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterBlueprintAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterBlueprintAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterBlueprintAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterBlueprintAPI(UDisplayClusterBlueprintAPI&&); \
	NO_API UDisplayClusterBlueprintAPI(const UDisplayClusterBlueprintAPI&); \
public: \
	NO_API virtual ~UDisplayClusterBlueprintAPI();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterBlueprintAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterBlueprintAPI(UDisplayClusterBlueprintAPI&&); \
	NO_API UDisplayClusterBlueprintAPI(const UDisplayClusterBlueprintAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterBlueprintAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterBlueprintAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterBlueprintAPI) \
	NO_API virtual ~UDisplayClusterBlueprintAPI();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDisplayClusterBlueprintAPI(); \
	friend struct Z_Construct_UClass_UDisplayClusterBlueprintAPI_Statics; \
public: \
	DECLARE_CLASS(UDisplayClusterBlueprintAPI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DisplayCluster"), NO_API) \
	DECLARE_SERIALIZER(UDisplayClusterBlueprintAPI)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDisplayClusterBlueprintAPI() {} \
public: \
	typedef UDisplayClusterBlueprintAPI UClassType; \
	typedef IDisplayClusterBlueprintAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_INCLASS_IINTERFACE \
protected: \
	virtual ~IDisplayClusterBlueprintAPI() {} \
public: \
	typedef UDisplayClusterBlueprintAPI UClassType; \
	typedef IDisplayClusterBlueprintAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_29_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISPLAYCLUSTER_API UClass* StaticClass<class UDisplayClusterBlueprintAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_IDisplayClusterBlueprintAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
