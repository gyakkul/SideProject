// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StackBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStackBoxSlot;
class UWidget;
#ifdef UMG_StackBox_generated_h
#error "StackBox.generated.h already included, missing '#pragma once' in StackBox.h"
#endif
#define UMG_StackBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReplaceStackBoxChildAt); \
	DECLARE_FUNCTION(execAddChildToStackBox);


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReplaceStackBoxChildAt); \
	DECLARE_FUNCTION(execAddChildToStackBox);


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_ACCESSORS \
static void GetOrientation_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientation_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStackBox(); \
	friend struct Z_Construct_UClass_UStackBox_Statics; \
public: \
	DECLARE_CLASS(UStackBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UStackBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUStackBox(); \
	friend struct Z_Construct_UClass_UStackBox_Statics; \
public: \
	DECLARE_CLASS(UStackBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UStackBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStackBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStackBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStackBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStackBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStackBox(UStackBox&&); \
	NO_API UStackBox(const UStackBox&); \
public: \
	NO_API virtual ~UStackBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStackBox(UStackBox&&); \
	NO_API UStackBox(const UStackBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStackBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStackBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStackBox) \
	NO_API virtual ~UStackBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UStackBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
