// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSimplifyFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptGroupLayer;
struct FGeometryScriptPlanarSimplifyOptions;
struct FGeometryScriptPolygroupSimplifyOptions;
struct FGeometryScriptSimplifyMeshOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshSimplifyFunctions_generated_h
#error "MeshSimplifyFunctions.generated.h already included, missing '#pragma once' in MeshSimplifyFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSimplifyFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPlanarSimplifyOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPlanarSimplifyOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPolygroupSimplifyOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPolygroupSimplifyOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSimplifyMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSimplifyMeshOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySimplifyToTolerance); \
	DECLARE_FUNCTION(execApplySimplifyToVertexCount); \
	DECLARE_FUNCTION(execApplySimplifyToTriangleCount); \
	DECLARE_FUNCTION(execApplySimplifyToPolygroupTopology); \
	DECLARE_FUNCTION(execApplySimplifyToPlanar);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySimplifyToTolerance); \
	DECLARE_FUNCTION(execApplySimplifyToVertexCount); \
	DECLARE_FUNCTION(execApplySimplifyToTriangleCount); \
	DECLARE_FUNCTION(execApplySimplifyToPolygroupTopology); \
	DECLARE_FUNCTION(execApplySimplifyToPlanar);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSimplifyFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSimplifyFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSimplifyFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSimplifyFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSimplifyFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSimplifyFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSimplifyFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSimplifyFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSimplifyFunctions(UGeometryScriptLibrary_MeshSimplifyFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSimplifyFunctions(const UGeometryScriptLibrary_MeshSimplifyFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshSimplifyFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSimplifyFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSimplifyFunctions(UGeometryScriptLibrary_MeshSimplifyFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSimplifyFunctions(const UGeometryScriptLibrary_MeshSimplifyFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSimplifyFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSimplifyFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSimplifyFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshSimplifyFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_82_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h_85_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshSimplifyFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSimplifyFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTREMOVEMESHSIMPLIFICATIONTYPE(op) \
	op(EGeometryScriptRemoveMeshSimplificationType::StandardQEM) \
	op(EGeometryScriptRemoveMeshSimplificationType::VolumePreserving) \
	op(EGeometryScriptRemoveMeshSimplificationType::AttributeAware) 

enum class EGeometryScriptRemoveMeshSimplificationType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRemoveMeshSimplificationType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemoveMeshSimplificationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
