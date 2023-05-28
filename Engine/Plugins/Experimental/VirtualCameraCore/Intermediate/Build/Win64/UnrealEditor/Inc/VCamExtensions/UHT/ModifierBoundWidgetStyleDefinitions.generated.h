// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Styling/ModifierBoundWidgetStyleDefinitions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVCamModifier;
class UWidgetStyleData;
#ifdef VCAMEXTENSIONS_ModifierBoundWidgetStyleDefinitions_generated_h
#error "ModifierBoundWidgetStyleDefinitions.generated.h already included, missing '#pragma once' in ModifierBoundWidgetStyleDefinitions.h"
#endif
#define VCAMEXTENSIONS_ModifierBoundWidgetStyleDefinitions_generated_h

#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_RPC_WRAPPERS \
	virtual TArray<UWidgetStyleData*> GetStylesForName_Implementation(FName Category) const; \
	virtual TArray<UWidgetStyleData*> GetStylesForConnectionPoint_Implementation(UVCamModifier* Modifier, FName ConnectionPoint) const; \
	virtual TArray<UWidgetStyleData*> GetStylesForModifier_Implementation(UVCamModifier* Modifier) const; \
 \
	DECLARE_FUNCTION(execGetStyleForNameByClass); \
	DECLARE_FUNCTION(execGetStyleForConnectionPointByClass); \
	DECLARE_FUNCTION(execGetStyleForModifierByClass); \
	DECLARE_FUNCTION(execGetStylesForName); \
	DECLARE_FUNCTION(execGetStylesForConnectionPoint); \
	DECLARE_FUNCTION(execGetStylesForModifier);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<UWidgetStyleData*> GetStylesForName_Implementation(FName Category) const; \
	virtual TArray<UWidgetStyleData*> GetStylesForConnectionPoint_Implementation(UVCamModifier* Modifier, FName ConnectionPoint) const; \
	virtual TArray<UWidgetStyleData*> GetStylesForModifier_Implementation(UVCamModifier* Modifier) const; \
 \
	DECLARE_FUNCTION(execGetStyleForNameByClass); \
	DECLARE_FUNCTION(execGetStyleForConnectionPointByClass); \
	DECLARE_FUNCTION(execGetStyleForModifierByClass); \
	DECLARE_FUNCTION(execGetStylesForName); \
	DECLARE_FUNCTION(execGetStylesForConnectionPoint); \
	DECLARE_FUNCTION(execGetStylesForModifier);


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_ACCESSORS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModifierBoundWidgetStyleDefinitions(); \
	friend struct Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics; \
public: \
	DECLARE_CLASS(UModifierBoundWidgetStyleDefinitions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamExtensions"), NO_API) \
	DECLARE_SERIALIZER(UModifierBoundWidgetStyleDefinitions)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUModifierBoundWidgetStyleDefinitions(); \
	friend struct Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions_Statics; \
public: \
	DECLARE_CLASS(UModifierBoundWidgetStyleDefinitions, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/VCamExtensions"), NO_API) \
	DECLARE_SERIALIZER(UModifierBoundWidgetStyleDefinitions)


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierBoundWidgetStyleDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierBoundWidgetStyleDefinitions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierBoundWidgetStyleDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierBoundWidgetStyleDefinitions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierBoundWidgetStyleDefinitions(UModifierBoundWidgetStyleDefinitions&&); \
	NO_API UModifierBoundWidgetStyleDefinitions(const UModifierBoundWidgetStyleDefinitions&); \
public: \
	NO_API virtual ~UModifierBoundWidgetStyleDefinitions();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModifierBoundWidgetStyleDefinitions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModifierBoundWidgetStyleDefinitions(UModifierBoundWidgetStyleDefinitions&&); \
	NO_API UModifierBoundWidgetStyleDefinitions(const UModifierBoundWidgetStyleDefinitions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModifierBoundWidgetStyleDefinitions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModifierBoundWidgetStyleDefinitions); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModifierBoundWidgetStyleDefinitions) \
	NO_API virtual ~UModifierBoundWidgetStyleDefinitions();


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_ACCESSORS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VCAMEXTENSIONS_API UClass* StaticClass<class UModifierBoundWidgetStyleDefinitions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ModifierBoundWidgetStyleDefinitions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
