// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StageAppSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EPICSTAGEAPP_StageAppSettings_generated_h
#error "StageAppSettings.generated.h already included, missing '#pragma once' in StageAppSettings.h"
#endif
#define EPICSTAGEAPP_StageAppSettings_generated_h

#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStageAppSettings(); \
	friend struct Z_Construct_UClass_UStageAppSettings_Statics; \
public: \
	DECLARE_CLASS(UStageAppSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EpicStageApp"), NO_API) \
	DECLARE_SERIALIZER(UStageAppSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUStageAppSettings(); \
	friend struct Z_Construct_UClass_UStageAppSettings_Statics; \
public: \
	DECLARE_CLASS(UStageAppSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EpicStageApp"), NO_API) \
	DECLARE_SERIALIZER(UStageAppSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageAppSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageAppSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageAppSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageAppSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageAppSettings(UStageAppSettings&&); \
	NO_API UStageAppSettings(const UStageAppSettings&); \
public: \
	NO_API virtual ~UStageAppSettings();


#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStageAppSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStageAppSettings(UStageAppSettings&&); \
	NO_API UStageAppSettings(const UStageAppSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStageAppSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStageAppSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStageAppSettings) \
	NO_API virtual ~UStageAppSettings();


#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_INCLASS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EPICSTAGEAPP_API UClass* StaticClass<class UStageAppSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Public_StageAppSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
