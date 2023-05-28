// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/WidgetDesignerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMGEDITOR_WidgetDesignerSettings_generated_h
#error "WidgetDesignerSettings.generated.h already included, missing '#pragma once' in WidgetDesignerSettings.h"
#endif
#define UMGEDITOR_WidgetDesignerSettings_generated_h

#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_SPARSE_DATA
#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_ACCESSORS
#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetDesignerSettings(); \
	friend struct Z_Construct_UClass_UWidgetDesignerSettings_Statics; \
public: \
	DECLARE_CLASS(UWidgetDesignerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetDesignerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetDesignerSettings(); \
	friend struct Z_Construct_UClass_UWidgetDesignerSettings_Statics; \
public: \
	DECLARE_CLASS(UWidgetDesignerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMGEditor"), NO_API) \
	DECLARE_SERIALIZER(UWidgetDesignerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetDesignerSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetDesignerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetDesignerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetDesignerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetDesignerSettings(UWidgetDesignerSettings&&); \
	NO_API UWidgetDesignerSettings(const UWidgetDesignerSettings&); \
public: \
	NO_API virtual ~UWidgetDesignerSettings();


#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetDesignerSettings(UWidgetDesignerSettings&&); \
	NO_API UWidgetDesignerSettings(const UWidgetDesignerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetDesignerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetDesignerSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWidgetDesignerSettings) \
	NO_API virtual ~UWidgetDesignerSettings();


#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_33_PROLOG
#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_SPARSE_DATA \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_ACCESSORS \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_INCLASS \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_SPARSE_DATA \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_ACCESSORS \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMGEDITOR_API UClass* StaticClass<class UWidgetDesignerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UMGEditor_Public_Settings_WidgetDesignerSettings_h


#define FOREACH_ENUM_EDISPLAYONCOMPILE(op) \
	op(DoC_ErrorsOrWarnings) \
	op(DoC_ErrorsOnly) \
	op(DoC_WarningsOnly) \
	op(DoC_Never) 

enum EDisplayOnCompile : int;
template<> UMGEDITOR_API UEnum* StaticEnum<EDisplayOnCompile>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
