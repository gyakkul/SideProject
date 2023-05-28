// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBodyIslandActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWaterSplineComponent;
#ifdef WATER_WaterBodyIslandActor_generated_h
#error "WaterBodyIslandActor.generated.h already included, missing '#pragma once' in WaterBodyIslandActor.h"
#endif
#define WATER_WaterBodyIslandActor_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWaterSpline);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWaterSpline);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBodyIsland, NO_API)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterBodyIsland(); \
	friend struct Z_Construct_UClass_AWaterBodyIsland_Statics; \
public: \
	DECLARE_CLASS(AWaterBodyIsland, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBodyIsland) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBodyIsland*>(this); }


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBodyIsland(); \
	friend struct Z_Construct_UClass_AWaterBodyIsland_Statics; \
public: \
	DECLARE_CLASS(AWaterBodyIsland, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Water"), NO_API) \
	DECLARE_SERIALIZER(AWaterBodyIsland) \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWaterBodyIsland*>(this); }


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBodyIsland(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyIsland) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBodyIsland); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyIsland); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBodyIsland(AWaterBodyIsland&&); \
	NO_API AWaterBodyIsland(const AWaterBodyIsland&); \
public: \
	NO_API virtual ~AWaterBodyIsland();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBodyIsland(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBodyIsland(AWaterBodyIsland&&); \
	NO_API AWaterBodyIsland(const AWaterBodyIsland&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBodyIsland); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBodyIsland); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBodyIsland) \
	NO_API virtual ~AWaterBodyIsland();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h_45_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WaterBodyIsland."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class AWaterBodyIsland>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyIslandActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
