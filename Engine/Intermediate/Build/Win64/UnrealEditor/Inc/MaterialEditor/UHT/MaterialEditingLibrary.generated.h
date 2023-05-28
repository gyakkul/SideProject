// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditingLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterial;
class UMaterialExpression;
class UMaterialFunction;
class UMaterialFunctionInterface;
class UMaterialInstanceConstant;
class UMaterialInterface;
class UObject;
class URuntimeVirtualTexture;
class USparseVolumeTexture;
class UTexture;
struct FAssetData;
struct FLinearColor;
struct FMaterialStatistics;
struct FSoftObjectPath;
#ifdef MATERIALEDITOR_MaterialEditingLibrary_generated_h
#error "MaterialEditingLibrary.generated.h already included, missing '#pragma once' in MaterialEditingLibrary.h"
#endif
#define MATERIALEDITOR_MaterialEditingLibrary_generated_h

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialStatistics_Statics; \
	MATERIALEDITOR_API static class UScriptStruct* StaticStruct();


template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<struct FMaterialStatistics>();

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_SPARSE_DATA
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStatistics); \
	DECLARE_FUNCTION(execGetStaticSwitchParameterSource); \
	DECLARE_FUNCTION(execGetTextureParameterSource); \
	DECLARE_FUNCTION(execGetVectorParameterSource); \
	DECLARE_FUNCTION(execGetScalarParameterSource); \
	DECLARE_FUNCTION(execGetStaticSwitchParameterNames); \
	DECLARE_FUNCTION(execGetTextureParameterNames); \
	DECLARE_FUNCTION(execGetVectorParameterNames); \
	DECLARE_FUNCTION(execGetScalarParameterNames); \
	DECLARE_FUNCTION(execGetChildInstances); \
	DECLARE_FUNCTION(execUpdateMaterialInstance); \
	DECLARE_FUNCTION(execSetMaterialInstanceStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceVectorParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceVectorParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceScalarParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceScalarParameterValue); \
	DECLARE_FUNCTION(execClearAllMaterialInstanceParameters); \
	DECLARE_FUNCTION(execSetMaterialInstanceParent); \
	DECLARE_FUNCTION(execLayoutMaterialFunctionExpressions); \
	DECLARE_FUNCTION(execUpdateMaterialFunction); \
	DECLARE_FUNCTION(execDeleteMaterialExpressionInFunction); \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressionsInFunction); \
	DECLARE_FUNCTION(execCreateMaterialExpressionInFunction); \
	DECLARE_FUNCTION(execGetNumMaterialExpressionsInFunction); \
	DECLARE_FUNCTION(execGetUsedTextures); \
	DECLARE_FUNCTION(execGetMaterialExpressionNodePosition); \
	DECLARE_FUNCTION(execGetInputNodeOutputNameForMaterialExpression); \
	DECLARE_FUNCTION(execGetInputsForMaterialExpression); \
	DECLARE_FUNCTION(execGetMaterialPropertyInputNodeOutputName); \
	DECLARE_FUNCTION(execGetMaterialPropertyInputNode); \
	DECLARE_FUNCTION(execGetMaterialSelectedNodes); \
	DECLARE_FUNCTION(execGetMaterialDefaultStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultVectorParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultScalarParameterValue); \
	DECLARE_FUNCTION(execLayoutMaterialExpressions); \
	DECLARE_FUNCTION(execRecompileMaterial); \
	DECLARE_FUNCTION(execConnectMaterialExpressions); \
	DECLARE_FUNCTION(execConnectMaterialProperty); \
	DECLARE_FUNCTION(execHasMaterialUsage); \
	DECLARE_FUNCTION(execSetMaterialUsage); \
	DECLARE_FUNCTION(execDuplicateMaterialExpression); \
	DECLARE_FUNCTION(execCreateMaterialExpression); \
	DECLARE_FUNCTION(execDeleteMaterialExpression); \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressions); \
	DECLARE_FUNCTION(execGetNumMaterialExpressions);


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatistics); \
	DECLARE_FUNCTION(execGetStaticSwitchParameterSource); \
	DECLARE_FUNCTION(execGetTextureParameterSource); \
	DECLARE_FUNCTION(execGetVectorParameterSource); \
	DECLARE_FUNCTION(execGetScalarParameterSource); \
	DECLARE_FUNCTION(execGetStaticSwitchParameterNames); \
	DECLARE_FUNCTION(execGetTextureParameterNames); \
	DECLARE_FUNCTION(execGetVectorParameterNames); \
	DECLARE_FUNCTION(execGetScalarParameterNames); \
	DECLARE_FUNCTION(execGetChildInstances); \
	DECLARE_FUNCTION(execUpdateMaterialInstance); \
	DECLARE_FUNCTION(execSetMaterialInstanceStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceVectorParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceVectorParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceSparseVolumeTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceRuntimeVirtualTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceTextureParameterValue); \
	DECLARE_FUNCTION(execSetMaterialInstanceScalarParameterValue); \
	DECLARE_FUNCTION(execGetMaterialInstanceScalarParameterValue); \
	DECLARE_FUNCTION(execClearAllMaterialInstanceParameters); \
	DECLARE_FUNCTION(execSetMaterialInstanceParent); \
	DECLARE_FUNCTION(execLayoutMaterialFunctionExpressions); \
	DECLARE_FUNCTION(execUpdateMaterialFunction); \
	DECLARE_FUNCTION(execDeleteMaterialExpressionInFunction); \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressionsInFunction); \
	DECLARE_FUNCTION(execCreateMaterialExpressionInFunction); \
	DECLARE_FUNCTION(execGetNumMaterialExpressionsInFunction); \
	DECLARE_FUNCTION(execGetUsedTextures); \
	DECLARE_FUNCTION(execGetMaterialExpressionNodePosition); \
	DECLARE_FUNCTION(execGetInputNodeOutputNameForMaterialExpression); \
	DECLARE_FUNCTION(execGetInputsForMaterialExpression); \
	DECLARE_FUNCTION(execGetMaterialPropertyInputNodeOutputName); \
	DECLARE_FUNCTION(execGetMaterialPropertyInputNode); \
	DECLARE_FUNCTION(execGetMaterialSelectedNodes); \
	DECLARE_FUNCTION(execGetMaterialDefaultStaticSwitchParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultVectorParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultTextureParameterValue); \
	DECLARE_FUNCTION(execGetMaterialDefaultScalarParameterValue); \
	DECLARE_FUNCTION(execLayoutMaterialExpressions); \
	DECLARE_FUNCTION(execRecompileMaterial); \
	DECLARE_FUNCTION(execConnectMaterialExpressions); \
	DECLARE_FUNCTION(execConnectMaterialProperty); \
	DECLARE_FUNCTION(execHasMaterialUsage); \
	DECLARE_FUNCTION(execSetMaterialUsage); \
	DECLARE_FUNCTION(execDuplicateMaterialExpression); \
	DECLARE_FUNCTION(execCreateMaterialExpression); \
	DECLARE_FUNCTION(execDeleteMaterialExpression); \
	DECLARE_FUNCTION(execDeleteAllMaterialExpressions); \
	DECLARE_FUNCTION(execGetNumMaterialExpressions);


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_ACCESSORS
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditingLibrary(); \
	friend struct Z_Construct_UClass_UMaterialEditingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditingLibrary)


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialEditingLibrary(); \
	friend struct Z_Construct_UClass_UMaterialEditingLibrary_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditingLibrary)


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditingLibrary(UMaterialEditingLibrary&&); \
	NO_API UMaterialEditingLibrary(const UMaterialEditingLibrary&); \
public: \
	NO_API virtual ~UMaterialEditingLibrary();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditingLibrary(UMaterialEditingLibrary&&); \
	NO_API UMaterialEditingLibrary(const UMaterialEditingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditingLibrary) \
	NO_API virtual ~UMaterialEditingLibrary();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_56_PROLOG
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_SPARSE_DATA \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_RPC_WRAPPERS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_ACCESSORS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_INCLASS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_SPARSE_DATA \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_ACCESSORS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALEDITOR_API UClass* StaticClass<class UMaterialEditingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
