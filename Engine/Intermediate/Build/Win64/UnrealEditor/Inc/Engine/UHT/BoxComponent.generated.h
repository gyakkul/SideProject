// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BoxComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BoxComponent_generated_h
#error "BoxComponent.generated.h already included, missing '#pragma once' in BoxComponent.h"
#endif
#define ENGINE_BoxComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUnscaledBoxExtent); \
	DECLARE_FUNCTION(execGetScaledBoxExtent); \
	DECLARE_FUNCTION(execSetLineThickness); \
	DECLARE_FUNCTION(execSetBoxExtent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUnscaledBoxExtent); \
	DECLARE_FUNCTION(execGetScaledBoxExtent); \
	DECLARE_FUNCTION(execSetLineThickness); \
	DECLARE_FUNCTION(execSetBoxExtent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBoxComponent(); \
	friend struct Z_Construct_UClass_UBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UBoxComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBoxComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBoxComponent(); \
	friend struct Z_Construct_UClass_UBoxComponent_Statics; \
public: \
	DECLARE_CLASS(UBoxComponent, UShapeComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBoxComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxComponent(UBoxComponent&&); \
	NO_API UBoxComponent(const UBoxComponent&); \
public: \
	NO_API virtual ~UBoxComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBoxComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBoxComponent(UBoxComponent&&); \
	NO_API UBoxComponent(const UBoxComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBoxComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBoxComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBoxComponent) \
	NO_API virtual ~UBoxComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BoxComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBoxComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_BoxComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
