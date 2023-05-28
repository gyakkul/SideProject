// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/CollisionFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDynamicMesh;
class UDynamicMeshComponent;
class UGeometryScriptDebug;
class UPrimitiveComponent;
class UStaticMesh;
struct FGeometryScriptCollisionFromMeshOptions;
struct FGeometryScriptSetSimpleCollisionOptions;
#ifdef GEOMETRYSCRIPTINGCORE_CollisionFunctions_generated_h
#error "CollisionFunctions.generated.h already included, missing '#pragma once' in CollisionFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_CollisionFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptCollisionFromMeshOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptCollisionFromMeshOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_99_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryScriptSetSimpleCollisionOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<struct FGeometryScriptSetSimpleCollisionOptions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetDynamicMeshCollision); \
	DECLARE_FUNCTION(execSetDynamicMeshCollisionFromMesh); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromComponent); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetDynamicMeshCollision); \
	DECLARE_FUNCTION(execSetDynamicMeshCollisionFromMesh); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromComponent); \
	DECLARE_FUNCTION(execSetStaticMeshCollisionFromMesh);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_CollisionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_CollisionFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_CollisionFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_CollisionFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_CollisionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_CollisionFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_CollisionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_CollisionFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_CollisionFunctions(UGeometryScriptLibrary_CollisionFunctions&&); \
	NO_API UGeometryScriptLibrary_CollisionFunctions(const UGeometryScriptLibrary_CollisionFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_CollisionFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_CollisionFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_CollisionFunctions(UGeometryScriptLibrary_CollisionFunctions&&); \
	NO_API UGeometryScriptLibrary_CollisionFunctions(const UGeometryScriptLibrary_CollisionFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_CollisionFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_CollisionFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_CollisionFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_CollisionFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_107_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_CollisionFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_CollisionFunctions_h


#define FOREACH_ENUM_EGEOMETRYSCRIPTCOLLISIONGENERATIONMETHOD(op) \
	op(EGeometryScriptCollisionGenerationMethod::AlignedBoxes) \
	op(EGeometryScriptCollisionGenerationMethod::OrientedBoxes) \
	op(EGeometryScriptCollisionGenerationMethod::MinimalSpheres) \
	op(EGeometryScriptCollisionGenerationMethod::Capsules) \
	op(EGeometryScriptCollisionGenerationMethod::ConvexHulls) \
	op(EGeometryScriptCollisionGenerationMethod::SweptHulls) \
	op(EGeometryScriptCollisionGenerationMethod::MinVolumeShapes) 

enum class EGeometryScriptCollisionGenerationMethod : uint8;
template<> struct TIsUEnumClass<EGeometryScriptCollisionGenerationMethod> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptCollisionGenerationMethod>();

#define FOREACH_ENUM_EGEOMETRYSCRIPTSWEPTHULLAXIS(op) \
	op(EGeometryScriptSweptHullAxis::X) \
	op(EGeometryScriptSweptHullAxis::Y) \
	op(EGeometryScriptSweptHullAxis::Z) \
	op(EGeometryScriptSweptHullAxis::SmallestBoxDimension) \
	op(EGeometryScriptSweptHullAxis::SmallestVolume) 

enum class EGeometryScriptSweptHullAxis : uint8;
template<> struct TIsUEnumClass<EGeometryScriptSweptHullAxis> { enum { Value = true }; };
template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSweptHullAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
