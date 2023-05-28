// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintMaterialTextureNodesBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceConstant;
class UMaterialInterface;
class UTexture2D;
class UTextureRenderTarget2D;
struct FLinearColor;
#ifdef BLUEPRINTMATERIALTEXTURENODES_BlueprintMaterialTextureNodesBPLibrary_generated_h
#error "BlueprintMaterialTextureNodesBPLibrary.generated.h already included, missing '#pragma once' in BlueprintMaterialTextureNodesBPLibrary.h"
#endif
#define BLUEPRINTMATERIALTEXTURENODES_BlueprintMaterialTextureNodesBPLibrary_generated_h

#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMICDitheredLODTransition_EditorOnly); \
	DECLARE_FUNCTION(execSetMICIsThinSurface_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTwoSided_EditorOnly); \
	DECLARE_FUNCTION(execSetMICBlendMode_EditorOnly); \
	DECLARE_FUNCTION(execSetMICShadingModel_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTextureParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICVectorParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICScalarParam_EditorOnly); \
	DECLARE_FUNCTION(execUpdateMIC); \
	DECLARE_FUNCTION(execCreateMIC_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleUV_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleRectangle_EditorOnly); \
	DECLARE_FUNCTION(execTexture2D_SampleUV_EditorOnly);


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMICDitheredLODTransition_EditorOnly); \
	DECLARE_FUNCTION(execSetMICIsThinSurface_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTwoSided_EditorOnly); \
	DECLARE_FUNCTION(execSetMICBlendMode_EditorOnly); \
	DECLARE_FUNCTION(execSetMICShadingModel_EditorOnly); \
	DECLARE_FUNCTION(execSetMICTextureParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICVectorParam_EditorOnly); \
	DECLARE_FUNCTION(execSetMICScalarParam_EditorOnly); \
	DECLARE_FUNCTION(execUpdateMIC); \
	DECLARE_FUNCTION(execCreateMIC_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleUV_EditorOnly); \
	DECLARE_FUNCTION(execRenderTarget_SampleRectangle_EditorOnly); \
	DECLARE_FUNCTION(execTexture2D_SampleUV_EditorOnly);


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_ACCESSORS
#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintMaterialTextureNodesBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintMaterialTextureNodesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintMaterialTextureNodes"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintMaterialTextureNodesBPLibrary)


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintMaterialTextureNodesBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintMaterialTextureNodesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintMaterialTextureNodes"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintMaterialTextureNodesBPLibrary)


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMaterialTextureNodesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintMaterialTextureNodesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMaterialTextureNodesBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(UBlueprintMaterialTextureNodesBPLibrary&&); \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const UBlueprintMaterialTextureNodesBPLibrary&); \
public: \
	NO_API virtual ~UBlueprintMaterialTextureNodesBPLibrary();


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(UBlueprintMaterialTextureNodesBPLibrary&&); \
	NO_API UBlueprintMaterialTextureNodesBPLibrary(const UBlueprintMaterialTextureNodesBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintMaterialTextureNodesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintMaterialTextureNodesBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintMaterialTextureNodesBPLibrary) \
	NO_API virtual ~UBlueprintMaterialTextureNodesBPLibrary();


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_31_PROLOG
#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_ACCESSORS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_INCLASS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_ACCESSORS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintMaterialTextureNodesBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTMATERIALTEXTURENODES_API UClass* StaticClass<class UBlueprintMaterialTextureNodesBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
