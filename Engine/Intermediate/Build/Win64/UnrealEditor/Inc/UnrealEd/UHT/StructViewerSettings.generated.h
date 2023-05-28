// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/StructViewerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_StructViewerSettings_generated_h
#error "StructViewerSettings.generated.h already included, missing '#pragma once' in StructViewerSettings.h"
#endif
#define UNREALED_StructViewerSettings_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStructViewerSettings(); \
	friend struct Z_Construct_UClass_UStructViewerSettings_Statics; \
public: \
	DECLARE_CLASS(UStructViewerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UStructViewerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUStructViewerSettings(); \
	friend struct Z_Construct_UClass_UStructViewerSettings_Statics; \
public: \
	DECLARE_CLASS(UStructViewerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UStructViewerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructViewerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructViewerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructViewerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructViewerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStructViewerSettings(UStructViewerSettings&&); \
	NO_API UStructViewerSettings(const UStructViewerSettings&); \
public: \
	NO_API virtual ~UStructViewerSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStructViewerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStructViewerSettings(UStructViewerSettings&&); \
	NO_API UStructViewerSettings(const UStructViewerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStructViewerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStructViewerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStructViewerSettings) \
	NO_API virtual ~UStructViewerSettings();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_24_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UStructViewerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Settings_StructViewerSettings_h


#define FOREACH_ENUM_ESTRUCTVIEWERDEVELOPERTYPE(op) \
	op(EStructViewerDeveloperType::SVDT_None) \
	op(EStructViewerDeveloperType::SVDT_CurrentUser) \
	op(EStructViewerDeveloperType::SVDT_All) \
	op(EStructViewerDeveloperType::SVDT_Max) 

enum class EStructViewerDeveloperType : uint8;
template<> struct TIsUEnumClass<EStructViewerDeveloperType> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EStructViewerDeveloperType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
