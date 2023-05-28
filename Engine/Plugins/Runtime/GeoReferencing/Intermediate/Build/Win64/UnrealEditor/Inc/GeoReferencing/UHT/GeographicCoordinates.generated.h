// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeographicCoordinates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeographicCoordinates;
#ifdef GEOREFERENCING_GeographicCoordinates_generated_h
#error "GeographicCoordinates.generated.h already included, missing '#pragma once' in GeographicCoordinates.h"
#endif
#define GEOREFERENCING_GeographicCoordinates_generated_h

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeographicCoordinates_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOREFERENCING_API UScriptStruct* StaticStruct<struct FGeographicCoordinates>();

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToLatLongAltVector); \
	DECLARE_FUNCTION(execMakeGeographicCoordinates); \
	DECLARE_FUNCTION(execMakeGeographicCoordinatesApproximation); \
	DECLARE_FUNCTION(execToFloatApproximation); \
	DECLARE_FUNCTION(execToSeparateTexts); \
	DECLARE_FUNCTION(execToCompactText); \
	DECLARE_FUNCTION(execToFullText);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToLatLongAltVector); \
	DECLARE_FUNCTION(execMakeGeographicCoordinates); \
	DECLARE_FUNCTION(execMakeGeographicCoordinatesApproximation); \
	DECLARE_FUNCTION(execToFloatApproximation); \
	DECLARE_FUNCTION(execToSeparateTexts); \
	DECLARE_FUNCTION(execToCompactText); \
	DECLARE_FUNCTION(execToFullText);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_ACCESSORS
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeographicCoordinatesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGeographicCoordinatesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(UGeographicCoordinatesFunctionLibrary)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUGeographicCoordinatesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UGeographicCoordinatesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UGeographicCoordinatesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(UGeographicCoordinatesFunctionLibrary)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeographicCoordinatesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeographicCoordinatesFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeographicCoordinatesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeographicCoordinatesFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeographicCoordinatesFunctionLibrary(UGeographicCoordinatesFunctionLibrary&&); \
	NO_API UGeographicCoordinatesFunctionLibrary(const UGeographicCoordinatesFunctionLibrary&); \
public: \
	NO_API virtual ~UGeographicCoordinatesFunctionLibrary();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeographicCoordinatesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeographicCoordinatesFunctionLibrary(UGeographicCoordinatesFunctionLibrary&&); \
	NO_API UGeographicCoordinatesFunctionLibrary(const UGeographicCoordinatesFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeographicCoordinatesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeographicCoordinatesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeographicCoordinatesFunctionLibrary) \
	NO_API virtual ~UGeographicCoordinatesFunctionLibrary();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_INCLASS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOREFERENCING_API UClass* StaticClass<class UGeographicCoordinatesFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeographicCoordinates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
