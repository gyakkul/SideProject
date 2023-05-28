// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/ImportSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFactory;
class UObject;
#ifdef UNREALED_ImportSubsystem_generated_h
#error "ImportSubsystem.generated.h already included, missing '#pragma once' in ImportSubsystem.h"
#endif
#define UNREALED_ImportSubsystem_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_79_DELEGATE \
static void FOnAssetPreImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPreImport_Dyn, UFactory* InFactory, UClass* InClass, UObject* InParent, FName const& Name, const FString& Type);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_81_DELEGATE \
static void FOnAssetPostImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostImport_Dyn, UFactory* InFactory, UObject* InCreatedObject);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_83_DELEGATE \
static void FOnAssetReimport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetReimport_Dyn, UObject* InCreatedObject);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_85_DELEGATE \
static void FOnAssetPostLODImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostLODImport_Dyn, UObject* InObject, int32 InLODIndex);


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImportSubsystem(); \
	friend struct Z_Construct_UClass_UImportSubsystem_Statics; \
public: \
	DECLARE_CLASS(UImportSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UImportSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUImportSubsystem(); \
	friend struct Z_Construct_UClass_UImportSubsystem_Statics; \
public: \
	DECLARE_CLASS(UImportSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UImportSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportSubsystem(UImportSubsystem&&); \
	NO_API UImportSubsystem(const UImportSubsystem&); \
public: \
	NO_API virtual ~UImportSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UImportSubsystem(UImportSubsystem&&); \
	NO_API UImportSubsystem(const UImportSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImportSubsystem) \
	NO_API virtual ~UImportSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_32_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UImportSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
