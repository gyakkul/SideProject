// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveCodingSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LIVECODING_LiveCodingSettings_generated_h
#error "LiveCodingSettings.generated.h already included, missing '#pragma once' in LiveCodingSettings.h"
#endif
#define LIVECODING_LiveCodingSettings_generated_h

#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_SPARSE_DATA
#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_RPC_WRAPPERS
#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_ACCESSORS
#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveCodingSettings(); \
	friend struct Z_Construct_UClass_ULiveCodingSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveCodingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveCoding"), NO_API) \
	DECLARE_SERIALIZER(ULiveCodingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULiveCodingSettings(); \
	friend struct Z_Construct_UClass_ULiveCodingSettings_Statics; \
public: \
	DECLARE_CLASS(ULiveCodingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveCoding"), NO_API) \
	DECLARE_SERIALIZER(ULiveCodingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveCodingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveCodingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveCodingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveCodingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveCodingSettings(ULiveCodingSettings&&); \
	NO_API ULiveCodingSettings(const ULiveCodingSettings&); \
public: \
	NO_API virtual ~ULiveCodingSettings();


#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveCodingSettings(ULiveCodingSettings&&); \
	NO_API ULiveCodingSettings(const ULiveCodingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveCodingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveCodingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveCodingSettings) \
	NO_API virtual ~ULiveCodingSettings();


#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_17_PROLOG
#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_SPARSE_DATA \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_RPC_WRAPPERS \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_ACCESSORS \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_INCLASS \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_SPARSE_DATA \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_ACCESSORS \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVECODING_API UClass* StaticClass<class ULiveCodingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_Windows_LiveCoding_Private_LiveCodingSettings_h


#define FOREACH_ENUM_ELIVECODINGSTARTUPMODE(op) \
	op(ELiveCodingStartupMode::Automatic) \
	op(ELiveCodingStartupMode::AutomaticButHidden) \
	op(ELiveCodingStartupMode::Manual) 

enum class ELiveCodingStartupMode : uint8;
template<> struct TIsUEnumClass<ELiveCodingStartupMode> { enum { Value = true }; };
template<> LIVECODING_API UEnum* StaticEnum<ELiveCodingStartupMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
