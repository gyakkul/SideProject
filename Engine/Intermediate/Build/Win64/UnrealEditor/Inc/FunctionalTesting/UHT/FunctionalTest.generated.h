// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UTraceQueryTestResults;
enum class EComparisonMethod : uint8;
enum class EFunctionalTestResult : uint8;
struct FDateTime;
#ifdef FUNCTIONALTESTING_FunctionalTest_generated_h
#error "FunctionalTest.generated.h already included, missing '#pragma once' in FunctionalTest.h"
#endif
#define FUNCTIONALTESTING_FunctionalTest_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndStatsFile); \
	DECLARE_FUNCTION(execBeginStatsFile); \
	DECLARE_FUNCTION(execTriggerGPUTraceIfRecordFallsBelowBudget); \
	DECLARE_FUNCTION(execStopCPUProfiling); \
	DECLARE_FUNCTION(execStartCPUProfiling); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinRenderThreadBudget); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGameThreadBudget); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGPUBudget); \
	DECLARE_FUNCTION(execOnAllTestsComplete); \
	DECLARE_FUNCTION(execOnBeginTests); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execWriteLogFile); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execEndRecordingBaseline); \
	DECLARE_FUNCTION(execBeginRecordingBaseline); \
	DECLARE_FUNCTION(execSample); \
	DECLARE_FUNCTION(execTick);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndStatsFile); \
	DECLARE_FUNCTION(execBeginStatsFile); \
	DECLARE_FUNCTION(execTriggerGPUTraceIfRecordFallsBelowBudget); \
	DECLARE_FUNCTION(execStopCPUProfiling); \
	DECLARE_FUNCTION(execStartCPUProfiling); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinRenderThreadBudget); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGameThreadBudget); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGPUBudget); \
	DECLARE_FUNCTION(execOnAllTestsComplete); \
	DECLARE_FUNCTION(execOnBeginTests); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execWriteLogFile); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execEndRecordingBaseline); \
	DECLARE_FUNCTION(execBeginRecordingBaseline); \
	DECLARE_FUNCTION(execSample); \
	DECLARE_FUNCTION(execTick);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationPerformaceHelper(); \
	friend struct Z_Construct_UClass_UAutomationPerformaceHelper_Statics; \
public: \
	DECLARE_CLASS(UAutomationPerformaceHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationPerformaceHelper)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUAutomationPerformaceHelper(); \
	friend struct Z_Construct_UClass_UAutomationPerformaceHelper_Statics; \
public: \
	DECLARE_CLASS(UAutomationPerformaceHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UAutomationPerformaceHelper)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAutomationPerformaceHelper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomationPerformaceHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationPerformaceHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationPerformaceHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationPerformaceHelper(UAutomationPerformaceHelper&&); \
	NO_API UAutomationPerformaceHelper(const UAutomationPerformaceHelper&); \
public: \
	NO_API virtual ~UAutomationPerformaceHelper();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAutomationPerformaceHelper(UAutomationPerformaceHelper&&); \
	NO_API UAutomationPerformaceHelper(const UAutomationPerformaceHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAutomationPerformaceHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationPerformaceHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutomationPerformaceHelper) \
	NO_API virtual ~UAutomationPerformaceHelper();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_96_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UAutomationPerformaceHelper>();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_223_DELEGATE \
FUNCTIONALTESTING_API void FFunctionalTestEventSignature_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestEventSignature);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_RPC_WRAPPERS \
	virtual bool IsReady_Implementation(); \
 \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execRegisterAutoDestroyActor); \
	DECLARE_FUNCTION(execGetCurrentRerunReason); \
	DECLARE_FUNCTION(execAddRerun); \
	DECLARE_FUNCTION(execSetTimeLimit); \
	DECLARE_FUNCTION(execLogMessage); \
	DECLARE_FUNCTION(execFinishTest); \
	DECLARE_FUNCTION(execAddError); \
	DECLARE_FUNCTION(execAddWarning); \
	DECLARE_FUNCTION(execAssertEqual_TraceQueryResults); \
	DECLARE_FUNCTION(execAssertNotEqual_String); \
	DECLARE_FUNCTION(execAssertEqual_String); \
	DECLARE_FUNCTION(execAssertNotEqual_Matrix); \
	DECLARE_FUNCTION(execAssertEqual_Matrix); \
	DECLARE_FUNCTION(execAssertNotEqual_Quat); \
	DECLARE_FUNCTION(execAssertEqual_Quat); \
	DECLARE_FUNCTION(execAssertNotEqual_Plane); \
	DECLARE_FUNCTION(execAssertEqual_Plane); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector4); \
	DECLARE_FUNCTION(execAssertEqual_Vector4); \
	DECLARE_FUNCTION(execAssertNotEqual_Box2D); \
	DECLARE_FUNCTION(execAssertEqual_Box2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector); \
	DECLARE_FUNCTION(execAssertEqual_Vector); \
	DECLARE_FUNCTION(execAssertNotEqual_Rotator); \
	DECLARE_FUNCTION(execAssertEqual_Rotator); \
	DECLARE_FUNCTION(execAssertNotEqual_Transform); \
	DECLARE_FUNCTION(execAssertEqual_Object); \
	DECLARE_FUNCTION(execAssertEqual_Name); \
	DECLARE_FUNCTION(execAssertEqual_Int); \
	DECLARE_FUNCTION(execAssertEqual_Bool); \
	DECLARE_FUNCTION(execAssertEqual_Double); \
	DECLARE_FUNCTION(execAssertEqual_Float); \
	DECLARE_FUNCTION(execAssertEqual_Transform); \
	DECLARE_FUNCTION(execAssertValue_DateTime); \
	DECLARE_FUNCTION(execAssertValue_Double); \
	DECLARE_FUNCTION(execAssertValue_Float); \
	DECLARE_FUNCTION(execAssertValue_Int); \
	DECLARE_FUNCTION(execAssertIsValid); \
	DECLARE_FUNCTION(execAssertFalse); \
	DECLARE_FUNCTION(execAssertTrue);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execRegisterAutoDestroyActor); \
	DECLARE_FUNCTION(execGetCurrentRerunReason); \
	DECLARE_FUNCTION(execAddRerun); \
	DECLARE_FUNCTION(execSetTimeLimit); \
	DECLARE_FUNCTION(execLogMessage); \
	DECLARE_FUNCTION(execFinishTest); \
	DECLARE_FUNCTION(execAddError); \
	DECLARE_FUNCTION(execAddWarning); \
	DECLARE_FUNCTION(execAssertEqual_TraceQueryResults); \
	DECLARE_FUNCTION(execAssertNotEqual_String); \
	DECLARE_FUNCTION(execAssertEqual_String); \
	DECLARE_FUNCTION(execAssertNotEqual_Matrix); \
	DECLARE_FUNCTION(execAssertEqual_Matrix); \
	DECLARE_FUNCTION(execAssertNotEqual_Quat); \
	DECLARE_FUNCTION(execAssertEqual_Quat); \
	DECLARE_FUNCTION(execAssertNotEqual_Plane); \
	DECLARE_FUNCTION(execAssertEqual_Plane); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector4); \
	DECLARE_FUNCTION(execAssertEqual_Vector4); \
	DECLARE_FUNCTION(execAssertNotEqual_Box2D); \
	DECLARE_FUNCTION(execAssertEqual_Box2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector); \
	DECLARE_FUNCTION(execAssertEqual_Vector); \
	DECLARE_FUNCTION(execAssertNotEqual_Rotator); \
	DECLARE_FUNCTION(execAssertEqual_Rotator); \
	DECLARE_FUNCTION(execAssertNotEqual_Transform); \
	DECLARE_FUNCTION(execAssertEqual_Object); \
	DECLARE_FUNCTION(execAssertEqual_Name); \
	DECLARE_FUNCTION(execAssertEqual_Int); \
	DECLARE_FUNCTION(execAssertEqual_Bool); \
	DECLARE_FUNCTION(execAssertEqual_Double); \
	DECLARE_FUNCTION(execAssertEqual_Float); \
	DECLARE_FUNCTION(execAssertEqual_Transform); \
	DECLARE_FUNCTION(execAssertValue_DateTime); \
	DECLARE_FUNCTION(execAssertValue_Double); \
	DECLARE_FUNCTION(execAssertValue_Float); \
	DECLARE_FUNCTION(execAssertValue_Int); \
	DECLARE_FUNCTION(execAssertIsValid); \
	DECLARE_FUNCTION(execAssertFalse); \
	DECLARE_FUNCTION(execAssertTrue);


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_CALLBACK_WRAPPERS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalTest(); \
	friend struct Z_Construct_UClass_AFunctionalTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalTest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalTest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalTest(); \
	friend struct Z_Construct_UClass_AFunctionalTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalTest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(AFunctionalTest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFunctionalTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalTest(AFunctionalTest&&); \
	NO_API AFunctionalTest(const AFunctionalTest&); \
public: \
	NO_API virtual ~AFunctionalTest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFunctionalTest(AFunctionalTest&&); \
	NO_API AFunctionalTest(const AFunctionalTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFunctionalTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTest) \
	NO_API virtual ~AFunctionalTest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_226_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h


#define FOREACH_ENUM_ECOMPARISONMETHOD(op) \
	op(EComparisonMethod::Equal_To) \
	op(EComparisonMethod::Not_Equal_To) \
	op(EComparisonMethod::Greater_Than_Or_Equal_To) \
	op(EComparisonMethod::Less_Than_Or_Equal_To) \
	op(EComparisonMethod::Greater_Than) \
	op(EComparisonMethod::Less_Than) 

enum class EComparisonMethod : uint8;
template<> struct TIsUEnumClass<EComparisonMethod> { enum { Value = true }; };
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EComparisonMethod>();

#define FOREACH_ENUM_EFUNCTIONALTESTRESULT(op) \
	op(EFunctionalTestResult::Default) \
	op(EFunctionalTestResult::Invalid) \
	op(EFunctionalTestResult::Error) \
	op(EFunctionalTestResult::Running) \
	op(EFunctionalTestResult::Failed) \
	op(EFunctionalTestResult::Succeeded) 

enum class EFunctionalTestResult : uint8;
template<> struct TIsUEnumClass<EFunctionalTestResult> { enum { Value = true }; };
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EFunctionalTestResult>();

#define FOREACH_ENUM_EFUNCTIONALTESTLOGHANDLING(op) \
	op(EFunctionalTestLogHandling::ProjectDefault) \
	op(EFunctionalTestLogHandling::OutputIsError) \
	op(EFunctionalTestLogHandling::OutputIgnored) 

enum class EFunctionalTestLogHandling : uint8;
template<> struct TIsUEnumClass<EFunctionalTestLogHandling> { enum { Value = true }; };
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EFunctionalTestLogHandling>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
