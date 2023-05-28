// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavRelevantComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavRelevantComponent_generated_h
#error "NavRelevantComponent.generated.h already included, missing '#pragma once' in NavRelevantComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavRelevantComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNavigationRelevancy);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNavigationRelevancy);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavRelevantComponent(); \
	friend struct Z_Construct_UClass_UNavRelevantComponent_Statics; \
public: \
	DECLARE_CLASS(UNavRelevantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavRelevantComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavRelevantComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNavRelevantComponent(); \
	friend struct Z_Construct_UClass_UNavRelevantComponent_Statics; \
public: \
	DECLARE_CLASS(UNavRelevantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavRelevantComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavRelevantComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavRelevantComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavRelevantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavRelevantComponent(UNavRelevantComponent&&); \
	NO_API UNavRelevantComponent(const UNavRelevantComponent&); \
public: \
	NO_API virtual ~UNavRelevantComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavRelevantComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavRelevantComponent(UNavRelevantComponent&&); \
	NO_API UNavRelevantComponent(const UNavRelevantComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavRelevantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantComponent) \
	NO_API virtual ~UNavRelevantComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavRelevantComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavRelevantComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
