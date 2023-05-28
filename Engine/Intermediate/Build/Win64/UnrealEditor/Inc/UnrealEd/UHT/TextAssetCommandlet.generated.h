// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/TextAssetCommandlet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_TextAssetCommandlet_generated_h
#error "TextAssetCommandlet.generated.h already included, missing '#pragma once' in TextAssetCommandlet.h"
#endif
#define UNREALED_TextAssetCommandlet_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTextAssetCommandlet(); \
	friend struct Z_Construct_UClass_UTextAssetCommandlet_Statics; \
public: \
	DECLARE_CLASS(UTextAssetCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UTextAssetCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUTextAssetCommandlet(); \
	friend struct Z_Construct_UClass_UTextAssetCommandlet_Statics; \
public: \
	DECLARE_CLASS(UTextAssetCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UTextAssetCommandlet) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextAssetCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextAssetCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextAssetCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextAssetCommandlet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextAssetCommandlet(UTextAssetCommandlet&&); \
	NO_API UTextAssetCommandlet(const UTextAssetCommandlet&); \
public: \
	NO_API virtual ~UTextAssetCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTextAssetCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTextAssetCommandlet(UTextAssetCommandlet&&); \
	NO_API UTextAssetCommandlet(const UTextAssetCommandlet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTextAssetCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTextAssetCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTextAssetCommandlet) \
	NO_API virtual ~UTextAssetCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TextAssetCommandlet."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTextAssetCommandlet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_TextAssetCommandlet_h


#define FOREACH_ENUM_ETEXTASSETCOMMANDLETMODE(op) \
	op(ETextAssetCommandletMode::ResaveText) \
	op(ETextAssetCommandletMode::ResaveBinary) \
	op(ETextAssetCommandletMode::RoundTrip) \
	op(ETextAssetCommandletMode::LoadBinary) \
	op(ETextAssetCommandletMode::LoadText) \
	op(ETextAssetCommandletMode::FindMismatchedSerializers) \
	op(ETextAssetCommandletMode::GenerateSchema) 

enum class ETextAssetCommandletMode;
template<> struct TIsUEnumClass<ETextAssetCommandletMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<ETextAssetCommandletMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
