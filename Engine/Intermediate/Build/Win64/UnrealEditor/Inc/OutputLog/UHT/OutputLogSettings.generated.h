// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OutputLogSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OUTPUTLOG_OutputLogSettings_generated_h
#error "OutputLogSettings.generated.h already included, missing '#pragma once' in OutputLogSettings.h"
#endif
#define OUTPUTLOG_OutputLogSettings_generated_h

#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_SPARSE_DATA
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_RPC_WRAPPERS
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_ACCESSORS
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutputLogSettings(); \
	friend struct Z_Construct_UClass_UOutputLogSettings_Statics; \
public: \
	DECLARE_CLASS(UOutputLogSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OutputLog"), NO_API) \
	DECLARE_SERIALIZER(UOutputLogSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUOutputLogSettings(); \
	friend struct Z_Construct_UClass_UOutputLogSettings_Statics; \
public: \
	DECLARE_CLASS(UOutputLogSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OutputLog"), NO_API) \
	DECLARE_SERIALIZER(UOutputLogSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOutputLogSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOutputLogSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutputLogSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutputLogSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutputLogSettings(UOutputLogSettings&&); \
	NO_API UOutputLogSettings(const UOutputLogSettings&); \
public: \
	NO_API virtual ~UOutputLogSettings();


#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOutputLogSettings(UOutputLogSettings&&); \
	NO_API UOutputLogSettings(const UOutputLogSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOutputLogSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutputLogSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOutputLogSettings) \
	NO_API virtual ~UOutputLogSettings();


#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_32_PROLOG
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_SPARSE_DATA \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_ACCESSORS \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_INCLASS \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_SPARSE_DATA \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_ACCESSORS \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OUTPUTLOG_API UClass* StaticClass<class UOutputLogSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h


#define FOREACH_ENUM_ELOGCATEGORYCOLORIZATIONMODE(op) \
	op(ELogCategoryColorizationMode::None) \
	op(ELogCategoryColorizationMode::ColorizeWholeLine) \
	op(ELogCategoryColorizationMode::ColorizeCategoryOnly) \
	op(ELogCategoryColorizationMode::ColorizeCategoryAsBadge) 

enum class ELogCategoryColorizationMode : uint8;
template<> struct TIsUEnumClass<ELogCategoryColorizationMode> { enum { Value = true }; };
template<> OUTPUTLOG_API UEnum* StaticEnum<ELogCategoryColorizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
