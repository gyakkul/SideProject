// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceControlPreferences.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCECONTROL_SourceControlPreferences_generated_h
#error "SourceControlPreferences.generated.h already included, missing '#pragma once' in SourceControlPreferences.h"
#endif
#define SOURCECONTROL_SourceControlPreferences_generated_h

#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_SPARSE_DATA
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_ACCESSORS
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceControlPreferences(); \
	friend struct Z_Construct_UClass_USourceControlPreferences_Statics; \
public: \
	DECLARE_CLASS(USourceControlPreferences, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceControl"), NO_API) \
	DECLARE_SERIALIZER(USourceControlPreferences) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSourceControlPreferences(); \
	friend struct Z_Construct_UClass_USourceControlPreferences_Statics; \
public: \
	DECLARE_CLASS(USourceControlPreferences, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceControl"), NO_API) \
	DECLARE_SERIALIZER(USourceControlPreferences) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceControlPreferences(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlPreferences) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceControlPreferences); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlPreferences); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceControlPreferences(USourceControlPreferences&&); \
	NO_API USourceControlPreferences(const USourceControlPreferences&); \
public: \
	NO_API virtual ~USourceControlPreferences();


#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceControlPreferences(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceControlPreferences(USourceControlPreferences&&); \
	NO_API USourceControlPreferences(const USourceControlPreferences&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceControlPreferences); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceControlPreferences); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceControlPreferences) \
	NO_API virtual ~USourceControlPreferences();


#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_20_PROLOG
#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_SPARSE_DATA \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_ACCESSORS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_INCLASS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_SPARSE_DATA \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_ACCESSORS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCECONTROL_API UClass* StaticClass<class USourceControlPreferences>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_SourceControl_Public_SourceControlPreferences_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
