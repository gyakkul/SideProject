// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeInfoMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeInfoMap_generated_h
#error "LandscapeInfoMap.generated.h already included, missing '#pragma once' in LandscapeInfoMap.h"
#endif
#define LANDSCAPE_LandscapeInfoMap_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ACCESSORS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfoMap, NO_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeInfoMap(); \
	friend struct Z_Construct_UClass_ULandscapeInfoMap_Statics; \
public: \
	DECLARE_CLASS(ULandscapeInfoMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfoMap) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeInfoMap(); \
	friend struct Z_Construct_UClass_ULandscapeInfoMap_Statics; \
public: \
	DECLARE_CLASS(ULandscapeInfoMap, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfoMap) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfoMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfoMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfoMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfoMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfoMap(ULandscapeInfoMap&&); \
	NO_API ULandscapeInfoMap(const ULandscapeInfoMap&); \
public: \
	NO_API virtual ~ULandscapeInfoMap();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfoMap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfoMap(ULandscapeInfoMap&&); \
	NO_API ULandscapeInfoMap(const ULandscapeInfoMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfoMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfoMap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfoMap) \
	NO_API virtual ~ULandscapeInfoMap();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_15_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeInfoMap."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeInfoMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfoMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
