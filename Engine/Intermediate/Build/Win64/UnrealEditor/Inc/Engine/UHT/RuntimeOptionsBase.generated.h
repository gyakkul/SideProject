// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/RuntimeOptionsBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RuntimeOptionsBase_generated_h
#error "RuntimeOptionsBase.generated.h already included, missing '#pragma once' in RuntimeOptionsBase.h"
#endif
#define ENGINE_RuntimeOptionsBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeOptionsBase(); \
	friend struct Z_Construct_UClass_URuntimeOptionsBase_Statics; \
public: \
	DECLARE_CLASS(URuntimeOptionsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeOptionsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("RuntimeOptions");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeOptionsBase(); \
	friend struct Z_Construct_UClass_URuntimeOptionsBase_Statics; \
public: \
	DECLARE_CLASS(URuntimeOptionsBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeOptionsBase) \
	static const TCHAR* StaticConfigName() {return TEXT("RuntimeOptions");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeOptionsBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeOptionsBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeOptionsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeOptionsBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeOptionsBase(URuntimeOptionsBase&&); \
	NO_API URuntimeOptionsBase(const URuntimeOptionsBase&); \
public: \
	NO_API virtual ~URuntimeOptionsBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeOptionsBase(URuntimeOptionsBase&&); \
	NO_API URuntimeOptionsBase(const URuntimeOptionsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeOptionsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeOptionsBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URuntimeOptionsBase) \
	NO_API virtual ~URuntimeOptionsBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_36_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeOptionsBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_RuntimeOptionsBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
