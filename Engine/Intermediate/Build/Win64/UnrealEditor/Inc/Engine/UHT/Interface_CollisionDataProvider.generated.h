// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_CollisionDataProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_CollisionDataProvider_generated_h
#error "Interface_CollisionDataProvider.generated.h already included, missing '#pragma once' in Interface_CollisionDataProvider.h"
#endif
#define ENGINE_Interface_CollisionDataProvider_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_CollisionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_CollisionDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_CollisionDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_CollisionDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_CollisionDataProvider(UInterface_CollisionDataProvider&&); \
	ENGINE_API UInterface_CollisionDataProvider(const UInterface_CollisionDataProvider&); \
public: \
	ENGINE_API virtual ~UInterface_CollisionDataProvider();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_CollisionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_CollisionDataProvider(UInterface_CollisionDataProvider&&); \
	ENGINE_API UInterface_CollisionDataProvider(const UInterface_CollisionDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_CollisionDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_CollisionDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_CollisionDataProvider) \
	ENGINE_API virtual ~UInterface_CollisionDataProvider();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_CollisionDataProvider(); \
	friend struct Z_Construct_UClass_UInterface_CollisionDataProvider_Statics; \
public: \
	DECLARE_CLASS(UInterface_CollisionDataProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_CollisionDataProvider)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_CollisionDataProvider() {} \
public: \
	typedef UInterface_CollisionDataProvider UClassType; \
	typedef IInterface_CollisionDataProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_CollisionDataProvider() {} \
public: \
	typedef UInterface_CollisionDataProvider UClassType; \
	typedef IInterface_CollisionDataProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_CollisionDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_CollisionDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
