// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TextureImportSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEXTUREUTILITIESCOMMON_TextureImportSettings_generated_h
#error "TextureImportSettings.generated.h already included, missing '#pragma once' in TextureImportSettings.h"
#endif
#define TEXTUREUTILITIESCOMMON_TextureImportSettings_generated_h

#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_SPARSE_DATA
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_ACCESSORS
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextureImportSettings(); \
	friend struct Z_Construct_UClass_UTextureImportSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureImportSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureUtilitiesCommon"), NO_API) \
	DECLARE_SERIALIZER(UTextureImportSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUTextureImportSettings(); \
	friend struct Z_Construct_UClass_UTextureImportSettings_Statics; \
public: \
	DECLARE_CLASS(UTextureImportSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/TextureUtilitiesCommon"), NO_API) \
	DECLARE_SERIALIZER(UTextureImportSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureImportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureImportSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureImportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureImportSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureImportSettings(UTextureImportSettings&&); \
	NO_API UTextureImportSettings(const UTextureImportSettings&); \
public: \
	NO_API virtual ~UTextureImportSettings();


#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextureImportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextureImportSettings(UTextureImportSettings&&); \
	NO_API UTextureImportSettings(const UTextureImportSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextureImportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextureImportSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextureImportSettings) \
	NO_API virtual ~UTextureImportSettings();


#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_29_PROLOG
#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_INCLASS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_SPARSE_DATA \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_ACCESSORS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextureImportSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEXTUREUTILITIESCOMMON_API UClass* StaticClass<class UTextureImportSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TextureUtilitiesCommon_Public_TextureImportSettings_h


#define FOREACH_ENUM_ETEXTUREIMPORTFLOATINGPOINTFORMAT(op) \
	op(ETextureImportFloatingPointFormat::HDR_F16) \
	op(ETextureImportFloatingPointFormat::HDRCompressed_BC6) \
	op(ETextureImportFloatingPointFormat::HDR_F32_or_F16) \
	op(ETextureImportFloatingPointFormat::PreviousDefault) 

enum class ETextureImportFloatingPointFormat : uint8;
template<> struct TIsUEnumClass<ETextureImportFloatingPointFormat> { enum { Value = true }; };
template<> TEXTUREUTILITIESCOMMON_API UEnum* StaticEnum<ETextureImportFloatingPointFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
