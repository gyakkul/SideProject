// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/DeveloperSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVELOPERSETTINGS_DeveloperSettings_generated_h
#error "DeveloperSettings.generated.h already included, missing '#pragma once' in DeveloperSettings.h"
#endif
#define DEVELOPERSETTINGS_DeveloperSettings_generated_h

#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeveloperSettings(); \
	friend struct Z_Construct_UClass_UDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UDeveloperSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeveloperSettings"), NO_API) \
	DECLARE_SERIALIZER(UDeveloperSettings)


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUDeveloperSettings(); \
	friend struct Z_Construct_UClass_UDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UDeveloperSettings, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DeveloperSettings"), NO_API) \
	DECLARE_SERIALIZER(UDeveloperSettings)


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeveloperSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeveloperSettings(UDeveloperSettings&&); \
	NO_API UDeveloperSettings(const UDeveloperSettings&); \
public: \
	NO_API virtual ~UDeveloperSettings();


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeveloperSettings(UDeveloperSettings&&); \
	NO_API UDeveloperSettings(const UDeveloperSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeveloperSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeveloperSettings) \
	NO_API virtual ~UDeveloperSettings();


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_22_PROLOG
#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_INCLASS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVELOPERSETTINGS_API UClass* StaticClass<class UDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_DeveloperSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
