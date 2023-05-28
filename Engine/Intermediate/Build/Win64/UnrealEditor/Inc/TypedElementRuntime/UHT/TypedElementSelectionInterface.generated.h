// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Interfaces/TypedElementSelectionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETypedElementSelectionMethod : uint8;
struct FScriptTypedElementHandle;
struct FScriptTypedElementListProxy;
struct FTypedElementIsSelectedOptions;
struct FTypedElementSelectionOptions;
#ifdef TYPEDELEMENTRUNTIME_TypedElementSelectionInterface_generated_h
#error "TypedElementSelectionInterface.generated.h already included, missing '#pragma once' in TypedElementSelectionInterface.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementSelectionInterface_generated_h

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementIsSelectedOptions_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<struct FTypedElementIsSelectedOptions>();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementSelectionOptions_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<struct FTypedElementSelectionOptions>();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_SPARSE_DATA
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSelectionElement); \
	DECLARE_FUNCTION(execAllowSelectionModifiers); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execCanDeselectElement); \
	DECLARE_FUNCTION(execCanSelectElement); \
	DECLARE_FUNCTION(execIsElementSelected);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSelectionElement); \
	DECLARE_FUNCTION(execAllowSelectionModifiers); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execCanDeselectElement); \
	DECLARE_FUNCTION(execCanSelectElement); \
	DECLARE_FUNCTION(execIsElementSelected);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_ACCESSORS
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementSelectionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementSelectionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPEDELEMENTRUNTIME_API UTypedElementSelectionInterface(UTypedElementSelectionInterface&&); \
	TYPEDELEMENTRUNTIME_API UTypedElementSelectionInterface(const UTypedElementSelectionInterface&); \
public: \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementSelectionInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TYPEDELEMENTRUNTIME_API UTypedElementSelectionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TYPEDELEMENTRUNTIME_API UTypedElementSelectionInterface(UTypedElementSelectionInterface&&); \
	TYPEDELEMENTRUNTIME_API UTypedElementSelectionInterface(const UTypedElementSelectionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TYPEDELEMENTRUNTIME_API, UTypedElementSelectionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementSelectionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementSelectionInterface) \
	TYPEDELEMENTRUNTIME_API virtual ~UTypedElementSelectionInterface();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTypedElementSelectionInterface(); \
	friend struct Z_Construct_UClass_UTypedElementSelectionInterface_Statics; \
public: \
	DECLARE_CLASS(UTypedElementSelectionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), TYPEDELEMENTRUNTIME_API) \
	DECLARE_SERIALIZER(UTypedElementSelectionInterface)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITypedElementSelectionInterface() {} \
public: \
	typedef UTypedElementSelectionInterface UClassType; \
	typedef ITypedElementSelectionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_INCLASS_IINTERFACE \
protected: \
	virtual ~ITypedElementSelectionInterface() {} \
public: \
	typedef UTypedElementSelectionInterface UClassType; \
	typedef ITypedElementSelectionInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_144_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h_147_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<class UTypedElementSelectionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Interfaces_TypedElementSelectionInterface_h


#define FOREACH_ENUM_ETYPEDELEMENTSELECTIONMETHOD(op) \
	op(ETypedElementSelectionMethod::Primary) \
	op(ETypedElementSelectionMethod::Secondary) 

enum class ETypedElementSelectionMethod : uint8;
template<> struct TIsUEnumClass<ETypedElementSelectionMethod> { enum { Value = true }; };
template<> TYPEDELEMENTRUNTIME_API UEnum* StaticEnum<ETypedElementSelectionMethod>();

#define FOREACH_ENUM_ETYPEDELEMENTCHILDINCLUSIONMETHOD(op) \
	op(ETypedElementChildInclusionMethod::None) \
	op(ETypedElementChildInclusionMethod::Immediate) \
	op(ETypedElementChildInclusionMethod::Recursive) 

enum class ETypedElementChildInclusionMethod : uint8;
template<> struct TIsUEnumClass<ETypedElementChildInclusionMethod> { enum { Value = true }; };
template<> TYPEDELEMENTRUNTIME_API UEnum* StaticEnum<ETypedElementChildInclusionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
