// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/AssetUserData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AssetUserData_generated_h
#error "AssetUserData.generated.h already included, missing '#pragma once' in AssetUserData.h"
#endif
#define ENGINE_AssetUserData_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetUserData(); \
	friend struct Z_Construct_UClass_UAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UAssetUserData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetUserData)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAssetUserData(); \
	friend struct Z_Construct_UClass_UAssetUserData_Statics; \
public: \
	DECLARE_CLASS(UAssetUserData, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAssetUserData)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetUserData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetUserData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetUserData(UAssetUserData&&); \
	NO_API UAssetUserData(const UAssetUserData&); \
public: \
	NO_API virtual ~UAssetUserData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetUserData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetUserData(UAssetUserData&&); \
	NO_API UAssetUserData(const UAssetUserData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetUserData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetUserData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetUserData) \
	NO_API virtual ~UAssetUserData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AssetUserData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAssetUserData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
