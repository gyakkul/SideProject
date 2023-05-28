// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PluginBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftObjectPath;
#ifdef ENGINE_PluginBlueprintLibrary_generated_h
#error "PluginBlueprintLibrary.generated.h already included, missing '#pragma once' in PluginBlueprintLibrary.h"
#endif
#define ENGINE_PluginBlueprintLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsPluginMounted); \
	DECLARE_FUNCTION(execGetPluginEditorCustomVirtualPath); \
	DECLARE_FUNCTION(execGetPluginDescription); \
	DECLARE_FUNCTION(execGetPluginVersionName); \
	DECLARE_FUNCTION(execGetPluginVersion); \
	DECLARE_FUNCTION(execGetPluginMountedAssetPath); \
	DECLARE_FUNCTION(execGetPluginContentDir); \
	DECLARE_FUNCTION(execGetPluginBaseDir); \
	DECLARE_FUNCTION(execGetPluginDescriptorFilePath); \
	DECLARE_FUNCTION(execGetPluginNameForObjectPath); \
	DECLARE_FUNCTION(execGetEnabledPluginNames); \
	DECLARE_FUNCTION(execGetAdditionalProjectPluginSearchPaths); \
	DECLARE_FUNCTION(execGetAdditionalPluginSearchPaths);


#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsPluginMounted); \
	DECLARE_FUNCTION(execGetPluginEditorCustomVirtualPath); \
	DECLARE_FUNCTION(execGetPluginDescription); \
	DECLARE_FUNCTION(execGetPluginVersionName); \
	DECLARE_FUNCTION(execGetPluginVersion); \
	DECLARE_FUNCTION(execGetPluginMountedAssetPath); \
	DECLARE_FUNCTION(execGetPluginContentDir); \
	DECLARE_FUNCTION(execGetPluginBaseDir); \
	DECLARE_FUNCTION(execGetPluginDescriptorFilePath); \
	DECLARE_FUNCTION(execGetPluginNameForObjectPath); \
	DECLARE_FUNCTION(execGetEnabledPluginNames); \
	DECLARE_FUNCTION(execGetAdditionalProjectPluginSearchPaths); \
	DECLARE_FUNCTION(execGetAdditionalPluginSearchPaths);


#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPluginBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPluginBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPluginBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPluginBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPluginBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UPluginBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UPluginBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPluginBlueprintLibrary)


#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPluginBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPluginBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPluginBlueprintLibrary(UPluginBlueprintLibrary&&); \
	ENGINE_API UPluginBlueprintLibrary(const UPluginBlueprintLibrary&); \
public: \
	ENGINE_API virtual ~UPluginBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPluginBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPluginBlueprintLibrary(UPluginBlueprintLibrary&&); \
	ENGINE_API UPluginBlueprintLibrary(const UPluginBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPluginBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPluginBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPluginBlueprintLibrary) \
	ENGINE_API virtual ~UPluginBlueprintLibrary();


#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPluginBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_PluginBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
