// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Framework/TypedElementCommonActions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTypedElementSelectionSet;
class UWorld;
struct FScriptTypedElementHandle;
struct FScriptTypedElementListProxy;
struct FTypedElementDeletionOptions;
struct FTypedElementPasteOptions;
#ifdef ENGINE_TypedElementCommonActions_generated_h
#error "TypedElementCommonActions.generated.h already included, missing '#pragma once' in TypedElementCommonActions.h"
#endif
#define ENGINE_TypedElementCommonActions_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypedElementPasteOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTypedElementPasteOptions>();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPasteNormalizedElementsFromString); \
	DECLARE_FUNCTION(execK2_PasteNormalizedElements); \
	DECLARE_FUNCTION(execPasteElementsFromString); \
	DECLARE_FUNCTION(execK2_PasteElements); \
	DECLARE_FUNCTION(execCopyNormalizedElementsToString); \
	DECLARE_FUNCTION(execCopyNormalizedElements); \
	DECLARE_FUNCTION(execDuplicateNormalizedElements); \
	DECLARE_FUNCTION(execK2_DuplicateSelectedElements); \
	DECLARE_FUNCTION(execDeleteNormalizedElements); \
	DECLARE_FUNCTION(execCopySelectedElementsToString); \
	DECLARE_FUNCTION(execCopySelectedElements); \
	DECLARE_FUNCTION(execDeleteSelectedElements);


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPasteNormalizedElementsFromString); \
	DECLARE_FUNCTION(execK2_PasteNormalizedElements); \
	DECLARE_FUNCTION(execPasteElementsFromString); \
	DECLARE_FUNCTION(execK2_PasteElements); \
	DECLARE_FUNCTION(execCopyNormalizedElementsToString); \
	DECLARE_FUNCTION(execCopyNormalizedElements); \
	DECLARE_FUNCTION(execDuplicateNormalizedElements); \
	DECLARE_FUNCTION(execK2_DuplicateSelectedElements); \
	DECLARE_FUNCTION(execDeleteNormalizedElements); \
	DECLARE_FUNCTION(execCopySelectedElementsToString); \
	DECLARE_FUNCTION(execCopySelectedElements); \
	DECLARE_FUNCTION(execDeleteSelectedElements);


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTypedElementCommonActions(); \
	friend struct Z_Construct_UClass_UTypedElementCommonActions_Statics; \
public: \
	DECLARE_CLASS(UTypedElementCommonActions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTypedElementCommonActions)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUTypedElementCommonActions(); \
	friend struct Z_Construct_UClass_UTypedElementCommonActions_Statics; \
public: \
	DECLARE_CLASS(UTypedElementCommonActions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTypedElementCommonActions)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypedElementCommonActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementCommonActions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementCommonActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementCommonActions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypedElementCommonActions(UTypedElementCommonActions&&); \
	NO_API UTypedElementCommonActions(const UTypedElementCommonActions&); \
public: \
	NO_API virtual ~UTypedElementCommonActions();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTypedElementCommonActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTypedElementCommonActions(UTypedElementCommonActions&&); \
	NO_API UTypedElementCommonActions(const UTypedElementCommonActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTypedElementCommonActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTypedElementCommonActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTypedElementCommonActions) \
	NO_API virtual ~UTypedElementCommonActions();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_96_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTypedElementCommonActions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_TypedElementCommonActions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
