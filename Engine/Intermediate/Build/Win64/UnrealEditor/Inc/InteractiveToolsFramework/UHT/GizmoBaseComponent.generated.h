// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoBaseComponent_generated_h
#error "GizmoBaseComponent.generated.h already included, missing '#pragma once' in GizmoBaseComponent.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoBaseComponent_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateWorldLocalState); \
	DECLARE_FUNCTION(execUpdateHoverState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateWorldLocalState); \
	DECLARE_FUNCTION(execUpdateHoverState);


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoBaseComponent(); \
	friend struct Z_Construct_UClass_UGizmoBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UGizmoBaseComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoBaseComponent)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUGizmoBaseComponent(); \
	friend struct Z_Construct_UClass_UGizmoBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UGizmoBaseComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoBaseComponent)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoBaseComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoBaseComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBaseComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoBaseComponent(UGizmoBaseComponent&&); \
	NO_API UGizmoBaseComponent(const UGizmoBaseComponent&); \
public: \
	NO_API virtual ~UGizmoBaseComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoBaseComponent(UGizmoBaseComponent&&); \
	NO_API UGizmoBaseComponent(const UGizmoBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoBaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoBaseComponent) \
	NO_API virtual ~UGizmoBaseComponent();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_INCLASS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
