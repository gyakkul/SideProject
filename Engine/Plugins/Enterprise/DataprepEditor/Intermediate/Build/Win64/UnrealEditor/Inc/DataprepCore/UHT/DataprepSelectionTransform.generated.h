// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SelectionSystem/DataprepSelectionTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef DATAPREPCORE_DataprepSelectionTransform_generated_h
#error "DataprepSelectionTransform.generated.h already included, missing '#pragma once' in DataprepSelectionTransform.h"
#endif
#define DATAPREPCORE_DataprepSelectionTransform_generated_h

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS \
	virtual FText GetAdditionalKeyword_Implementation() const; \
	virtual FText GetCategory_Implementation() const; \
	virtual FText GetTooltip_Implementation() const; \
	virtual FText GetDisplayTransformName_Implementation() const; \
	virtual void OnExecution_Implementation(TArray<UObject*> const& InObjects, TArray<UObject*>& OutObjects); \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltip); \
	DECLARE_FUNCTION(execGetDisplayTransformName); \
	DECLARE_FUNCTION(execOnExecution); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAdditionalKeyword); \
	DECLARE_FUNCTION(execGetCategory); \
	DECLARE_FUNCTION(execGetTooltip); \
	DECLARE_FUNCTION(execGetDisplayTransformName); \
	DECLARE_FUNCTION(execOnExecution); \
	DECLARE_FUNCTION(execExecute);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepSelectionTransform, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepSelectionTransform)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepSelectionTransform, UDataprepParameterizableObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepSelectionTransform)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepSelectionTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepSelectionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepSelectionTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepSelectionTransform(UDataprepSelectionTransform&&); \
	NO_API UDataprepSelectionTransform(const UDataprepSelectionTransform&); \
public: \
	NO_API virtual ~UDataprepSelectionTransform();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepSelectionTransform(UDataprepSelectionTransform&&); \
	NO_API UDataprepSelectionTransform(const UDataprepSelectionTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepSelectionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepSelectionTransform); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepSelectionTransform) \
	NO_API virtual ~UDataprepSelectionTransform();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_15_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepSelectionTransform>();

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_RPC_WRAPPERS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepRecursiveSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepRecursiveSelectionTransform, UDataprepSelectionTransform, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepRecursiveSelectionTransform)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepRecursiveSelectionTransform(); \
	friend struct Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics; \
public: \
	DECLARE_CLASS(UDataprepRecursiveSelectionTransform, UDataprepSelectionTransform, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DataprepCore"), NO_API) \
	DECLARE_SERIALIZER(UDataprepRecursiveSelectionTransform)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepRecursiveSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepRecursiveSelectionTransform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepRecursiveSelectionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepRecursiveSelectionTransform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepRecursiveSelectionTransform(UDataprepRecursiveSelectionTransform&&); \
	NO_API UDataprepRecursiveSelectionTransform(const UDataprepRecursiveSelectionTransform&); \
public: \
	NO_API virtual ~UDataprepRecursiveSelectionTransform();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepRecursiveSelectionTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepRecursiveSelectionTransform(UDataprepRecursiveSelectionTransform&&); \
	NO_API UDataprepRecursiveSelectionTransform(const UDataprepRecursiveSelectionTransform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepRecursiveSelectionTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepRecursiveSelectionTransform); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepRecursiveSelectionTransform) \
	NO_API virtual ~UDataprepRecursiveSelectionTransform();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_84_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_INCLASS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPCORE_API UClass* StaticClass<class UDataprepRecursiveSelectionTransform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
