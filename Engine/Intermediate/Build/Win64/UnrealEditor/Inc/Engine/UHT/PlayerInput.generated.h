// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FKey;
#ifdef ENGINE_PlayerInput_generated_h
#error "PlayerInput.generated.h already included, missing '#pragma once' in PlayerInput.h"
#endif
#define ENGINE_PlayerInput_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyBind_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FKeyBind>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisConfigEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputActionKeyMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_213_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputAxisKeyMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_272_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInputActionSpeechMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOuterAPlayerController); \
	DECLARE_FUNCTION(execClearSmoothing); \
	DECLARE_FUNCTION(execInvertAxis); \
	DECLARE_FUNCTION(execInvertAxisKey); \
	DECLARE_FUNCTION(execSetBind); \
	DECLARE_FUNCTION(execSetMouseSensitivity);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOuterAPlayerController); \
	DECLARE_FUNCTION(execClearSmoothing); \
	DECLARE_FUNCTION(execInvertAxis); \
	DECLARE_FUNCTION(execInvertAxisKey); \
	DECLARE_FUNCTION(execSetBind); \
	DECLARE_FUNCTION(execSetMouseSensitivity);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend struct Z_Construct_UClass_UPlayerInput_Statics; \
public: \
	DECLARE_CLASS(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInput) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerInput(); \
	friend struct Z_Construct_UClass_UPlayerInput_Statics; \
public: \
	DECLARE_CLASS(UPlayerInput, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlayerInput) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInput(UPlayerInput&&); \
	NO_API UPlayerInput(const UPlayerInput&); \
public: \
	NO_API virtual ~UPlayerInput();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerInput(UPlayerInput&&); \
	NO_API UPlayerInput(const UPlayerInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerInput) \
	NO_API virtual ~UPlayerInput();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_406_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_409_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlayerInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
