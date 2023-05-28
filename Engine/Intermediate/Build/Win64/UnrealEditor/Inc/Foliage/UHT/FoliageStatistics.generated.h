// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FoliageStatistics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UStaticMesh;
#ifdef FOLIAGE_FoliageStatistics_generated_h
#error "FoliageStatistics.generated.h already included, missing '#pragma once' in FoliageStatistics.h"
#endif
#define FOLIAGE_FoliageStatistics_generated_h

#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFoliageOverlappingBoxTransforms); \
	DECLARE_FUNCTION(execFoliageOverlappingBoxCount); \
	DECLARE_FUNCTION(execFoliageOverlappingSphereCount);


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFoliageOverlappingBoxTransforms); \
	DECLARE_FUNCTION(execFoliageOverlappingBoxCount); \
	DECLARE_FUNCTION(execFoliageOverlappingSphereCount);


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFoliageStatistics(); \
	friend struct Z_Construct_UClass_UFoliageStatistics_Statics; \
public: \
	DECLARE_CLASS(UFoliageStatistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageStatistics)


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFoliageStatistics(); \
	friend struct Z_Construct_UClass_UFoliageStatistics_Statics; \
public: \
	DECLARE_CLASS(UFoliageStatistics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foliage"), NO_API) \
	DECLARE_SERIALIZER(UFoliageStatistics)


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageStatistics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageStatistics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageStatistics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageStatistics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageStatistics(UFoliageStatistics&&); \
	NO_API UFoliageStatistics(const UFoliageStatistics&); \
public: \
	NO_API virtual ~UFoliageStatistics();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFoliageStatistics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFoliageStatistics(UFoliageStatistics&&); \
	NO_API UFoliageStatistics(const UFoliageStatistics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFoliageStatistics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFoliageStatistics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFoliageStatistics) \
	NO_API virtual ~UFoliageStatistics();


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_12_PROLOG
#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FoliageStatistics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGE_API UClass* StaticClass<class UFoliageStatistics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Foliage_Public_FoliageStatistics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
