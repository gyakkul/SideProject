// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/MaterialImportHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
enum class EMaterialSearchLocation : uint8;
#ifdef UNREALED_MaterialImportHelpers_generated_h
#error "MaterialImportHelpers.generated.h already included, missing '#pragma once' in MaterialImportHelpers.h"
#endif
#define UNREALED_MaterialImportHelpers_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindExistingMaterial); \
	DECLARE_FUNCTION(execFindExistingMaterialFromSearchLocation);


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindExistingMaterial); \
	DECLARE_FUNCTION(execFindExistingMaterialFromSearchLocation);


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaterialImportHelpers(); \
	friend struct Z_Construct_UClass_UMaterialImportHelpers_Statics; \
public: \
	DECLARE_CLASS(UMaterialImportHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialImportHelpers)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialImportHelpers(); \
	friend struct Z_Construct_UClass_UMaterialImportHelpers_Statics; \
public: \
	DECLARE_CLASS(UMaterialImportHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UMaterialImportHelpers)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialImportHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialImportHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialImportHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialImportHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialImportHelpers(UMaterialImportHelpers&&); \
	NO_API UMaterialImportHelpers(const UMaterialImportHelpers&); \
public: \
	NO_API virtual ~UMaterialImportHelpers();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialImportHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaterialImportHelpers(UMaterialImportHelpers&&); \
	NO_API UMaterialImportHelpers(const UMaterialImportHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialImportHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialImportHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialImportHelpers) \
	NO_API virtual ~UMaterialImportHelpers();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_28_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_32_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UMaterialImportHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h


#define FOREACH_ENUM_EMATERIALSEARCHLOCATION(op) \
	op(EMaterialSearchLocation::Local) \
	op(EMaterialSearchLocation::UnderParent) \
	op(EMaterialSearchLocation::UnderRoot) \
	op(EMaterialSearchLocation::AllAssets) \
	op(EMaterialSearchLocation::DoNotSearch) 

enum class EMaterialSearchLocation : uint8;
template<> struct TIsUEnumClass<EMaterialSearchLocation> { enum { Value = true }; };
template<> UNREALED_API UEnum* StaticEnum<EMaterialSearchLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
