// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshModelingFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class EGeometryScriptMeshBevelSelectionMode : uint8;
struct FGeometryScriptMeshBevelOptions;
struct FGeometryScriptMeshBevelSelectionOptions;
struct FGeometryScriptMeshEditPolygroupOptions;
struct FGeometryScriptMeshExtrudeOptions;
struct FGeometryScriptMeshInsetOutsetFacesOptions;
struct FGeometryScriptMeshLinearExtrudeOptions;
struct FGeometryScriptMeshOffsetFacesOptions;
struct FGeometryScriptMeshOffsetOptions;
struct FGeometryScriptMeshSelection;
#ifdef GEOMETRYSCRIPTINGCORE_MeshModelingFunctions_generated_h
#error "MeshModelingFunctions.generated.h already included, missing '#pragma once' in MeshModelingFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshModelingFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshEditPolygroupOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshEditPolygroupOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshOffsetOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshExtrudeOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshExtrudeOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshLinearExtrudeOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshLinearExtrudeOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshOffsetFacesOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshOffsetFacesOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshInsetOutsetFacesOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshInsetOutsetFacesOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshBevelOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshBevelOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_254_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptMeshBevelSelectionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptMeshBevelSelectionOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyMeshExtrude_Compatibility_5p0); \
	DECLARE_FUNCTION(execApplyMeshPolygroupBevel); \
	DECLARE_FUNCTION(execApplyMeshBevelSelection); \
	DECLARE_FUNCTION(execApplyMeshInsetOutsetFaces); \
	DECLARE_FUNCTION(execApplyMeshOffsetFaces); \
	DECLARE_FUNCTION(execApplyMeshLinearExtrudeFaces); \
	DECLARE_FUNCTION(execApplyMeshShell); \
	DECLARE_FUNCTION(execApplyMeshOffset); \
	DECLARE_FUNCTION(execApplyMeshDuplicateFaces); \
	DECLARE_FUNCTION(execApplyMeshDisconnectFaces);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyMeshExtrude_Compatibility_5p0); \
	DECLARE_FUNCTION(execApplyMeshPolygroupBevel); \
	DECLARE_FUNCTION(execApplyMeshBevelSelection); \
	DECLARE_FUNCTION(execApplyMeshInsetOutsetFaces); \
	DECLARE_FUNCTION(execApplyMeshOffsetFaces); \
	DECLARE_FUNCTION(execApplyMeshLinearExtrudeFaces); \
	DECLARE_FUNCTION(execApplyMeshShell); \
	DECLARE_FUNCTION(execApplyMeshOffset); \
	DECLARE_FUNCTION(execApplyMeshDuplicateFaces); \
	DECLARE_FUNCTION(execApplyMeshDisconnectFaces);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshModelingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshModelingFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshModelingFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshModelingFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshModelingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshModelingFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshModelingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshModelingFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshModelingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshModelingFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshModelingFunctions(UGeometryScriptLibrary_MeshModelingFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshModelingFunctions(const UGeometryScriptLibrary_MeshModelingFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshModelingFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshModelingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshModelingFunctions(UGeometryScriptLibrary_MeshModelingFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshModelingFunctions(const UGeometryScriptLibrary_MeshModelingFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshModelingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshModelingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshModelingFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshModelingFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_268_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h_271_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshModelingFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshModelingFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTMESHEDITPOLYGROUPMODE(op) \
	op(EGeometryScriptMeshEditPolygroupMode::PreserveExisting) \
	op(EGeometryScriptMeshEditPolygroupMode::AutoGenerateNew) \
	op(EGeometryScriptMeshEditPolygroupMode::SetConstant) 

enum class EGeometryScriptMeshEditPolygroupMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMeshEditPolygroupMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMeshEditPolygroupMode>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTPOLYOPERATIONAREA(op) \
	op(EGeometryScriptPolyOperationArea::EntireSelection) \
	op(EGeometryScriptPolyOperationArea::PerPolygroup) \
	op(EGeometryScriptPolyOperationArea::PerTriangle) 

enum class EGeometryScriptPolyOperationArea : uint8;
template<> struct TIsUEnumClass<EGeometryScriptPolyOperationArea> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptPolyOperationArea>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTLINEAREXTRUDEDIRECTION(op) \
	op(EGeometryScriptLinearExtrudeDirection::FixedDirection) \
	op(EGeometryScriptLinearExtrudeDirection::AverageFaceNormal) 

enum class EGeometryScriptLinearExtrudeDirection : uint8;
template<> struct TIsUEnumClass<EGeometryScriptLinearExtrudeDirection> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptLinearExtrudeDirection>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTOFFSETFACESTYPE(op) \
	op(EGeometryScriptOffsetFacesType::VertexNormal) \
	op(EGeometryScriptOffsetFacesType::FaceNormal) \
	op(EGeometryScriptOffsetFacesType::ParallelFaceOffset) 

enum class EGeometryScriptOffsetFacesType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptOffsetFacesType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptOffsetFacesType>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTMESHBEVELSELECTIONMODE(op) \
	op(EGeometryScriptMeshBevelSelectionMode::TriangleArea) \
	op(EGeometryScriptMeshBevelSelectionMode::AllPolygroupEdges) \
	op(EGeometryScriptMeshBevelSelectionMode::SharedPolygroupEdges) 

enum class EGeometryScriptMeshBevelSelectionMode : uint8;
template<> struct TIsUEnumClass<EGeometryScriptMeshBevelSelectionMode> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptMeshBevelSelectionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
