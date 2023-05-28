// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WaterEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WATEREDITOR_WaterEditorSettings_generated_h
#error "WaterEditorSettings.generated.h already included, missing '#pragma once' in WaterEditorSettings.h"
#endif
#define WATEREDITOR_WaterEditorSettings_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBrushActorDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBrushActorDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterZoneActorDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterZoneActorDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyRiverDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyRiverDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_119_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyLakeDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyLakeDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyOceanDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyOceanDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_149_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyCustomDefaults_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FWaterBodyDefaults Super;


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyCustomDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWaterBodyIslandDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> WATEREDITOR_API UScriptStruct* StaticStruct<struct FWaterBodyIslandDefaults>();

#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaterEditorSettings(); \
	friend struct Z_Construct_UClass_UWaterEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UWaterEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UWaterEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUWaterEditorSettings(); \
	friend struct Z_Construct_UClass_UWaterEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UWaterEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/WaterEditor"), NO_API) \
	DECLARE_SERIALIZER(UWaterEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWaterEditorSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaterEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterEditorSettings(UWaterEditorSettings&&); \
	NO_API UWaterEditorSettings(const UWaterEditorSettings&); \
public: \
	NO_API virtual ~UWaterEditorSettings();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWaterEditorSettings(UWaterEditorSettings&&); \
	NO_API UWaterEditorSettings(const UWaterEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWaterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaterEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWaterEditorSettings) \
	NO_API virtual ~UWaterEditorSettings();


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_177_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATEREDITOR_API UClass* StaticClass<class UWaterEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Editor_Public_WaterEditorSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
