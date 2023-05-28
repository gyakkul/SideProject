// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UICommandsScriptingSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
struct FScriptingCommandInfo;
#ifdef SLATESCRIPTINGCOMMANDS_UICommandsScriptingSubsystem_generated_h
#error "UICommandsScriptingSubsystem.generated.h already included, missing '#pragma once' in UICommandsScriptingSubsystem.h"
#endif
#define SLATESCRIPTINGCOMMANDS_UICommandsScriptingSubsystem_generated_h

#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptingCommandInfo_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<struct FScriptingCommandInfo>();

#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_63_DELEGATE \
SLATESCRIPTINGCOMMANDS_API void FExecuteCommand_DelegateWrapper(const FScriptDelegate& ExecuteCommand, FScriptingCommandInfo CommandInfo);


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_66_DELEGATE \
SLATESCRIPTINGCOMMANDS_API bool FCanExecuteCommand_DelegateWrapper(const FScriptDelegate& CanExecuteCommand, FScriptingCommandInfo CommandInfo);


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptingCommand_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<struct FScriptingCommand>();

#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptingCommandsContext_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<struct FScriptingCommandsContext>();

#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_164_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScriptingCommandSet_Statics; \
	SLATESCRIPTINGCOMMANDS_API static class UScriptStruct* StaticStruct();


template<> SLATESCRIPTINGCOMMANDS_API UScriptStruct* StaticStruct<struct FScriptingCommandSet>();

#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_SPARSE_DATA
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDefaultCanExecuteAction); \
	DECLARE_FUNCTION(execHandleCanExecuteAction); \
	DECLARE_FUNCTION(execHandleExecuteAction); \
	DECLARE_FUNCTION(execIsInputChordMapped); \
	DECLARE_FUNCTION(execGetBindingCountForContext); \
	DECLARE_FUNCTION(execIsContextRegistered); \
	DECLARE_FUNCTION(execGetAvailableContexts); \
	DECLARE_FUNCTION(execCanSetExecuteCommands); \
	DECLARE_FUNCTION(execSetCanSetExecuteCommands); \
	DECLARE_FUNCTION(execUnregisterCommandSet); \
	DECLARE_FUNCTION(execIsCommandSetRegistered); \
	DECLARE_FUNCTION(execRegisterCommandSet); \
	DECLARE_FUNCTION(execUnregisterAllSets); \
	DECLARE_FUNCTION(execSetCanExecuteCommands); \
	DECLARE_FUNCTION(execCanExecuteCommands); \
	DECLARE_FUNCTION(execGetRegisteredCommands); \
	DECLARE_FUNCTION(execIsCommandRegistered); \
	DECLARE_FUNCTION(execUnregisterCommand); \
	DECLARE_FUNCTION(execRegisterCommandChecked); \
	DECLARE_FUNCTION(execRegisterCommand);


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDefaultCanExecuteAction); \
	DECLARE_FUNCTION(execHandleCanExecuteAction); \
	DECLARE_FUNCTION(execHandleExecuteAction); \
	DECLARE_FUNCTION(execIsInputChordMapped); \
	DECLARE_FUNCTION(execGetBindingCountForContext); \
	DECLARE_FUNCTION(execIsContextRegistered); \
	DECLARE_FUNCTION(execGetAvailableContexts); \
	DECLARE_FUNCTION(execCanSetExecuteCommands); \
	DECLARE_FUNCTION(execSetCanSetExecuteCommands); \
	DECLARE_FUNCTION(execUnregisterCommandSet); \
	DECLARE_FUNCTION(execIsCommandSetRegistered); \
	DECLARE_FUNCTION(execRegisterCommandSet); \
	DECLARE_FUNCTION(execUnregisterAllSets); \
	DECLARE_FUNCTION(execSetCanExecuteCommands); \
	DECLARE_FUNCTION(execCanExecuteCommands); \
	DECLARE_FUNCTION(execGetRegisteredCommands); \
	DECLARE_FUNCTION(execIsCommandRegistered); \
	DECLARE_FUNCTION(execUnregisterCommand); \
	DECLARE_FUNCTION(execRegisterCommandChecked); \
	DECLARE_FUNCTION(execRegisterCommand);


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_ACCESSORS
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUICommandsScriptingSubsystem(); \
	friend struct Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUICommandsScriptingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateScriptingCommands"), NO_API) \
	DECLARE_SERIALIZER(UUICommandsScriptingSubsystem)


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUUICommandsScriptingSubsystem(); \
	friend struct Z_Construct_UClass_UUICommandsScriptingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UUICommandsScriptingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SlateScriptingCommands"), NO_API) \
	DECLARE_SERIALIZER(UUICommandsScriptingSubsystem)


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUICommandsScriptingSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUICommandsScriptingSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUICommandsScriptingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUICommandsScriptingSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUICommandsScriptingSubsystem(UUICommandsScriptingSubsystem&&); \
	NO_API UUICommandsScriptingSubsystem(const UUICommandsScriptingSubsystem&); \
public: \
	NO_API virtual ~UUICommandsScriptingSubsystem();


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUICommandsScriptingSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUICommandsScriptingSubsystem(UUICommandsScriptingSubsystem&&); \
	NO_API UUICommandsScriptingSubsystem(const UUICommandsScriptingSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUICommandsScriptingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUICommandsScriptingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUICommandsScriptingSubsystem) \
	NO_API virtual ~UUICommandsScriptingSubsystem();


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_177_PROLOG
#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_RPC_WRAPPERS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_ACCESSORS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_INCLASS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_ACCESSORS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLATESCRIPTINGCOMMANDS_API UClass* StaticClass<class UUICommandsScriptingSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Slate_SlateScripting_Source_SlateScriptingCommands_Public_UICommandsScriptingSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
