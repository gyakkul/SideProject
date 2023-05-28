// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LocationServicesBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULocationServicesImpl;
enum class ELocationAccuracy : uint8;
struct FLocationServicesData;
#ifdef LOCATIONSERVICESBPLIBRARY_LocationServicesBPLibrary_generated_h
#error "LocationServicesBPLibrary.generated.h already included, missing '#pragma once' in LocationServicesBPLibrary.h"
#endif
#define LOCATIONSERVICESBPLIBRARY_LocationServicesBPLibrary_generated_h

#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocationServicesData_Statics; \
	LOCATIONSERVICESBPLIBRARY_API static class UScriptStruct* StaticStruct();


template<> LOCATIONSERVICESBPLIBRARY_API UScriptStruct* StaticStruct<struct FLocationServicesData>();

#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_69_DELEGATE \
LOCATIONSERVICESBPLIBRARY_API void FLocationServicesData_OnLocationChanged_DelegateWrapper(const FMulticastScriptDelegate& LocationServicesData_OnLocationChanged, FLocationServicesData LocationData);


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocationServicesImpl); \
	DECLARE_FUNCTION(execIsLocationAccuracyAvailable); \
	DECLARE_FUNCTION(execAreLocationServicesEnabled); \
	DECLARE_FUNCTION(execGetLastKnownLocation); \
	DECLARE_FUNCTION(execStopLocationServices); \
	DECLARE_FUNCTION(execStartLocationServices); \
	DECLARE_FUNCTION(execInitLocationServices);


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocationServicesImpl); \
	DECLARE_FUNCTION(execIsLocationAccuracyAvailable); \
	DECLARE_FUNCTION(execAreLocationServicesEnabled); \
	DECLARE_FUNCTION(execGetLastKnownLocation); \
	DECLARE_FUNCTION(execStopLocationServices); \
	DECLARE_FUNCTION(execStartLocationServices); \
	DECLARE_FUNCTION(execInitLocationServices);


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_ACCESSORS
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocationServices(); \
	friend struct Z_Construct_UClass_ULocationServices_Statics; \
public: \
	DECLARE_CLASS(ULocationServices, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LocationServicesBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULocationServices)


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS \
private: \
	static void StaticRegisterNativesULocationServices(); \
	friend struct Z_Construct_UClass_ULocationServices_Statics; \
public: \
	DECLARE_CLASS(ULocationServices, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LocationServicesBPLibrary"), NO_API) \
	DECLARE_SERIALIZER(ULocationServices)


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationServices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationServices) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationServices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationServices); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationServices(ULocationServices&&); \
	NO_API ULocationServices(const ULocationServices&); \
public: \
	NO_API virtual ~ULocationServices();


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationServices(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationServices(ULocationServices&&); \
	NO_API ULocationServices(const ULocationServices&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationServices); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationServices); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationServices) \
	NO_API virtual ~ULocationServices();


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_73_PROLOG
#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_ACCESSORS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_ACCESSORS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h_77_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LocationServices."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOCATIONSERVICESBPLIBRARY_API UClass* StaticClass<class ULocationServices>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_LocationServicesBPLibrary_Source_LocationServicesBPLibrary_Classes_LocationServicesBPLibrary_h


#define FOREACH_ENUM_ELOCATIONACCURACY(op) \
	op(ELocationAccuracy::LA_ThreeKilometers) \
	op(ELocationAccuracy::LA_OneKilometer) \
	op(ELocationAccuracy::LA_HundredMeters) \
	op(ELocationAccuracy::LA_TenMeters) \
	op(ELocationAccuracy::LA_Best) \
	op(ELocationAccuracy::LA_Navigation) 

enum class ELocationAccuracy : uint8;
template<> struct TIsUEnumClass<ELocationAccuracy> { enum { Value = true }; };
template<> LOCATIONSERVICESBPLIBRARY_API UEnum* StaticEnum<ELocationAccuracy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
