// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RectLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef ENGINE_RectLightComponent_generated_h
#error "RectLightComponent.generated.h already included, missing '#pragma once' in RectLightComponent.h"
#endif
#define ENGINE_RectLightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBarnDoorLength); \
	DECLARE_FUNCTION(execSetBarnDoorAngle); \
	DECLARE_FUNCTION(execSetSourceHeight); \
	DECLARE_FUNCTION(execSetSourceWidth); \
	DECLARE_FUNCTION(execSetSourceTexture);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBarnDoorLength); \
	DECLARE_FUNCTION(execSetBarnDoorAngle); \
	DECLARE_FUNCTION(execSetSourceHeight); \
	DECLARE_FUNCTION(execSetSourceWidth); \
	DECLARE_FUNCTION(execSetSourceTexture);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURectLightComponent(); \
	friend struct Z_Construct_UClass_URectLightComponent_Statics; \
public: \
	DECLARE_CLASS(URectLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URectLightComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURectLightComponent(); \
	friend struct Z_Construct_UClass_URectLightComponent_Statics; \
public: \
	DECLARE_CLASS(URectLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URectLightComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URectLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URectLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URectLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URectLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URectLightComponent(URectLightComponent&&); \
	NO_API URectLightComponent(const URectLightComponent&); \
public: \
	NO_API virtual ~URectLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URectLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URectLightComponent(URectLightComponent&&); \
	NO_API URectLightComponent(const URectLightComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URectLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URectLightComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URectLightComponent) \
	NO_API virtual ~URectLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RectLightComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URectLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
