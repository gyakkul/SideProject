// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeITFComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTypedElementSelectionSet;
enum class EToolContextCoordinateSystem : int32;
#ifdef XRCREATIVE_XRCreativeITFComponent_generated_h
#error "XRCreativeITFComponent.generated.h already included, missing '#pragma once' in XRCreativeITFComponent.h"
#endif
#define XRCREATIVE_XRCreativeITFComponent_generated_h

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentCoordinateSystem); \
	DECLARE_FUNCTION(execGetCurrentCoordinateSystem); \
	DECLARE_FUNCTION(execHaveActiveTool); \
	DECLARE_FUNCTION(execGetSelectionSet); \
	DECLARE_FUNCTION(execLeftMouseReleased); \
	DECLARE_FUNCTION(execLeftMousePressed); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execCanRedo); \
	DECLARE_FUNCTION(execCanUndo);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentCoordinateSystem); \
	DECLARE_FUNCTION(execGetCurrentCoordinateSystem); \
	DECLARE_FUNCTION(execHaveActiveTool); \
	DECLARE_FUNCTION(execGetSelectionSet); \
	DECLARE_FUNCTION(execLeftMouseReleased); \
	DECLARE_FUNCTION(execLeftMousePressed); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execCanRedo); \
	DECLARE_FUNCTION(execCanUndo);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_ACCESSORS
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativeITFComponent(); \
	friend struct Z_Construct_UClass_UXRCreativeITFComponent_Statics; \
public: \
	DECLARE_CLASS(UXRCreativeITFComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), NO_API) \
	DECLARE_SERIALIZER(UXRCreativeITFComponent)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUXRCreativeITFComponent(); \
	friend struct Z_Construct_UClass_UXRCreativeITFComponent_Statics; \
public: \
	DECLARE_CLASS(UXRCreativeITFComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), NO_API) \
	DECLARE_SERIALIZER(UXRCreativeITFComponent)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativeITFComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRCreativeITFComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeITFComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeITFComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRCreativeITFComponent(UXRCreativeITFComponent&&); \
	NO_API UXRCreativeITFComponent(const UXRCreativeITFComponent&); \
public: \
	NO_API virtual ~UXRCreativeITFComponent();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRCreativeITFComponent(UXRCreativeITFComponent&&); \
	NO_API UXRCreativeITFComponent(const UXRCreativeITFComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativeITFComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativeITFComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRCreativeITFComponent) \
	NO_API virtual ~UXRCreativeITFComponent();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_22_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_INCLASS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_ACCESSORS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XRCREATIVE_API UClass* StaticClass<class UXRCreativeITFComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
