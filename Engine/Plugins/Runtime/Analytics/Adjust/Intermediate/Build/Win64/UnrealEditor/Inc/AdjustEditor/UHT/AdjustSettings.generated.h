// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AdjustSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADJUSTEDITOR_AdjustSettings_generated_h
#error "AdjustSettings.generated.h already included, missing '#pragma once' in AdjustSettings.h"
#endif
#define ADJUSTEDITOR_AdjustSettings_generated_h

#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAdjustEventMapping_Statics; \
	ADJUSTEDITOR_API static class UScriptStruct* StaticStruct();


template<> ADJUSTEDITOR_API UScriptStruct* StaticStruct<struct FAdjustEventMapping>();

#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_ACCESSORS
#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdjustSettings(); \
	friend struct Z_Construct_UClass_UAdjustSettings_Statics; \
public: \
	DECLARE_CLASS(UAdjustSettings, UAnalyticsSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdjustEditor"), NO_API) \
	DECLARE_SERIALIZER(UAdjustSettings)


#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUAdjustSettings(); \
	friend struct Z_Construct_UClass_UAdjustSettings_Statics; \
public: \
	DECLARE_CLASS(UAdjustSettings, UAnalyticsSettingsBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdjustEditor"), NO_API) \
	DECLARE_SERIALIZER(UAdjustSettings)


#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdjustSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdjustSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdjustSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdjustSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdjustSettings(UAdjustSettings&&); \
	NO_API UAdjustSettings(const UAdjustSettings&); \
public: \
	NO_API virtual ~UAdjustSettings();


#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdjustSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdjustSettings(UAdjustSettings&&); \
	NO_API UAdjustSettings(const UAdjustSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdjustSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdjustSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdjustSettings) \
	NO_API virtual ~UAdjustSettings();


#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_47_PROLOG
#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_ACCESSORS \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_INCLASS \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_ACCESSORS \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h_51_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AdjustSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADJUSTEDITOR_API UClass* StaticClass<class UAdjustSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Analytics_Adjust_Source_AdjustEditor_Classes_AdjustSettings_h


#define FOREACH_ENUM_EANDROIDADJUSTLOGGING(op) \
	op(EAndroidAdjustLogging::verbose) \
	op(EAndroidAdjustLogging::debug) \
	op(EAndroidAdjustLogging::info) \
	op(EAndroidAdjustLogging::warn) \
	op(EAndroidAdjustLogging::error) \
	op(EAndroidAdjustLogging::assert) \
	op(EAndroidAdjustLogging::supress) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
