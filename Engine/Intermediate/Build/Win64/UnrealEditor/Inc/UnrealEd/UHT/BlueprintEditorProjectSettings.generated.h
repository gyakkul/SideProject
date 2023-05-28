// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/BlueprintEditorProjectSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_BlueprintEditorProjectSettings_generated_h
#error "BlueprintEditorProjectSettings.generated.h already included, missing '#pragma once' in BlueprintEditorProjectSettings.h"
#endif
#define UNREALED_BlueprintEditorProjectSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintEditorProjectSettings(); \
	friend struct Z_Construct_UClass_UBlueprintEditorProjectSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintEditorProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintEditorProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorProjectSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorProjectSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorProjectSettings(UBlueprintEditorProjectSettings&&); \
	NO_API UBlueprintEditorProjectSettings(const UBlueprintEditorProjectSettings&); \
public: \
	NO_API virtual ~UBlueprintEditorProjectSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintEditorProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintEditorProjectSettings(UBlueprintEditorProjectSettings&&); \
	NO_API UBlueprintEditorProjectSettings(const UBlueprintEditorProjectSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintEditorProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintEditorProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintEditorProjectSettings) \
	NO_API virtual ~UBlueprintEditorProjectSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintEditorProjectSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UBlueprintEditorProjectSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Settings_BlueprintEditorProjectSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
