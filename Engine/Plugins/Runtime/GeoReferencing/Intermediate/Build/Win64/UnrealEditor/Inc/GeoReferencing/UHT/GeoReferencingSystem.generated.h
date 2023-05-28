// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeoReferencingSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGeoReferencingSystem;
class UObject;
struct FCartesianCoordinates;
struct FGeographicCoordinates;
#ifdef GEOREFERENCING_GeoReferencingSystem_generated_h
#error "GeoReferencingSystem.generated.h already included, missing '#pragma once' in GeoReferencingSystem.h"
#endif
#define GEOREFERENCING_GeoReferencingSystem_generated_h

#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySettings); \
	DECLARE_FUNCTION(execGetProjectedEllipsoidMinRadius); \
	DECLARE_FUNCTION(execGetProjectedEllipsoidMaxRadius); \
	DECLARE_FUNCTION(execGetGeographicEllipsoidMinRadius); \
	DECLARE_FUNCTION(execGetGeographicEllipsoidMaxRadius); \
	DECLARE_FUNCTION(execIsCRSStringValid); \
	DECLARE_FUNCTION(execGetPlanetCenterTransform); \
	DECLARE_FUNCTION(execGetTangentTransformAtGeographicLocation); \
	DECLARE_FUNCTION(execGetTangentTransformAtEngineLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtGeographicLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtEngineLocation); \
	DECLARE_FUNCTION(execGeographicToEngine); \
	DECLARE_FUNCTION(execEngineToGeographic); \
	DECLARE_FUNCTION(execK2_GetTangentTransformAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetTangentTransformAtProjectedLocation); \
	DECLARE_FUNCTION(execK2_GetECEFENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetENUVectorsAtProjectedLocation); \
	DECLARE_FUNCTION(execK2_ECEFToGeographic); \
	DECLARE_FUNCTION(execK2_GeographicToECEF); \
	DECLARE_FUNCTION(execK2_ECEFToProjected); \
	DECLARE_FUNCTION(execK2_ProjectedToECEF); \
	DECLARE_FUNCTION(execK2_GeographicToProjected); \
	DECLARE_FUNCTION(execK2_ProjectedToGeographic); \
	DECLARE_FUNCTION(execK2_ECEFToEngine); \
	DECLARE_FUNCTION(execK2_EngineToECEF); \
	DECLARE_FUNCTION(execK2_ProjectedToEngine); \
	DECLARE_FUNCTION(execK2_EngineToProjected); \
	DECLARE_FUNCTION(execGetTangentTransformAtECEFLocation); \
	DECLARE_FUNCTION(execGetTangentTransformAtProjectedLocation); \
	DECLARE_FUNCTION(execGetECEFENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtProjectedLocation); \
	DECLARE_FUNCTION(execECEFToGeographic); \
	DECLARE_FUNCTION(execGeographicToECEF); \
	DECLARE_FUNCTION(execECEFToProjected); \
	DECLARE_FUNCTION(execProjectedToECEF); \
	DECLARE_FUNCTION(execGeographicToProjected); \
	DECLARE_FUNCTION(execProjectedToGeographic); \
	DECLARE_FUNCTION(execECEFToEngine); \
	DECLARE_FUNCTION(execEngineToECEF); \
	DECLARE_FUNCTION(execProjectedToEngine); \
	DECLARE_FUNCTION(execEngineToProjected); \
	DECLARE_FUNCTION(execGetGeoReferencingSystem);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySettings); \
	DECLARE_FUNCTION(execGetProjectedEllipsoidMinRadius); \
	DECLARE_FUNCTION(execGetProjectedEllipsoidMaxRadius); \
	DECLARE_FUNCTION(execGetGeographicEllipsoidMinRadius); \
	DECLARE_FUNCTION(execGetGeographicEllipsoidMaxRadius); \
	DECLARE_FUNCTION(execIsCRSStringValid); \
	DECLARE_FUNCTION(execGetPlanetCenterTransform); \
	DECLARE_FUNCTION(execGetTangentTransformAtGeographicLocation); \
	DECLARE_FUNCTION(execGetTangentTransformAtEngineLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtGeographicLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtEngineLocation); \
	DECLARE_FUNCTION(execGeographicToEngine); \
	DECLARE_FUNCTION(execEngineToGeographic); \
	DECLARE_FUNCTION(execK2_GetTangentTransformAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetTangentTransformAtProjectedLocation); \
	DECLARE_FUNCTION(execK2_GetECEFENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execK2_GetENUVectorsAtProjectedLocation); \
	DECLARE_FUNCTION(execK2_ECEFToGeographic); \
	DECLARE_FUNCTION(execK2_GeographicToECEF); \
	DECLARE_FUNCTION(execK2_ECEFToProjected); \
	DECLARE_FUNCTION(execK2_ProjectedToECEF); \
	DECLARE_FUNCTION(execK2_GeographicToProjected); \
	DECLARE_FUNCTION(execK2_ProjectedToGeographic); \
	DECLARE_FUNCTION(execK2_ECEFToEngine); \
	DECLARE_FUNCTION(execK2_EngineToECEF); \
	DECLARE_FUNCTION(execK2_ProjectedToEngine); \
	DECLARE_FUNCTION(execK2_EngineToProjected); \
	DECLARE_FUNCTION(execGetTangentTransformAtECEFLocation); \
	DECLARE_FUNCTION(execGetTangentTransformAtProjectedLocation); \
	DECLARE_FUNCTION(execGetECEFENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtECEFLocation); \
	DECLARE_FUNCTION(execGetENUVectorsAtProjectedLocation); \
	DECLARE_FUNCTION(execECEFToGeographic); \
	DECLARE_FUNCTION(execGeographicToECEF); \
	DECLARE_FUNCTION(execECEFToProjected); \
	DECLARE_FUNCTION(execProjectedToECEF); \
	DECLARE_FUNCTION(execGeographicToProjected); \
	DECLARE_FUNCTION(execProjectedToGeographic); \
	DECLARE_FUNCTION(execECEFToEngine); \
	DECLARE_FUNCTION(execEngineToECEF); \
	DECLARE_FUNCTION(execProjectedToEngine); \
	DECLARE_FUNCTION(execEngineToProjected); \
	DECLARE_FUNCTION(execGetGeoReferencingSystem);


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_ACCESSORS
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGeoReferencingSystem(); \
	friend struct Z_Construct_UClass_AGeoReferencingSystem_Statics; \
public: \
	DECLARE_CLASS(AGeoReferencingSystem, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(AGeoReferencingSystem)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAGeoReferencingSystem(); \
	friend struct Z_Construct_UClass_AGeoReferencingSystem_Statics; \
public: \
	DECLARE_CLASS(AGeoReferencingSystem, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeoReferencing"), NO_API) \
	DECLARE_SERIALIZER(AGeoReferencingSystem)


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeoReferencingSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeoReferencingSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeoReferencingSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeoReferencingSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeoReferencingSystem(AGeoReferencingSystem&&); \
	NO_API AGeoReferencingSystem(const AGeoReferencingSystem&); \
public: \
	NO_API virtual ~AGeoReferencingSystem();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGeoReferencingSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGeoReferencingSystem(AGeoReferencingSystem&&); \
	NO_API AGeoReferencingSystem(const AGeoReferencingSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGeoReferencingSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGeoReferencingSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGeoReferencingSystem) \
	NO_API virtual ~AGeoReferencingSystem();


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_39_PROLOG
#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_INCLASS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_ACCESSORS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOREFERENCING_API UClass* StaticClass<class AGeoReferencingSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_GeoReferencingSystem_h


#define FOREACH_ENUM_EPLANETSHAPE(op) \
	op(EPlanetShape::FlatPlanet) \
	op(EPlanetShape::RoundPlanet) 

enum class EPlanetShape : uint8;
template<> struct TIsUEnumClass<EPlanetShape> { enum { Value = true }; };
template<> GEOREFERENCING_API UEnum* StaticEnum<EPlanetShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
