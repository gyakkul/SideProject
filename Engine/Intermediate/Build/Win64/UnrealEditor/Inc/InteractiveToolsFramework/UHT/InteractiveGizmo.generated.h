// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractiveGizmo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveGizmo_generated_h
#error "InteractiveGizmo.generated.h already included, missing '#pragma once' in InteractiveGizmo.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveGizmo_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveGizmo(); \
	friend struct Z_Construct_UClass_UInteractiveGizmo_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveGizmo) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmo*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveGizmo(); \
	friend struct Z_Construct_UClass_UInteractiveGizmo_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveGizmo) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmo*>(this); }


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveGizmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveGizmo(UInteractiveGizmo&&); \
	NO_API UInteractiveGizmo(const UInteractiveGizmo&); \
public: \
	NO_API virtual ~UInteractiveGizmo();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveGizmo(UInteractiveGizmo&&); \
	NO_API UInteractiveGizmo(const UInteractiveGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveGizmo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveGizmo) \
	NO_API virtual ~UInteractiveGizmo();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_27_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_INCLASS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveGizmo_h


#define FOREACH_ENUM_ETRANSFORMGIZMOSUBELEMENTS(op) \
	op(ETransformGizmoSubElements::None) \
	op(ETransformGizmoSubElements::TranslateAxisX) \
	op(ETransformGizmoSubElements::TranslateAxisY) \
	op(ETransformGizmoSubElements::TranslateAxisZ) \
	op(ETransformGizmoSubElements::TranslateAllAxes) \
	op(ETransformGizmoSubElements::TranslatePlaneXY) \
	op(ETransformGizmoSubElements::TranslatePlaneXZ) \
	op(ETransformGizmoSubElements::TranslatePlaneYZ) \
	op(ETransformGizmoSubElements::TranslateAllPlanes) \
	op(ETransformGizmoSubElements::RotateAxisX) \
	op(ETransformGizmoSubElements::RotateAxisY) \
	op(ETransformGizmoSubElements::RotateAxisZ) \
	op(ETransformGizmoSubElements::RotateAllAxes) \
	op(ETransformGizmoSubElements::ScaleAxisX) \
	op(ETransformGizmoSubElements::ScaleAxisY) \
	op(ETransformGizmoSubElements::ScaleAxisZ) \
	op(ETransformGizmoSubElements::ScaleAllAxes) \
	op(ETransformGizmoSubElements::ScalePlaneYZ) \
	op(ETransformGizmoSubElements::ScalePlaneXZ) \
	op(ETransformGizmoSubElements::ScalePlaneXY) \
	op(ETransformGizmoSubElements::ScaleAllPlanes) \
	op(ETransformGizmoSubElements::ScaleUniform) \
	op(ETransformGizmoSubElements::StandardTranslateRotate) \
	op(ETransformGizmoSubElements::TranslateRotateUniformScale) \
	op(ETransformGizmoSubElements::FullTranslateRotateScale) 

enum class ETransformGizmoSubElements;
template<> struct TIsUEnumClass<ETransformGizmoSubElements> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ETransformGizmoSubElements>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
