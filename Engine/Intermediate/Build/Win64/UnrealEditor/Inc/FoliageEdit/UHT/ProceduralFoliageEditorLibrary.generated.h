// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralFoliageEditorLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AProceduralFoliageVolume;
class UProceduralFoliageComponent;
#ifdef FOLIAGEEDIT_ProceduralFoliageEditorLibrary_generated_h
#error "ProceduralFoliageEditorLibrary.generated.h already included, missing '#pragma once' in ProceduralFoliageEditorLibrary.h"
#endif
#define FOLIAGEEDIT_ProceduralFoliageEditorLibrary_generated_h

#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_SPARSE_DATA
#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearProceduralFoliageComponents); \
	DECLARE_FUNCTION(execClearProceduralFoliageVolumes); \
	DECLARE_FUNCTION(execResimulateProceduralFoliageComponents); \
	DECLARE_FUNCTION(execResimulateProceduralFoliageVolumes);


#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearProceduralFoliageComponents); \
	DECLARE_FUNCTION(execClearProceduralFoliageVolumes); \
	DECLARE_FUNCTION(execResimulateProceduralFoliageComponents); \
	DECLARE_FUNCTION(execResimulateProceduralFoliageVolumes);


#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_ACCESSORS
#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralFoliageEditorLibrary(); \
	friend struct Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageEditorLibrary)


#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralFoliageEditorLibrary(); \
	friend struct Z_Construct_UClass_UProceduralFoliageEditorLibrary_Statics; \
public: \
	DECLARE_CLASS(UProceduralFoliageEditorLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FoliageEdit"), NO_API) \
	DECLARE_SERIALIZER(UProceduralFoliageEditorLibrary)


#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageEditorLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageEditorLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageEditorLibrary(UProceduralFoliageEditorLibrary&&); \
	NO_API UProceduralFoliageEditorLibrary(const UProceduralFoliageEditorLibrary&); \
public: \
	NO_API virtual ~UProceduralFoliageEditorLibrary();


#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralFoliageEditorLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralFoliageEditorLibrary(UProceduralFoliageEditorLibrary&&); \
	NO_API UProceduralFoliageEditorLibrary(const UProceduralFoliageEditorLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralFoliageEditorLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralFoliageEditorLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralFoliageEditorLibrary) \
	NO_API virtual ~UProceduralFoliageEditorLibrary();


#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_22_PROLOG
#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_SPARSE_DATA \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_ACCESSORS \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_INCLASS \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_SPARSE_DATA \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_ACCESSORS \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ProceduralFoliageEditorLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOLIAGEEDIT_API UClass* StaticClass<class UProceduralFoliageEditorLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_FoliageEdit_Public_ProceduralFoliageEditorLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
