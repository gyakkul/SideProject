// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputTriggers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedPlayerInput;
enum class ETriggerState : uint8;
enum class ETriggerType : uint8;
struct FInputActionValue;
#ifdef ENHANCEDINPUT_InputTriggers_generated_h
#error "InputTriggers.generated.h already included, missing '#pragma once' in InputTriggers.h"
#endif
#define ENHANCEDINPUT_InputTriggers_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_RPC_WRAPPERS \
	virtual ETriggerState UpdateState_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime); \
	virtual ETriggerType GetTriggerType_Implementation() const; \
 \
	DECLARE_FUNCTION(execUpdateState); \
	DECLARE_FUNCTION(execGetTriggerType); \
	DECLARE_FUNCTION(execIsActuated);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateState); \
	DECLARE_FUNCTION(execGetTriggerType); \
	DECLARE_FUNCTION(execIsActuated);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTrigger(); \
	friend struct Z_Construct_UClass_UInputTrigger_Statics; \
public: \
	DECLARE_CLASS(UInputTrigger, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTrigger) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_INCLASS \
private: \
	static void StaticRegisterNativesUInputTrigger(); \
	friend struct Z_Construct_UClass_UInputTrigger_Statics; \
public: \
	DECLARE_CLASS(UInputTrigger, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTrigger) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTrigger(UInputTrigger&&); \
	NO_API UInputTrigger(const UInputTrigger&); \
public: \
	NO_API virtual ~UInputTrigger();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTrigger(UInputTrigger&&); \
	NO_API UInputTrigger(const UInputTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTrigger); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTrigger) \
	NO_API virtual ~UInputTrigger();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_103_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTrigger>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTimedBase(); \
	friend struct Z_Construct_UClass_UInputTriggerTimedBase_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTimedBase, UInputTrigger, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerTimedBase)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerTimedBase(); \
	friend struct Z_Construct_UClass_UInputTriggerTimedBase_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTimedBase, UInputTrigger, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerTimedBase)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTriggerTimedBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTimedBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerTimedBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTimedBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerTimedBase(UInputTriggerTimedBase&&); \
	NO_API UInputTriggerTimedBase(const UInputTriggerTimedBase&); \
public: \
	NO_API virtual ~UInputTriggerTimedBase();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTriggerTimedBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerTimedBase(UInputTriggerTimedBase&&); \
	NO_API UInputTriggerTimedBase(const UInputTriggerTimedBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerTimedBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTimedBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTimedBase) \
	NO_API virtual ~UInputTriggerTimedBase();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_175_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_178_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerTimedBase>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerDown(); \
	friend struct Z_Construct_UClass_UInputTriggerDown_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerDown, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerDown)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerDown(); \
	friend struct Z_Construct_UClass_UInputTriggerDown_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerDown, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerDown)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerDown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerDown) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerDown); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerDown(UInputTriggerDown&&); \
	ENHANCEDINPUT_API UInputTriggerDown(const UInputTriggerDown&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerDown();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerDown(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerDown(UInputTriggerDown&&); \
	ENHANCEDINPUT_API UInputTriggerDown(const UInputTriggerDown&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerDown); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerDown); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerDown) \
	ENHANCEDINPUT_API virtual ~UInputTriggerDown();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_223_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_226_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerDown>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPressed(); \
	friend struct Z_Construct_UClass_UInputTriggerPressed_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPressed, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPressed)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerPressed(); \
	friend struct Z_Construct_UClass_UInputTriggerPressed_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPressed, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPressed)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPressed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPressed) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPressed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPressed); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPressed(UInputTriggerPressed&&); \
	ENHANCEDINPUT_API UInputTriggerPressed(const UInputTriggerPressed&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerPressed();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPressed(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPressed(UInputTriggerPressed&&); \
	ENHANCEDINPUT_API UInputTriggerPressed(const UInputTriggerPressed&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPressed); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPressed); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPressed) \
	ENHANCEDINPUT_API virtual ~UInputTriggerPressed();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_240_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_243_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerPressed>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerReleased(); \
	friend struct Z_Construct_UClass_UInputTriggerReleased_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerReleased, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerReleased)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerReleased(); \
	friend struct Z_Construct_UClass_UInputTriggerReleased_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerReleased, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerReleased)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerReleased(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerReleased) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerReleased); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerReleased); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerReleased(UInputTriggerReleased&&); \
	ENHANCEDINPUT_API UInputTriggerReleased(const UInputTriggerReleased&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerReleased();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerReleased(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerReleased(UInputTriggerReleased&&); \
	ENHANCEDINPUT_API UInputTriggerReleased(const UInputTriggerReleased&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerReleased); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerReleased); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerReleased) \
	ENHANCEDINPUT_API virtual ~UInputTriggerReleased();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_259_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_262_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerReleased>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHold(); \
	friend struct Z_Construct_UClass_UInputTriggerHold_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHold, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHold)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerHold(); \
	friend struct Z_Construct_UClass_UInputTriggerHold_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHold, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHold)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHold) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHold); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHold(UInputTriggerHold&&); \
	ENHANCEDINPUT_API UInputTriggerHold(const UInputTriggerHold&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerHold();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHold(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHold(UInputTriggerHold&&); \
	ENHANCEDINPUT_API UInputTriggerHold(const UInputTriggerHold&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHold); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHold); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHold) \
	ENHANCEDINPUT_API virtual ~UInputTriggerHold();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_279_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_282_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerHold>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerHoldAndRelease(); \
	friend struct Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHoldAndRelease, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHoldAndRelease)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerHoldAndRelease(); \
	friend struct Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerHoldAndRelease, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerHoldAndRelease)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHoldAndRelease) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHoldAndRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHoldAndRelease); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(UInputTriggerHoldAndRelease&&); \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const UInputTriggerHoldAndRelease&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerHoldAndRelease();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(UInputTriggerHoldAndRelease&&); \
	ENHANCEDINPUT_API UInputTriggerHoldAndRelease(const UInputTriggerHoldAndRelease&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerHoldAndRelease); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerHoldAndRelease); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerHoldAndRelease) \
	ENHANCEDINPUT_API virtual ~UInputTriggerHoldAndRelease();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_307_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_310_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerHoldAndRelease>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerTap(); \
	friend struct Z_Construct_UClass_UInputTriggerTap_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTap, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerTap)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerTap(); \
	friend struct Z_Construct_UClass_UInputTriggerTap_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerTap, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerTap)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerTap(UInputTriggerTap&&); \
	ENHANCEDINPUT_API UInputTriggerTap(const UInputTriggerTap&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerTap();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerTap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerTap(UInputTriggerTap&&); \
	ENHANCEDINPUT_API UInputTriggerTap(const UInputTriggerTap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerTap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerTap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerTap) \
	ENHANCEDINPUT_API virtual ~UInputTriggerTap();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_325_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_328_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerTap>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerPulse(); \
	friend struct Z_Construct_UClass_UInputTriggerPulse_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPulse, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPulse)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerPulse(); \
	friend struct Z_Construct_UClass_UInputTriggerPulse_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerPulse, UInputTriggerTimedBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerPulse)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPulse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPulse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPulse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPulse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPulse(UInputTriggerPulse&&); \
	ENHANCEDINPUT_API UInputTriggerPulse(const UInputTriggerPulse&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerPulse();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerPulse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerPulse(UInputTriggerPulse&&); \
	ENHANCEDINPUT_API UInputTriggerPulse(const UInputTriggerPulse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerPulse); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerPulse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerPulse) \
	ENHANCEDINPUT_API virtual ~UInputTriggerPulse();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_347_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_350_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerPulse>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordAction(); \
	friend struct Z_Construct_UClass_UInputTriggerChordAction_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordAction, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerChordAction)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerChordAction(); \
	friend struct Z_Construct_UClass_UInputTriggerChordAction_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordAction, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerChordAction)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTriggerChordAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordAction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerChordAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordAction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerChordAction(UInputTriggerChordAction&&); \
	NO_API UInputTriggerChordAction(const UInputTriggerChordAction&); \
public: \
	NO_API virtual ~UInputTriggerChordAction();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTriggerChordAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerChordAction(UInputTriggerChordAction&&); \
	NO_API UInputTriggerChordAction(const UInputTriggerChordAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerChordAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordAction) \
	NO_API virtual ~UInputTriggerChordAction();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_383_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_386_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerChordAction>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerChordBlocker(); \
	friend struct Z_Construct_UClass_UInputTriggerChordBlocker_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordBlocker, UInputTriggerChordAction, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerChordBlocker)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerChordBlocker(); \
	friend struct Z_Construct_UClass_UInputTriggerChordBlocker_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerChordBlocker, UInputTriggerChordAction, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputTriggerChordBlocker)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordBlocker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordBlocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordBlocker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(UInputTriggerChordBlocker&&); \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const UInputTriggerChordBlocker&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputTriggerChordBlocker();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(UInputTriggerChordBlocker&&); \
	ENHANCEDINPUT_API UInputTriggerChordBlocker(const UInputTriggerChordBlocker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputTriggerChordBlocker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerChordBlocker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerChordBlocker) \
	ENHANCEDINPUT_API virtual ~UInputTriggerChordBlocker();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_408_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_411_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerChordBlocker>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_419_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputComboStepData_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FInputComboStepData>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_440_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputCancelAction_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FInputCancelAction>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputTriggerCombo(); \
	friend struct Z_Construct_UClass_UInputTriggerCombo_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerCombo, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerCombo)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_INCLASS \
private: \
	static void StaticRegisterNativesUInputTriggerCombo(); \
	friend struct Z_Construct_UClass_UInputTriggerCombo_Statics; \
public: \
	DECLARE_CLASS(UInputTriggerCombo, UInputTrigger, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputTriggerCombo)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputTriggerCombo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputTriggerCombo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerCombo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerCombo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerCombo(UInputTriggerCombo&&); \
	NO_API UInputTriggerCombo(const UInputTriggerCombo&); \
public: \
	NO_API virtual ~UInputTriggerCombo();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputTriggerCombo(UInputTriggerCombo&&); \
	NO_API UInputTriggerCombo(const UInputTriggerCombo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputTriggerCombo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputTriggerCombo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputTriggerCombo) \
	NO_API virtual ~UInputTriggerCombo();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_457_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_460_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputTriggerCombo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h


#define FOREACH_ENUM_ETRIGGERSTATE(op) \
	op(ETriggerState::None) \
	op(ETriggerState::Ongoing) \
	op(ETriggerState::Triggered) 

enum class ETriggerState : uint8;
template<> struct TIsUEnumClass<ETriggerState> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerState>();

#define FOREACH_ENUM_ETRIGGEREVENT(op) \
	op(ETriggerEvent::None) \
	op(ETriggerEvent::Triggered) \
	op(ETriggerEvent::Started) \
	op(ETriggerEvent::Ongoing) \
	op(ETriggerEvent::Canceled) \
	op(ETriggerEvent::Completed) 

enum class ETriggerEvent : uint8;
template<> struct TIsUEnumClass<ETriggerEvent> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEvent>();

#define FOREACH_ENUM_ETRIGGERTYPE(op) \
	op(ETriggerType::Explicit) \
	op(ETriggerType::Implicit) \
	op(ETriggerType::Blocker) 

enum class ETriggerType : uint8;
template<> struct TIsUEnumClass<ETriggerType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerType>();

#define FOREACH_ENUM_ETRIGGEREVENTSSUPPORTED(op) \
	op(ETriggerEventsSupported::None) \
	op(ETriggerEventsSupported::Instant) \
	op(ETriggerEventsSupported::Uninterruptible) \
	op(ETriggerEventsSupported::Ongoing) \
	op(ETriggerEventsSupported::All) 

enum class ETriggerEventsSupported : uint8;
template<> struct TIsUEnumClass<ETriggerEventsSupported> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEventsSupported>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
