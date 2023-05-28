// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/UniformGridPanel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUniformGridSlot;
class UWidget;
struct FMargin;
#ifdef UMG_UniformGridPanel_generated_h
#error "UniformGridPanel.generated.h already included, missing '#pragma once' in UniformGridPanel.h"
#endif
#define UMG_UniformGridPanel_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToUniformGrid); \
	DECLARE_FUNCTION(execSetMinDesiredSlotHeight); \
	DECLARE_FUNCTION(execSetMinDesiredSlotWidth); \
	DECLARE_FUNCTION(execSetSlotPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToUniformGrid); \
	DECLARE_FUNCTION(execSetMinDesiredSlotHeight); \
	DECLARE_FUNCTION(execSetMinDesiredSlotWidth); \
	DECLARE_FUNCTION(execSetSlotPadding);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ACCESSORS \
static void GetSlotPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetSlotPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredSlotWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredSlotWidth_WrapperImpl(void* Object, const void* InValue); \
static void GetMinDesiredSlotHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetMinDesiredSlotHeight_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUniformGridPanel(); \
	friend struct Z_Construct_UClass_UUniformGridPanel_Statics; \
public: \
	DECLARE_CLASS(UUniformGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUUniformGridPanel(); \
	friend struct Z_Construct_UClass_UUniformGridPanel_Statics; \
public: \
	DECLARE_CLASS(UUniformGridPanel, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUniformGridPanel)


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridPanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridPanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridPanel(UUniformGridPanel&&); \
	NO_API UUniformGridPanel(const UUniformGridPanel&); \
public: \
	NO_API virtual ~UUniformGridPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUniformGridPanel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUniformGridPanel(UUniformGridPanel&&); \
	NO_API UUniformGridPanel(const UUniformGridPanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUniformGridPanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUniformGridPanel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUniformGridPanel) \
	NO_API virtual ~UUniformGridPanel();


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UniformGridPanel."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUniformGridPanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
