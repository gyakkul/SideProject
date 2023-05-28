// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PanelWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPanelSlot;
class UWidget;
#ifdef UMG_PanelWidget_generated_h
#error "PanelWidget.generated.h already included, missing '#pragma once' in PanelWidget.h"
#endif
#define UMG_PanelWidget_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearChildren); \
	DECLARE_FUNCTION(execHasAnyChildren); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execRemoveChildAt); \
	DECLARE_FUNCTION(execHasChild); \
	DECLARE_FUNCTION(execGetChildIndex); \
	DECLARE_FUNCTION(execGetAllChildren); \
	DECLARE_FUNCTION(execGetChildAt); \
	DECLARE_FUNCTION(execGetChildrenCount);


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearChildren); \
	DECLARE_FUNCTION(execHasAnyChildren); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execAddChild); \
	DECLARE_FUNCTION(execRemoveChildAt); \
	DECLARE_FUNCTION(execHasChild); \
	DECLARE_FUNCTION(execGetChildIndex); \
	DECLARE_FUNCTION(execGetAllChildren); \
	DECLARE_FUNCTION(execGetChildAt); \
	DECLARE_FUNCTION(execGetChildrenCount);


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPanelWidget(); \
	friend struct Z_Construct_UClass_UPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UPanelWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPanelWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPanelWidget(); \
	friend struct Z_Construct_UClass_UPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UPanelWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UPanelWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPanelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanelWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPanelWidget(UPanelWidget&&); \
	NO_API UPanelWidget(const UPanelWidget&); \
public: \
	NO_API virtual ~UPanelWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPanelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPanelWidget(UPanelWidget&&); \
	NO_API UPanelWidget(const UPanelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPanelWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPanelWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPanelWidget) \
	NO_API virtual ~UPanelWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_13_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PanelWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UPanelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_PanelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
