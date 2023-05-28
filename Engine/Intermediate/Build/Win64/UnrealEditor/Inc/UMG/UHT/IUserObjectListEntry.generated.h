// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/IUserObjectListEntry.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IUserObjectListEntry;
class UObject;
#ifdef UMG_IUserObjectListEntry_generated_h
#error "IUserObjectListEntry.generated.h already included, missing '#pragma once' in IUserObjectListEntry.h"
#endif
#define UMG_IUserObjectListEntry_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserObjectListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserObjectListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserObjectListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserObjectListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserObjectListEntry(UUserObjectListEntry&&); \
	NO_API UUserObjectListEntry(const UUserObjectListEntry&); \
public: \
	NO_API virtual ~UUserObjectListEntry();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserObjectListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserObjectListEntry(UUserObjectListEntry&&); \
	NO_API UUserObjectListEntry(const UUserObjectListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserObjectListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserObjectListEntry); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserObjectListEntry) \
	NO_API virtual ~UUserObjectListEntry();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUserObjectListEntry(); \
	friend struct Z_Construct_UClass_UUserObjectListEntry_Statics; \
public: \
	DECLARE_CLASS(UUserObjectListEntry, UUserListEntry, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserObjectListEntry)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUserObjectListEntry() {} \
public: \
	typedef UUserObjectListEntry UClassType; \
	typedef IUserObjectListEntry ThisClass; \
	static void Execute_OnListItemObjectSet(UObject* O, UObject* ListItemObject); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IUserObjectListEntry() {} \
public: \
	typedef UUserObjectListEntry UClassType; \
	typedef IUserObjectListEntry ThisClass; \
	static void Execute_OnListItemObjectSet(UObject* O, UObject* ListItemObject); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_12_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserObjectListEntry>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetListItemObject);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetListItemObject);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserObjectListEntryLibrary(); \
	friend struct Z_Construct_UClass_UUserObjectListEntryLibrary_Statics; \
public: \
	DECLARE_CLASS(UUserObjectListEntryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserObjectListEntryLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUUserObjectListEntryLibrary(); \
	friend struct Z_Construct_UClass_UUserObjectListEntryLibrary_Statics; \
public: \
	DECLARE_CLASS(UUserObjectListEntryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserObjectListEntryLibrary)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserObjectListEntryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserObjectListEntryLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserObjectListEntryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserObjectListEntryLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserObjectListEntryLibrary(UUserObjectListEntryLibrary&&); \
	NO_API UUserObjectListEntryLibrary(const UUserObjectListEntryLibrary&); \
public: \
	NO_API virtual ~UUserObjectListEntryLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserObjectListEntryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserObjectListEntryLibrary(UUserObjectListEntryLibrary&&); \
	NO_API UUserObjectListEntryLibrary(const UUserObjectListEntryLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserObjectListEntryLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserObjectListEntryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserObjectListEntryLibrary) \
	NO_API virtual ~UUserObjectListEntryLibrary();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_47_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserObjectListEntryLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_IUserObjectListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
