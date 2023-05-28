// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzureSpatialAnchorsEventComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAzureCloudSpatialAnchor;
enum class EAzureSpatialAnchorsLocateAnchorStatus : uint8;
enum class EAzureSpatialAnchorsSessionUserFeedback : uint8;
#ifdef AZURESPATIALANCHORS_AzureSpatialAnchorsEventComponent_generated_h
#error "AzureSpatialAnchorsEventComponent.generated.h already included, missing '#pragma once' in AzureSpatialAnchorsEventComponent.h"
#endif
#define AZURESPATIALANCHORS_AzureSpatialAnchorsEventComponent_generated_h

#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_26_DELEGATE \
static void FASAAnchorLocatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ASAAnchorLocatedDelegate, int32 WatcherIdentifier, EAzureSpatialAnchorsLocateAnchorStatus Status, UAzureCloudSpatialAnchor* CloudSpatialAnchor);


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_30_DELEGATE \
static void FASALocateAnchorsCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ASALocateAnchorsCompletedDelegate, int32 WatcherIdentifier, bool WasCanceled);


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_34_DELEGATE \
static void FASASessionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ASASessionUpdatedDelegate, float ReadyForCreateProgress, float RecommendedForCreateProgress, int32 SessionCreateHash, int32 SessionLocateHash, EAzureSpatialAnchorsSessionUserFeedback Feedback);


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAzureSpatialAnchorsEventComponent(); \
	friend struct Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics; \
public: \
	DECLARE_CLASS(UAzureSpatialAnchorsEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzureSpatialAnchors"), NO_API) \
	DECLARE_SERIALIZER(UAzureSpatialAnchorsEventComponent)


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAzureSpatialAnchorsEventComponent(); \
	friend struct Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics; \
public: \
	DECLARE_CLASS(UAzureSpatialAnchorsEventComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AzureSpatialAnchors"), NO_API) \
	DECLARE_SERIALIZER(UAzureSpatialAnchorsEventComponent)


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzureSpatialAnchorsEventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzureSpatialAnchorsEventComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzureSpatialAnchorsEventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzureSpatialAnchorsEventComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzureSpatialAnchorsEventComponent(UAzureSpatialAnchorsEventComponent&&); \
	NO_API UAzureSpatialAnchorsEventComponent(const UAzureSpatialAnchorsEventComponent&); \
public: \
	NO_API virtual ~UAzureSpatialAnchorsEventComponent();


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAzureSpatialAnchorsEventComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAzureSpatialAnchorsEventComponent(UAzureSpatialAnchorsEventComponent&&); \
	NO_API UAzureSpatialAnchorsEventComponent(const UAzureSpatialAnchorsEventComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAzureSpatialAnchorsEventComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAzureSpatialAnchorsEventComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAzureSpatialAnchorsEventComponent) \
	NO_API virtual ~UAzureSpatialAnchorsEventComponent();


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AzureSpatialAnchorsEventComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AZURESPATIALANCHORS_API UClass* StaticClass<class UAzureSpatialAnchorsEventComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
