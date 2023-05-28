// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/IDisplayClusterProjectionBlueprintAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
#ifdef DISPLAYCLUSTERPROJECTION_IDisplayClusterProjectionBlueprintAPI_generated_h
#error "IDisplayClusterProjectionBlueprintAPI.generated.h already included, missing '#pragma once' in IDisplayClusterProjectionBlueprintAPI.h"
#endif
#define DISPLAYCLUSTERPROJECTION_IDisplayClusterProjectionBlueprintAPI_generated_h

#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCameraPolicySetCamera);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCameraPolicySetCamera);


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_ACCESSORS
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterProjectionBlueprintAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterProjectionBlueprintAPI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterProjectionBlueprintAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterProjectionBlueprintAPI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterProjectionBlueprintAPI(UDisplayClusterProjectionBlueprintAPI&&); \
	NO_API UDisplayClusterProjectionBlueprintAPI(const UDisplayClusterProjectionBlueprintAPI&); \
public: \
	NO_API virtual ~UDisplayClusterProjectionBlueprintAPI();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDisplayClusterProjectionBlueprintAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDisplayClusterProjectionBlueprintAPI(UDisplayClusterProjectionBlueprintAPI&&); \
	NO_API UDisplayClusterProjectionBlueprintAPI(const UDisplayClusterProjectionBlueprintAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDisplayClusterProjectionBlueprintAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDisplayClusterProjectionBlueprintAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDisplayClusterProjectionBlueprintAPI) \
	NO_API virtual ~UDisplayClusterProjectionBlueprintAPI();


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDisplayClusterProjectionBlueprintAPI(); \
	friend struct Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics; \
public: \
	DECLARE_CLASS(UDisplayClusterProjectionBlueprintAPI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DisplayClusterProjection"), NO_API) \
	DECLARE_SERIALIZER(UDisplayClusterProjectionBlueprintAPI)


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDisplayClusterProjectionBlueprintAPI() {} \
public: \
	typedef UDisplayClusterProjectionBlueprintAPI UClassType; \
	typedef IDisplayClusterProjectionBlueprintAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IDisplayClusterProjectionBlueprintAPI() {} \
public: \
	typedef UDisplayClusterProjectionBlueprintAPI UClassType; \
	typedef IDisplayClusterProjectionBlueprintAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_13_PROLOG
#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_ACCESSORS \
	FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISPLAYCLUSTERPROJECTION_API UClass* StaticClass<class UDisplayClusterProjectionBlueprintAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
