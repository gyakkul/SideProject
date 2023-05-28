// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterLandscapeBrush.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AWaterBody;
class AWaterBodyIsland;
class IWaterBrushActorInterface;
class UObject;
class UTexture2D;
class UTextureRenderTarget2D;
#ifdef WATEREDITOR_WaterLandscapeBrush_generated_h
#error "WaterLandscapeBrush.generated.h already included, missing '#pragma once' in WaterLandscapeBrush.h"
#endif
#define WATEREDITOR_WaterLandscapeBrush_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_RPC_WRAPPERS \
	virtual void BlueprintOnRenderTargetTexturesUpdated_Implementation(UTexture2D* VelocityTexture); \
	virtual void BlueprintGetRenderTargets_Implementation(UTextureRenderTarget2D* InHeightRenderTarget, UTextureRenderTarget2D*& OutVelocityRenderTarget); \
	virtual void BlueprintWaterBodyChanged_Implementation(AActor* Actor); \
	virtual void BlueprintWaterBodiesChanged_Implementation(); \
 \
	DECLARE_FUNCTION(execForceWaterTextureUpdate); \
	DECLARE_FUNCTION(execBlueprintOnRenderTargetTexturesUpdated); \
	DECLARE_FUNCTION(execBlueprintGetRenderTargets); \
	DECLARE_FUNCTION(execClearActorCache); \
	DECLARE_FUNCTION(execGetActorCache); \
	DECLARE_FUNCTION(execSetActorCache); \
	DECLARE_FUNCTION(execClearWaterBodyCache); \
	DECLARE_FUNCTION(execGetWaterBodyCache); \
	DECLARE_FUNCTION(execSetWaterBodyCache); \
	DECLARE_FUNCTION(execBlueprintWaterBodyChanged); \
	DECLARE_FUNCTION(execBlueprintWaterBodiesChanged); \
	DECLARE_FUNCTION(execGetActorsAffectingLandscape); \
	DECLARE_FUNCTION(execGetWaterBodyIslands); \
	DECLARE_FUNCTION(execGetWaterBodies);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BlueprintOnRenderTargetTexturesUpdated_Implementation(UTexture2D* VelocityTexture); \
	virtual void BlueprintGetRenderTargets_Implementation(UTextureRenderTarget2D* InHeightRenderTarget, UTextureRenderTarget2D*& OutVelocityRenderTarget); \
	virtual void BlueprintWaterBodyChanged_Implementation(AActor* Actor); \
	virtual void BlueprintWaterBodiesChanged_Implementation(); \
 \
	DECLARE_FUNCTION(execForceWaterTextureUpdate); \
	DECLARE_FUNCTION(execBlueprintOnRenderTargetTexturesUpdated); \
	DECLARE_FUNCTION(execBlueprintGetRenderTargets); \
	DECLARE_FUNCTION(execClearActorCache); \
	DECLARE_FUNCTION(execGetActorCache); \
	DECLARE_FUNCTION(execSetActorCache); \
	DECLARE_FUNCTION(execClearWaterBodyCache); \
	DECLARE_FUNCTION(execGetWaterBodyCache); \
	DECLARE_FUNCTION(execSetWaterBodyCache); \
	DECLARE_FUNCTION(execBlueprintWaterBodyChanged); \
	DECLARE_FUNCTION(execBlueprintWaterBodiesChanged); \
	DECLARE_FUNCTION(execGetActorsAffectingLandscape); \
	DECLARE_FUNCTION(execGetWaterBodyIslands); \
	DECLARE_FUNCTION(execGetWaterBodies);


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaterLandscapeBrush(); \
	friend struct Z_Construct_UClass_AWaterLandscapeBrush_Statics; \
public: \
	DECLARE_CLASS(AWaterLandscapeBrush, ALandscapeBlueprintBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterLandscapeBrush)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAWaterLandscapeBrush(); \
	friend struct Z_Construct_UClass_AWaterLandscapeBrush_Statics; \
public: \
	DECLARE_CLASS(AWaterLandscapeBrush, ALandscapeBlueprintBrush, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(AWaterLandscapeBrush)


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaterLandscapeBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterLandscapeBrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLandscapeBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLandscapeBrush); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterLandscapeBrush(AWaterLandscapeBrush&&); \
	NO_API AWaterLandscapeBrush(const AWaterLandscapeBrush&); \
public: \
	NO_API virtual ~AWaterLandscapeBrush();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaterLandscapeBrush(AWaterLandscapeBrush&&); \
	NO_API AWaterLandscapeBrush(const AWaterLandscapeBrush&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaterLandscapeBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaterLandscapeBrush); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaterLandscapeBrush) \
	NO_API virtual ~AWaterLandscapeBrush();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class AWaterLandscapeBrush>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
