// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UnitTestBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETCODEUNITTEST_UnitTestBase_generated_h
#error "UnitTestBase.generated.h already included, missing '#pragma once' in UnitTestBase.h"
#endif
#define NETCODEUNITTEST_UnitTestBase_generated_h

#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_SPARSE_DATA
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_RPC_WRAPPERS
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_ACCESSORS
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUnitTestBase(); \
	friend struct Z_Construct_UClass_UUnitTestBase_Statics; \
public: \
	DECLARE_CLASS(UUnitTestBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), NO_API) \
	DECLARE_SERIALIZER(UUnitTestBase)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUUnitTestBase(); \
	friend struct Z_Construct_UClass_UUnitTestBase_Statics; \
public: \
	DECLARE_CLASS(UUnitTestBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NetcodeUnitTest"), NO_API) \
	DECLARE_SERIALIZER(UUnitTestBase)


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTestBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTestBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTestBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnitTestBase(UUnitTestBase&&); \
	NO_API UUnitTestBase(const UUnitTestBase&); \
public: \
	NO_API virtual ~UUnitTestBase();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUnitTestBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUnitTestBase(UUnitTestBase&&); \
	NO_API UUnitTestBase(const UUnitTestBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUnitTestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUnitTestBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUnitTestBase) \
	NO_API virtual ~UUnitTestBase();


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_19_PROLOG
#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_SPARSE_DATA \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_ACCESSORS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_INCLASS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_SPARSE_DATA \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_ACCESSORS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UnitTestBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETCODEUNITTEST_API UClass* StaticClass<class UUnitTestBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTestBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
