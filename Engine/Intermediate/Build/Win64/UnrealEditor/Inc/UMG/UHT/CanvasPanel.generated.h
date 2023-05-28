// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CanvasPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasPanelSlot;
class UWidget;
#ifdef UMG_CanvasPanel_generated_h
#error "CanvasPanel.generated.h already included, missing '#pragma once' in CanvasPanel.h"
#endif
#define UMG_CanvasPanel_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToCanvas);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToCanvas);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvasPanel(); \
	friend struct Z_Construct_UClass_UCanvasPanel_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasPanel(); \
	friend struct Z_Construct_UClass_UCanvasPanel_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanel(UCanvasPanel&&); \
	NO_API UCanvasPanel(const UCanvasPanel&); \
public: \
	NO_API virtual ~UCanvasPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanel(UCanvasPanel&&); \
	NO_API UCanvasPanel(const UCanvasPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanel) \
	NO_API virtual ~UCanvasPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_24_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CanvasPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCanvasPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
