// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/TouchInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TouchInterface_generated_h
#error "TouchInterface.generated.h already included, missing '#pragma once' in TouchInterface.h"
#endif
#define ENGINE_TouchInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTouchInputControl_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTouchInputControl>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTouchInterface(); \
	friend struct Z_Construct_UClass_UTouchInterface_Statics; \
public: \
	DECLARE_CLASS(UTouchInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTouchInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_INCLASS \
private: \
	static void StaticRegisterNativesUTouchInterface(); \
	friend struct Z_Construct_UClass_UTouchInterface_Statics; \
public: \
	DECLARE_CLASS(UTouchInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTouchInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchInterface(UTouchInterface&&); \
	NO_API UTouchInterface(const UTouchInterface&); \
public: \
	NO_API virtual ~UTouchInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTouchInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTouchInterface(UTouchInterface&&); \
	NO_API UTouchInterface(const UTouchInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTouchInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTouchInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTouchInterface) \
	NO_API virtual ~UTouchInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_55_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_58_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TouchInterface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTouchInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
