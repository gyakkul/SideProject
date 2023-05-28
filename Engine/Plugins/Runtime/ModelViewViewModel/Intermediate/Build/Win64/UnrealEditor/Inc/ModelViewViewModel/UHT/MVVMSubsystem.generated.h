// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MVVMSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMVVMView;
class UMVVMViewModelCollectionObject;
class UObject;
class UUserWidget;
class UWidget;
class UWidgetTree;
struct FMVVMAvailableBinding;
struct FMVVMBindingName;
#ifdef MODELVIEWVIEWMODEL_MVVMSubsystem_generated_h
#error "MVVMSubsystem.generated.h already included, missing '#pragma once' in MVVMSubsystem.h"
#endif
#define MODELVIEWVIEWMODEL_MVVMSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGlobalViewModelCollection); \
	DECLARE_FUNCTION(execK2_GetAvailableBinding); \
	DECLARE_FUNCTION(execK2_GetAvailableBindings); \
	DECLARE_FUNCTION(execDoesWidgetTreeContainedWidget); \
	DECLARE_FUNCTION(execK2_GetViewFromUserWidget);


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGlobalViewModelCollection); \
	DECLARE_FUNCTION(execK2_GetAvailableBinding); \
	DECLARE_FUNCTION(execK2_GetAvailableBindings); \
	DECLARE_FUNCTION(execDoesWidgetTreeContainedWidget); \
	DECLARE_FUNCTION(execK2_GetViewFromUserWidget);


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMVVMSubsystem(); \
	friend struct Z_Construct_UClass_UMVVMSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMVVMSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), NO_API) \
	DECLARE_SERIALIZER(UMVVMSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMVVMSubsystem(); \
	friend struct Z_Construct_UClass_UMVVMSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMVVMSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelViewViewModel"), NO_API) \
	DECLARE_SERIALIZER(UMVVMSubsystem)


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMVVMSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMVVMSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMVVMSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMVVMSubsystem(UMVVMSubsystem&&); \
	NO_API UMVVMSubsystem(const UMVVMSubsystem&); \
public: \
	NO_API virtual ~UMVVMSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMVVMSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMVVMSubsystem(UMVVMSubsystem&&); \
	NO_API UMVVMSubsystem(const UMVVMSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMVVMSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMVVMSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMVVMSubsystem) \
	NO_API virtual ~UMVVMSubsystem();


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<class UMVVMSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_MVVMSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
