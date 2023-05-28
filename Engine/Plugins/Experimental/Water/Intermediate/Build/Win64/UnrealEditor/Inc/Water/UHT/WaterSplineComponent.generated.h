// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterSplineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATER_WaterSplineComponent_generated_h
#error "WaterSplineComponent.generated.h already included, missing '#pragma once' in WaterSplineComponent.h"
#endif
#define WATER_WaterSplineComponent_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_SynchronizeAndBroadcastDataChange);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_SynchronizeAndBroadcastDataChange);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWaterSplineComponent, NO_API)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterSplineComponent(); \
	friend struct Z_Construct_UClass_UWaterSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSplineComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUWaterSplineComponent(); \
	friend struct Z_Construct_UClass_UWaterSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UWaterSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UWaterSplineComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSplineComponent(UWaterSplineComponent&&); \
	NO_API UWaterSplineComponent(const UWaterSplineComponent&); \
public: \
	NO_API virtual ~UWaterSplineComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterSplineComponent(UWaterSplineComponent&&); \
	NO_API UWaterSplineComponent(const UWaterSplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterSplineComponent) \
	NO_API virtual ~UWaterSplineComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_24_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterSplineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UWaterSplineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterSplineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
