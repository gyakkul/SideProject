// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Viewport.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UWorld;
#ifdef UMG_Viewport_generated_h
#error "Viewport.generated.h already included, missing '#pragma once' in Viewport.h"
#endif
#define UMG_Viewport_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSetViewRotation); \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execSetViewLocation); \
	DECLARE_FUNCTION(execGetViewLocation); \
	DECLARE_FUNCTION(execGetViewportWorld);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSetViewRotation); \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execSetViewLocation); \
	DECLARE_FUNCTION(execGetViewLocation); \
	DECLARE_FUNCTION(execGetViewportWorld);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_ACCESSORS \
static void GetBackgroundColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetBackgroundColor_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewport(); \
	friend struct Z_Construct_UClass_UViewport_Statics; \
public: \
	DECLARE_CLASS(UViewport, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UViewport)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_INCLASS \
private: \
	static void StaticRegisterNativesUViewport(); \
	friend struct Z_Construct_UClass_UViewport_Statics; \
public: \
	DECLARE_CLASS(UViewport, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UViewport)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewport(UViewport&&); \
	NO_API UViewport(const UViewport&); \
public: \
	NO_API virtual ~UViewport();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewport(UViewport&&); \
	NO_API UViewport(const UViewport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewport); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewport); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewport) \
	NO_API virtual ~UViewport();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_229_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_232_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Viewport."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UViewport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
