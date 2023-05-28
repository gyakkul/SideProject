// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CurveEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURVEEDITOR_CurveEditorSettings_generated_h
#error "CurveEditorSettings.generated.h already included, missing '#pragma once' in CurveEditorSettings.h"
#endif
#define CURVEEDITOR_CurveEditorSettings_generated_h

#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomColorForChannel_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


template<> CURVEEDITOR_API UScriptStruct* StaticStruct<struct FCustomColorForChannel>();

#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomColorForSpaceSwitch_Statics; \
	CURVEEDITOR_API static class UScriptStruct* StaticStruct();


template<> CURVEEDITOR_API UScriptStruct* StaticStruct<struct FCustomColorForSpaceSwitch>();

#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_SPARSE_DATA
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_RPC_WRAPPERS
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_ACCESSORS
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCurveEditorSettings(); \
	friend struct Z_Construct_UClass_UCurveEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UCurveEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CurveEditor"), NO_API) \
	DECLARE_SERIALIZER(UCurveEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_INCLASS \
private: \
	static void StaticRegisterNativesUCurveEditorSettings(); \
	friend struct Z_Construct_UClass_UCurveEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UCurveEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CurveEditor"), NO_API) \
	DECLARE_SERIALIZER(UCurveEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveEditorSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveEditorSettings(UCurveEditorSettings&&); \
	NO_API UCurveEditorSettings(const UCurveEditorSettings&); \
public: \
	NO_API virtual ~UCurveEditorSettings();


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveEditorSettings(UCurveEditorSettings&&); \
	NO_API UCurveEditorSettings(const UCurveEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCurveEditorSettings) \
	NO_API virtual ~UCurveEditorSettings();


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_77_PROLOG
#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_SPARSE_DATA \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_RPC_WRAPPERS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_ACCESSORS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_INCLASS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_SPARSE_DATA \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_ACCESSORS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h_81_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURVEEDITOR_API UClass* StaticClass<class UCurveEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CurveEditor_Public_CurveEditorSettings_h


#define FOREACH_ENUM_ECURVEEDITORTANGENTVISIBILITY(op) \
	op(ECurveEditorTangentVisibility::AllTangents) \
	op(ECurveEditorTangentVisibility::SelectedKeys) \
	op(ECurveEditorTangentVisibility::NoTangents) 

enum class ECurveEditorTangentVisibility : uint8;
template<> struct TIsUEnumClass<ECurveEditorTangentVisibility> { enum { Value = true }; };
template<> CURVEEDITOR_API UEnum* StaticEnum<ECurveEditorTangentVisibility>();

#define FOREACH_ENUM_ECURVEEDITORZOOMPOSITION(op) \
	op(ECurveEditorZoomPosition::CurrentTime) \
	op(ECurveEditorZoomPosition::MousePosition) 

enum class ECurveEditorZoomPosition : uint8;
template<> struct TIsUEnumClass<ECurveEditorZoomPosition> { enum { Value = true }; };
template<> CURVEEDITOR_API UEnum* StaticEnum<ECurveEditorZoomPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
