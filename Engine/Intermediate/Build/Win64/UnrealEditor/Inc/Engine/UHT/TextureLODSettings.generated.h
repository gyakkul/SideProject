// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/TextureLODSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TextureLODSettings_generated_h
#error "TextureLODSettings.generated.h already included, missing '#pragma once' in TextureLODSettings.h"
#endif
#define ENGINE_TextureLODSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureLODGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTextureLODGroup>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureLODSettings(); \
	friend struct Z_Construct_UClass_UTextureLODSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureLODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTextureLODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_INCLASS \
private: \
	static void StaticRegisterNativesUTextureLODSettings(); \
	friend struct Z_Construct_UClass_UTextureLODSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureLODSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTextureLODSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureLODSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureLODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureLODSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureLODSettings(UTextureLODSettings&&); \
	NO_API UTextureLODSettings(const UTextureLODSettings&); \
public: \
	NO_API virtual ~UTextureLODSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureLODSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureLODSettings(UTextureLODSettings&&); \
	NO_API UTextureLODSettings(const UTextureLODSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureLODSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureLODSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureLODSettings) \
	NO_API virtual ~UTextureLODSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_144_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_147_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureLODSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTextureLODSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
