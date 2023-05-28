// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperTileMapComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPaperTileLayer;
class UPaperTileMap;
struct FLinearColor;
struct FPaperTileInfo;
#ifdef PAPER2D_PaperTileMapComponent_generated_h
#error "PaperTileMapComponent.generated.h already included, missing '#pragma once' in PaperTileMapComponent.h"
#endif
#define PAPER2D_PaperTileMapComponent_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_SPARSE_DATA
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRebuildCollision); \
	DECLARE_FUNCTION(execSetLayerCollision); \
	DECLARE_FUNCTION(execSetDefaultCollisionThickness); \
	DECLARE_FUNCTION(execGetTilePolygon); \
	DECLARE_FUNCTION(execGetTileCenterPosition); \
	DECLARE_FUNCTION(execGetTileCornerPosition); \
	DECLARE_FUNCTION(execMakeTileMapEditable); \
	DECLARE_FUNCTION(execSetLayerColor); \
	DECLARE_FUNCTION(execGetLayerColor); \
	DECLARE_FUNCTION(execSetTileMapColor); \
	DECLARE_FUNCTION(execGetTileMapColor); \
	DECLARE_FUNCTION(execAddNewLayer); \
	DECLARE_FUNCTION(execResizeMap); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execGetMapSize); \
	DECLARE_FUNCTION(execSetTileMap); \
	DECLARE_FUNCTION(execOwnsTileMap); \
	DECLARE_FUNCTION(execCreateNewTileMap);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRebuildCollision); \
	DECLARE_FUNCTION(execSetLayerCollision); \
	DECLARE_FUNCTION(execSetDefaultCollisionThickness); \
	DECLARE_FUNCTION(execGetTilePolygon); \
	DECLARE_FUNCTION(execGetTileCenterPosition); \
	DECLARE_FUNCTION(execGetTileCornerPosition); \
	DECLARE_FUNCTION(execMakeTileMapEditable); \
	DECLARE_FUNCTION(execSetLayerColor); \
	DECLARE_FUNCTION(execGetLayerColor); \
	DECLARE_FUNCTION(execSetTileMapColor); \
	DECLARE_FUNCTION(execGetTileMapColor); \
	DECLARE_FUNCTION(execAddNewLayer); \
	DECLARE_FUNCTION(execResizeMap); \
	DECLARE_FUNCTION(execSetTile); \
	DECLARE_FUNCTION(execGetTile); \
	DECLARE_FUNCTION(execGetMapSize); \
	DECLARE_FUNCTION(execSetTileMap); \
	DECLARE_FUNCTION(execOwnsTileMap); \
	DECLARE_FUNCTION(execCreateNewTileMap);


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ACCESSORS
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperTileMapComponent, NO_API)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperTileMapComponent(); \
	friend struct Z_Construct_UClass_UPaperTileMapComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMapComponent) \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ARCHIVESERIALIZER


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUPaperTileMapComponent(); \
	friend struct Z_Construct_UClass_UPaperTileMapComponent_Statics; \
public: \
	DECLARE_CLASS(UPaperTileMapComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(UPaperTileMapComponent) \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ARCHIVESERIALIZER


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMapComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMapComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMapComponent(UPaperTileMapComponent&&); \
	NO_API UPaperTileMapComponent(const UPaperTileMapComponent&); \
public: \
	NO_API virtual ~UPaperTileMapComponent();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPaperTileMapComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperTileMapComponent(UPaperTileMapComponent&&); \
	NO_API UPaperTileMapComponent(const UPaperTileMapComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperTileMapComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperTileMapComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPaperTileMapComponent) \
	NO_API virtual ~UPaperTileMapComponent();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_35_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ACCESSORS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ACCESSORS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTileMapComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class UPaperTileMapComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
