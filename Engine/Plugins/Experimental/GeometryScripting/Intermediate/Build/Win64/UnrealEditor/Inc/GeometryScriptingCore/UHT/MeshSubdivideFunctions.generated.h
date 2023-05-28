// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/MeshSubdivideFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UGeometryScriptDebug;
enum class ESelectiveTessellatePatternType : uint8;
struct FGeometryScriptMeshSelection;
struct FGeometryScriptPNTessellateOptions;
struct FGeometryScriptSelectiveTessellateOptions;
#ifdef GEOMETRYSCRIPTINGCORE_MeshSubdivideFunctions_generated_h
#error "MeshSubdivideFunctions.generated.h already included, missing '#pragma once' in MeshSubdivideFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_MeshSubdivideFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptPNTessellateOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptPNTessellateOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSelectiveTessellateOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSelectiveTessellateOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplySelectiveTessellation); \
	DECLARE_FUNCTION(execApplyUniformTessellation); \
	DECLARE_FUNCTION(execApplyPNTessellation);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplySelectiveTessellation); \
	DECLARE_FUNCTION(execApplyUniformTessellation); \
	DECLARE_FUNCTION(execApplyPNTessellation);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSubdivideFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSubdivideFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_MeshSubdivideFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSubdivideFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_MeshSubdivideFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_MeshSubdivideFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSubdivideFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSubdivideFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSubdivideFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSubdivideFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSubdivideFunctions(UGeometryScriptLibrary_MeshSubdivideFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSubdivideFunctions(const UGeometryScriptLibrary_MeshSubdivideFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_MeshSubdivideFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_MeshSubdivideFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_MeshSubdivideFunctions(UGeometryScriptLibrary_MeshSubdivideFunctions&&); \
	NO_API UGeometryScriptLibrary_MeshSubdivideFunctions(const UGeometryScriptLibrary_MeshSubdivideFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_MeshSubdivideFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_MeshSubdivideFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_MeshSubdivideFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_MeshSubdivideFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_50_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_MeshSubdivideFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSubdivideFunctions_h


#define FOREACH_ENUM_ESELECTIVETESSELLATEPATTERNTYPE(op) \
	op(ESelectiveTessellatePatternType::ConcentricRings) 

enum class ESelectiveTessellatePatternType : uint8;
template<> struct TIsUEnumClass<ESelectiveTessellatePatternType> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<ESelectiveTessellatePatternType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
