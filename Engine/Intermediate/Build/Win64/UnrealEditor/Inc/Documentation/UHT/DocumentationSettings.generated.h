// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DocumentationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DOCUMENTATION_DocumentationSettings_generated_h
#error "DocumentationSettings.generated.h already included, missing '#pragma once' in DocumentationSettings.h"
#endif
#define DOCUMENTATION_DocumentationSettings_generated_h

#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDocumentationBaseUrl_Statics; \
	DOCUMENTATION_API static class UScriptStruct* StaticStruct();


template<> DOCUMENTATION_API UScriptStruct* StaticStruct<struct FDocumentationBaseUrl>();

#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_SPARSE_DATA
#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_ACCESSORS
#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDocumentationSettings(); \
	friend struct Z_Construct_UClass_UDocumentationSettings_Statics; \
public: \
	DECLARE_CLASS(UDocumentationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Documentation"), NO_API) \
	DECLARE_SERIALIZER(UDocumentationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUDocumentationSettings(); \
	friend struct Z_Construct_UClass_UDocumentationSettings_Statics; \
public: \
	DECLARE_CLASS(UDocumentationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Documentation"), NO_API) \
	DECLARE_SERIALIZER(UDocumentationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentationSettings(UDocumentationSettings&&); \
	NO_API UDocumentationSettings(const UDocumentationSettings&); \
public: \
	NO_API virtual ~UDocumentationSettings();


#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDocumentationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDocumentationSettings(UDocumentationSettings&&); \
	NO_API UDocumentationSettings(const UDocumentationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDocumentationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDocumentationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDocumentationSettings) \
	NO_API virtual ~UDocumentationSettings();


#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_36_PROLOG
#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_SPARSE_DATA \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_ACCESSORS \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_INCLASS \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_SPARSE_DATA \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_ACCESSORS \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOCUMENTATION_API UClass* StaticClass<class UDocumentationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Documentation_Public_DocumentationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
