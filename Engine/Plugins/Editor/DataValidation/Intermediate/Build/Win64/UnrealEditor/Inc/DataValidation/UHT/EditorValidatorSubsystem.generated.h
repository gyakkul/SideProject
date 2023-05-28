// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorValidatorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorValidatorBase;
class UObject;
enum class EDataValidationResult : uint8;
enum class EDataValidationUsecase : uint8;
struct FAssetData;
struct FValidateAssetsResults;
struct FValidateAssetsSettings;
#ifdef DATAVALIDATION_EditorValidatorSubsystem_generated_h
#error "EditorValidatorSubsystem.generated.h already included, missing '#pragma once' in EditorValidatorSubsystem.h"
#endif
#define DATAVALIDATION_EditorValidatorSubsystem_generated_h

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsResults>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FValidateAssetsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAVALIDATION_API UScriptStruct* StaticStruct<struct FValidateAssetsSettings>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_SPARSE_DATA
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_RPC_WRAPPERS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataValidationSettings(); \
	friend struct Z_Construct_UClass_UDataValidationSettings_Statics; \
public: \
	DECLARE_CLASS(UDataValidationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDataValidationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUDataValidationSettings(); \
	friend struct Z_Construct_UClass_UDataValidationSettings_Statics; \
public: \
	DECLARE_CLASS(UDataValidationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UDataValidationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataValidationSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataValidationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataValidationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataValidationSettings(UDataValidationSettings&&); \
	NO_API UDataValidationSettings(const UDataValidationSettings&); \
public: \
	NO_API virtual ~UDataValidationSettings();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataValidationSettings(UDataValidationSettings&&); \
	NO_API UDataValidationSettings(const UDataValidationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataValidationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataValidationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataValidationSettings) \
	NO_API virtual ~UDataValidationSettings();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_79_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_INCLASS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UDataValidationSettings>();

#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_SPARSE_DATA
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValidateAssets); \
	DECLARE_FUNCTION(execValidateAssetsWithSettings); \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsObjectValid); \
	DECLARE_FUNCTION(execAddValidator);


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidateAssets); \
	DECLARE_FUNCTION(execValidateAssetsWithSettings); \
	DECLARE_FUNCTION(execIsAssetValid); \
	DECLARE_FUNCTION(execIsObjectValid); \
	DECLARE_FUNCTION(execAddValidator);


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_ACCESSORS
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorValidatorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUEditorValidatorSubsystem(); \
	friend struct Z_Construct_UClass_UEditorValidatorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DataValidation"), NO_API) \
	DECLARE_SERIALIZER(UEditorValidatorSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorValidatorSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorValidatorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorSubsystem(UEditorValidatorSubsystem&&); \
	NO_API UEditorValidatorSubsystem(const UEditorValidatorSubsystem&); \
public: \
	NO_API virtual ~UEditorValidatorSubsystem();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorValidatorSubsystem(UEditorValidatorSubsystem&&); \
	NO_API UEditorValidatorSubsystem(const UEditorValidatorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorValidatorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorValidatorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorValidatorSubsystem) \
	NO_API virtual ~UEditorValidatorSubsystem();


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_102_PROLOG
#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_INCLASS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_SPARSE_DATA \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_ACCESSORS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAVALIDATION_API UClass* StaticClass<class UEditorValidatorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_DataValidation_Source_DataValidation_Public_EditorValidatorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
