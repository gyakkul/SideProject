// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavCollisionBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavCollisionBase_generated_h
#error "NavCollisionBase.generated.h already included, missing '#pragma once' in NavCollisionBase.h"
#endif
#define ENGINE_NavCollisionBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavCollisionBase(); \
	friend struct Z_Construct_UClass_UNavCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UNavCollisionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavCollisionBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUNavCollisionBase(); \
	friend struct Z_Construct_UClass_UNavCollisionBase_Statics; \
public: \
	DECLARE_CLASS(UNavCollisionBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavCollisionBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavCollisionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollisionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollisionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollisionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavCollisionBase(UNavCollisionBase&&); \
	NO_API UNavCollisionBase(const UNavCollisionBase&); \
public: \
	NO_API virtual ~UNavCollisionBase();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavCollisionBase(UNavCollisionBase&&); \
	NO_API UNavCollisionBase(const UNavCollisionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavCollisionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollisionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollisionBase) \
	NO_API virtual ~UNavCollisionBase();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavCollisionBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavCollisionBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
