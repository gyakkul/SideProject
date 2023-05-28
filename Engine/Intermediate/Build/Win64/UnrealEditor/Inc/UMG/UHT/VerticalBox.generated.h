// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/VerticalBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVerticalBoxSlot;
class UWidget;
#ifdef UMG_VerticalBox_generated_h
#error "VerticalBox.generated.h already included, missing '#pragma once' in VerticalBox.h"
#endif
#define UMG_VerticalBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToVerticalBox);


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToVerticalBox);


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerticalBox(); \
	friend struct Z_Construct_UClass_UVerticalBox_Statics; \
public: \
	DECLARE_CLASS(UVerticalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVerticalBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVerticalBox(); \
	friend struct Z_Construct_UClass_UVerticalBox_Statics; \
public: \
	DECLARE_CLASS(UVerticalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVerticalBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerticalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerticalBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerticalBox(UVerticalBox&&); \
	NO_API UVerticalBox(const UVerticalBox&); \
public: \
	NO_API virtual ~UVerticalBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerticalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerticalBox(UVerticalBox&&); \
	NO_API UVerticalBox(const UVerticalBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerticalBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBox) \
	NO_API virtual ~UVerticalBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_21_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VerticalBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UVerticalBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
