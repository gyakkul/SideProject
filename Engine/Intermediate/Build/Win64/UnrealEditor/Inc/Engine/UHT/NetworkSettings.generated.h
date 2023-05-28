// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NetworkSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetworkSettings_generated_h
#error "NetworkSettings.generated.h already included, missing '#pragma once' in NetworkSettings.h"
#endif
#define ENGINE_NetworkSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkEmulationProfileDescription_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkEmulationProfileDescription>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkSettings(); \
	friend struct Z_Construct_UClass_UNetworkSettings_Statics; \
public: \
	DECLARE_CLASS(UNetworkSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkSettings(); \
	friend struct Z_Construct_UClass_UNetworkSettings_Statics; \
public: \
	DECLARE_CLASS(UNetworkSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkSettings(UNetworkSettings&&); \
	NO_API UNetworkSettings(const UNetworkSettings&); \
public: \
	NO_API virtual ~UNetworkSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkSettings(UNetworkSettings&&); \
	NO_API UNetworkSettings(const UNetworkSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkSettings) \
	NO_API virtual ~UNetworkSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_27_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NetworkSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NetworkSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
