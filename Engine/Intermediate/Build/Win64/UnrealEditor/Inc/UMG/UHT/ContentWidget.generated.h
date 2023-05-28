// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ContentWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPanelSlot;
class UWidget;
#ifdef UMG_ContentWidget_generated_h
#error "ContentWidget.generated.h already included, missing '#pragma once' in ContentWidget.h"
#endif
#define UMG_ContentWidget_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetContent); \
	DECLARE_FUNCTION(execGetContentSlot);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetContent); \
	DECLARE_FUNCTION(execSetContent); \
	DECLARE_FUNCTION(execGetContentSlot);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContentWidget(); \
	friend struct Z_Construct_UClass_UContentWidget_Statics; \
public: \
	DECLARE_CLASS(UContentWidget, UPanelWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UContentWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUContentWidget(); \
	friend struct Z_Construct_UClass_UContentWidget_Statics; \
public: \
	DECLARE_CLASS(UContentWidget, UPanelWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UContentWidget)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentWidget(UContentWidget&&); \
	NO_API UContentWidget(const UContentWidget&); \
public: \
	NO_API virtual ~UContentWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContentWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContentWidget(UContentWidget&&); \
	NO_API UContentWidget(const UContentWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContentWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContentWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContentWidget) \
	NO_API virtual ~UContentWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_11_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ContentWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UContentWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ContentWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
