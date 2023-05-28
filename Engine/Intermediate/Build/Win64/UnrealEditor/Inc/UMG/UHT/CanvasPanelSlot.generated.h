// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CanvasPanelSlot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAnchorData;
struct FAnchors;
struct FMargin;
#ifdef UMG_CanvasPanelSlot_generated_h
#error "CanvasPanelSlot.generated.h already included, missing '#pragma once' in CanvasPanelSlot.h"
#endif
#define UMG_CanvasPanelSlot_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnchorData_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FAnchorData>();

#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaximum); \
	DECLARE_FUNCTION(execSetMinimum); \
	DECLARE_FUNCTION(execGetZOrder); \
	DECLARE_FUNCTION(execSetZOrder); \
	DECLARE_FUNCTION(execGetAutoSize); \
	DECLARE_FUNCTION(execSetAutoSize); \
	DECLARE_FUNCTION(execGetAlignment); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execGetAnchors); \
	DECLARE_FUNCTION(execSetAnchors); \
	DECLARE_FUNCTION(execGetOffsets); \
	DECLARE_FUNCTION(execSetOffsets); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetLayout); \
	DECLARE_FUNCTION(execSetLayout);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaximum); \
	DECLARE_FUNCTION(execSetMinimum); \
	DECLARE_FUNCTION(execGetZOrder); \
	DECLARE_FUNCTION(execSetZOrder); \
	DECLARE_FUNCTION(execGetAutoSize); \
	DECLARE_FUNCTION(execSetAutoSize); \
	DECLARE_FUNCTION(execGetAlignment); \
	DECLARE_FUNCTION(execSetAlignment); \
	DECLARE_FUNCTION(execGetAnchors); \
	DECLARE_FUNCTION(execSetAnchors); \
	DECLARE_FUNCTION(execGetOffsets); \
	DECLARE_FUNCTION(execSetOffsets); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execSetPosition); \
	DECLARE_FUNCTION(execGetLayout); \
	DECLARE_FUNCTION(execSetLayout);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_ACCESSORS \
static void GetLayoutData_WrapperImpl(const void* Object, void* OutValue); \
static void SetLayoutData_WrapperImpl(void* Object, const void* InValue); \
static void GetbAutoSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAutoSize_WrapperImpl(void* Object, const void* InValue); \
static void GetZOrder_WrapperImpl(const void* Object, void* OutValue); \
static void SetZOrder_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCanvasPanelSlot(); \
	friend struct Z_Construct_UClass_UCanvasPanelSlot_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanelSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanelSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUCanvasPanelSlot(); \
	friend struct Z_Construct_UClass_UCanvasPanelSlot_Statics; \
public: \
	DECLARE_CLASS(UCanvasPanelSlot, UPanelSlot, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UCanvasPanelSlot)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanelSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanelSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanelSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanelSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanelSlot(UCanvasPanelSlot&&); \
	NO_API UCanvasPanelSlot(const UCanvasPanelSlot&); \
public: \
	NO_API virtual ~UCanvasPanelSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCanvasPanelSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCanvasPanelSlot(UCanvasPanelSlot&&); \
	NO_API UCanvasPanelSlot(const UCanvasPanelSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCanvasPanelSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCanvasPanelSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCanvasPanelSlot) \
	NO_API virtual ~UCanvasPanelSlot();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_65_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h_68_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CanvasPanelSlot."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCanvasPanelSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanelSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
