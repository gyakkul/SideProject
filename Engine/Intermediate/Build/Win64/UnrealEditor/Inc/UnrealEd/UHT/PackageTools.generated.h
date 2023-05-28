// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PackageTools.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_PackageTools_generated_h
#error "PackageTools.generated.h already included, missing '#pragma once' in PackageTools.h"
#endif
#define UNREALED_PackageTools_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilenameToPackageName); \
	DECLARE_FUNCTION(execPackageNameToFilename); \
	DECLARE_FUNCTION(execSanitizePackageName);


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilenameToPackageName); \
	DECLARE_FUNCTION(execPackageNameToFilename); \
	DECLARE_FUNCTION(execSanitizePackageName);


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPackageTools(); \
	friend struct Z_Construct_UClass_UPackageTools_Statics; \
public: \
	DECLARE_CLASS(UPackageTools, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPackageTools)


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUPackageTools(); \
	friend struct Z_Construct_UClass_UPackageTools_Statics; \
public: \
	DECLARE_CLASS(UPackageTools, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UPackageTools)


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageTools); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageTools(UPackageTools&&); \
	NO_API UPackageTools(const UPackageTools&); \
public: \
	NO_API virtual ~UPackageTools();


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPackageTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPackageTools(UPackageTools&&); \
	NO_API UPackageTools(const UPackageTools&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPackageTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPackageTools); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPackageTools) \
	NO_API virtual ~UPackageTools();


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_31_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PackageTools."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UPackageTools>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h


#define FOREACH_ENUM_ERELOADPACKAGESINTERACTIONMODE(op) \
	op(EReloadPackagesInteractionMode::Interactive) \
	op(EReloadPackagesInteractionMode::AssumePositive) \
	op(EReloadPackagesInteractionMode::AssumeNegative) 

enum class EReloadPackagesInteractionMode : uint8;
template<> struct TIsUEnumClass<EReloadPackagesInteractionMode> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EReloadPackagesInteractionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
