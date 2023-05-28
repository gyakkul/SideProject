// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StereoLayerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FEquirectProps;
#ifdef ENGINE_StereoLayerComponent_generated_h
#error "StereoLayerComponent.generated.h already included, missing '#pragma once' in StereoLayerComponent.h"
#endif
#define ENGINE_StereoLayerComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShape(); \
	friend struct Z_Construct_UClass_UStereoLayerShape_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShape)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShape(); \
	friend struct Z_Construct_UClass_UStereoLayerShape_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShape)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShape(UStereoLayerShape&&); \
	NO_API UStereoLayerShape(const UStereoLayerShape&); \
public: \
	NO_API virtual ~UStereoLayerShape();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShape(UStereoLayerShape&&); \
	NO_API UStereoLayerShape(const UStereoLayerShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShape); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShape) \
	NO_API virtual ~UStereoLayerShape();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShape>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeQuad(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeQuad_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeQuad, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeQuad)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeQuad(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeQuad_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeQuad, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeQuad)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeQuad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeQuad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeQuad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeQuad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeQuad(UStereoLayerShapeQuad&&); \
	NO_API UStereoLayerShapeQuad(const UStereoLayerShapeQuad&); \
public: \
	NO_API virtual ~UStereoLayerShapeQuad();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeQuad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeQuad(UStereoLayerShapeQuad&&); \
	NO_API UStereoLayerShapeQuad(const UStereoLayerShapeQuad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeQuad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeQuad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeQuad) \
	NO_API virtual ~UStereoLayerShapeQuad();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_63_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeQuad>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execSetOverlayArc); \
	DECLARE_FUNCTION(execSetRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execSetOverlayArc); \
	DECLARE_FUNCTION(execSetRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCylinder(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCylinder_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCylinder, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCylinder)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCylinder(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCylinder_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCylinder, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCylinder)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeCylinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCylinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCylinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCylinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCylinder(UStereoLayerShapeCylinder&&); \
	NO_API UStereoLayerShapeCylinder(const UStereoLayerShapeCylinder&); \
public: \
	NO_API virtual ~UStereoLayerShapeCylinder();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCylinder(UStereoLayerShapeCylinder&&); \
	NO_API UStereoLayerShapeCylinder(const UStereoLayerShapeCylinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCylinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCylinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeCylinder) \
	NO_API virtual ~UStereoLayerShapeCylinder();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeCylinder>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCubemap(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCubemap_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCubemap, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCubemap)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCubemap(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCubemap_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCubemap, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCubemap)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeCubemap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCubemap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCubemap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCubemap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCubemap(UStereoLayerShapeCubemap&&); \
	NO_API UStereoLayerShapeCubemap(const UStereoLayerShapeCubemap&); \
public: \
	NO_API virtual ~UStereoLayerShapeCubemap();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeCubemap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCubemap(UStereoLayerShapeCubemap&&); \
	NO_API UStereoLayerShapeCubemap(const UStereoLayerShapeCubemap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCubemap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCubemap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCubemap) \
	NO_API virtual ~UStereoLayerShapeCubemap();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_111_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeCubemap>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquirectProps_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEquirectProps>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEquirectProps);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEquirectProps);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeEquirect(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeEquirect_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeEquirect, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeEquirect)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeEquirect(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeEquirect_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeEquirect, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeEquirect)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeEquirect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeEquirect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeEquirect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeEquirect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeEquirect(UStereoLayerShapeEquirect&&); \
	NO_API UStereoLayerShapeEquirect(const UStereoLayerShapeEquirect&); \
public: \
	NO_API virtual ~UStereoLayerShapeEquirect();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeEquirect(UStereoLayerShapeEquirect&&); \
	NO_API UStereoLayerShapeEquirect(const UStereoLayerShapeEquirect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeEquirect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeEquirect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeEquirect) \
	NO_API virtual ~UStereoLayerShapeEquirect();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_188_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeEquirect>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMarkTextureForUpdate); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetEquirectProps); \
	DECLARE_FUNCTION(execGetUVRect); \
	DECLARE_FUNCTION(execSetUVRect); \
	DECLARE_FUNCTION(execGetQuadSize); \
	DECLARE_FUNCTION(execSetQuadSize); \
	DECLARE_FUNCTION(execGetLeftTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetLeftTexture); \
	DECLARE_FUNCTION(execSetTexture);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMarkTextureForUpdate); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetEquirectProps); \
	DECLARE_FUNCTION(execGetUVRect); \
	DECLARE_FUNCTION(execSetUVRect); \
	DECLARE_FUNCTION(execGetQuadSize); \
	DECLARE_FUNCTION(execSetQuadSize); \
	DECLARE_FUNCTION(execGetLeftTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetLeftTexture); \
	DECLARE_FUNCTION(execSetTexture);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStereoLayerComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct Z_Construct_UClass_UStereoLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct Z_Construct_UClass_UStereoLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerComponent(UStereoLayerComponent&&); \
	NO_API UStereoLayerComponent(const UStereoLayerComponent&); \
public: \
	NO_API virtual ~UStereoLayerComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerComponent(UStereoLayerComponent&&); \
	NO_API UStereoLayerComponent(const UStereoLayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent) \
	NO_API virtual ~UStereoLayerComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_243_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StereoLayerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h


#define FOREACH_ENUM_ESTEREOLAYERTYPE(op) \
	op(SLT_WorldLocked) \
	op(SLT_TrackerLocked) \
	op(SLT_FaceLocked) 

enum EStereoLayerType : int;
template<> ENGINE_API UEnum* StaticEnum<EStereoLayerType>();

#define FOREACH_ENUM_ESTEREOLAYERSHAPE(op) \
	op(SLSH_QuadLayer) \
	op(SLSH_CylinderLayer) \
	op(SLSH_CubemapLayer) \
	op(SLSH_EquirectLayer) 

enum EStereoLayerShape : int;
template<> ENGINE_API UEnum* StaticEnum<EStereoLayerShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
