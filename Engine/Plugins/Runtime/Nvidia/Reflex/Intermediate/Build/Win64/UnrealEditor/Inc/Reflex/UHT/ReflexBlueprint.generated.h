// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReflexBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EReflexMode : uint8;
#ifdef REFLEX_ReflexBlueprint_generated_h
#error "ReflexBlueprint.generated.h already included, missing '#pragma once' in ReflexBlueprint.h"
#endif
#define REFLEX_ReflexBlueprint_generated_h

#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetGameLatencyInMs); \
	DECLARE_FUNCTION(execGetGameToRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execSetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execGetReflexMode); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execGetReflexAvailable);


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetGameLatencyInMs); \
	DECLARE_FUNCTION(execGetGameToRenderLatencyInMs); \
	DECLARE_FUNCTION(execGetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execSetFlashIndicatorEnabled); \
	DECLARE_FUNCTION(execGetReflexMode); \
	DECLARE_FUNCTION(execSetReflexMode); \
	DECLARE_FUNCTION(execGetReflexAvailable);


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReflexBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UReflexBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UReflexBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Reflex"), NO_API) \
	DECLARE_SERIALIZER(UReflexBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUReflexBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UReflexBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UReflexBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Reflex"), NO_API) \
	DECLARE_SERIALIZER(UReflexBlueprintLibrary)


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReflexBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflexBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReflexBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflexBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReflexBlueprintLibrary(UReflexBlueprintLibrary&&); \
	NO_API UReflexBlueprintLibrary(const UReflexBlueprintLibrary&); \
public: \
	NO_API virtual ~UReflexBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReflexBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReflexBlueprintLibrary(UReflexBlueprintLibrary&&); \
	NO_API UReflexBlueprintLibrary(const UReflexBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReflexBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflexBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflexBlueprintLibrary) \
	NO_API virtual ~UReflexBlueprintLibrary();


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReflexBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REFLEX_API UClass* StaticClass<class UReflexBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Nvidia_Reflex_Source_Public_ReflexBlueprint_h


#define FOREACH_ENUM_EREFLEXMODE(op) \
	op(EReflexMode::Disabled) \
	op(EReflexMode::Enabled) \
	op(EReflexMode::EnabledPlusBoost) 

enum class EReflexMode : uint8;
template<> struct TIsUEnumClass<EReflexMode> { enum { Value = true }; };
template<> REFLEX_API UEnum* StaticEnum<EReflexMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
