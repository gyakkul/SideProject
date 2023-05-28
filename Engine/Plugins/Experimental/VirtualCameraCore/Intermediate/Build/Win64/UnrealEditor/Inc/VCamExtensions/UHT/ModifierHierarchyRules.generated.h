// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Hierarchies/ModifierHierarchyRules.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamComponent;
class UVCamModifier;
struct FVCamModifierConnectionBinding;
#ifdef VCAMEXTENSIONS_ModifierHierarchyRules_generated_h
#error "ModifierHierarchyRules.generated.h already included, missing '#pragma once' in ModifierHierarchyRules.h"
#endif
#define VCAMEXTENSIONS_ModifierHierarchyRules_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVCamModifierConnectionBinding_Statics; \
	VCAMEXTENSIONS_API static class UScriptStruct* StaticStruct();


template<> VCAMEXTENSIONS_API UScriptStruct* StaticStruct<struct FVCamModifierConnectionBinding>();

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_RPC_WRAPPERS \
	virtual TSet<FName> GetNodesContainingModifier_Implementation(UVCamModifier* Modifier) const; \
	virtual bool GetConnectionPointTargetForNode_Implementation(FName GroupName, UVCamComponent* Component, FVCamModifierConnectionBinding& Connection) const; \
	virtual UVCamModifier* GetModifierInNode_Implementation(UVCamComponent* Component, FName NodeName) const; \
	virtual TSet<FName> GetChildNodes_Implementation(FName Node) const; \
	virtual bool GetParentNode_Implementation(FName ChildNode, FName& ParentNode) const; \
	virtual FName GetRootNode_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNodesContainingModifier); \
	DECLARE_FUNCTION(execGetConnectionPointTargetForNode); \
	DECLARE_FUNCTION(execGetModifierInNode); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetRootNode);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSet<FName> GetNodesContainingModifier_Implementation(UVCamModifier* Modifier) const; \
	virtual bool GetConnectionPointTargetForNode_Implementation(FName GroupName, UVCamComponent* Component, FVCamModifierConnectionBinding& Connection) const; \
	virtual UVCamModifier* GetModifierInNode_Implementation(UVCamComponent* Component, FName NodeName) const; \
	virtual TSet<FName> GetChildNodes_Implementation(FName Node) const; \
	virtual bool GetParentNode_Implementation(FName ChildNode, FName& ParentNode) const; \
	virtual FName GetRootNode_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNodesContainingModifier); \
	DECLARE_FUNCTION(execGetConnectionPointTargetForNode); \
	DECLARE_FUNCTION(execGetModifierInNode); \
	DECLARE_FUNCTION(execGetChildNodes); \
	DECLARE_FUNCTION(execGetParentNode); \
	DECLARE_FUNCTION(execGetRootNode);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifierHierarchyRules(); \
	friend struct Z_Construct_UClass_UModifierHierarchyRules_Statics; \
public: \
	DECLARE_CLASS(UModifierHierarchyRules, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamExtensions"), NO_API) \
	DECLARE_SERIALIZER(UModifierHierarchyRules)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUModifierHierarchyRules(); \
	friend struct Z_Construct_UClass_UModifierHierarchyRules_Statics; \
public: \
	DECLARE_CLASS(UModifierHierarchyRules, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamExtensions"), NO_API) \
	DECLARE_SERIALIZER(UModifierHierarchyRules)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierHierarchyRules(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierHierarchyRules) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierHierarchyRules); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierHierarchyRules); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierHierarchyRules(UModifierHierarchyRules&&); \
	NO_API UModifierHierarchyRules(const UModifierHierarchyRules&); \
public: \
	NO_API virtual ~UModifierHierarchyRules();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierHierarchyRules(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierHierarchyRules(UModifierHierarchyRules&&); \
	NO_API UModifierHierarchyRules(const UModifierHierarchyRules&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierHierarchyRules); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierHierarchyRules); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierHierarchyRules) \
	NO_API virtual ~UModifierHierarchyRules();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_33_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMEXTENSIONS_API UClass* StaticClass<class UModifierHierarchyRules>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_ModifierHierarchyRules_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
