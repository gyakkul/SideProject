// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShaderCookerStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_ShaderCookerStats_generated_h
#error "ShaderCookerStats.generated.h already included, missing '#pragma once' in ShaderCookerStats.h"
#endif
#define STATSVIEWER_ShaderCookerStats_generated_h

#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_SPARSE_DATA
#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_ACCESSORS
#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShaderCookerStats(); \
	friend struct Z_Construct_UClass_UShaderCookerStats_Statics; \
public: \
	DECLARE_CLASS(UShaderCookerStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UShaderCookerStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUShaderCookerStats(); \
	friend struct Z_Construct_UClass_UShaderCookerStats_Statics; \
public: \
	DECLARE_CLASS(UShaderCookerStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UShaderCookerStats)


#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UShaderCookerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderCookerStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UShaderCookerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderCookerStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UShaderCookerStats(UShaderCookerStats&&); \
	STATSVIEWER_API UShaderCookerStats(const UShaderCookerStats&); \
public: \
	STATSVIEWER_API virtual ~UShaderCookerStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UShaderCookerStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UShaderCookerStats(UShaderCookerStats&&); \
	STATSVIEWER_API UShaderCookerStats(const UShaderCookerStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UShaderCookerStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderCookerStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderCookerStats) \
	STATSVIEWER_API virtual ~UShaderCookerStats();


#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_19_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShaderCookerStats."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSVIEWER_API UClass* StaticClass<class UShaderCookerStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_ShaderCookerStats_h


#define FOREACH_ENUM_ESHADERCOOKERSTATSSETS(op) \
	op(EShaderCookerStatsSets_Default) 

enum EShaderCookerStatsSets : int;
template<> STATSVIEWER_API UEnum* StaticEnum<EShaderCookerStatsSets>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
