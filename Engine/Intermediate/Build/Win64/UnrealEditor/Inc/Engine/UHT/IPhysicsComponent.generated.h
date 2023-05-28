// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IPhysicsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_IPhysicsComponent_generated_h
#error "IPhysicsComponent.generated.h already included, missing '#pragma once' in IPhysicsComponent.h"
#endif
#define ENGINE_IPhysicsComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsComponent(UPhysicsComponent&&); \
	ENGINE_API UPhysicsComponent(const UPhysicsComponent&); \
public: \
	ENGINE_API virtual ~UPhysicsComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPhysicsComponent(UPhysicsComponent&&); \
	ENGINE_API UPhysicsComponent(const UPhysicsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsComponent) \
	ENGINE_API virtual ~UPhysicsComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPhysicsComponent(); \
	friend struct Z_Construct_UClass_UPhysicsComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsComponent, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPhysicsComponent() {} \
public: \
	typedef UPhysicsComponent UClassType; \
	typedef IPhysicsComponent ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IPhysicsComponent() {} \
public: \
	typedef UPhysicsComponent UClassType; \
	typedef IPhysicsComponent ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_IPhysicsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
