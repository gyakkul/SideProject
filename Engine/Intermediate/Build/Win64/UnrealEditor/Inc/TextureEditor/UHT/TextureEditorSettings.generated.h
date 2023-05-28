// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEXTUREEDITOR_TextureEditorSettings_generated_h
#error "TextureEditorSettings.generated.h already included, missing '#pragma once' in TextureEditorSettings.h"
#endif
#define TEXTUREEDITOR_TextureEditorSettings_generated_h

#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_SPARSE_DATA
#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_RPC_WRAPPERS
#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_ACCESSORS
#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureEditorSettings(); \
	friend struct Z_Construct_UClass_UTextureEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureEditor"), NO_API) \
	DECLARE_SERIALIZER(UTextureEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUTextureEditorSettings(); \
	friend struct Z_Construct_UClass_UTextureEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureEditor"), NO_API) \
	DECLARE_SERIALIZER(UTextureEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureEditorSettings(UTextureEditorSettings&&); \
	NO_API UTextureEditorSettings(const UTextureEditorSettings&); \
public: \
	NO_API virtual ~UTextureEditorSettings();


#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureEditorSettings(UTextureEditorSettings&&); \
	NO_API UTextureEditorSettings(const UTextureEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureEditorSettings) \
	NO_API virtual ~UTextureEditorSettings();


#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_55_PROLOG
#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_SPARSE_DATA \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_RPC_WRAPPERS \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_ACCESSORS \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_INCLASS \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_SPARSE_DATA \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_ACCESSORS \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEXTUREEDITOR_API UClass* StaticClass<class UTextureEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_TextureEditor_Classes_TextureEditorSettings_h


#define FOREACH_ENUM_ETEXTUREEDITORBACKGROUNDS(op) \
	op(TextureEditorBackground_SolidColor) \
	op(TextureEditorBackground_Checkered) \
	op(TextureEditorBackground_CheckeredFill) 

enum ETextureEditorBackgrounds : int;
template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorBackgrounds>();

#define FOREACH_ENUM_ETEXTUREEDITORSAMPLING(op) \
	op(TextureEditorSampling_Default) \
	op(TextureEditorSampling_Point) 

enum ETextureEditorSampling : int;
template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorSampling>();

#define FOREACH_ENUM_ETEXTUREEDITORVOLUMEVIEWMODE(op) \
	op(TextureEditorVolumeViewMode_DepthSlices) \
	op(TextureEditorVolumeViewMode_VolumeTrace) 

enum ETextureEditorVolumeViewMode : int;
template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorVolumeViewMode>();

#define FOREACH_ENUM_ETEXTUREEDITORCUBEMAPVIEWMODE(op) \
	op(TextureEditorCubemapViewMode_2DView) \
	op(TextureEditorCubemapViewMode_3DView) 

enum ETextureEditorCubemapViewMode : int;
template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorCubemapViewMode>();

#define FOREACH_ENUM_ETEXTUREEDITORZOOMMODE(op) \
	op(ETextureEditorZoomMode::Custom) \
	op(ETextureEditorZoomMode::Fit) \
	op(ETextureEditorZoomMode::Fill) 

enum class ETextureEditorZoomMode : uint8;
template<> struct TIsUEnumClass<ETextureEditorZoomMode> { enum { Value = true }; };
template<> TEXTUREEDITOR_API UEnum* StaticEnum<ETextureEditorZoomMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
