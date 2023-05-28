// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARAEDITOR_NiagaraEditorSettings_generated_h
#error "NiagaraEditorSettings.generated.h already included, missing '#pragma once' in NiagaraEditorSettings.h"
#endif
#define NIAGARAEDITOR_NiagaraEditorSettings_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraNewAssetDialogConfig_Statics; \
	NIAGARAEDITOR_API static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraNewAssetDialogConfig>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraNamespaceMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraNamespaceMetadata>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraCurveTemplate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraCurveTemplate>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraActionColors_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraActionColors>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraParameterPanelSectionStorage_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<struct FNiagaraParameterPanelSectionStorage>();

#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraEditorSettings(); \
	friend struct Z_Construct_UClass_UNiagaraEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEditorSettings(); \
	friend struct Z_Construct_UClass_UNiagaraEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NiagaraEditor"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraEditorSettings(UNiagaraEditorSettings&&); \
	NO_API UNiagaraEditorSettings(const UNiagaraEditorSettings&); \
public: \
	NO_API virtual ~UNiagaraEditorSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraEditorSettings(UNiagaraEditorSettings&&); \
	NO_API UNiagaraEditorSettings(const UNiagaraEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEditorSettings) \
	NO_API virtual ~UNiagaraEditorSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_242_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h_246_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARAEDITOR_API UClass* StaticClass<class UNiagaraEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorSettings_h


#define FOREACH_ENUM_ENIAGARANAMESPACEMETADATAOPTIONS(op) \
	op(ENiagaraNamespaceMetadataOptions::HideInScript) \
	op(ENiagaraNamespaceMetadataOptions::HideInSystem) \
	op(ENiagaraNamespaceMetadataOptions::AdvancedInScript) \
	op(ENiagaraNamespaceMetadataOptions::AdvancedInSystem) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingNamespace) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingNamespaceModifier) \
	op(ENiagaraNamespaceMetadataOptions::PreventEditingName) \
	op(ENiagaraNamespaceMetadataOptions::PreventCreatingInSystemEditor) \
	op(ENiagaraNamespaceMetadataOptions::HideInDefinitions) 

enum class ENiagaraNamespaceMetadataOptions;
template<> struct TIsUEnumClass<ENiagaraNamespaceMetadataOptions> { enum { Value = true }; };
template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraNamespaceMetadataOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
