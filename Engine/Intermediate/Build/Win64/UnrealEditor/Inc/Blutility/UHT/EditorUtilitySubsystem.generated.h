// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilitySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityTask;
class UEditorUtilityWidget;
class UEditorUtilityWidgetBlueprint;
class UObject;
#ifdef BLUTILITY_EditorUtilitySubsystem_generated_h
#error "EditorUtilitySubsystem.generated.h already included, missing '#pragma once' in EditorUtilitySubsystem.h"
#endif
#define BLUTILITY_EditorUtilitySubsystem_generated_h

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_36_DELEGATE \
BLUTILITY_API void FOnEditorUtilityPIEEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditorUtilityPIEEvent, bool bIsSimulating);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRegisterAndExecuteTask); \
	DECLARE_FUNCTION(execFindUtilityWidgetFromBlueprint); \
	DECLARE_FUNCTION(execUnregisterTabByID); \
	DECLARE_FUNCTION(execCloseTabByID); \
	DECLARE_FUNCTION(execDoesTabExist); \
	DECLARE_FUNCTION(execSpawnRegisteredTabByID); \
	DECLARE_FUNCTION(execRegisterTabAndGetID); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabWithId); \
	DECLARE_FUNCTION(execSpawnAndRegisterTab); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabAndGetID); \
	DECLARE_FUNCTION(execCanRun); \
	DECLARE_FUNCTION(execTryRun); \
	DECLARE_FUNCTION(execReleaseInstanceOfAsset);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRegisterAndExecuteTask); \
	DECLARE_FUNCTION(execFindUtilityWidgetFromBlueprint); \
	DECLARE_FUNCTION(execUnregisterTabByID); \
	DECLARE_FUNCTION(execCloseTabByID); \
	DECLARE_FUNCTION(execDoesTabExist); \
	DECLARE_FUNCTION(execSpawnRegisteredTabByID); \
	DECLARE_FUNCTION(execRegisterTabAndGetID); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabWithId); \
	DECLARE_FUNCTION(execSpawnAndRegisterTab); \
	DECLARE_FUNCTION(execSpawnAndRegisterTabAndGetID); \
	DECLARE_FUNCTION(execCanRun); \
	DECLARE_FUNCTION(execTryRun); \
	DECLARE_FUNCTION(execReleaseInstanceOfAsset);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilitySubsystem(); \
	friend struct Z_Construct_UClass_UEditorUtilitySubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilitySubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilitySubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilitySubsystem(); \
	friend struct Z_Construct_UClass_UEditorUtilitySubsystem_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilitySubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilitySubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilitySubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilitySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilitySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilitySubsystem(UEditorUtilitySubsystem&&); \
	NO_API UEditorUtilitySubsystem(const UEditorUtilitySubsystem&); \
public: \
	NO_API virtual ~UEditorUtilitySubsystem();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilitySubsystem(UEditorUtilitySubsystem&&); \
	NO_API UEditorUtilitySubsystem(const UEditorUtilitySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilitySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilitySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorUtilitySubsystem) \
	NO_API virtual ~UEditorUtilitySubsystem();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_38_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilitySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
