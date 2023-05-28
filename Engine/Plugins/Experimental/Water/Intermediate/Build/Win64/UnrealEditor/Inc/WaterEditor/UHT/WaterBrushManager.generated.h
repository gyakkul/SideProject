// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterBrushManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AWaterBody;
class UWaterBodyBrushCacheContainer;
struct FWaterBodyBrushCache;
#ifdef WATEREDITOR_WaterBrushManager_generated_h
#error "WaterBrushManager.generated.h already included, missing '#pragma once' in WaterBrushManager.h"
#endif
#define WATEREDITOR_WaterBrushManager_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_RPC_WRAPPERS \
	virtual void SortWaterBodiesForBrushRender_Implementation(TArray<AWaterBody*>& InOutWaterBodies) const; \
 \
	DECLARE_FUNCTION(execSetupDefaultMaterials); \
	DECLARE_FUNCTION(execSortWaterBodiesForBrushRender); \
	DECLARE_FUNCTION(execGetWaterCacheKey); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execForceUpdate);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SortWaterBodiesForBrushRender_Implementation(TArray<AWaterBody*>& InOutWaterBodies) const; \
 \
	DECLARE_FUNCTION(execSetupDefaultMaterials); \
	DECLARE_FUNCTION(execSortWaterBodiesForBrushRender); \
	DECLARE_FUNCTION(execGetWaterCacheKey); \
	DECLARE_FUNCTION(execSingleJumpStep); \
	DECLARE_FUNCTION(execFindEdges); \
	DECLARE_FUNCTION(execSingleBlurStep); \
	DECLARE_FUNCTION(execForceUpdate);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBrushManager, NO_API)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterBrushManager(); \
	friend struct Z_Construct_UClass_AWaterBrushManager_Statics; \
public: \
	DECLARE_CLASS(AWaterBrushManager, AWaterLandscapeBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterBrushManager) \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAWaterBrushManager(); \
	friend struct Z_Construct_UClass_AWaterBrushManager_Statics; \
public: \
	DECLARE_CLASS(AWaterBrushManager, AWaterLandscapeBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterBrushManager) \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterBrushManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBrushManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBrushManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBrushManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBrushManager(AWaterBrushManager&&); \
	NO_API AWaterBrushManager(const AWaterBrushManager&); \
public: \
	NO_API virtual ~AWaterBrushManager();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterBrushManager(AWaterBrushManager&&); \
	NO_API AWaterBrushManager(const AWaterBrushManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterBrushManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterBrushManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterBrushManager) \
	NO_API virtual ~AWaterBrushManager();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_31_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class AWaterBrushManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
