// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputModifiers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedPlayerInput;
struct FInputActionValue;
struct FLinearColor;
#ifdef ENHANCEDINPUT_InputModifiers_generated_h
#error "InputModifiers.generated.h already included, missing '#pragma once' in InputModifiers.h"
#endif
#define ENHANCEDINPUT_InputModifiers_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_RPC_WRAPPERS \
	virtual FLinearColor GetVisualizationColor_Implementation(FInputActionValue SampleValue, FInputActionValue FinalValue) const; \
	virtual FInputActionValue ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime) const; \
 \
	DECLARE_FUNCTION(execGetVisualizationColor); \
	DECLARE_FUNCTION(execModifyRaw);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVisualizationColor); \
	DECLARE_FUNCTION(execModifyRaw);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifier(); \
	friend struct Z_Construct_UClass_UInputModifier_Statics; \
public: \
	DECLARE_CLASS(UInputModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifier(); \
	friend struct Z_Construct_UClass_UInputModifier_Statics; \
public: \
	DECLARE_CLASS(UInputModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputModifier(UInputModifier&&); \
	NO_API UInputModifier(const UInputModifier&); \
public: \
	NO_API virtual ~UInputModifier();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputModifier(UInputModifier&&); \
	NO_API UInputModifier(const UInputModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifier) \
	NO_API virtual ~UInputModifier();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_13_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifier>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierDeadZone(); \
	friend struct Z_Construct_UClass_UInputModifierDeadZone_Statics; \
public: \
	DECLARE_CLASS(UInputModifierDeadZone, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierDeadZone)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierDeadZone(); \
	friend struct Z_Construct_UClass_UInputModifierDeadZone_Statics; \
public: \
	DECLARE_CLASS(UInputModifierDeadZone, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierDeadZone)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierDeadZone) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierDeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierDeadZone); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(UInputModifierDeadZone&&); \
	ENHANCEDINPUT_API UInputModifierDeadZone(const UInputModifierDeadZone&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierDeadZone();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(UInputModifierDeadZone&&); \
	ENHANCEDINPUT_API UInputModifierDeadZone(const UInputModifierDeadZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierDeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierDeadZone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierDeadZone) \
	ENHANCEDINPUT_API virtual ~UInputModifierDeadZone();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_68_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierDeadZone>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierScalar(); \
	friend struct Z_Construct_UClass_UInputModifierScalar_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScalar, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScalar)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierScalar(); \
	friend struct Z_Construct_UClass_UInputModifierScalar_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScalar, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScalar)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScalar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScalar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScalar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScalar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierScalar(UInputModifierScalar&&); \
	ENHANCEDINPUT_API UInputModifierScalar(const UInputModifierScalar&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierScalar();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScalar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierScalar(UInputModifierScalar&&); \
	ENHANCEDINPUT_API UInputModifierScalar(const UInputModifierScalar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScalar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScalar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScalar) \
	ENHANCEDINPUT_API virtual ~UInputModifierScalar();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_97_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierScalar>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierScaleByDeltaTime(); \
	friend struct Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScaleByDeltaTime, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScaleByDeltaTime)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierScaleByDeltaTime(); \
	friend struct Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScaleByDeltaTime, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScaleByDeltaTime)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScaleByDeltaTime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScaleByDeltaTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScaleByDeltaTime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(UInputModifierScaleByDeltaTime&&); \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(const UInputModifierScaleByDeltaTime&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierScaleByDeltaTime();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(UInputModifierScaleByDeltaTime&&); \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(const UInputModifierScaleByDeltaTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScaleByDeltaTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScaleByDeltaTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScaleByDeltaTime) \
	ENHANCEDINPUT_API virtual ~UInputModifierScaleByDeltaTime();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_119_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierScaleByDeltaTime>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierNegate(); \
	friend struct Z_Construct_UClass_UInputModifierNegate_Statics; \
public: \
	DECLARE_CLASS(UInputModifierNegate, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierNegate)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierNegate(); \
	friend struct Z_Construct_UClass_UInputModifierNegate_Statics; \
public: \
	DECLARE_CLASS(UInputModifierNegate, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierNegate)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierNegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierNegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierNegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierNegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierNegate(UInputModifierNegate&&); \
	ENHANCEDINPUT_API UInputModifierNegate(const UInputModifierNegate&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierNegate();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierNegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierNegate(UInputModifierNegate&&); \
	ENHANCEDINPUT_API UInputModifierNegate(const UInputModifierNegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierNegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierNegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierNegate) \
	ENHANCEDINPUT_API virtual ~UInputModifierNegate();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_131_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierNegate>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSmooth(); \
	friend struct Z_Construct_UClass_UInputModifierSmooth_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSmooth, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSmooth)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierSmooth(); \
	friend struct Z_Construct_UClass_UInputModifierSmooth_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSmooth, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSmooth)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmooth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmooth) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmooth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmooth); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSmooth(UInputModifierSmooth&&); \
	ENHANCEDINPUT_API UInputModifierSmooth(const UInputModifierSmooth&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierSmooth();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmooth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSmooth(UInputModifierSmooth&&); \
	ENHANCEDINPUT_API UInputModifierSmooth(const UInputModifierSmooth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmooth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmooth); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmooth) \
	ENHANCEDINPUT_API virtual ~UInputModifierSmooth();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_153_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierSmooth>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveExponential(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveExponential, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveExponential)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveExponential(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveExponential, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveExponential)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveExponential) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveExponential); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(UInputModifierResponseCurveExponential&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const UInputModifierResponseCurveExponential&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveExponential();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(UInputModifierResponseCurveExponential&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const UInputModifierResponseCurveExponential&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveExponential); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveExponential) \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveExponential();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_183_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_186_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierResponseCurveExponential>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveUser(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveUser, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveUser)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveUser(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveUser, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveUser)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveUser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveUser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(UInputModifierResponseCurveUser&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const UInputModifierResponseCurveUser&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveUser();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(UInputModifierResponseCurveUser&&); \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const UInputModifierResponseCurveUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveUser) \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveUser();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_202_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierResponseCurveUser>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierFOVScaling(); \
	friend struct Z_Construct_UClass_UInputModifierFOVScaling_Statics; \
public: \
	DECLARE_CLASS(UInputModifierFOVScaling, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierFOVScaling)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierFOVScaling(); \
	friend struct Z_Construct_UClass_UInputModifierFOVScaling_Statics; \
public: \
	DECLARE_CLASS(UInputModifierFOVScaling, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierFOVScaling)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierFOVScaling) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierFOVScaling); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierFOVScaling); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(UInputModifierFOVScaling&&); \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const UInputModifierFOVScaling&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierFOVScaling();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(UInputModifierFOVScaling&&); \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const UInputModifierFOVScaling&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierFOVScaling); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierFOVScaling); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierFOVScaling) \
	ENHANCEDINPUT_API virtual ~UInputModifierFOVScaling();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_233_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_236_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierFOVScaling>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierToWorldSpace(); \
	friend struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics; \
public: \
	DECLARE_CLASS(UInputModifierToWorldSpace, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierToWorldSpace)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierToWorldSpace(); \
	friend struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics; \
public: \
	DECLARE_CLASS(UInputModifierToWorldSpace, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierToWorldSpace)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierToWorldSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierToWorldSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierToWorldSpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(UInputModifierToWorldSpace&&); \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const UInputModifierToWorldSpace&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierToWorldSpace();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(UInputModifierToWorldSpace&&); \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const UInputModifierToWorldSpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierToWorldSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierToWorldSpace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierToWorldSpace) \
	ENHANCEDINPUT_API virtual ~UInputModifierToWorldSpace();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_256_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_259_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierToWorldSpace>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_SPARSE_DATA
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_RPC_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_ACCESSORS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSwizzleAxis(); \
	friend struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSwizzleAxis, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSwizzleAxis)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_INCLASS \
private: \
	static void StaticRegisterNativesUInputModifierSwizzleAxis(); \
	friend struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSwizzleAxis, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSwizzleAxis)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSwizzleAxis) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSwizzleAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSwizzleAxis); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(UInputModifierSwizzleAxis&&); \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const UInputModifierSwizzleAxis&); \
public: \
	ENHANCEDINPUT_API virtual ~UInputModifierSwizzleAxis();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(UInputModifierSwizzleAxis&&); \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const UInputModifierSwizzleAxis&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSwizzleAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSwizzleAxis); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSwizzleAxis) \
	ENHANCEDINPUT_API virtual ~UInputModifierSwizzleAxis();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_289_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_RPC_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_INCLASS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_SPARSE_DATA \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_ACCESSORS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_292_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierSwizzleAxis>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h


#define FOREACH_ENUM_EDEADZONETYPE(op) \
	op(EDeadZoneType::Axial) \
	op(EDeadZoneType::Radial) 

enum class EDeadZoneType : uint8;
template<> struct TIsUEnumClass<EDeadZoneType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EDeadZoneType>();

#define FOREACH_ENUM_EFOVSCALINGTYPE(op) \
	op(EFOVScalingType::Standard) \
	op(EFOVScalingType::UE4_BackCompat) 

enum class EFOVScalingType : uint8;
template<> struct TIsUEnumClass<EFOVScalingType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EFOVScalingType>();

#define FOREACH_ENUM_EINPUTAXISSWIZZLE(op) \
	op(EInputAxisSwizzle::YXZ) \
	op(EInputAxisSwizzle::ZYX) \
	op(EInputAxisSwizzle::XZY) \
	op(EInputAxisSwizzle::YZX) \
	op(EInputAxisSwizzle::ZXY) 

enum class EInputAxisSwizzle : uint8;
template<> struct TIsUEnumClass<EInputAxisSwizzle> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputAxisSwizzle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
