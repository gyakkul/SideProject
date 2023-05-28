// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaterBodyExclusionVolume;
class AWaterBodyIsland;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UWaterBodyComponent;
class UWaterSplineComponent;
class UWaterWavesBase;
enum class EWaterBodyType : uint8;
#ifdef WATER_WaterBodyActor_generated_h
#error "WaterBodyActor.generated.h already included, missing '#pragma once' in WaterBodyActor.h"
#endif
#define WATER_WaterBodyActor_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_WaterBodyGenerator(); \
	friend struct Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_WaterBodyGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_WaterBodyGenerator) \
	DECLARE_WITHIN(AWaterBody)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_WaterBodyGenerator(); \
	friend struct Z_Construct_UClass_UDEPRECATED_WaterBodyGenerator_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_WaterBodyGenerator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_WaterBodyGenerator) \
	DECLARE_WITHIN(AWaterBody)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_WaterBodyGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_WaterBodyGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_WaterBodyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_WaterBodyGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_WaterBodyGenerator(UDEPRECATED_WaterBodyGenerator&&); \
	NO_API UDEPRECATED_WaterBodyGenerator(const UDEPRECATED_WaterBodyGenerator&); \
public: \
	NO_API virtual ~UDEPRECATED_WaterBodyGenerator();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_WaterBodyGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_WaterBodyGenerator(UDEPRECATED_WaterBodyGenerator&&); \
	NO_API UDEPRECATED_WaterBodyGenerator(const UDEPRECATED_WaterBodyGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_WaterBodyGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_WaterBodyGenerator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_WaterBodyGenerator) \
	NO_API virtual ~UDEPRECATED_WaterBodyGenerator();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBodyGenerator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UDEPRECATED_WaterBodyGenerator>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetAudioIntensityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execSetWaterMaterial); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterBodyComponent); \
	DECLARE_FUNCTION(execSetWaterWaves); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetWaterBodyType);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnWaterBodyChanged); \
	DECLARE_FUNCTION(execGetExclusionVolumes); \
	DECLARE_FUNCTION(execGetIslands); \
	DECLARE_FUNCTION(execGetAudioIntensityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityVectorAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterVelocityAtSplineInputKey); \
	DECLARE_FUNCTION(execGetWaterMaterialInstance); \
	DECLARE_FUNCTION(execSetWaterMaterial); \
	DECLARE_FUNCTION(execGetRiverToOceanTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetRiverToLakeTransitionMaterialInstance); \
	DECLARE_FUNCTION(execGetWaterBodyComponent); \
	DECLARE_FUNCTION(execSetWaterWaves); \
	DECLARE_FUNCTION(execGetWaterSpline); \
	DECLARE_FUNCTION(execGetWaterBodyType);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBody, NO_API)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterBody(); \
	friend struct Z_Construct_UClass_AWaterBody_Statics; \
public: \
	DECLARE_CLASS(AWaterBody, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBody) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBody*>(this); }


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBody(); \
	friend struct Z_Construct_UClass_AWaterBody_Statics; \
public: \
	DECLARE_CLASS(AWaterBody, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBody) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBody*>(this); }


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBody) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBody); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBody(AWaterBody&&); \
	NO_API AWaterBody(const AWaterBody&); \
public: \
	NO_API virtual ~AWaterBody();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBody(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBody(AWaterBody&&); \
	NO_API AWaterBody(const AWaterBody&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBody); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBody); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBody) \
	NO_API virtual ~AWaterBody();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBody."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class AWaterBody>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
