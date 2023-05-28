// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CartesianCoordinates.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCartesianCoordinates;
#ifdef GEOREFERENCING_CartesianCoordinates_generated_h
#error "CartesianCoordinates.generated.h already included, missing '#pragma once' in CartesianCoordinates.h"
#endif
#define GEOREFERENCING_CartesianCoordinates_generated_h

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCartesianCoordinates_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOREFERENCING_API UScriptStruct* StaticStruct<struct FCartesianCoordinates>();

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeCartesianCoordinatesApproximation); \
	DECLARE_FUNCTION(execToFloatApproximation); \
	DECLARE_FUNCTION(execToSeparateTexts); \
	DECLARE_FUNCTION(execToCompactText); \
	DECLARE_FUNCTION(execToFullText);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeCartesianCoordinatesApproximation); \
	DECLARE_FUNCTION(execToFloatApproximation); \
	DECLARE_FUNCTION(execToSeparateTexts); \
	DECLARE_FUNCTION(execToCompactText); \
	DECLARE_FUNCTION(execToFullText);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_ACCESSORS
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCartesianCoordinatesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCartesianCoordinatesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(UCartesianCoordinatesFunctionLibrary)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUCartesianCoordinatesFunctionLibrary(); \
	friend struct Z_Construct_UClass_UCartesianCoordinatesFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UCartesianCoordinatesFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(UCartesianCoordinatesFunctionLibrary)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCartesianCoordinatesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCartesianCoordinatesFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartesianCoordinatesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartesianCoordinatesFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartesianCoordinatesFunctionLibrary(UCartesianCoordinatesFunctionLibrary&&); \
	NO_API UCartesianCoordinatesFunctionLibrary(const UCartesianCoordinatesFunctionLibrary&); \
public: \
	NO_API virtual ~UCartesianCoordinatesFunctionLibrary();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCartesianCoordinatesFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartesianCoordinatesFunctionLibrary(UCartesianCoordinatesFunctionLibrary&&); \
	NO_API UCartesianCoordinatesFunctionLibrary(const UCartesianCoordinatesFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartesianCoordinatesFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartesianCoordinatesFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCartesianCoordinatesFunctionLibrary) \
	NO_API virtual ~UCartesianCoordinatesFunctionLibrary();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_INCLASS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOREFERENCING_API UClass* StaticClass<class UCartesianCoordinatesFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_CartesianCoordinates_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
