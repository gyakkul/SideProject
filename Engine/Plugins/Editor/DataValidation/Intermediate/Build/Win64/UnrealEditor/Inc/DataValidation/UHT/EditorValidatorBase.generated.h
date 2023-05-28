// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidatorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EDataValidationResult : uint8;
enum class EDataValidationUsecase : uint8;
#ifdef DATAVALIDATION_EditorValidatorBase_generated_h
#error "EditorValidatorBase.generated.h already included, missing '#pragma once' in EditorValidatorBase.h"
#endif
#define DATAVALIDATION_EditorValidatorBase_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_SPARSE_DATA
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_RPC_WRAPPERS \
	virtual EDataValidationResult ValidateLoadedAsset_Implementation(UObject* InAsset, TArray<FText>& ValidationErrors); \
	virtual bool CanValidateAsset_Implementation(UObject* InAsset) const; \
	virtual bool CanValidate_Implementation(const EDataValidationUsecase InUsecase) const; \
 \
	DECLARE_FUNCTION(execGetValidationResult); \
	DECLARE_FUNCTION(execAssetWarning); \
	DECLARE_FUNCTION(execAssetPasses); \
	DECLARE_FUNCTION(execAssetFails); \
	DECLARE_FUNCTION(execValidateLoadedAsset); \
	DECLARE_FUNCTION(execCanValidateAsset); \
	DECLARE_FUNCTION(execCanValidate);


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EDataValidationResult ValidateLoadedAsset_Implementation(UObject* InAsset, TArray<FText>& ValidationErrors); \
	virtual bool CanValidateAsset_Implementation(UObject* InAsset) const; \
	virtual bool CanValidate_Implementation(const EDataValidationUsecase InUsecase) const; \
 \
	DECLARE_FUNCTION(execGetValidationResult); \
	DECLARE_FUNCTION(execAssetWarning); \
	DECLARE_FUNCTION(execAssetPasses); \
	DECLARE_FUNCTION(execAssetFails); \
	DECLARE_FUNCTION(execValidateLoadedAsset); \
	DECLARE_FUNCTION(execCanValidateAsset); \
	DECLARE_FUNCTION(execCanValidate);


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorBase(); \
	friend struct Z_Construct_UClass_UEditorValidatorBase_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorBase)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEditorValidatorBase(); \
	friend struct Z_Construct_UClass_UEditorValidatorBase_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorBase)


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorValidatorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorValidatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorBase(UEditorValidatorBase&&); \
	NO_API UEditorValidatorBase(const UEditorValidatorBase&); \
public: \
	NO_API virtual ~UEditorValidatorBase();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorBase(UEditorValidatorBase&&); \
	NO_API UEditorValidatorBase(const UEditorValidatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorBase) \
	NO_API virtual ~UEditorValidatorBase();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_21_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_INCLASS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidatorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
