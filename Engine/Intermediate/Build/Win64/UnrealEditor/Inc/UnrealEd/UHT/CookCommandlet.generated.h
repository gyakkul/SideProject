// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/CookCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_CookCommandlet_generated_h
#error "CookCommandlet.generated.h already included, missing '#pragma once' in CookCommandlet.h"
#endif
#define UNREALED_CookCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend struct Z_Construct_UClass_UCookCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCookCommandlet(); \
	friend struct Z_Construct_UClass_UCookCommandlet_Statics; \
public: \
	DECLARE_CLASS(UCookCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UCookCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookCommandlet(UCookCommandlet&&); \
	NO_API UCookCommandlet(const UCookCommandlet&); \
public: \
	NO_API virtual ~UCookCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCookCommandlet(UCookCommandlet&&); \
	NO_API UCookCommandlet(const UCookCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookCommandlet) \
	NO_API virtual ~UCookCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_23_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CookCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UCookCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
