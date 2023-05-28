// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BuoyancyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWaterBodyComponent;
struct FSphericalPontoon;
#ifdef WATER_BuoyancyComponent_generated_h
#error "BuoyancyComponent.generated.h already included, missing '#pragma once' in BuoyancyComponent.h"
#endif
#define WATER_BuoyancyComponent_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_12_DELEGATE \
WATER_API void FOnPontoonEnteredWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonEnteredWater, FSphericalPontoon const& Pontoon);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_13_DELEGATE \
WATER_API void FOnPontoonExitedWater_DelegateWrapper(const FMulticastScriptDelegate& OnPontoonExitedWater, FSphericalPontoon const& Pontoon);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLastWaterSurfaceInfo); \
	DECLARE_FUNCTION(execOnPontoonExitedWater); \
	DECLARE_FUNCTION(execOnPontoonEnteredWater); \
	DECLARE_FUNCTION(execIsInWaterBody); \
	DECLARE_FUNCTION(execIsOverlappingWaterBody); \
	DECLARE_FUNCTION(execGetCurrentWaterBodyComponents);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastWaterSurfaceInfo); \
	DECLARE_FUNCTION(execOnPontoonExitedWater); \
	DECLARE_FUNCTION(execOnPontoonEnteredWater); \
	DECLARE_FUNCTION(execIsInWaterBody); \
	DECLARE_FUNCTION(execIsOverlappingWaterBody); \
	DECLARE_FUNCTION(execGetCurrentWaterBodyComponents);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBuoyancyComponent, NO_API)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBuoyancyComponent(); \
	friend struct Z_Construct_UClass_UBuoyancyComponent_Statics; \
public: \
	DECLARE_CLASS(UBuoyancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UBuoyancyComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUBuoyancyComponent(); \
	friend struct Z_Construct_UClass_UBuoyancyComponent_Statics; \
public: \
	DECLARE_CLASS(UBuoyancyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(UBuoyancyComponent) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBuoyancyComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyancyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuoyancyComponent(UBuoyancyComponent&&); \
	NO_API UBuoyancyComponent(const UBuoyancyComponent&); \
public: \
	NO_API virtual ~UBuoyancyComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBuoyancyComponent(UBuoyancyComponent&&); \
	NO_API UBuoyancyComponent(const UBuoyancyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBuoyancyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBuoyancyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBuoyancyComponent) \
	NO_API virtual ~UBuoyancyComponent();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UBuoyancyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_BuoyancyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
