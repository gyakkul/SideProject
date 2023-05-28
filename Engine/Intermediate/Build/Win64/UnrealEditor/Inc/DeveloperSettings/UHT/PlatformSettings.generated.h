// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/PlatformSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVELOPERSETTINGS_PlatformSettings_generated_h
#error "PlatformSettings.generated.h already included, missing '#pragma once' in PlatformSettings.h"
#endif
#define DEVELOPERSETTINGS_PlatformSettings_generated_h

#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerPlatformSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DEVELOPERSETTINGS_API UScriptStruct* StaticStruct<struct FPerPlatformSettings>();

#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_SPARSE_DATA
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_ACCESSORS
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformSettings(); \
	friend struct Z_Construct_UClass_UPlatformSettings_Statics; \
public: \
	DECLARE_CLASS(UPlatformSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeveloperSettings"), NO_API) \
	DECLARE_SERIALIZER(UPlatformSettings)


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformSettings(); \
	friend struct Z_Construct_UClass_UPlatformSettings_Statics; \
public: \
	DECLARE_CLASS(UPlatformSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeveloperSettings"), NO_API) \
	DECLARE_SERIALIZER(UPlatformSettings)


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformSettings(UPlatformSettings&&); \
	NO_API UPlatformSettings(const UPlatformSettings&); \
public: \
	NO_API virtual ~UPlatformSettings();


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformSettings(UPlatformSettings&&); \
	NO_API UPlatformSettings(const UPlatformSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformSettings) \
	NO_API virtual ~UPlatformSettings();


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_57_PROLOG
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_SPARSE_DATA \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_ACCESSORS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_INCLASS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_SPARSE_DATA \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_ACCESSORS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVELOPERSETTINGS_API UClass* StaticClass<class UPlatformSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
