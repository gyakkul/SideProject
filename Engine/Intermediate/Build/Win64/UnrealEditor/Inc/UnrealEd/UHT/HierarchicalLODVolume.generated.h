// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HierarchicalLODVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_HierarchicalLODVolume_generated_h
#error "HierarchicalLODVolume.generated.h already included, missing '#pragma once' in HierarchicalLODVolume.h"
#endif
#define UNREALED_HierarchicalLODVolume_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHierarchicalLODVolume(); \
	friend struct Z_Construct_UClass_AHierarchicalLODVolume_Statics; \
public: \
	DECLARE_CLASS(AHierarchicalLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(AHierarchicalLODVolume)


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAHierarchicalLODVolume(); \
	friend struct Z_Construct_UClass_AHierarchicalLODVolume_Statics; \
public: \
	DECLARE_CLASS(AHierarchicalLODVolume, AVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(AHierarchicalLODVolume)


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API AHierarchicalLODVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHierarchicalLODVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, AHierarchicalLODVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHierarchicalLODVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API AHierarchicalLODVolume(AHierarchicalLODVolume&&); \
	UNREALED_API AHierarchicalLODVolume(const AHierarchicalLODVolume&); \
public: \
	UNREALED_API virtual ~AHierarchicalLODVolume();


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API AHierarchicalLODVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API AHierarchicalLODVolume(AHierarchicalLODVolume&&); \
	UNREALED_API AHierarchicalLODVolume(const AHierarchicalLODVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, AHierarchicalLODVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHierarchicalLODVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHierarchicalLODVolume) \
	UNREALED_API virtual ~AHierarchicalLODVolume();


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HierarchicalLODVolume."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class AHierarchicalLODVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_HierarchicalLODVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
