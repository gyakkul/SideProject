// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GridPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridSlot;
class UWidget;
#ifdef UMG_GridPanel_generated_h
#error "GridPanel.generated.h already included, missing '#pragma once' in GridPanel.h"
#endif
#define UMG_GridPanel_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRowFill); \
	DECLARE_FUNCTION(execSetColumnFill); \
	DECLARE_FUNCTION(execAddChildToGrid);


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRowFill); \
	DECLARE_FUNCTION(execSetColumnFill); \
	DECLARE_FUNCTION(execAddChildToGrid);


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridPanel(); \
	friend struct Z_Construct_UClass_UGridPanel_Statics; \
public: \
	DECLARE_CLASS(UGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGridPanel(); \
	friend struct Z_Construct_UClass_UGridPanel_Statics; \
public: \
	DECLARE_CLASS(UGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UGridPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPanel(UGridPanel&&); \
	NO_API UGridPanel(const UGridPanel&); \
public: \
	NO_API virtual ~UGridPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGridPanel(UGridPanel&&); \
	NO_API UGridPanel(const UGridPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPanel) \
	NO_API virtual ~UGridPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h_23_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GridPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UGridPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_GridPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
