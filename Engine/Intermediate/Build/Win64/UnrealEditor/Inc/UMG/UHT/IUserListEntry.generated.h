// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/IUserListEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IUserListEntry;
class UListViewBase;
#ifdef UMG_IUserListEntry_generated_h
#error "IUserListEntry.generated.h already included, missing '#pragma once' in IUserListEntry.h"
#endif
#define UMG_IUserListEntry_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntry(UUserListEntry&&); \
	NO_API UUserListEntry(const UUserListEntry&); \
public: \
	NO_API virtual ~UUserListEntry();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntry(UUserListEntry&&); \
	NO_API UUserListEntry(const UUserListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntry); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntry) \
	NO_API virtual ~UUserListEntry();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUserListEntry(); \
	friend struct Z_Construct_UClass_UUserListEntry_Statics; \
public: \
	DECLARE_CLASS(UUserListEntry, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserListEntry)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUserListEntry() {} \
public: \
	typedef UUserListEntry UClassType; \
	typedef IUserListEntry ThisClass; \
	static void Execute_BP_OnEntryReleased(UObject* O); \
	static void Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded); \
	static void Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE \
protected: \
	virtual ~IUserListEntry() {} \
public: \
	typedef UUserListEntry UClassType; \
	typedef IUserListEntry ThisClass; \
	static void Execute_BP_OnEntryReleased(UObject* O); \
	static void Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded); \
	static void Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_20_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserListEntry>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningListView); \
	DECLARE_FUNCTION(execIsListItemExpanded); \
	DECLARE_FUNCTION(execIsListItemSelected);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningListView); \
	DECLARE_FUNCTION(execIsListItemExpanded); \
	DECLARE_FUNCTION(execIsListItemSelected);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserListEntryLibrary(); \
	friend struct Z_Construct_UClass_UUserListEntryLibrary_Statics; \
public: \
	DECLARE_CLASS(UUserListEntryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserListEntryLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUUserListEntryLibrary(); \
	friend struct Z_Construct_UClass_UUserListEntryLibrary_Statics; \
public: \
	DECLARE_CLASS(UUserListEntryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserListEntryLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntryLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntryLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntryLibrary(UUserListEntryLibrary&&); \
	NO_API UUserListEntryLibrary(const UUserListEntryLibrary&); \
public: \
	NO_API virtual ~UUserListEntryLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntryLibrary(UUserListEntryLibrary&&); \
	NO_API UUserListEntryLibrary(const UUserListEntryLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntryLibrary) \
	NO_API virtual ~UUserListEntryLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_76_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserListEntryLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
