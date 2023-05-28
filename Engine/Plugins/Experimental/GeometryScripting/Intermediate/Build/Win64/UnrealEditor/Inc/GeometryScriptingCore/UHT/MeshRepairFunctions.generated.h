// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshRepairFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptDegenerateTriangleOptions;
struct FGeometryScriptFillHolesOptions;
struct FGeometryScriptRemoveHiddenTrianglesOptions;
struct FGeometryScriptRemoveSmallComponentOptions;
struct FGeometryScriptResolveTJunctionOptions;
struct FGeometryScriptWeldEdgesOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshRepairFunctions_generated_h
#error "MeshRepairFunctions.generated.h already included, missing '#pragma once' in MeshRepairFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshRepairFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptWeldEdgesOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptWeldEdgesOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptResolveTJunctionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptResolveTJunctionOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptFillHolesOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptFillHolesOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRemoveSmallComponentOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRemoveSmallComponentOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRemoveHiddenTrianglesOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRemoveHiddenTrianglesOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptDegenerateTriangleOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptDegenerateTriangleOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRepairMeshDegenerateGeometry); \
	DECLARE_FUNCTION(execSplitMeshBowties); \
	DECLARE_FUNCTION(execRemoveHiddenTriangles); \
	DECLARE_FUNCTION(execRemoveSmallComponents); \
	DECLARE_FUNCTION(execFillAllMeshHoles); \
	DECLARE_FUNCTION(execWeldMeshEdges); \
	DECLARE_FUNCTION(execResolveMeshTJunctions); \
	DECLARE_FUNCTION(execCompactMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRepairMeshDegenerateGeometry); \
	DECLARE_FUNCTION(execSplitMeshBowties); \
	DECLARE_FUNCTION(execRemoveHiddenTriangles); \
	DECLARE_FUNCTION(execRemoveSmallComponents); \
	DECLARE_FUNCTION(execFillAllMeshHoles); \
	DECLARE_FUNCTION(execWeldMeshEdges); \
	DECLARE_FUNCTION(execResolveMeshTJunctions); \
	DECLARE_FUNCTION(execCompactMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshRepairFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshRepairFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshRepairFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshRepairFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshRepairFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshRepairFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshRepairFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshRepairFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshRepairFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshRepairFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshRepairFunctions(UGeometryScriptLibrary_MeshRepairFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshRepairFunctions(const UGeometryScriptLibrary_MeshRepairFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshRepairFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshRepairFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshRepairFunctions(UGeometryScriptLibrary_MeshRepairFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshRepairFunctions(const UGeometryScriptLibrary_MeshRepairFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshRepairFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshRepairFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshRepairFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshRepairFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_162_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshRepairFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRepairFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTFILLHOLESMETHOD(op) \
	op(EGeometryScriptFillHolesMethod::Automatic) \
	op(EGeometryScriptFillHolesMethod::MinimalFill) \
	op(EGeometryScriptFillHolesMethod::PolygonTriangulation) \
	op(EGeometryScriptFillHolesMethod::TriangleFan) \
	op(EGeometryScriptFillHolesMethod::PlanarProjection) 

enum class EGeometryScriptFillHolesMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptFillHolesMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptFillHolesMethod>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTREMOVEHIDDENTRIANGLESMETHOD(op) \
	op(EGeometryScriptRemoveHiddenTrianglesMethod::FastWindingNumber) \
	op(EGeometryScriptRemoveHiddenTrianglesMethod::RaycastOcclusionTest) 

enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRemoveHiddenTrianglesMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemoveHiddenTrianglesMethod>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTREPAIRMESHMODE(op) \
	op(EGeometryScriptRepairMeshMode::DeleteOnly) \
	op(EGeometryScriptRepairMeshMode::RepairOrDelete) \
	op(EGeometryScriptRepairMeshMode::RepairOrSkip) 

enum class EGeometryScriptRepairMeshMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRepairMeshMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRepairMeshMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
