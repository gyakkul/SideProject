// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGizmos/GizmoElementArrow.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoElementArrow_generated_h
#error "GizmoElementArrow.generated.h already included, missing '#pragma once' in GizmoElementArrow.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoElementArrow_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGizmoElementArrow(); \
	friend struct Z_Construct_UClass_UGizmoElementArrow_Statics; \
public: \
	DECLARE_CLASS(UGizmoElementArrow, UGizmoElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoElementArrow)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUGizmoElementArrow(); \
	friend struct Z_Construct_UClass_UGizmoElementArrow_Statics; \
public: \
	DECLARE_CLASS(UGizmoElementArrow, UGizmoElementBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoElementArrow)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoElementArrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoElementArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoElementArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoElementArrow(UGizmoElementArrow&&); \
	NO_API UGizmoElementArrow(const UGizmoElementArrow&); \
public: \
	NO_API virtual ~UGizmoElementArrow();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoElementArrow(UGizmoElementArrow&&); \
	NO_API UGizmoElementArrow(const UGizmoElementArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoElementArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoElementArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGizmoElementArrow) \
	NO_API virtual ~UGizmoElementArrow();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_28_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_INCLASS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoElementArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h


#define FOREACH_ENUM_EGIZMOELEMENTARROWHEADTYPE(op) \
	op(EGizmoElementArrowHeadType::Cone) \
	op(EGizmoElementArrowHeadType::Cube) 

enum class EGizmoElementArrowHeadType;
template<> struct TIsUEnumClass<EGizmoElementArrowHeadType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementArrowHeadType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
