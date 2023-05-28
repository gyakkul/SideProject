// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PlatformEventsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlatformEventsComponent_generated_h
#error "PlatformEventsComponent.generated.h already included, missing '#pragma once' in PlatformEventsComponent.h"
#endif
#define ENGINE_PlatformEventsComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_52_DELEGATE \
static void FPlatformEventDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlatformEventDelegate);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSupportsConvertibleLaptops); \
	DECLARE_FUNCTION(execIsInTabletMode); \
	DECLARE_FUNCTION(execIsInLaptopMode);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSupportsConvertibleLaptops); \
	DECLARE_FUNCTION(execIsInTabletMode); \
	DECLARE_FUNCTION(execIsInLaptopMode);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformEventsComponent(); \
	friend struct Z_Construct_UClass_UPlatformEventsComponent_Statics; \
public: \
	DECLARE_CLASS(UPlatformEventsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlatformEventsComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformEventsComponent(); \
	friend struct Z_Construct_UClass_UPlatformEventsComponent_Statics; \
public: \
	DECLARE_CLASS(UPlatformEventsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UPlatformEventsComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformEventsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformEventsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformEventsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformEventsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformEventsComponent(UPlatformEventsComponent&&); \
	NO_API UPlatformEventsComponent(const UPlatformEventsComponent&); \
public: \
	NO_API virtual ~UPlatformEventsComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformEventsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformEventsComponent(UPlatformEventsComponent&&); \
	NO_API UPlatformEventsComponent(const UPlatformEventsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformEventsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformEventsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformEventsComponent) \
	NO_API virtual ~UPlatformEventsComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlatformEventsComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlatformEventsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_PlatformEventsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
