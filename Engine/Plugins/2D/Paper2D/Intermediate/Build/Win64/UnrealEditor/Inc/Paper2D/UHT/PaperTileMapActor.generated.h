// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PaperTileMapActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPER2D_PaperTileMapActor_generated_h
#error "PaperTileMapActor.generated.h already included, missing '#pragma once' in PaperTileMapActor.h"
#endif
#define PAPER2D_PaperTileMapActor_generated_h

#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_SPARSE_DATA
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_RPC_WRAPPERS
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_ACCESSORS
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaperTileMapActor(); \
	friend struct Z_Construct_UClass_APaperTileMapActor_Statics; \
public: \
	DECLARE_CLASS(APaperTileMapActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperTileMapActor)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAPaperTileMapActor(); \
	friend struct Z_Construct_UClass_APaperTileMapActor_Statics; \
public: \
	DECLARE_CLASS(APaperTileMapActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Paper2D"), NO_API) \
	DECLARE_SERIALIZER(APaperTileMapActor)


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperTileMapActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperTileMapActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperTileMapActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperTileMapActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperTileMapActor(APaperTileMapActor&&); \
	NO_API APaperTileMapActor(const APaperTileMapActor&); \
public: \
	NO_API virtual ~APaperTileMapActor();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaperTileMapActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaperTileMapActor(APaperTileMapActor&&); \
	NO_API APaperTileMapActor(const APaperTileMapActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaperTileMapActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaperTileMapActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaperTileMapActor) \
	NO_API virtual ~APaperTileMapActor();


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_17_PROLOG
#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_ACCESSORS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_INCLASS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_SPARSE_DATA \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_ACCESSORS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PaperTileMapActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPER2D_API UClass* StaticClass<class APaperTileMapActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperTileMapActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
