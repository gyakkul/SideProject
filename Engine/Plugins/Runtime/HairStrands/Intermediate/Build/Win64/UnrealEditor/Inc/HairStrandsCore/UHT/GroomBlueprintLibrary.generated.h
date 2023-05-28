// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroomBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGeometryCache;
class UGroomAsset;
class UGroomBindingAsset;
class USkeletalMesh;
#ifdef HAIRSTRANDSCORE_GroomBlueprintLibrary_generated_h
#error "GroomBlueprintLibrary.generated.h already included, missing '#pragma once' in GroomBlueprintLibrary.h"
#endif
#define HAIRSTRANDSCORE_GroomBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateNewGeometryCacheGroomBindingAsset); \
	DECLARE_FUNCTION(execCreateNewGeometryCacheGroomBindingAssetWithPath); \
	DECLARE_FUNCTION(execCreateNewGroomBindingAsset); \
	DECLARE_FUNCTION(execCreateNewGroomBindingAssetWithPath);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateNewGeometryCacheGroomBindingAsset); \
	DECLARE_FUNCTION(execCreateNewGeometryCacheGroomBindingAssetWithPath); \
	DECLARE_FUNCTION(execCreateNewGroomBindingAsset); \
	DECLARE_FUNCTION(execCreateNewGroomBindingAssetWithPath);


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroomBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UGroomBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UGroomBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGroomBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UGroomBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UGroomBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HairStrandsCore"), NO_API) \
	DECLARE_SERIALIZER(UGroomBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroomBlueprintLibrary(UGroomBlueprintLibrary&&); \
	NO_API UGroomBlueprintLibrary(const UGroomBlueprintLibrary&); \
public: \
	NO_API virtual ~UGroomBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGroomBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGroomBlueprintLibrary(UGroomBlueprintLibrary&&); \
	NO_API UGroomBlueprintLibrary(const UGroomBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroomBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroomBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGroomBlueprintLibrary) \
	NO_API virtual ~UGroomBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAIRSTRANDSCORE_API UClass* StaticClass<class UGroomBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
