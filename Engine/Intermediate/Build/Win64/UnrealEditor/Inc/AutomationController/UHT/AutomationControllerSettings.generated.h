// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationControllerSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUTOMATIONCONTROLLER_AutomationControllerSettings_generated_h
#error "AutomationControllerSettings.generated.h already included, missing '#pragma once' in AutomationControllerSettings.h"
#endif
#define AUTOMATIONCONTROLLER_AutomationControllerSettings_generated_h

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomatedTestFilter_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomatedTestFilter>();

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomatedTestGroup_Statics; \
	AUTOMATIONCONTROLLER_API static class UScriptStruct* StaticStruct();


template<> AUTOMATIONCONTROLLER_API UScriptStruct* StaticStruct<struct FAutomatedTestGroup>();

#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_SPARSE_DATA
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_RPC_WRAPPERS
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_ACCESSORS
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationControllerSettings(); \
	friend struct Z_Construct_UClass_UAutomationControllerSettings_Statics; \
public: \
	DECLARE_CLASS(UAutomationControllerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationController"), NO_API) \
	DECLARE_SERIALIZER(UAutomationControllerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationControllerSettings(); \
	friend struct Z_Construct_UClass_UAutomationControllerSettings_Statics; \
public: \
	DECLARE_CLASS(UAutomationControllerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomationController"), NO_API) \
	DECLARE_SERIALIZER(UAutomationControllerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationControllerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationControllerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationControllerSettings(UAutomationControllerSettings&&); \
	NO_API UAutomationControllerSettings(const UAutomationControllerSettings&); \
public: \
	NO_API virtual ~UAutomationControllerSettings();


#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationControllerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationControllerSettings(UAutomationControllerSettings&&); \
	NO_API UAutomationControllerSettings(const UAutomationControllerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationControllerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationControllerSettings) \
	NO_API virtual ~UAutomationControllerSettings();


#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_69_PROLOG
#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_SPARSE_DATA \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_RPC_WRAPPERS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_ACCESSORS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_INCLASS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_SPARSE_DATA \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_ACCESSORS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h_72_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AutomationControllerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUTOMATIONCONTROLLER_API UClass* StaticClass<class UAutomationControllerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AutomationController_Public_AutomationControllerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
