// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementHierarchyInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScriptTypedElementHandle;
#ifdef TYPEDELEMENTRUNTIME_TypedElementHierarchyInterface_generated_h
#error "TypedElementHierarchyInterface.generated.h already included, missing '#pragma once' in TypedElementHierarchyInterface.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementHierarchyInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChildElements); \
	DECLARE_FUNCTION(execGetParentElement);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChildElements); \
	DECLARE_FUNCTION(execGetParentElement);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementHierarchyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementHierarchyInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementHierarchyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementHierarchyInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPEDELEMENTRUNTIME_API UTypedElementHierarchyInterface(UTypedElementHierarchyInterface&&); \
	TYPEDELEMENTRUNTIME_API UTypedElementHierarchyInterface(const UTypedElementHierarchyInterface&); \
public: \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementHierarchyInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementHierarchyInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPEDELEMENTRUNTIME_API UTypedElementHierarchyInterface(UTypedElementHierarchyInterface&&); \
	TYPEDELEMENTRUNTIME_API UTypedElementHierarchyInterface(const UTypedElementHierarchyInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementHierarchyInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementHierarchyInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementHierarchyInterface) \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementHierarchyInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementHierarchyInterface(); \
	friend struct Z_Construct_UClass_UTypedElementHierarchyInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementHierarchyInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), TYPEDELEMENTRUNTIME_API) \
	DECLARE_SERIALIZER(UTypedElementHierarchyInterface)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementHierarchyInterface() {} \
public: \
	typedef UTypedElementHierarchyInterface UClassType; \
	typedef ITypedElementHierarchyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~ITypedElementHierarchyInterface() {} \
public: \
	typedef UTypedElementHierarchyInterface UClassType; \
	typedef ITypedElementHierarchyInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<class UTypedElementHierarchyInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementHierarchyInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
