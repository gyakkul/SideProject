// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/EditorPerformanceSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_EditorPerformanceSettings_generated_h
#error "EditorPerformanceSettings.generated.h already included, missing '#pragma once' in EditorPerformanceSettings.h"
#endif
#define UNREALED_EditorPerformanceSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorPerformanceSettings(); \
	friend struct Z_Construct_UClass_UEditorPerformanceSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorPerformanceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorPerformanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUEditorPerformanceSettings(); \
	friend struct Z_Construct_UClass_UEditorPerformanceSettings_Statics; \
public: \
	DECLARE_CLASS(UEditorPerformanceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(UEditorPerformanceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorPerformanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPerformanceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorPerformanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPerformanceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEditorPerformanceSettings(UEditorPerformanceSettings&&); \
	UNREALED_API UEditorPerformanceSettings(const UEditorPerformanceSettings&); \
public: \
	UNREALED_API virtual ~UEditorPerformanceSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UEditorPerformanceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API UEditorPerformanceSettings(UEditorPerformanceSettings&&); \
	UNREALED_API UEditorPerformanceSettings(const UEditorPerformanceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorPerformanceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorPerformanceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorPerformanceSettings) \
	UNREALED_API virtual ~UEditorPerformanceSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_31_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorPerformanceSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UEditorPerformanceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Editor_EditorPerformanceSettings_h


#define FOREACH_ENUM_EEDITORUSERSCREENPERCENTAGEMODEOVERRIDE(op) \
	op(EEditorUserScreenPercentageModeOverride::ProjectDefault) \
	op(EEditorUserScreenPercentageModeOverride::Manual) \
	op(EEditorUserScreenPercentageModeOverride::BasedOnDisplayResolution) \
	op(EEditorUserScreenPercentageModeOverride::BasedOnDPIScale) 

enum class EEditorUserScreenPercentageModeOverride;
template<> struct TIsUEnumClass<EEditorUserScreenPercentageModeOverride> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EEditorUserScreenPercentageModeOverride>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
