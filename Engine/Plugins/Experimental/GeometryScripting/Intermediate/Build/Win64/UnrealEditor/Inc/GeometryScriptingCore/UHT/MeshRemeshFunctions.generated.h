// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshRemeshFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
struct FGeometryScriptRemeshOptions;
struct FGeometryScriptUniformRemeshOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshRemeshFunctions_generated_h
#error "MeshRemeshFunctions.generated.h already included, missing '#pragma once' in MeshRemeshFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshRemeshFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptRemeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptRemeshOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptUniformRemeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptUniformRemeshOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyUniformRemesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyUniformRemesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_RemeshingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_RemeshingFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_RemeshingFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_RemeshingFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_RemeshingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_RemeshingFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_RemeshingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_RemeshingFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_RemeshingFunctions(UGeometryScriptLibrary_RemeshingFunctions&&); \
	NO_API UGeometryScriptLibrary_RemeshingFunctions(const UGeometryScriptLibrary_RemeshingFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_RemeshingFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_RemeshingFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_RemeshingFunctions(UGeometryScriptLibrary_RemeshingFunctions&&); \
	NO_API UGeometryScriptLibrary_RemeshingFunctions(const UGeometryScriptLibrary_RemeshingFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_RemeshingFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_RemeshingFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_RemeshingFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_RemeshingFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_144_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_RemeshingFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshRemeshFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTUNIFORMREMESHTARGETTYPE(op) \
	op(EGeometryScriptUniformRemeshTargetType::TriangleCount) \
	op(EGeometryScriptUniformRemeshTargetType::TargetEdgeLength) 

enum class EGeometryScriptUniformRemeshTargetType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptUniformRemeshTargetType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptUniformRemeshTargetType>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTREMESHEDGECONSTRAINTTYPE(op) \
	op(EGeometryScriptRemeshEdgeConstraintType::Fixed) \
	op(EGeometryScriptRemeshEdgeConstraintType::Refine) \
	op(EGeometryScriptRemeshEdgeConstraintType::Free) \
	op(EGeometryScriptRemeshEdgeConstraintType::Ignore) 

enum class EGeometryScriptRemeshEdgeConstraintType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRemeshEdgeConstraintType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemeshEdgeConstraintType>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTREMESHSMOOTHINGTYPE(op) \
	op(EGeometryScriptRemeshSmoothingType::Uniform) \
	op(EGeometryScriptRemeshSmoothingType::UVPreserving) \
	op(EGeometryScriptRemeshSmoothingType::Mixed) 

enum class EGeometryScriptRemeshSmoothingType : uint8;
template<> struct TIsUEnumClass<EGeometryScriptRemeshSmoothingType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptRemeshSmoothingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
