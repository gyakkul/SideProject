// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SSizeMap.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETMANAGEREDITOR_SSizeMap_generated_h
#error "SSizeMap.generated.h already included, missing '#pragma once' in SSizeMap.h"
#endif
#define ASSETMANAGEREDITOR_SSizeMap_generated_h

#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_SPARSE_DATA
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_RPC_WRAPPERS
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_ACCESSORS
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSizeMapSettings(); \
	friend struct Z_Construct_UClass_USizeMapSettings_Statics; \
public: \
	DECLARE_CLASS(USizeMapSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), NO_API) \
	DECLARE_SERIALIZER(USizeMapSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSizeMapSettings(); \
	friend struct Z_Construct_UClass_USizeMapSettings_Statics; \
public: \
	DECLARE_CLASS(USizeMapSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetManagerEditor"), NO_API) \
	DECLARE_SERIALIZER(USizeMapSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeMapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeMapSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeMapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeMapSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USizeMapSettings(USizeMapSettings&&); \
	NO_API USizeMapSettings(const USizeMapSettings&); \
public: \
	NO_API virtual ~USizeMapSettings();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USizeMapSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USizeMapSettings(USizeMapSettings&&); \
	NO_API USizeMapSettings(const USizeMapSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USizeMapSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USizeMapSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USizeMapSettings) \
	NO_API virtual ~USizeMapSettings();


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_30_PROLOG
#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_SPARSE_DATA \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_ACCESSORS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_INCLASS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_SPARSE_DATA \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_ACCESSORS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETMANAGEREDITOR_API UClass* StaticClass<class USizeMapSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h


#define FOREACH_ENUM_ESIZEMAPDEPENDENCYTYPE(op) \
	op(ESizeMapDependencyType::All) \
	op(ESizeMapDependencyType::Game) \
	op(ESizeMapDependencyType::EditorOnly) 

enum class ESizeMapDependencyType;
template<> struct TIsUEnumClass<ESizeMapDependencyType> { enum { Value = true }; };
template<> ASSETMANAGEREDITOR_API UEnum* StaticEnum<ESizeMapDependencyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
