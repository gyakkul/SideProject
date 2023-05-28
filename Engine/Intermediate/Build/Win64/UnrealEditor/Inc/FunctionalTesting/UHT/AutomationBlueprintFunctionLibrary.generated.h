// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomationBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACameraActor;
class UAutomationEditorTask;
class UObject;
enum class EComparisonTolerance : uint8;
struct FAutomationScreenshotOptions;
struct FAutomationWaitForLoadingOptions;
struct FLatentActionInfo;
#ifdef FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h
#error "AutomationBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in AutomationBlueprintFunctionLibrary.h"
#endif
#define FUNCTIONALTESTING_AutomationBlueprintFunctionLibrary_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsValidTask); \
	DECLARE_FUNCTION(execIsTaskDone);


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsValidTask); \
	DECLARE_FUNCTION(execIsTaskDone);


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationEditorTask(); \
	friend struct Z_Construct_UClass_UAutomationEditorTask_Statics; \
public: \
	DECLARE_CLASS(UAutomationEditorTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationEditorTask)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationEditorTask(); \
	friend struct Z_Construct_UClass_UAutomationEditorTask_Statics; \
public: \
	DECLARE_CLASS(UAutomationEditorTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationEditorTask)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationEditorTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationEditorTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationEditorTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationEditorTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationEditorTask(UAutomationEditorTask&&); \
	NO_API UAutomationEditorTask(const UAutomationEditorTask&); \
public:


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationEditorTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationEditorTask(UAutomationEditorTask&&); \
	NO_API UAutomationEditorTask(const UAutomationEditorTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationEditorTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationEditorTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationEditorTask)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_35_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UAutomationEditorTask>();

#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAutomationWaitForLoadingOptions>();

#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEditorViewportVisualizeBuffer); \
	DECLARE_FUNCTION(execSetEditorViewportViewMode); \
	DECLARE_FUNCTION(execSetScalabilityQualityToLow); \
	DECLARE_FUNCTION(execSetScalabilityQualityToEpic); \
	DECLARE_FUNCTION(execSetScalabilityQualityLevelRelativeToMax); \
	DECLARE_FUNCTION(execAddExpectedLogError); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForRendering); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForGameplay); \
	DECLARE_FUNCTION(execSetTestTelemetryStorage); \
	DECLARE_FUNCTION(execAddTestTelemetryData); \
	DECLARE_FUNCTION(execCompareImageAgainstReference); \
	DECLARE_FUNCTION(execTakeHighResScreenshot); \
	DECLARE_FUNCTION(execAutomationWaitForLoading); \
	DECLARE_FUNCTION(execAreAutomatedTestsRunning); \
	DECLARE_FUNCTION(execGetStatCallCount); \
	DECLARE_FUNCTION(execGetStatExcMax); \
	DECLARE_FUNCTION(execGetStatExcAverage); \
	DECLARE_FUNCTION(execGetStatIncMax); \
	DECLARE_FUNCTION(execGetStatIncAverage); \
	DECLARE_FUNCTION(execDisableStatGroup); \
	DECLARE_FUNCTION(execEnableStatGroup); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotOfUI); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotAtCamera); \
	DECLARE_FUNCTION(execTakeAutomationScreenshot); \
	DECLARE_FUNCTION(execFinishLoadingBeforeScreenshot);


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEditorViewportVisualizeBuffer); \
	DECLARE_FUNCTION(execSetEditorViewportViewMode); \
	DECLARE_FUNCTION(execSetScalabilityQualityToLow); \
	DECLARE_FUNCTION(execSetScalabilityQualityToEpic); \
	DECLARE_FUNCTION(execSetScalabilityQualityLevelRelativeToMax); \
	DECLARE_FUNCTION(execAddExpectedLogError); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForRendering); \
	DECLARE_FUNCTION(execGetDefaultScreenshotOptionsForGameplay); \
	DECLARE_FUNCTION(execSetTestTelemetryStorage); \
	DECLARE_FUNCTION(execAddTestTelemetryData); \
	DECLARE_FUNCTION(execCompareImageAgainstReference); \
	DECLARE_FUNCTION(execTakeHighResScreenshot); \
	DECLARE_FUNCTION(execAutomationWaitForLoading); \
	DECLARE_FUNCTION(execAreAutomatedTestsRunning); \
	DECLARE_FUNCTION(execGetStatCallCount); \
	DECLARE_FUNCTION(execGetStatExcMax); \
	DECLARE_FUNCTION(execGetStatExcAverage); \
	DECLARE_FUNCTION(execGetStatIncMax); \
	DECLARE_FUNCTION(execGetStatIncAverage); \
	DECLARE_FUNCTION(execDisableStatGroup); \
	DECLARE_FUNCTION(execEnableStatGroup); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotOfUI); \
	DECLARE_FUNCTION(execTakeAutomationScreenshotAtCamera); \
	DECLARE_FUNCTION(execTakeAutomationScreenshot); \
	DECLARE_FUNCTION(execFinishLoadingBeforeScreenshot);


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutomationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationBlueprintFunctionLibrary)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UAutomationBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationBlueprintFunctionLibrary)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationBlueprintFunctionLibrary(UAutomationBlueprintFunctionLibrary&&); \
	NO_API UAutomationBlueprintFunctionLibrary(const UAutomationBlueprintFunctionLibrary&); \
public: \
	NO_API virtual ~UAutomationBlueprintFunctionLibrary();


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationBlueprintFunctionLibrary(UAutomationBlueprintFunctionLibrary&&); \
	NO_API UAutomationBlueprintFunctionLibrary(const UAutomationBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationBlueprintFunctionLibrary) \
	NO_API virtual ~UAutomationBlueprintFunctionLibrary();


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_71_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_74_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AutomationBlueprintFunctionLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UAutomationBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
