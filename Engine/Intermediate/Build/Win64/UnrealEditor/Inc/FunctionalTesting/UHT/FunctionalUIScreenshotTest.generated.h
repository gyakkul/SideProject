// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalUIScreenshotTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FUNCTIONALTESTING_FunctionalUIScreenshotTest_generated_h
#error "FunctionalUIScreenshotTest.generated.h already included, missing '#pragma once' in FunctionalUIScreenshotTest.h"
#endif
#define FUNCTIONALTESTING_FunctionalUIScreenshotTest_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_SPARSE_DATA
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ACCESSORS
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalUIScreenshotTest(); \
	friend struct Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalUIScreenshotTest, AScreenshotFunctionalTestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(AFunctionalUIScreenshotTest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAFunctionalUIScreenshotTest(); \
	friend struct Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics; \
public: \
	DECLARE_CLASS(AFunctionalUIScreenshotTest, AScreenshotFunctionalTestBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), FUNCTIONALTESTING_API) \
	DECLARE_SERIALIZER(AFunctionalUIScreenshotTest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalUIScreenshotTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalUIScreenshotTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalUIScreenshotTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(AFunctionalUIScreenshotTest&&); \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(const AFunctionalUIScreenshotTest&); \
public: \
	FUNCTIONALTESTING_API virtual ~AFunctionalUIScreenshotTest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(AFunctionalUIScreenshotTest&&); \
	FUNCTIONALTESTING_API AFunctionalUIScreenshotTest(const AFunctionalUIScreenshotTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalUIScreenshotTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalUIScreenshotTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalUIScreenshotTest) \
	FUNCTIONALTESTING_API virtual ~AFunctionalUIScreenshotTest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_25_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_SPARSE_DATA \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ACCESSORS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class AFunctionalUIScreenshotTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalUIScreenshotTest_h


#define FOREACH_ENUM_EWIDGETTESTAPPEARLOCATION(op) \
	op(EWidgetTestAppearLocation::Viewport) \
	op(EWidgetTestAppearLocation::PlayerScreen) 

enum class EWidgetTestAppearLocation;
template<> struct TIsUEnumClass<EWidgetTestAppearLocation> { enum { Value = true }; };
template<> FUNCTIONALTESTING_API UEnum* StaticEnum<EWidgetTestAppearLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
