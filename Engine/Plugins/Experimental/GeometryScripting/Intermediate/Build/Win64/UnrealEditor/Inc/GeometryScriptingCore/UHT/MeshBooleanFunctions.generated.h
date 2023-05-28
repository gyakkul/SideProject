// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshBooleanFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptBooleanOperation : uint8;
struct FGeometryScriptMeshBooleanOptions;
struct FGeometryScriptMeshMirrorOptions;
struct FGeometryScriptMeshPlaneCutOptions;
struct FGeometryScriptMeshPlaneSliceOptions;
struct FGeometryScriptMeshSelfUnionOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshBooleanFunctions_generated_h
#error "MeshBooleanFunctions.generated.h already included, missing '#pragma once' in MeshBooleanFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshBooleanFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshBooleanOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshBooleanOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshSelfUnionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshSelfUnionOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneCutOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshPlaneCutOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshPlaneSliceOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshPlaneSliceOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshMirrorOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshMirrorOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyMeshMirror); \
	DECLARE_FUNCTION(execApplyMeshPlaneSlice); \
	DECLARE_FUNCTION(execApplyMeshPlaneCut); \
	DECLARE_FUNCTION(execApplyMeshSelfUnion); \
	DECLARE_FUNCTION(execApplyMeshBoolean);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyMeshMirror); \
	DECLARE_FUNCTION(execApplyMeshPlaneSlice); \
	DECLARE_FUNCTION(execApplyMeshPlaneCut); \
	DECLARE_FUNCTION(execApplyMeshSelfUnion); \
	DECLARE_FUNCTION(execApplyMeshBoolean);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBooleanFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBooleanFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshBooleanFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshBooleanFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBooleanFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBooleanFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBooleanFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBooleanFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBooleanFunctions(UGeometryScriptLibrary_MeshBooleanFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBooleanFunctions(const UGeometryScriptLibrary_MeshBooleanFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshBooleanFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshBooleanFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshBooleanFunctions(UGeometryScriptLibrary_MeshBooleanFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshBooleanFunctions(const UGeometryScriptLibrary_MeshBooleanFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshBooleanFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshBooleanFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshBooleanFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshBooleanFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_116_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h_119_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshBooleanFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshBooleanFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTBOOLEANOPERATION(op) \
	op(EGeometryScriptBooleanOperation::Union) \
	op(EGeometryScriptBooleanOperation::Intersection) \
	op(EGeometryScriptBooleanOperation::Subtract) 

enum class EGeometryScriptBooleanOperation : uint8;
template<> struct TIsUEnumClass<EGeometryScriptBooleanOperation> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptBooleanOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
