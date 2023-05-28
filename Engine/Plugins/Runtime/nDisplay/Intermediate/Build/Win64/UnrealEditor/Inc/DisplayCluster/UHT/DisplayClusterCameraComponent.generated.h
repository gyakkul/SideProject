// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DisplayClusterCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDisplayClusterEyeStereoOffset : uint8;
#ifdef DISPLAYCLUSTER_DisplayClusterCameraComponent_generated_h
#error "DisplayClusterCameraComponent.generated.h already included, missing '#pragma once' in DisplayClusterCameraComponent.h"
#endif
#define DISPLAYCLUSTER_DisplayClusterCameraComponent_generated_h

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStereoOffset); \
	DECLARE_FUNCTION(execGetStereoOffset); \
	DECLARE_FUNCTION(execToggleSwapEyes); \
	DECLARE_FUNCTION(execSetSwapEyes); \
	DECLARE_FUNCTION(execGetSwapEyes); \
	DECLARE_FUNCTION(execSetInterpupillaryDistance); \
	DECLARE_FUNCTION(execGetInterpupillaryDistance);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStereoOffset); \
	DECLARE_FUNCTION(execGetStereoOffset); \
	DECLARE_FUNCTION(execToggleSwapEyes); \
	DECLARE_FUNCTION(execSetSwapEyes); \
	DECLARE_FUNCTION(execGetSwapEyes); \
	DECLARE_FUNCTION(execSetInterpupillaryDistance); \
	DECLARE_FUNCTION(execGetInterpupillaryDistance);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_ACCESSORS
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDisplayClusterCameraComponent(); \
	friend struct Z_Construct_UClass_UDisplayClusterCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UDisplayClusterCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), NO_API) \
	DECLARE_SERIALIZER(UDisplayClusterCameraComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterCameraComponent*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUDisplayClusterCameraComponent(); \
	friend struct Z_Construct_UClass_UDisplayClusterCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UDisplayClusterCameraComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DisplayCluster"), NO_API) \
	DECLARE_SERIALIZER(UDisplayClusterCameraComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UDisplayClusterCameraComponent*>(this); }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterCameraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterCameraComponent(UDisplayClusterCameraComponent&&); \
	NO_API UDisplayClusterCameraComponent(const UDisplayClusterCameraComponent&); \
public: \
	NO_API virtual ~UDisplayClusterCameraComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterCameraComponent(UDisplayClusterCameraComponent&&); \
	NO_API UDisplayClusterCameraComponent(const UDisplayClusterCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterCameraComponent) \
	NO_API virtual ~UDisplayClusterCameraComponent();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_INCLASS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISPLAYCLUSTER_API UClass* StaticClass<class UDisplayClusterCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterCameraComponent_h


#define FOREACH_ENUM_EDISPLAYCLUSTEREYESTEREOOFFSET(op) \
	op(EDisplayClusterEyeStereoOffset::None) \
	op(EDisplayClusterEyeStereoOffset::Left) \
	op(EDisplayClusterEyeStereoOffset::Right) 

enum class EDisplayClusterEyeStereoOffset : uint8;
template<> struct TIsUEnumClass<EDisplayClusterEyeStereoOffset> { enum { Value = true }; };
template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterEyeStereoOffset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
