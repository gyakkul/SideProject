// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ArrowComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
struct FLinearColor;
#ifdef ENGINE_ArrowComponent_generated_h
#error "ArrowComponent.generated.h already included, missing '#pragma once' in ArrowComponent.h"
#endif
#define ENGINE_ArrowComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUseInEditorScaling); \
	DECLARE_FUNCTION(execSetTreatAsASprite); \
	DECLARE_FUNCTION(execSetIsScreenSizeScaled); \
	DECLARE_FUNCTION(execSetScreenSize); \
	DECLARE_FUNCTION(execSetArrowLength); \
	DECLARE_FUNCTION(execSetArrowSize); \
	DECLARE_FUNCTION(execSetArrowFColor); \
	DECLARE_FUNCTION(execSetArrowColor);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUseInEditorScaling); \
	DECLARE_FUNCTION(execSetTreatAsASprite); \
	DECLARE_FUNCTION(execSetIsScreenSizeScaled); \
	DECLARE_FUNCTION(execSetScreenSize); \
	DECLARE_FUNCTION(execSetArrowLength); \
	DECLARE_FUNCTION(execSetArrowSize); \
	DECLARE_FUNCTION(execSetArrowFColor); \
	DECLARE_FUNCTION(execSetArrowColor);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArrowComponent(); \
	friend struct Z_Construct_UClass_UArrowComponent_Statics; \
public: \
	DECLARE_CLASS(UArrowComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UArrowComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUArrowComponent(); \
	friend struct Z_Construct_UClass_UArrowComponent_Statics; \
public: \
	DECLARE_CLASS(UArrowComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UArrowComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArrowComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArrowComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArrowComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArrowComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArrowComponent(UArrowComponent&&); \
	NO_API UArrowComponent(const UArrowComponent&); \
public: \
	NO_API virtual ~UArrowComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArrowComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArrowComponent(UArrowComponent&&); \
	NO_API UArrowComponent(const UArrowComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArrowComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArrowComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArrowComponent) \
	NO_API virtual ~UArrowComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ArrowComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UArrowComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
