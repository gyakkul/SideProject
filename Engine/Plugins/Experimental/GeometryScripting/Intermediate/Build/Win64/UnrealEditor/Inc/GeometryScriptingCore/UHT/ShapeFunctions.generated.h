// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryScript/ShapeFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGeometryScriptAxis : uint8;
#ifdef GEOMETRYSCRIPTINGCORE_ShapeFunctions_generated_h
#error "ShapeFunctions.generated.h already included, missing '#pragma once' in ShapeFunctions.h"
#endif
#define GEOMETRYSCRIPTINGCORE_ShapeFunctions_generated_h

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTransformAxisPlane); \
	DECLARE_FUNCTION(execGetTransformAxisRay); \
	DECLARE_FUNCTION(execGetTransformAxisVector); \
	DECLARE_FUNCTION(execMakeTransformFromAxes); \
	DECLARE_FUNCTION(execMakeTransformFromZAxis);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransformAxisPlane); \
	DECLARE_FUNCTION(execGetTransformAxisRay); \
	DECLARE_FUNCTION(execGetTransformAxisVector); \
	DECLARE_FUNCTION(execMakeTransformFromAxes); \
	DECLARE_FUNCTION(execMakeTransformFromZAxis);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_TransformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_TransformFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_TransformFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_TransformFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_TransformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_TransformFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_TransformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_TransformFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_TransformFunctions(UGeometryScriptLibrary_TransformFunctions&&); \
	NO_API UGeometryScriptLibrary_TransformFunctions(const UGeometryScriptLibrary_TransformFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_TransformFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_TransformFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_TransformFunctions(UGeometryScriptLibrary_TransformFunctions&&); \
	NO_API UGeometryScriptLibrary_TransformFunctions(const UGeometryScriptLibrary_TransformFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_TransformFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_TransformFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_TransformFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_TransformFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_TransformFunctions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRaySegmentClosestPoint); \
	DECLARE_FUNCTION(execGetRayLineClosestPoint); \
	DECLARE_FUNCTION(execGetRayPlaneIntersection); \
	DECLARE_FUNCTION(execGetRayBoxIntersection); \
	DECLARE_FUNCTION(execGetRaySphereIntersection); \
	DECLARE_FUNCTION(execGetRayClosestPoint); \
	DECLARE_FUNCTION(execGetRayPointDistance); \
	DECLARE_FUNCTION(execGetRayParameter); \
	DECLARE_FUNCTION(execGetRayStartEnd); \
	DECLARE_FUNCTION(execGetRayPoint); \
	DECLARE_FUNCTION(execGetTransformedRay); \
	DECLARE_FUNCTION(execMakeRayFromPointDirection); \
	DECLARE_FUNCTION(execMakeRayFromPoints);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRaySegmentClosestPoint); \
	DECLARE_FUNCTION(execGetRayLineClosestPoint); \
	DECLARE_FUNCTION(execGetRayPlaneIntersection); \
	DECLARE_FUNCTION(execGetRayBoxIntersection); \
	DECLARE_FUNCTION(execGetRaySphereIntersection); \
	DECLARE_FUNCTION(execGetRayClosestPoint); \
	DECLARE_FUNCTION(execGetRayPointDistance); \
	DECLARE_FUNCTION(execGetRayParameter); \
	DECLARE_FUNCTION(execGetRayStartEnd); \
	DECLARE_FUNCTION(execGetRayPoint); \
	DECLARE_FUNCTION(execGetTransformedRay); \
	DECLARE_FUNCTION(execMakeRayFromPointDirection); \
	DECLARE_FUNCTION(execMakeRayFromPoints);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_RayFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_RayFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_RayFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_RayFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_RayFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_RayFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_RayFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_RayFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_RayFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_RayFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_RayFunctions(UGeometryScriptLibrary_RayFunctions&&); \
	NO_API UGeometryScriptLibrary_RayFunctions(const UGeometryScriptLibrary_RayFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_RayFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_RayFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_RayFunctions(UGeometryScriptLibrary_RayFunctions&&); \
	NO_API UGeometryScriptLibrary_RayFunctions(const UGeometryScriptLibrary_RayFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_RayFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_RayFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_RayFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_RayFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_64_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_RayFunctions>();

#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTestBoxSphereIntersection); \
	DECLARE_FUNCTION(execGetBoxPointDistance); \
	DECLARE_FUNCTION(execFindClosestPointOnBox); \
	DECLARE_FUNCTION(execTestPointInsideBox); \
	DECLARE_FUNCTION(execGetBoxBoxDistance); \
	DECLARE_FUNCTION(execFindBoxBoxIntersection); \
	DECLARE_FUNCTION(execTestBoxBoxIntersection); \
	DECLARE_FUNCTION(execGetTransformedBox); \
	DECLARE_FUNCTION(execGetExpandedBox); \
	DECLARE_FUNCTION(execGetBoxVolumeArea); \
	DECLARE_FUNCTION(execGetBoxFaceCenter); \
	DECLARE_FUNCTION(execGetBoxCorner); \
	DECLARE_FUNCTION(execGetBoxCenterSize); \
	DECLARE_FUNCTION(execMakeBoxFromCenterExtents); \
	DECLARE_FUNCTION(execMakeBoxFromCenterSize);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTestBoxSphereIntersection); \
	DECLARE_FUNCTION(execGetBoxPointDistance); \
	DECLARE_FUNCTION(execFindClosestPointOnBox); \
	DECLARE_FUNCTION(execTestPointInsideBox); \
	DECLARE_FUNCTION(execGetBoxBoxDistance); \
	DECLARE_FUNCTION(execFindBoxBoxIntersection); \
	DECLARE_FUNCTION(execTestBoxBoxIntersection); \
	DECLARE_FUNCTION(execGetTransformedBox); \
	DECLARE_FUNCTION(execGetExpandedBox); \
	DECLARE_FUNCTION(execGetBoxVolumeArea); \
	DECLARE_FUNCTION(execGetBoxFaceCenter); \
	DECLARE_FUNCTION(execGetBoxCorner); \
	DECLARE_FUNCTION(execGetBoxCenterSize); \
	DECLARE_FUNCTION(execMakeBoxFromCenterExtents); \
	DECLARE_FUNCTION(execMakeBoxFromCenterSize);


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_ACCESSORS
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_BoxFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_BoxFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryScriptLibrary_BoxFunctions(); \
	friend struct Z_Construct_UClass_UGeometryScriptLibrary_BoxFunctions_Statics; \
public: \
	DECLARE_CLASS(UGeometryScriptLibrary_BoxFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GeometryScriptingCore"), NO_API) \
	DECLARE_SERIALIZER(UGeometryScriptLibrary_BoxFunctions)


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_BoxFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_BoxFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_BoxFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_BoxFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_BoxFunctions(UGeometryScriptLibrary_BoxFunctions&&); \
	NO_API UGeometryScriptLibrary_BoxFunctions(const UGeometryScriptLibrary_BoxFunctions&); \
public: \
	NO_API virtual ~UGeometryScriptLibrary_BoxFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryScriptLibrary_BoxFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryScriptLibrary_BoxFunctions(UGeometryScriptLibrary_BoxFunctions&&); \
	NO_API UGeometryScriptLibrary_BoxFunctions(const UGeometryScriptLibrary_BoxFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryScriptLibrary_BoxFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryScriptLibrary_BoxFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryScriptLibrary_BoxFunctions) \
	NO_API virtual ~UGeometryScriptLibrary_BoxFunctions();


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_188_PROLOG
#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_INCLASS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_ACCESSORS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h_191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<class UGeometryScriptLibrary_BoxFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_ShapeFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
