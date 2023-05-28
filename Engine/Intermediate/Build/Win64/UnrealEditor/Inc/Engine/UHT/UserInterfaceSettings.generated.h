// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/UserInterfaceSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_UserInterfaceSettings_generated_h
#error "UserInterfaceSettings.generated.h already included, missing '#pragma once' in UserInterfaceSettings.h"
#endif
#define ENGINE_UserInterfaceSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHardwareCursorReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FHardwareCursorReference>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserInterfaceSettings(); \
	friend struct Z_Construct_UClass_UUserInterfaceSettings_Statics; \
public: \
	DECLARE_CLASS(UUserInterfaceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserInterfaceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_INCLASS \
private: \
	static void StaticRegisterNativesUUserInterfaceSettings(); \
	friend struct Z_Construct_UClass_UUserInterfaceSettings_Statics; \
public: \
	DECLARE_CLASS(UUserInterfaceSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UUserInterfaceSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserInterfaceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInterfaceSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserInterfaceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInterfaceSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserInterfaceSettings(UUserInterfaceSettings&&); \
	NO_API UUserInterfaceSettings(const UUserInterfaceSettings&); \
public: \
	NO_API virtual ~UUserInterfaceSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserInterfaceSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserInterfaceSettings(UUserInterfaceSettings&&); \
	NO_API UUserInterfaceSettings(const UUserInterfaceSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserInterfaceSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserInterfaceSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserInterfaceSettings) \
	NO_API virtual ~UUserInterfaceSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_104_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_107_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UserInterfaceSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UUserInterfaceSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h


#define FOREACH_ENUM_ERENDERFOCUSRULE(op) \
	op(ERenderFocusRule::Always) \
	op(ERenderFocusRule::NonPointer) \
	op(ERenderFocusRule::NavigationOnly) \
	op(ERenderFocusRule::Never) 

enum class ERenderFocusRule : uint8;
template<> struct TIsUEnumClass<ERenderFocusRule> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ERenderFocusRule>();

#define FOREACH_ENUM_EUISCALINGRULE(op) \
	op(EUIScalingRule::ShortestSide) \
	op(EUIScalingRule::LongestSide) \
	op(EUIScalingRule::Horizontal) \
	op(EUIScalingRule::Vertical) \
	op(EUIScalingRule::ScaleToFit) \
	op(EUIScalingRule::Custom) 

enum class EUIScalingRule : uint8;
template<> struct TIsUEnumClass<EUIScalingRule> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EUIScalingRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
