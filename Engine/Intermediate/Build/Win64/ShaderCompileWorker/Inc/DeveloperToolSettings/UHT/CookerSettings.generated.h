// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CookerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVELOPERTOOLSETTINGS_CookerSettings_generated_h
#error "CookerSettings.generated.h already included, missing '#pragma once' in CookerSettings.h"
#endif
#define DEVELOPERTOOLSETTINGS_CookerSettings_generated_h

#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_SPARSE_DATA
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_RPC_WRAPPERS
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_ACCESSORS
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookerSettings(); \
	friend struct Z_Construct_UClass_UCookerSettings_Statics; \
public: \
	DECLARE_CLASS(UCookerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeveloperToolSettings"), NO_API) \
	DECLARE_SERIALIZER(UCookerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_INCLASS \
private: \
	static void StaticRegisterNativesUCookerSettings(); \
	friend struct Z_Construct_UClass_UCookerSettings_Statics; \
public: \
	DECLARE_CLASS(UCookerSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeveloperToolSettings"), NO_API) \
	DECLARE_SERIALIZER(UCookerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookerSettings(UCookerSettings&&); \
	NO_API UCookerSettings(const UCookerSettings&); \
public: \
	NO_API virtual ~UCookerSettings();


#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookerSettings(UCookerSettings&&); \
	NO_API UCookerSettings(const UCookerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookerSettings) \
	NO_API virtual ~UCookerSettings();


#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_87_PROLOG
#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_SPARSE_DATA \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_RPC_WRAPPERS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_ACCESSORS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_INCLASS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_SPARSE_DATA \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_ACCESSORS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h_90_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CookerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVELOPERTOOLSETTINGS_API UClass* StaticClass<class UCookerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_DeveloperToolSettings_Classes_CookerSettings_h


#define FOREACH_ENUM_ECOOKPROGRESSDISPLAYMODE(op) \
	op(ECookProgressDisplayMode::Nothing) \
	op(ECookProgressDisplayMode::RemainingPackages) \
	op(ECookProgressDisplayMode::PackageNames) \
	op(ECookProgressDisplayMode::NamesAndRemainingPackages) \
	op(ECookProgressDisplayMode::Instigators) \
	op(ECookProgressDisplayMode::InstigatorsAndCount) \
	op(ECookProgressDisplayMode::InstigatorsAndNames) \
	op(ECookProgressDisplayMode::InstigatorsAndNamesAndCount) \
	op(ECookProgressDisplayMode::Max) 

enum class ECookProgressDisplayMode : int32;
template<> struct TIsUEnumClass<ECookProgressDisplayMode> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<ECookProgressDisplayMode>();

#define FOREACH_ENUM_EBLUEPRINTCOMPONENTDATACOOKINGMETHOD(op) \
	op(EBlueprintComponentDataCookingMethod::Disabled) \
	op(EBlueprintComponentDataCookingMethod::AllBlueprints) \
	op(EBlueprintComponentDataCookingMethod::EnabledBlueprintsOnly) 

enum class EBlueprintComponentDataCookingMethod;
template<> struct TIsUEnumClass<EBlueprintComponentDataCookingMethod> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EBlueprintComponentDataCookingMethod>();

#define FOREACH_ENUM_EBLUEPRINTPROPERTYGUIDSCOOKINGMETHOD(op) \
	op(EBlueprintPropertyGuidsCookingMethod::Disabled) \
	op(EBlueprintPropertyGuidsCookingMethod::AllBlueprints) \
	op(EBlueprintPropertyGuidsCookingMethod::EnabledBlueprintsOnly) 

enum class EBlueprintPropertyGuidsCookingMethod;
template<> struct TIsUEnumClass<EBlueprintPropertyGuidsCookingMethod> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<EBlueprintPropertyGuidsCookingMethod>();

#define FOREACH_ENUM_ETEXTUREFORMATASTCCOMPRESSOR(op) \
	op(ETextureFormatASTCCompressor::IntelISPC) \
	op(ETextureFormatASTCCompressor::Arm) \
	op(ETextureFormatASTCCompressor::Max) 

enum class ETextureFormatASTCCompressor;
template<> struct TIsUEnumClass<ETextureFormatASTCCompressor> { enum { Value = true }; };
template<> DEVELOPERTOOLSETTINGS_API UEnum* StaticEnum<ETextureFormatASTCCompressor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
