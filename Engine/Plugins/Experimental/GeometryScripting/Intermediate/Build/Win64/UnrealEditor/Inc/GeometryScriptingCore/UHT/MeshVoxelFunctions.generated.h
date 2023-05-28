// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshVoxelFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptMorphologyOptions;
struct FGeometryScriptSolidifyOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshVoxelFunctions_generated_h
#error "MeshVoxelFunctions.generated.h already included, missing '#pragma once' in MeshVoxelFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshVoxelFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScript3DGridParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScript3DGridParameters>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSolidifyOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSolidifyOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMorphologyOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMorphologyOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyMeshMorphology); \
	DECLARE_FUNCTION(execApplyMeshSolidify);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyMeshMorphology); \
	DECLARE_FUNCTION(execApplyMeshSolidify);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshVoxelFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshVoxelFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshVoxelFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshVoxelFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshVoxelFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshVoxelFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshVoxelFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshVoxelFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshVoxelFunctions(UGeometryScriptLibrary_MeshVoxelFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshVoxelFunctions(const UGeometryScriptLibrary_MeshVoxelFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshVoxelFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshVoxelFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshVoxelFunctions(UGeometryScriptLibrary_MeshVoxelFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshVoxelFunctions(const UGeometryScriptLibrary_MeshVoxelFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshVoxelFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshVoxelFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshVoxelFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshVoxelFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_116_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshVoxelFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshVoxelFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTGRIDSIZINGMETHOD(op) \
	op(EGeometryScriptGridSizingMethod::GridCellSize) \
	op(EGeometryScriptGridSizingMethod::GridResolution) 

enum class EGeometryScriptGridSizingMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptGridSizingMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptGridSizingMethod>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTMORPHOLOGICALOPTYPE(op) \
	op(EGeometryScriptMorphologicalOpType::Dilate) \
	op(EGeometryScriptMorphologicalOpType::Contract) \
	op(EGeometryScriptMorphologicalOpType::Close) \
	op(EGeometryScriptMorphologicalOpType::Open) 

enum class EGeometryScriptMorphologicalOpType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMorphologicalOpType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMorphologicalOpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
