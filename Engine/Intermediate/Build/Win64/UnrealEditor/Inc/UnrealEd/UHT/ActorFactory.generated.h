// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorFactories/ActorFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_ActorFactory_generated_h
#error "ActorFactory.generated.h already included, missing '#pragma once' in ActorFactory.h"
#endif
#define UNREALED_ActorFactory_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorFactory(); \
	friend struct Z_Construct_UClass_UActorFactory_Statics; \
public: \
	DECLARE_CLASS(UActorFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UActorFactory) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorFactory*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUActorFactory(); \
	friend struct Z_Construct_UClass_UActorFactory_Statics; \
public: \
	DECLARE_CLASS(UActorFactory, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UActorFactory) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorFactory*>(this); }


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorFactory(UActorFactory&&); \
	NO_API UActorFactory(const UActorFactory&); \
public: \
	NO_API virtual ~UActorFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorFactory(UActorFactory&&); \
	NO_API UActorFactory(const UActorFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorFactory) \
	NO_API virtual ~UActorFactory();


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_25_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h_28_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ActorFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UActorFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
