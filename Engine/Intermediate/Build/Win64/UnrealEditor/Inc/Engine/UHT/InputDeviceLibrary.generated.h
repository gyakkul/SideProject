// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputDeviceLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
enum class EInputDeviceConnectionState : uint8;
struct FInputDeviceId;
struct FInputDevicePropertyHandle;
struct FPlatformUserId;
#ifdef ENGINE_InputDeviceLibrary_generated_h
#error "InputDeviceLibrary.generated.h already included, missing '#pragma once' in InputDeviceLibrary.h"
#endif
#define ENGINE_InputDeviceLibrary_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_InputDeviceId); \
	DECLARE_FUNCTION(execEqualEqual_InputDeviceId); \
	DECLARE_FUNCTION(execNotEqual_PlatformUserId); \
	DECLARE_FUNCTION(execEqualEqual_PlatformUserId); \
	DECLARE_FUNCTION(execInputDeviceId_None); \
	DECLARE_FUNCTION(execPlatformUserId_None); \
	DECLARE_FUNCTION(execIsValidPlatformId); \
	DECLARE_FUNCTION(execIsValidInputDevice); \
	DECLARE_FUNCTION(execGetInputDeviceConnectionState); \
	DECLARE_FUNCTION(execGetPrimaryInputDeviceForUser); \
	DECLARE_FUNCTION(execGetUserForInputDevice); \
	DECLARE_FUNCTION(execGetDefaultInputDevice); \
	DECLARE_FUNCTION(execIsInputDeviceMappedToUnpairedUser); \
	DECLARE_FUNCTION(execIsUnpairedUserId); \
	DECLARE_FUNCTION(execGetPrimaryPlatformUser); \
	DECLARE_FUNCTION(execGetUserForUnpairedInputDevices); \
	DECLARE_FUNCTION(execGetAllActiveUsers); \
	DECLARE_FUNCTION(execGetAllConnectedInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevicesForUser); \
	DECLARE_FUNCTION(execIsDevicePropertyHandleValid); \
	DECLARE_FUNCTION(execGetPlayerControllerFromInputDevice); \
	DECLARE_FUNCTION(execGetPlayerControllerFromPlatformUser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_InputDeviceId); \
	DECLARE_FUNCTION(execEqualEqual_InputDeviceId); \
	DECLARE_FUNCTION(execNotEqual_PlatformUserId); \
	DECLARE_FUNCTION(execEqualEqual_PlatformUserId); \
	DECLARE_FUNCTION(execInputDeviceId_None); \
	DECLARE_FUNCTION(execPlatformUserId_None); \
	DECLARE_FUNCTION(execIsValidPlatformId); \
	DECLARE_FUNCTION(execIsValidInputDevice); \
	DECLARE_FUNCTION(execGetInputDeviceConnectionState); \
	DECLARE_FUNCTION(execGetPrimaryInputDeviceForUser); \
	DECLARE_FUNCTION(execGetUserForInputDevice); \
	DECLARE_FUNCTION(execGetDefaultInputDevice); \
	DECLARE_FUNCTION(execIsInputDeviceMappedToUnpairedUser); \
	DECLARE_FUNCTION(execIsUnpairedUserId); \
	DECLARE_FUNCTION(execGetPrimaryPlatformUser); \
	DECLARE_FUNCTION(execGetUserForUnpairedInputDevices); \
	DECLARE_FUNCTION(execGetAllActiveUsers); \
	DECLARE_FUNCTION(execGetAllConnectedInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevices); \
	DECLARE_FUNCTION(execGetAllInputDevicesForUser); \
	DECLARE_FUNCTION(execIsDevicePropertyHandleValid); \
	DECLARE_FUNCTION(execGetPlayerControllerFromInputDevice); \
	DECLARE_FUNCTION(execGetPlayerControllerFromPlatformUser);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceLibrary(); \
	friend struct Z_Construct_UClass_UInputDeviceLibrary_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUInputDeviceLibrary(); \
	friend struct Z_Construct_UClass_UInputDeviceLibrary_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceLibrary)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceLibrary(UInputDeviceLibrary&&); \
	NO_API UInputDeviceLibrary(const UInputDeviceLibrary&); \
public: \
	NO_API virtual ~UInputDeviceLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputDeviceLibrary(UInputDeviceLibrary&&); \
	NO_API UInputDeviceLibrary(const UInputDeviceLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceLibrary) \
	NO_API virtual ~UInputDeviceLibrary();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_22_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
