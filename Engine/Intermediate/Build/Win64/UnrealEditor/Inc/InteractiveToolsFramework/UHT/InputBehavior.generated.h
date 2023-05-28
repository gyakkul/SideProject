// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputBehavior.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InputBehavior_generated_h
#error "InputBehavior.generated.h already included, missing '#pragma once' in InputBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputBehavior_generated_h

#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_SPARSE_DATA
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_ACCESSORS
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBehavior(); \
	friend struct Z_Construct_UClass_UInputBehavior_Statics; \
public: \
	DECLARE_CLASS(UInputBehavior, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_INCLASS \
private: \
	static void StaticRegisterNativesUInputBehavior(); \
	friend struct Z_Construct_UClass_UInputBehavior_Statics; \
public: \
	DECLARE_CLASS(UInputBehavior, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInputBehavior)


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputBehavior(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBehavior) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehavior); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBehavior(UInputBehavior&&); \
	NO_API UInputBehavior(const UInputBehavior&); \
public: \
	NO_API virtual ~UInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBehavior(UInputBehavior&&); \
	NO_API UInputBehavior(const UInputBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBehavior); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBehavior) \
	NO_API virtual ~UInputBehavior();


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_254_PROLOG
#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_INCLASS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_SPARSE_DATA \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_ACCESSORS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h_257_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInputBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehavior_h


#define FOREACH_ENUM_EINPUTCAPTURESIDE(op) \
	op(EInputCaptureSide::None) \
	op(EInputCaptureSide::Left) \
	op(EInputCaptureSide::Right) \
	op(EInputCaptureSide::Both) \
	op(EInputCaptureSide::Any) 

enum class EInputCaptureSide;
template<> struct TIsUEnumClass<EInputCaptureSide> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureSide>();

#define FOREACH_ENUM_EINPUTCAPTUREREQUESTTYPE(op) \
	op(EInputCaptureRequestType::Begin) \
	op(EInputCaptureRequestType::Ignore) 

enum class EInputCaptureRequestType;
template<> struct TIsUEnumClass<EInputCaptureRequestType> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureRequestType>();

#define FOREACH_ENUM_EINPUTCAPTURESTATE(op) \
	op(EInputCaptureState::Begin) \
	op(EInputCaptureState::Continue) \
	op(EInputCaptureState::End) \
	op(EInputCaptureState::Ignore) 

enum class EInputCaptureState;
template<> struct TIsUEnumClass<EInputCaptureState> { enum { Value = true }; };
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
