// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzureSpatialAnchorsFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UARPin;
class UAzureCloudSpatialAnchor;
class UObject;
enum class EAzureSpatialAnchorsLogVerbosity : uint8;
enum class EAzureSpatialAnchorsResult : uint8;
struct FAzureSpatialAnchorsLocateCriteria;
struct FAzureSpatialAnchorsSessionConfiguration;
struct FAzureSpatialAnchorsSessionStatus;
struct FCoarseLocalizationSettings;
struct FLatentActionInfo;
#ifdef AZURESPATIALANCHORS_AzureSpatialAnchorsFunctionLibrary_generated_h
#error "AzureSpatialAnchorsFunctionLibrary.generated.h already included, missing '#pragma once' in AzureSpatialAnchorsFunctionLibrary.h"
#endif
#define AZURESPATIALANCHORS_AzureSpatialAnchorsFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateARPinAroundAzureCloudSpatialAnchor); \
	DECLARE_FUNCTION(execStopWatcher); \
	DECLARE_FUNCTION(execCreateWatcher); \
	DECLARE_FUNCTION(execRefreshCloudAnchorProperties); \
	DECLARE_FUNCTION(execUpdateCloudAnchorProperties); \
	DECLARE_FUNCTION(execSaveCloudAnchor); \
	DECLARE_FUNCTION(execConstructCloudAnchor); \
	DECLARE_FUNCTION(execLoadCloudAnchor); \
	DECLARE_FUNCTION(execDeleteCloudAnchor); \
	DECLARE_FUNCTION(execSavePinToCloudWithAppProperties); \
	DECLARE_FUNCTION(execSavePinToCloud); \
	DECLARE_FUNCTION(execGetCloudAnchors); \
	DECLARE_FUNCTION(execGetCloudAnchor); \
	DECLARE_FUNCTION(execGetSessionStatus); \
	DECLARE_FUNCTION(execGetCachedSessionStatus); \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execStopSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execConfigSession2); \
	DECLARE_FUNCTION(execConfigSession); \
	DECLARE_FUNCTION(execCreateSession);


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateARPinAroundAzureCloudSpatialAnchor); \
	DECLARE_FUNCTION(execStopWatcher); \
	DECLARE_FUNCTION(execCreateWatcher); \
	DECLARE_FUNCTION(execRefreshCloudAnchorProperties); \
	DECLARE_FUNCTION(execUpdateCloudAnchorProperties); \
	DECLARE_FUNCTION(execSaveCloudAnchor); \
	DECLARE_FUNCTION(execConstructCloudAnchor); \
	DECLARE_FUNCTION(execLoadCloudAnchor); \
	DECLARE_FUNCTION(execDeleteCloudAnchor); \
	DECLARE_FUNCTION(execSavePinToCloudWithAppProperties); \
	DECLARE_FUNCTION(execSavePinToCloud); \
	DECLARE_FUNCTION(execGetCloudAnchors); \
	DECLARE_FUNCTION(execGetCloudAnchor); \
	DECLARE_FUNCTION(execGetSessionStatus); \
	DECLARE_FUNCTION(execGetCachedSessionStatus); \
	DECLARE_FUNCTION(execDestroySession); \
	DECLARE_FUNCTION(execStopSession); \
	DECLARE_FUNCTION(execStartSession); \
	DECLARE_FUNCTION(execConfigSession2); \
	DECLARE_FUNCTION(execConfigSession); \
	DECLARE_FUNCTION(execCreateSession);


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzureSpatialAnchorsLibrary(); \
	friend struct Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAzureSpatialAnchorsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzureSpatialAnchors"), NO_API) \
	DECLARE_SERIALIZER(UAzureSpatialAnchorsLibrary)


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAzureSpatialAnchorsLibrary(); \
	friend struct Z_Construct_UClass_UAzureSpatialAnchorsLibrary_Statics; \
public: \
	DECLARE_CLASS(UAzureSpatialAnchorsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AzureSpatialAnchors"), NO_API) \
	DECLARE_SERIALIZER(UAzureSpatialAnchorsLibrary)


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzureSpatialAnchorsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzureSpatialAnchorsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzureSpatialAnchorsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzureSpatialAnchorsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzureSpatialAnchorsLibrary(UAzureSpatialAnchorsLibrary&&); \
	NO_API UAzureSpatialAnchorsLibrary(const UAzureSpatialAnchorsLibrary&); \
public: \
	NO_API virtual ~UAzureSpatialAnchorsLibrary();


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzureSpatialAnchorsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzureSpatialAnchorsLibrary(UAzureSpatialAnchorsLibrary&&); \
	NO_API UAzureSpatialAnchorsLibrary(const UAzureSpatialAnchorsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzureSpatialAnchorsLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzureSpatialAnchorsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzureSpatialAnchorsLibrary) \
	NO_API virtual ~UAzureSpatialAnchorsLibrary();


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZURESPATIALANCHORS_API UClass* StaticClass<class UAzureSpatialAnchorsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
