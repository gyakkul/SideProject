// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MATERIALEDITOR_MaterialEditorSettings_generated_h
#error "MaterialEditorSettings.generated.h already included, missing '#pragma once' in MaterialEditorSettings.h"
#endif
#define MATERIALEDITOR_MaterialEditorSettings_generated_h

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCheckerboardSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<struct FCheckerboardSettings>();

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<struct FPreviewBackgroundSettings>();

#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_SPARSE_DATA
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_RPC_WRAPPERS
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_ACCESSORS
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialEditorSettings(); \
	friend struct Z_Construct_UClass_UMaterialEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialEditorSettings(); \
	friend struct Z_Construct_UClass_UMaterialEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UMaterialEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MaterialEditor"), NO_API) \
	DECLARE_SERIALIZER(UMaterialEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditorSettings(UMaterialEditorSettings&&); \
	NO_API UMaterialEditorSettings(const UMaterialEditorSettings&); \
public: \
	NO_API virtual ~UMaterialEditorSettings();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialEditorSettings(UMaterialEditorSettings&&); \
	NO_API UMaterialEditorSettings(const UMaterialEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialEditorSettings) \
	NO_API virtual ~UMaterialEditorSettings();


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_92_PROLOG
#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_SPARSE_DATA \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_RPC_WRAPPERS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_ACCESSORS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_INCLASS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_SPARSE_DATA \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_ACCESSORS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MATERIALEDITOR_API UClass* StaticClass<class UMaterialEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h


#define FOREACH_ENUM_EBACKGROUNDTYPE(op) \
	op(EBackgroundType::SolidColor) \
	op(EBackgroundType::Checkered) 

enum class EBackgroundType : uint8;
template<> struct TIsUEnumClass<EBackgroundType> { enum { Value = true }; };
template<> MATERIALEDITOR_API UEnum* StaticEnum<EBackgroundType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
