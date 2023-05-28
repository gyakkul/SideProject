// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RoundPlanetPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGeographicCoordinates;
#ifdef GEOREFERENCING_RoundPlanetPawn_generated_h
#error "RoundPlanetPawn.generated.h already included, missing '#pragma once' in RoundPlanetPawn.h"
#endif
#define GEOREFERENCING_RoundPlanetPawn_generated_h

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseSpeedScalar); \
	DECLARE_FUNCTION(execIncreaseSpeedScalar); \
	DECLARE_FUNCTION(execResetSpeedScalar); \
	DECLARE_FUNCTION(execInterruptFlyToLocation); \
	DECLARE_FUNCTION(execFlyToLocationLatitudeLongitudeAltitude); \
	DECLARE_FUNCTION(execFlyToLocationGeographic); \
	DECLARE_FUNCTION(execFlyToLocationECEF);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseSpeedScalar); \
	DECLARE_FUNCTION(execIncreaseSpeedScalar); \
	DECLARE_FUNCTION(execResetSpeedScalar); \
	DECLARE_FUNCTION(execInterruptFlyToLocation); \
	DECLARE_FUNCTION(execFlyToLocationLatitudeLongitudeAltitude); \
	DECLARE_FUNCTION(execFlyToLocationGeographic); \
	DECLARE_FUNCTION(execFlyToLocationECEF);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_ACCESSORS
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoundPlanetPawn(); \
	friend struct Z_Construct_UClass_ARoundPlanetPawn_Statics; \
public: \
	DECLARE_CLASS(ARoundPlanetPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(ARoundPlanetPawn)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_INCLASS \
private: \
	static void StaticRegisterNativesARoundPlanetPawn(); \
	friend struct Z_Construct_UClass_ARoundPlanetPawn_Statics; \
public: \
	DECLARE_CLASS(ARoundPlanetPawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(ARoundPlanetPawn)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoundPlanetPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoundPlanetPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoundPlanetPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoundPlanetPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoundPlanetPawn(ARoundPlanetPawn&&); \
	NO_API ARoundPlanetPawn(const ARoundPlanetPawn&); \
public: \
	NO_API virtual ~ARoundPlanetPawn();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoundPlanetPawn(ARoundPlanetPawn&&); \
	NO_API ARoundPlanetPawn(const ARoundPlanetPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoundPlanetPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoundPlanetPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoundPlanetPawn) \
	NO_API virtual ~ARoundPlanetPawn();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_21_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_INCLASS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOREFERENCING_API UClass* StaticClass<class ARoundPlanetPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_RoundPlanetPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
