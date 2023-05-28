// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HardwareTargetingSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HARDWARETARGETING_HardwareTargetingSettings_generated_h
#error "HardwareTargetingSettings.generated.h already included, missing '#pragma once' in HardwareTargetingSettings.h"
#endif
#define HARDWARETARGETING_HardwareTargetingSettings_generated_h

#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_SPARSE_DATA
#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_RPC_WRAPPERS
#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_ACCESSORS
#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHardwareTargetingSettings(); \
	friend struct Z_Construct_UClass_UHardwareTargetingSettings_Statics; \
public: \
	DECLARE_CLASS(UHardwareTargetingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardwareTargeting"), NO_API) \
	DECLARE_SERIALIZER(UHardwareTargetingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUHardwareTargetingSettings(); \
	friend struct Z_Construct_UClass_UHardwareTargetingSettings_Statics; \
public: \
	DECLARE_CLASS(UHardwareTargetingSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/HardwareTargeting"), NO_API) \
	DECLARE_SERIALIZER(UHardwareTargetingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHardwareTargetingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHardwareTargetingSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHardwareTargetingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHardwareTargetingSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHardwareTargetingSettings(UHardwareTargetingSettings&&); \
	NO_API UHardwareTargetingSettings(const UHardwareTargetingSettings&); \
public: \
	NO_API virtual ~UHardwareTargetingSettings();


#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHardwareTargetingSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHardwareTargetingSettings(UHardwareTargetingSettings&&); \
	NO_API UHardwareTargetingSettings(const UHardwareTargetingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHardwareTargetingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHardwareTargetingSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHardwareTargetingSettings) \
	NO_API virtual ~UHardwareTargetingSettings();


#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_43_PROLOG
#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_ACCESSORS \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_INCLASS \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_ACCESSORS \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HardwareTargetingSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HARDWARETARGETING_API UClass* StaticClass<class UHardwareTargetingSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_HardwareTargeting_Public_HardwareTargetingSettings_h


#define FOREACH_ENUM_EHARDWARECLASS(op) \
	op(EHardwareClass::Unspecified) \
	op(EHardwareClass::Desktop) \
	op(EHardwareClass::Mobile) 

enum class EHardwareClass : uint8;
template<> struct TIsUEnumClass<EHardwareClass> { enum { Value = true }; };
template<> HARDWARETARGETING_API UEnum* StaticEnum<EHardwareClass>();

#define FOREACH_ENUM_EGRAPHICSPRESET(op) \
	op(EGraphicsPreset::Unspecified) \
	op(EGraphicsPreset::Maximum) \
	op(EGraphicsPreset::Scalable) 

enum class EGraphicsPreset : uint8;
template<> struct TIsUEnumClass<EGraphicsPreset> { enum { Value = true }; };
template<> HARDWARETARGETING_API UEnum* StaticEnum<EGraphicsPreset>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
