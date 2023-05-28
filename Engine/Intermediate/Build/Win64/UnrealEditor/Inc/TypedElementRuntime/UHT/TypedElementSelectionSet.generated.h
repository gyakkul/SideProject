// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/TypedElementSelectionSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterface;
class UObject;
class UTypedElementSelectionSet;
enum class ETypedElementSelectionMethod : uint8;
struct FScriptTypedElementHandle;
struct FTypedElementIsSelectedOptions;
struct FTypedElementSelectionOptions;
struct FTypedElementSelectionSetState;
#ifdef TYPEDELEMENTRUNTIME_TypedElementSelectionSet_generated_h
#error "TypedElementSelectionSet.generated.h already included, missing '#pragma once' in TypedElementSelectionSet.h"
#endif
#define TYPEDELEMENTRUNTIME_TypedElementSelectionSet_generated_h

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementSelectionNormalizationOptions_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<struct FTypedElementSelectionNormalizationOptions>();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementSelectionSetState_Statics; \
	TYPEDELEMENTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TYPEDELEMENTRUNTIME_API UScriptStruct* StaticStruct<struct FTypedElementSelectionSetState>();

#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_638_DELEGATE \
static void FOnPreChangeDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnPreChangeDynamic, const UTypedElementSelectionSet* SelectionSet);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_644_DELEGATE \
static void FOnChangeDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnChangeDynamic, const UTypedElementSelectionSet* SelectionSet);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_SPARSE_DATA
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetSelectedElementHandles); \
	DECLARE_FUNCTION(execGetSelectionElement); \
	DECLARE_FUNCTION(execAllowSelectionModifiers); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execDeselectElements); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElements); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execCanDeselectElement); \
	DECLARE_FUNCTION(execCanSelectElement); \
	DECLARE_FUNCTION(execIsElementSelected); \
	DECLARE_FUNCTION(execRestoreSelectionState); \
	DECLARE_FUNCTION(execGetCurrentSelectionState); \
	DECLARE_FUNCTION(execGetBottomSelectedObject); \
	DECLARE_FUNCTION(execGetTopSelectedObject); \
	DECLARE_FUNCTION(execGetSelectedObjects); \
	DECLARE_FUNCTION(execCountSelectedObjects); \
	DECLARE_FUNCTION(execHasSelectedObjects); \
	DECLARE_FUNCTION(execCountSelectedElements); \
	DECLARE_FUNCTION(execHasSelectedElements); \
	DECLARE_FUNCTION(execGetNumSelectedElements); \
	DECLARE_FUNCTION(execClearSelection);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetSelectedElementHandles); \
	DECLARE_FUNCTION(execGetSelectionElement); \
	DECLARE_FUNCTION(execAllowSelectionModifiers); \
	DECLARE_FUNCTION(execSetSelection); \
	DECLARE_FUNCTION(execDeselectElements); \
	DECLARE_FUNCTION(execDeselectElement); \
	DECLARE_FUNCTION(execSelectElements); \
	DECLARE_FUNCTION(execSelectElement); \
	DECLARE_FUNCTION(execCanDeselectElement); \
	DECLARE_FUNCTION(execCanSelectElement); \
	DECLARE_FUNCTION(execIsElementSelected); \
	DECLARE_FUNCTION(execRestoreSelectionState); \
	DECLARE_FUNCTION(execGetCurrentSelectionState); \
	DECLARE_FUNCTION(execGetBottomSelectedObject); \
	DECLARE_FUNCTION(execGetTopSelectedObject); \
	DECLARE_FUNCTION(execGetSelectedObjects); \
	DECLARE_FUNCTION(execCountSelectedObjects); \
	DECLARE_FUNCTION(execHasSelectedObjects); \
	DECLARE_FUNCTION(execCountSelectedElements); \
	DECLARE_FUNCTION(execHasSelectedElements); \
	DECLARE_FUNCTION(execGetNumSelectedElements); \
	DECLARE_FUNCTION(execClearSelection);


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ACCESSORS
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTypedElementSelectionSet, NO_API)


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementSelectionSet(); \
	friend struct Z_Construct_UClass_UTypedElementSelectionSet_Statics; \
public: \
	DECLARE_CLASS(UTypedElementSelectionSet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTypedElementSelectionSet) \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUTypedElementSelectionSet(); \
	friend struct Z_Construct_UClass_UTypedElementSelectionSet_Statics; \
public: \
	DECLARE_CLASS(UTypedElementSelectionSet, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TypedElementRuntime"), NO_API) \
	DECLARE_SERIALIZER(UTypedElementSelectionSet) \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypedElementSelectionSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementSelectionSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementSelectionSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementSelectionSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypedElementSelectionSet(UTypedElementSelectionSet&&); \
	NO_API UTypedElementSelectionSet(const UTypedElementSelectionSet&); \
public: \
	NO_API virtual ~UTypedElementSelectionSet();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypedElementSelectionSet(UTypedElementSelectionSet&&); \
	NO_API UTypedElementSelectionSet(const UTypedElementSelectionSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementSelectionSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementSelectionSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTypedElementSelectionSet) \
	NO_API virtual ~UTypedElementSelectionSet();


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_172_PROLOG
#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_INCLASS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_SPARSE_DATA \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ACCESSORS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h_175_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TYPEDELEMENTRUNTIME_API UClass* StaticClass<class UTypedElementSelectionSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TypedElementRuntime_Public_Elements_Framework_TypedElementSelectionSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
