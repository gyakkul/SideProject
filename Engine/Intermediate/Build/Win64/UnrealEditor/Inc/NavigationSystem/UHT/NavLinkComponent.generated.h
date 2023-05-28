// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavLinkComponent_generated_h
#error "NavLinkComponent.generated.h already included, missing '#pragma once' in NavLinkComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavLinkComponent(); \
	friend struct Z_Construct_UClass_UNavLinkComponent_Statics; \
public: \
	DECLARE_CLASS(UNavLinkComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavLinkComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkComponent(); \
	friend struct Z_Construct_UClass_UNavLinkComponent_Statics; \
public: \
	DECLARE_CLASS(UNavLinkComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavLinkComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavLinkComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkComponent(UNavLinkComponent&&); \
	NO_API UNavLinkComponent(const UNavLinkComponent&); \
public: \
	NO_API virtual ~UNavLinkComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavLinkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavLinkComponent(UNavLinkComponent&&); \
	NO_API UNavLinkComponent(const UNavLinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkComponent) \
	NO_API virtual ~UNavLinkComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavLinkComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavLinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
