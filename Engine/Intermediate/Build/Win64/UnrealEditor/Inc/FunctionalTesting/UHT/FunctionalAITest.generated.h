// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalAITest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAIController;
class APawn;
#ifdef FUNCTIONALTESTING_FunctionalAITest_generated_h
#error "FunctionalAITest.generated.h already included, missing '#pragma once' in FunctionalAITest.h"
#endif
#define FUNCTIONALTESTING_FunctionalAITest_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_18_DELEGATE \
FUNCTIONALTESTING_API void FFunctionalTestAISpawned_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestAISpawned, AAIController* Controller, APawn* Pawn);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnInfoBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnInfoBase>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnInfo_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAITestSpawnInfoBase Super;


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnInfo>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingDelayedSpawn_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FPendingDelayedSpawn>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_154_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnSetBase_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct();


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnSetBase>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAITestSpawnSet_Statics; \
	FUNCTIONALTESTING_API static class UScriptStruct* StaticStruct(); \
	typedef FAITestSpawnSetBase Super;


template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<struct FAITestSpawnSet>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOneOfSpawnedPawns);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOneOfSpawnedPawns);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalAITestBase(); \
	friend struct Z_Construct_UClass_AFunctionalAITestBase_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITestBase)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalAITestBase(); \
	friend struct Z_Construct_UClass_AFunctionalAITestBase_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITestBase, AFunctionalTest, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITestBase)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalAITestBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITestBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITestBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITestBase(AFunctionalAITestBase&&); \
	NO_API AFunctionalAITestBase(const AFunctionalAITestBase&); \
public: \
	NO_API virtual ~AFunctionalAITestBase();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITestBase(AFunctionalAITestBase&&); \
	NO_API AFunctionalAITestBase(const AFunctionalAITestBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITestBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITestBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITestBase) \
	NO_API virtual ~AFunctionalAITestBase();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_237_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_240_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalAITestBase>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalAITest(); \
	friend struct Z_Construct_UClass_AFunctionalAITest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITest, AFunctionalAITestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalAITest(); \
	friend struct Z_Construct_UClass_AFunctionalAITest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalAITest, AFunctionalAITestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalAITest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalAITest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITest(AFunctionalAITest&&); \
	NO_API AFunctionalAITest(const AFunctionalAITest&); \
public: \
	NO_API virtual ~AFunctionalAITest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalAITest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalAITest(AFunctionalAITest&&); \
	NO_API AFunctionalAITest(const AFunctionalAITest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalAITest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalAITest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalAITest) \
	NO_API virtual ~AFunctionalAITest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_362_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h_365_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalAITest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalAITest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
