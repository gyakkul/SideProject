// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PropertyViewBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UMGEDITOR_PropertyViewBase_generated_h
#error "PropertyViewBase.generated.h already included, missing '#pragma once' in PropertyViewBase.h"
#endif
#define UMGEDITOR_PropertyViewBase_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_15_DELEGATE \
UMGEDITOR_API void FOnPropertyValueChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPropertyValueChanged, FName PropertyName);


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_SPARSE_DATA
#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execGetObject);


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execGetObject);


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_ACCESSORS
#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPropertyViewBase(); \
	friend struct Z_Construct_UClass_UPropertyViewBase_Statics; \
public: \
	DECLARE_CLASS(UPropertyViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UPropertyViewBase)


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUPropertyViewBase(); \
	friend struct Z_Construct_UClass_UPropertyViewBase_Statics; \
public: \
	DECLARE_CLASS(UPropertyViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UPropertyViewBase)


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyViewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyViewBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyViewBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyViewBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyViewBase(UPropertyViewBase&&); \
	NO_API UPropertyViewBase(const UPropertyViewBase&); \
public: \
	NO_API virtual ~UPropertyViewBase();


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPropertyViewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPropertyViewBase(UPropertyViewBase&&); \
	NO_API UPropertyViewBase(const UPropertyViewBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPropertyViewBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPropertyViewBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPropertyViewBase) \
	NO_API virtual ~UPropertyViewBase();


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_21_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_SPARSE_DATA \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_ACCESSORS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_SPARSE_DATA \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_ACCESSORS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UPropertyViewBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_Components_PropertyViewBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
