// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementObjectInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FScriptTypedElementHandle;
#ifdef TYPEDELEMENTRUNTIME_TypedElementObjectInterface_generated_h
#error "TypedElementObjectInterface.generated.h already included, missing '#pragma once' in TypedElementObjectInterface.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementObjectInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execGetObject);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execGetObject);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementObjectInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementObjectInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPEDELEMENTRUNTIME_API UTypedElementObjectInterface(UTypedElementObjectInterface&&); \
	TYPEDELEMENTRUNTIME_API UTypedElementObjectInterface(const UTypedElementObjectInterface&); \
public: \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementObjectInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementObjectInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPEDELEMENTRUNTIME_API UTypedElementObjectInterface(UTypedElementObjectInterface&&); \
	TYPEDELEMENTRUNTIME_API UTypedElementObjectInterface(const UTypedElementObjectInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementObjectInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementObjectInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementObjectInterface) \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementObjectInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementObjectInterface(); \
	friend struct Z_Construct_UClass_UTypedElementObjectInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementObjectInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), TYPEDELEMENTRUNTIME_API) \
	DECLARE_SERIALIZER(UTypedElementObjectInterface)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementObjectInterface() {} \
public: \
	typedef UTypedElementObjectInterface UClassType; \
	typedef ITypedElementObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~ITypedElementObjectInterface() {} \
public: \
	typedef UTypedElementObjectInterface UClassType; \
	typedef ITypedElementObjectInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_18_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<class UTypedElementObjectInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementObjectInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
