// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ShapeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ShapeComponent_generated_h
#error "ShapeComponent.generated.h already included, missing '#pragma once' in ShapeComponent.h"
#endif
#define ENGINE_ShapeComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UShapeComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShapeComponent(); \
	friend struct Z_Construct_UClass_UShapeComponent_Statics; \
public: \
	DECLARE_CLASS(UShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UShapeComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUShapeComponent(); \
	friend struct Z_Construct_UClass_UShapeComponent_Statics; \
public: \
	DECLARE_CLASS(UShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UShapeComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShapeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShapeComponent(UShapeComponent&&); \
	NO_API UShapeComponent(const UShapeComponent&); \
public: \
	NO_API virtual ~UShapeComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShapeComponent(UShapeComponent&&); \
	NO_API UShapeComponent(const UShapeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShapeComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShapeComponent) \
	NO_API virtual ~UShapeComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_23_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h_26_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ShapeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UShapeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ShapeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
