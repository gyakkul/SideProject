// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageMonitoringSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STAGEMONITORCOMMON_StageMonitoringSettings_generated_h
#error "StageMonitoringSettings.generated.h already included, missing '#pragma once' in StageMonitoringSettings.h"
#endif
#define STAGEMONITORCOMMON_StageMonitoringSettings_generated_h

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageMessageTypeWrapper_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<struct FStageMessageTypeWrapper>();

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageDataExportSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<struct FStageDataExportSettings>();

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageFramePerformanceSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<struct FStageFramePerformanceSettings>();

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageHitchDetectionSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<struct FStageHitchDetectionSettings>();

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageDataProviderSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<struct FStageDataProviderSettings>();

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStageMonitorSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STAGEMONITORCOMMON_API UScriptStruct* StaticStruct<struct FStageMonitorSettings>();

#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStageMonitoringSettings(); \
	friend struct Z_Construct_UClass_UStageMonitoringSettings_Statics; \
public: \
	DECLARE_CLASS(UStageMonitoringSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StageMonitorCommon"), NO_API) \
	DECLARE_SERIALIZER(UStageMonitoringSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUStageMonitoringSettings(); \
	friend struct Z_Construct_UClass_UStageMonitoringSettings_Statics; \
public: \
	DECLARE_CLASS(UStageMonitoringSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StageMonitorCommon"), NO_API) \
	DECLARE_SERIALIZER(UStageMonitoringSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageMonitoringSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageMonitoringSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageMonitoringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageMonitoringSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageMonitoringSettings(UStageMonitoringSettings&&); \
	NO_API UStageMonitoringSettings(const UStageMonitoringSettings&); \
public: \
	NO_API virtual ~UStageMonitoringSettings();


#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageMonitoringSettings(UStageMonitoringSettings&&); \
	NO_API UStageMonitoringSettings(const UStageMonitoringSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageMonitoringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageMonitoringSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStageMonitoringSettings) \
	NO_API virtual ~UStageMonitoringSettings();


#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_184_PROLOG
#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_INCLASS \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STAGEMONITORCOMMON_API UClass* StaticClass<class UStageMonitoringSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_StageMonitoring_Source_StageMonitorCommon_Public_StageMonitoringSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
