// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hierarchies/ModifierHierarchyAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;
class UVCamModifier;
struct FVCamModifierConnectionBinding;
#ifdef VCAMEXTENSIONS_ModifierHierarchyAsset_generated_h
#error "ModifierHierarchyAsset.generated.h already included, missing '#pragma once' in ModifierHierarchyAsset.h"
#endif
#define VCAMEXTENSIONS_ModifierHierarchyAsset_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGroupsContainingModifier); \
	DECLARE_FUNCTION(execGetConnectionPointTargetForNode); \
	DECLARE_FUNCTION(execGetModifierInNode); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetRootNode);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGroupsContainingModifier); \
	DECLARE_FUNCTION(execGetConnectionPointTargetForNode); \
	DECLARE_FUNCTION(execGetModifierInNode); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetRootNode);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifierHierarchyAsset(); \
	friend struct Z_Construct_UClass_UModifierHierarchyAsset_Statics; \
public: \
	DECLARE_CLASS(UModifierHierarchyAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamExtensions"), NO_API) \
	DECLARE_SERIALIZER(UModifierHierarchyAsset)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUModifierHierarchyAsset(); \
	friend struct Z_Construct_UClass_UModifierHierarchyAsset_Statics; \
public: \
	DECLARE_CLASS(UModifierHierarchyAsset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VCamExtensions"), NO_API) \
	DECLARE_SERIALIZER(UModifierHierarchyAsset)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierHierarchyAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierHierarchyAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierHierarchyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierHierarchyAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierHierarchyAsset(UModifierHierarchyAsset&&); \
	NO_API UModifierHierarchyAsset(const UModifierHierarchyAsset&); \
public: \
	NO_API virtual ~UModifierHierarchyAsset();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierHierarchyAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierHierarchyAsset(UModifierHierarchyAsset&&); \
	NO_API UModifierHierarchyAsset(const UModifierHierarchyAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierHierarchyAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierHierarchyAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierHierarchyAsset) \
	NO_API virtual ~UModifierHierarchyAsset();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMEXTENSIONS_API UClass* StaticClass<class UModifierHierarchyAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
