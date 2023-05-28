// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CookerStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_CookerStats_generated_h
#error "CookerStats.generated.h already included, missing '#pragma once' in CookerStats.h"
#endif
#define STATSVIEWER_CookerStats_generated_h

#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_SPARSE_DATA
#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_ACCESSORS
#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookerStats(); \
	friend struct Z_Construct_UClass_UCookerStats_Statics; \
public: \
	DECLARE_CLASS(UCookerStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UCookerStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUCookerStats(); \
	friend struct Z_Construct_UClass_UCookerStats_Statics; \
public: \
	DECLARE_CLASS(UCookerStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UCookerStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UCookerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UCookerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookerStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UCookerStats(UCookerStats&&); \
	STATSVIEWER_API UCookerStats(const UCookerStats&); \
public: \
	STATSVIEWER_API virtual ~UCookerStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UCookerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UCookerStats(UCookerStats&&); \
	STATSVIEWER_API UCookerStats(const UCookerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UCookerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookerStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookerStats) \
	STATSVIEWER_API virtual ~UCookerStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_24_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CookerStats."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSVIEWER_API UClass* StaticClass<class UCookerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_CookerStats_h


#define FOREACH_ENUM_ECOOKERSTATSOBJECTSETS(op) \
	op(CookerStatsObjectSets_Default) 

enum ECookerStatsObjectSets : int;
template<> STATSVIEWER_API UEnum* StaticEnum<ECookerStatsObjectSets>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
