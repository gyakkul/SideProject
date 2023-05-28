// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativePointerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef XRCREATIVE_XRCreativePointerComponent_generated_h
#error "XRCreativePointerComponent.generated.h already included, missing '#pragma once' in XRCreativePointerComponent.h"
#endif
#define XRCREATIVE_XRCreativePointerComponent_generated_h

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execGetFilteredTraceEnd); \
	DECLARE_FUNCTION(execGetRawTraceEnd);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execGetHitResult); \
	DECLARE_FUNCTION(execGetFilteredTraceEnd); \
	DECLARE_FUNCTION(execGetRawTraceEnd);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_ACCESSORS \
static void GetbEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbEnabled_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUXRCreativePointerComponent(); \
	friend struct Z_Construct_UClass_UXRCreativePointerComponent_Statics; \
public: \
	DECLARE_CLASS(UXRCreativePointerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), NO_API) \
	DECLARE_SERIALIZER(UXRCreativePointerComponent)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUXRCreativePointerComponent(); \
	friend struct Z_Construct_UClass_UXRCreativePointerComponent_Statics; \
public: \
	DECLARE_CLASS(UXRCreativePointerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), NO_API) \
	DECLARE_SERIALIZER(UXRCreativePointerComponent)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UXRCreativePointerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UXRCreativePointerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativePointerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativePointerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRCreativePointerComponent(UXRCreativePointerComponent&&); \
	NO_API UXRCreativePointerComponent(const UXRCreativePointerComponent&); \
public: \
	NO_API virtual ~UXRCreativePointerComponent();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UXRCreativePointerComponent(UXRCreativePointerComponent&&); \
	NO_API UXRCreativePointerComponent(const UXRCreativePointerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UXRCreativePointerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UXRCreativePointerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UXRCreativePointerComponent) \
	NO_API virtual ~UXRCreativePointerComponent();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XRCREATIVE_API UClass* StaticClass<class UXRCreativePointerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativePointerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
