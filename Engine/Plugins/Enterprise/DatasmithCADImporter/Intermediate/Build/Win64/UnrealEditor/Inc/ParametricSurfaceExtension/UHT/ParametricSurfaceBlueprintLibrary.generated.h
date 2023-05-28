// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ParametricSurfaceBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
struct FDatasmithRetessellationOptions;
#ifdef PARAMETRICSURFACEEXTENSION_ParametricSurfaceBlueprintLibrary_generated_h
#error "ParametricSurfaceBlueprintLibrary.generated.h already included, missing '#pragma once' in ParametricSurfaceBlueprintLibrary.h"
#endif
#define PARAMETRICSURFACEEXTENSION_ParametricSurfaceBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRetessellateStaticMeshWithNotification); \
	DECLARE_FUNCTION(execRetessellateStaticMesh);


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRetessellateStaticMeshWithNotification); \
	DECLARE_FUNCTION(execRetessellateStaticMesh);


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParametricSurfaceBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UParametricSurfaceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParametricSurfaceExtension"), NO_API) \
	DECLARE_SERIALIZER(UParametricSurfaceBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUParametricSurfaceBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UParametricSurfaceBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UParametricSurfaceBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ParametricSurfaceExtension"), NO_API) \
	DECLARE_SERIALIZER(UParametricSurfaceBlueprintLibrary)


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParametricSurfaceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParametricSurfaceBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParametricSurfaceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParametricSurfaceBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParametricSurfaceBlueprintLibrary(UParametricSurfaceBlueprintLibrary&&); \
	NO_API UParametricSurfaceBlueprintLibrary(const UParametricSurfaceBlueprintLibrary&); \
public: \
	NO_API virtual ~UParametricSurfaceBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UParametricSurfaceBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UParametricSurfaceBlueprintLibrary(UParametricSurfaceBlueprintLibrary&&); \
	NO_API UParametricSurfaceBlueprintLibrary(const UParametricSurfaceBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UParametricSurfaceBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParametricSurfaceBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParametricSurfaceBlueprintLibrary) \
	NO_API virtual ~UParametricSurfaceBlueprintLibrary();


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_16_PROLOG
#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_INCLASS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PARAMETRICSURFACEEXTENSION_API UClass* StaticClass<class UParametricSurfaceBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricSurfaceBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
