// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintRuntimeSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLUEPRINTRUNTIME_BlueprintRuntimeSettings_generated_h
#error "BlueprintRuntimeSettings.generated.h already included, missing '#pragma once' in BlueprintRuntimeSettings.h"
#endif
#define BLUEPRINTRUNTIME_BlueprintRuntimeSettings_generated_h

#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintWarningSettings_Statics; \
	BLUEPRINTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> BLUEPRINTRUNTIME_API UScriptStruct* StaticStruct<struct FBlueprintWarningSettings>();

#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_SPARSE_DATA
#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_ACCESSORS
#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintRuntimeSettings(); \
	friend struct Z_Construct_UClass_UBlueprintRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintRuntimeSettings(); \
	friend struct Z_Construct_UClass_UBlueprintRuntimeSettings_Statics; \
public: \
	DECLARE_CLASS(UBlueprintRuntimeSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintRuntimeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintRuntimeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintRuntimeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintRuntimeSettings(UBlueprintRuntimeSettings&&); \
	NO_API UBlueprintRuntimeSettings(const UBlueprintRuntimeSettings&); \
public: \
	NO_API virtual ~UBlueprintRuntimeSettings();


#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintRuntimeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintRuntimeSettings(UBlueprintRuntimeSettings&&); \
	NO_API UBlueprintRuntimeSettings(const UBlueprintRuntimeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintRuntimeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintRuntimeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintRuntimeSettings) \
	NO_API virtual ~UBlueprintRuntimeSettings();


#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_44_PROLOG
#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_SPARSE_DATA \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_INCLASS \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_SPARSE_DATA \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h_47_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintRuntimeSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTRUNTIME_API UClass* StaticClass<class UBlueprintRuntimeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_BlueprintRuntime_Public_BlueprintRuntimeSettings_h


#define FOREACH_ENUM_EBLUEPRINTWARNINGBEHAVIOR(op) \
	op(EBlueprintWarningBehavior::Warn) \
	op(EBlueprintWarningBehavior::Error) \
	op(EBlueprintWarningBehavior::Suppress) 

enum class EBlueprintWarningBehavior : uint8;
template<> struct TIsUEnumClass<EBlueprintWarningBehavior> { enum { Value = true }; };
template<> BLUEPRINTRUNTIME_API UEnum* StaticEnum<EBlueprintWarningBehavior>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
