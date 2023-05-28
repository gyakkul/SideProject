// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusMRFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDEPRECATED_UOculusMR_Settings;
class USceneComponent;
#ifdef OCULUSMR_OculusMRFunctionLibrary_generated_h
#error "OculusMRFunctionLibrary.generated.h already included, missing '#pragma once' in OculusMRFunctionLibrary.h"
#endif
#define OCULUSMR_OculusMRFunctionLibrary_generated_h

#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMrcActive); \
	DECLARE_FUNCTION(execIsMrcEnabled); \
	DECLARE_FUNCTION(execSetMrcScalingFactor); \
	DECLARE_FUNCTION(execGetMrcScalingFactor); \
	DECLARE_FUNCTION(execSetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetOculusMRSettings);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMrcActive); \
	DECLARE_FUNCTION(execIsMrcEnabled); \
	DECLARE_FUNCTION(execSetMrcScalingFactor); \
	DECLARE_FUNCTION(execGetMrcScalingFactor); \
	DECLARE_FUNCTION(execSetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetTrackingReferenceComponent); \
	DECLARE_FUNCTION(execGetOculusMRSettings);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_UOculusMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_UOculusMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_UOculusMRFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_UOculusMRFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDEPRECATED_UOculusMRFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_UOculusMRFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_UOculusMRFunctionLibrary)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_UOculusMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_UOculusMRFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_UOculusMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_UOculusMRFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_UOculusMRFunctionLibrary(UDEPRECATED_UOculusMRFunctionLibrary&&); \
	NO_API UDEPRECATED_UOculusMRFunctionLibrary(const UDEPRECATED_UOculusMRFunctionLibrary&); \
public: \
	NO_API virtual ~UDEPRECATED_UOculusMRFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_UOculusMRFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_UOculusMRFunctionLibrary(UDEPRECATED_UOculusMRFunctionLibrary&&); \
	NO_API UDEPRECATED_UOculusMRFunctionLibrary(const UDEPRECATED_UOculusMRFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_UOculusMRFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_UOculusMRFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_UOculusMRFunctionLibrary) \
	NO_API virtual ~UDEPRECATED_UOculusMRFunctionLibrary();


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UOculusMRFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSMR_API UClass* StaticClass<class UDEPRECATED_UOculusMRFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Public_OculusMRFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
