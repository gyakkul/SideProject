// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Binding/ColorBinding.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FSlateColor;
#ifdef UMG_ColorBinding_generated_h
#error "ColorBinding.generated.h already included, missing '#pragma once' in ColorBinding.h"
#endif
#define UMG_ColorBinding_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLinearValue); \
	DECLARE_FUNCTION(execGetSlateValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLinearValue); \
	DECLARE_FUNCTION(execGetSlateValue);


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorBinding(); \
	friend struct Z_Construct_UClass_UColorBinding_Statics; \
public: \
	DECLARE_CLASS(UColorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UColorBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUColorBinding(); \
	friend struct Z_Construct_UClass_UColorBinding_Statics; \
public: \
	DECLARE_CLASS(UColorBinding, UPropertyBinding, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UColorBinding)


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorBinding(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorBinding) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorBinding); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorBinding(UColorBinding&&); \
	NO_API UColorBinding(const UColorBinding&); \
public: \
	NO_API virtual ~UColorBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorBinding(UColorBinding&&); \
	NO_API UColorBinding(const UColorBinding&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorBinding); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorBinding); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UColorBinding) \
	NO_API virtual ~UColorBinding();


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UColorBinding>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Binding_ColorBinding_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
