// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMEditorSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEdGraph;
class UFunction;
class UK2Node_CallFunction;
class UMVVMBlueprintView;
class UObject;
class UWidgetBlueprint;
struct FMVVMAvailableBinding;
struct FMVVMBlueprintPropertyPath;
struct FMVVMBlueprintViewBinding;
#ifdef MODELVIEWVIEWMODELEDITOR_MVVMEditorSubsystem_generated_h
#error "MVVMEditorSubsystem.generated.h already included, missing '#pragma once' in MVVMEditorSubsystem.h"
#endif
#define MODELVIEWVIEWMODELEDITOR_MVVMEditorSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvailableConversionFunctions); \
	DECLARE_FUNCTION(execGetConversionFunctionNode); \
	DECLARE_FUNCTION(execGetConversionFunction); \
	DECLARE_FUNCTION(execGetConversionFunctionGraph); \
	DECLARE_FUNCTION(execIsSimpleConversionFunction); \
	DECLARE_FUNCTION(execIsValidConversionFunction); \
	DECLARE_FUNCTION(execGetChildViewModels); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execAddBinding); \
	DECLARE_FUNCTION(execRenameViewModel); \
	DECLARE_FUNCTION(execVerifyViewModelRename); \
	DECLARE_FUNCTION(execRemoveViewModel); \
	DECLARE_FUNCTION(execAddViewModel); \
	DECLARE_FUNCTION(execGetView); \
	DECLARE_FUNCTION(execRequestView);


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvailableConversionFunctions); \
	DECLARE_FUNCTION(execGetConversionFunctionNode); \
	DECLARE_FUNCTION(execGetConversionFunction); \
	DECLARE_FUNCTION(execGetConversionFunctionGraph); \
	DECLARE_FUNCTION(execIsSimpleConversionFunction); \
	DECLARE_FUNCTION(execIsValidConversionFunction); \
	DECLARE_FUNCTION(execGetChildViewModels); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execAddBinding); \
	DECLARE_FUNCTION(execRenameViewModel); \
	DECLARE_FUNCTION(execVerifyViewModelRename); \
	DECLARE_FUNCTION(execRemoveViewModel); \
	DECLARE_FUNCTION(execAddViewModel); \
	DECLARE_FUNCTION(execGetView); \
	DECLARE_FUNCTION(execRequestView);


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_ACCESSORS
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMEditorSubsystem(); \
	friend struct Z_Construct_UClass_UMVVMEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMVVMEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModelEditor"), NO_API) \
	DECLARE_SERIALIZER(UMVVMEditorSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUMVVMEditorSubsystem(); \
	friend struct Z_Construct_UClass_UMVVMEditorSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMVVMEditorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModelEditor"), NO_API) \
	DECLARE_SERIALIZER(UMVVMEditorSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMVVMEditorSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMEditorSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMVVMEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMEditorSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMVVMEditorSubsystem(UMVVMEditorSubsystem&&); \
	NO_API UMVVMEditorSubsystem(const UMVVMEditorSubsystem&); \
public: \
	NO_API virtual ~UMVVMEditorSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMVVMEditorSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMVVMEditorSubsystem(UMVVMEditorSubsystem&&); \
	NO_API UMVVMEditorSubsystem(const UMVVMEditorSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMVVMEditorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMEditorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMEditorSubsystem) \
	NO_API virtual ~UMVVMEditorSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_26_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_ACCESSORS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_INCLASS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_ACCESSORS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<class UMVVMEditorSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Public_MVVMEditorSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
