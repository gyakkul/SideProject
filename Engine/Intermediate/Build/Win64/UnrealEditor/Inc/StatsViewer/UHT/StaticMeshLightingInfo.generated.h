// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StaticMeshLightingInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSVIEWER_StaticMeshLightingInfo_generated_h
#error "StaticMeshLightingInfo.generated.h already included, missing '#pragma once' in StaticMeshLightingInfo.h"
#endif
#define STATSVIEWER_StaticMeshLightingInfo_generated_h

#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_SPARSE_DATA
#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_ACCESSORS
#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshLightingInfo(); \
	friend struct Z_Construct_UClass_UStaticMeshLightingInfo_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshLightingInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UStaticMeshLightingInfo)


#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshLightingInfo(); \
	friend struct Z_Construct_UClass_UStaticMeshLightingInfo_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshLightingInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/StatsViewer"), STATSVIEWER_API) \
	DECLARE_SERIALIZER(UStaticMeshLightingInfo)


#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UStaticMeshLightingInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshLightingInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UStaticMeshLightingInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshLightingInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UStaticMeshLightingInfo(UStaticMeshLightingInfo&&); \
	STATSVIEWER_API UStaticMeshLightingInfo(const UStaticMeshLightingInfo&); \
public: \
	STATSVIEWER_API virtual ~UStaticMeshLightingInfo();


#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STATSVIEWER_API UStaticMeshLightingInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STATSVIEWER_API UStaticMeshLightingInfo(UStaticMeshLightingInfo&&); \
	STATSVIEWER_API UStaticMeshLightingInfo(const UStaticMeshLightingInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STATSVIEWER_API, UStaticMeshLightingInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshLightingInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshLightingInfo) \
	STATSVIEWER_API virtual ~UStaticMeshLightingInfo();


#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_25_PROLOG
#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_INCLASS \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_ACCESSORS \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshLightingInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSVIEWER_API UClass* StaticClass<class UStaticMeshLightingInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_StatsViewer_Classes_StaticMeshLightingInfo_h


#define FOREACH_ENUM_ESTATICMESHLIGHTINGINFOOBJECTSETS(op) \
	op(StaticMeshLightingInfoObjectSets_CurrentLevel) \
	op(StaticMeshLightingInfoObjectSets_SelectedLevels) \
	op(StaticMeshLightingInfoObjectSets_AllLevels) 

enum EStaticMeshLightingInfoObjectSets : int;
template<> STATSVIEWER_API UEnum* StaticEnum<EStaticMeshLightingInfoObjectSets>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
