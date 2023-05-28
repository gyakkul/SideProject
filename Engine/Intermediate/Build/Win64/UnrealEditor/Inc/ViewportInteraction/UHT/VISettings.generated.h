// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VISettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIEWPORTINTERACTION_VISettings_generated_h
#error "VISettings.generated.h already included, missing '#pragma once' in VISettings.h"
#endif
#define VIEWPORTINTERACTION_VISettings_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_SPARSE_DATA
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_ACCESSORS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVISettings(); \
	friend struct Z_Construct_UClass_UVISettings_Statics; \
public: \
	DECLARE_CLASS(UVISettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UVISettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUVISettings(); \
	friend struct Z_Construct_UClass_UVISettings_Statics; \
public: \
	DECLARE_CLASS(UVISettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UVISettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVISettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVISettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVISettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVISettings(UVISettings&&); \
	NO_API UVISettings(const UVISettings&); \
public: \
	NO_API virtual ~UVISettings();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVISettings(UVISettings&&); \
	NO_API UVISettings(const UVISettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVISettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVISettings) \
	NO_API virtual ~UVISettings();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_13_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_INCLASS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UVISettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_VISettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
