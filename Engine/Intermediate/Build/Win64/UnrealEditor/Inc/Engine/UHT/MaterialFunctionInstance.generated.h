// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialFunctionInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialFunctionInstance_generated_h
#error "MaterialFunctionInstance.generated.h already included, missing '#pragma once' in MaterialFunctionInstance.h"
#endif
#define ENGINE_MaterialFunctionInstance_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ACCESSORS
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInstance, ENGINE_API)


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ARCHIVESERIALIZER
#endif
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialFunctionInstance(); \
	friend struct Z_Construct_UClass_UMaterialFunctionInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialFunctionInstance, UMaterialFunctionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialFunctionInstance) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialFunctionInstance(); \
	friend struct Z_Construct_UClass_UMaterialFunctionInstance_Statics; \
public: \
	DECLARE_CLASS(UMaterialFunctionInstance, UMaterialFunctionInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialFunctionInstance) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunctionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunctionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialFunctionInstance(UMaterialFunctionInstance&&); \
	ENGINE_API UMaterialFunctionInstance(const UMaterialFunctionInstance&); \
public: \
	ENGINE_API virtual ~UMaterialFunctionInstance();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialFunctionInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UMaterialFunctionInstance(UMaterialFunctionInstance&&); \
	ENGINE_API UMaterialFunctionInstance(const UMaterialFunctionInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialFunctionInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialFunctionInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialFunctionInstance) \
	ENGINE_API virtual ~UMaterialFunctionInstance();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MaterialFunctionInstance."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialFunctionInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
