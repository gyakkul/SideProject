// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputDeviceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputDeviceProperty;
struct FActivateDevicePropertyParams;
struct FHardwareDeviceIdentifier;
struct FInputDeviceId;
struct FInputDevicePropertyHandle;
struct FPlatformUserId;
#ifdef ENGINE_InputDeviceSubsystem_generated_h
#error "InputDeviceSubsystem.generated.h already included, missing '#pragma once' in InputDeviceSubsystem.h"
#endif
#define ENGINE_InputDeviceSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActivateDevicePropertyParams_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActivateDevicePropertyParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveDeviceProperty_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActiveDeviceProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_112_DELEGATE \
ENGINE_API void FHardwareInputDeviceChanged_DelegateWrapper(const FMulticastScriptDelegate& HardwareInputDeviceChanged, const FPlatformUserId UserId, const FInputDeviceId DeviceId);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputDeviceHardwareIdentifier); \
	DECLARE_FUNCTION(execGetMostRecentlyUsedHardwareDevice); \
	DECLARE_FUNCTION(execRemoveAllDeviceProperties); \
	DECLARE_FUNCTION(execRemoveDevicePropertyHandles); \
	DECLARE_FUNCTION(execRemoveDevicePropertyByHandle); \
	DECLARE_FUNCTION(execIsPropertyActive); \
	DECLARE_FUNCTION(execGetActiveDeviceProperty); \
	DECLARE_FUNCTION(execActivateDevicePropertyOfClass);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputDeviceHardwareIdentifier); \
	DECLARE_FUNCTION(execGetMostRecentlyUsedHardwareDevice); \
	DECLARE_FUNCTION(execRemoveAllDeviceProperties); \
	DECLARE_FUNCTION(execRemoveDevicePropertyHandles); \
	DECLARE_FUNCTION(execRemoveDevicePropertyByHandle); \
	DECLARE_FUNCTION(execIsPropertyActive); \
	DECLARE_FUNCTION(execGetActiveDeviceProperty); \
	DECLARE_FUNCTION(execActivateDevicePropertyOfClass);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceSubsystem(); \
	friend struct Z_Construct_UClass_UInputDeviceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceSubsystem(); \
	friend struct Z_Construct_UClass_UInputDeviceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceSubsystem)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceSubsystem(UInputDeviceSubsystem&&); \
	NO_API UInputDeviceSubsystem(const UInputDeviceSubsystem&); \
public: \
	NO_API virtual ~UInputDeviceSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceSubsystem(UInputDeviceSubsystem&&); \
	NO_API UInputDeviceSubsystem(const UInputDeviceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceSubsystem) \
	NO_API virtual ~UInputDeviceSubsystem();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_118_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
