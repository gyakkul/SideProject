// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/Navigation/NavPathObserverInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavPathObserverInterface_generated_h
#error "NavPathObserverInterface.generated.h already included, missing '#pragma once' in NavPathObserverInterface.h"
#endif
#define ENGINE_NavPathObserverInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavPathObserverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavPathObserverInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavPathObserverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavPathObserverInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavPathObserverInterface(UNavPathObserverInterface&&); \
	ENGINE_API UNavPathObserverInterface(const UNavPathObserverInterface&); \
public: \
	ENGINE_API virtual ~UNavPathObserverInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UNavPathObserverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNavPathObserverInterface(UNavPathObserverInterface&&); \
	ENGINE_API UNavPathObserverInterface(const UNavPathObserverInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UNavPathObserverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavPathObserverInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavPathObserverInterface) \
	ENGINE_API virtual ~UNavPathObserverInterface();


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNavPathObserverInterface(); \
	friend struct Z_Construct_UClass_UNavPathObserverInterface_Statics; \
public: \
	DECLARE_CLASS(UNavPathObserverInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNavPathObserverInterface)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INavPathObserverInterface() {} \
public: \
	typedef UNavPathObserverInterface UClassType; \
	typedef INavPathObserverInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~INavPathObserverInterface() {} \
public: \
	typedef UNavPathObserverInterface UClassType; \
	typedef INavPathObserverInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavPathObserverInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavPathObserverInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
