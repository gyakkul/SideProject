// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEditorUtilityTestResult : uint8;
#ifdef EDITORTESTS_EditorUtilityTest_generated_h
#error "EditorUtilityTest.generated.h already included, missing '#pragma once' in EditorUtilityTest.h"
#endif
#define EDITORTESTS_EditorUtilityTest_generated_h

#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_34_DELEGATE \
EDITORTESTS_API void FEditorUtilityTestEventSignature_DelegateWrapper(const FMulticastScriptDelegate& EditorUtilityTestEventSignature);


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_35_DELEGATE \
EDITORTESTS_API void FEditorUtilityTestFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& EditorUtilityTestFinishedSignature, EEditorUtilityTestResult TestState);


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_SPARSE_DATA
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_RPC_WRAPPERS \
	virtual void StartTest_Implementation(); \
	virtual void PrepareTest_Implementation(); \
 \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execExpectFalse); \
	DECLARE_FUNCTION(execExpectTrue); \
	DECLARE_FUNCTION(execAddInfo); \
	DECLARE_FUNCTION(execAddWarning); \
	DECLARE_FUNCTION(execAddError); \
	DECLARE_FUNCTION(execFinishTest); \
	DECLARE_FUNCTION(execStartTest); \
	DECLARE_FUNCTION(execFinishPrepareTest); \
	DECLARE_FUNCTION(execPrepareTest); \
	DECLARE_FUNCTION(execRun);


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StartTest_Implementation(); \
	virtual void PrepareTest_Implementation(); \
 \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execExpectFalse); \
	DECLARE_FUNCTION(execExpectTrue); \
	DECLARE_FUNCTION(execAddInfo); \
	DECLARE_FUNCTION(execAddWarning); \
	DECLARE_FUNCTION(execAddError); \
	DECLARE_FUNCTION(execFinishTest); \
	DECLARE_FUNCTION(execStartTest); \
	DECLARE_FUNCTION(execFinishPrepareTest); \
	DECLARE_FUNCTION(execPrepareTest); \
	DECLARE_FUNCTION(execRun);


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_ACCESSORS
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityTest(); \
	friend struct Z_Construct_UClass_UEditorUtilityTest_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityTest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorTests"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityTest)


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityTest(); \
	friend struct Z_Construct_UClass_UEditorUtilityTest_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityTest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EditorTests"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityTest)


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityTest(UEditorUtilityTest&&); \
	NO_API UEditorUtilityTest(const UEditorUtilityTest&); \
public: \
	NO_API virtual ~UEditorUtilityTest();


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityTest(UEditorUtilityTest&&); \
	NO_API UEditorUtilityTest(const UEditorUtilityTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityTest) \
	NO_API virtual ~UEditorUtilityTest();


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_37_PROLOG
#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_ACCESSORS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_INCLASS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_ACCESSORS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorUtilityTest."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EDITORTESTS_API UClass* StaticClass<class UEditorUtilityTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Tests_EditorTests_Source_EditorTests_Classes_EditorUtilityTest_h


#define FOREACH_ENUM_EEDITORUTILITYTESTRESULT(op) \
	op(EEditorUtilityTestResult::Default) \
	op(EEditorUtilityTestResult::Invalid) \
	op(EEditorUtilityTestResult::Preparing) \
	op(EEditorUtilityTestResult::Running) \
	op(EEditorUtilityTestResult::Failed) \
	op(EEditorUtilityTestResult::Succeeded) 

enum class EEditorUtilityTestResult : uint8;
template<> struct TIsUEnumClass<EEditorUtilityTestResult> { enum { Value = true }; };
template<> EDITORTESTS_API UEnum* StaticEnum<EEditorUtilityTestResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
