// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PrimitiveStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_PrimitiveStats_generated_h
#error "PrimitiveStats.generated.h already included, missing '#pragma once' in PrimitiveStats.h"
#endif
#define STATSVIEWER_PrimitiveStats_generated_h

#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_SPARSE_DATA
#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS
#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_ACCESSORS
#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPrimitiveStats(); \
	friend struct Z_Construct_UClass_UPrimitiveStats_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UPrimitiveStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPrimitiveStats(); \
	friend struct Z_Construct_UClass_UPrimitiveStats_Statics; \
public: \
	DECLARE_CLASS(UPrimitiveStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UPrimitiveStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UPrimitiveStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UPrimitiveStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UPrimitiveStats(UPrimitiveStats&&); \
	STATSVIEWER_API UPrimitiveStats(const UPrimitiveStats&); \
public: \
	STATSVIEWER_API virtual ~UPrimitiveStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UPrimitiveStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UPrimitiveStats(UPrimitiveStats&&); \
	STATSVIEWER_API UPrimitiveStats(const UPrimitiveStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UPrimitiveStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPrimitiveStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPrimitiveStats) \
	STATSVIEWER_API virtual ~UPrimitiveStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_23_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PrimitiveStats."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSVIEWER_API UClass* StaticClass<class UPrimitiveStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_PrimitiveStats_h


#define FOREACH_ENUM_EPRIMITIVEOBJECTSETS(op) \
	op(PrimitiveObjectSets_AllObjects) \
	op(PrimitiveObjectSets_CurrentLevel) \
	op(PrimitiveObjectSets_SelectedObjects) 

enum EPrimitiveObjectSets : int;
template<> STATSVIEWER_API UEnum* StaticEnum<EPrimitiveObjectSets>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
