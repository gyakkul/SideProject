// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ListViewBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class ESlateVisibility : uint8;
#ifdef UMG_ListViewBase_generated_h
#error "ListViewBase.generated.h already included, missing '#pragma once' in ListViewBase.h"
#endif
#define UMG_ListViewBase_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_16_DELEGATE \
UMG_API void FOnListEntryGeneratedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryGeneratedDynamic, UUserWidget* Widget);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_17_DELEGATE \
UMG_API void FOnListEntryReleasedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryReleasedDynamic, UUserWidget* Widget);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestRefresh); \
	DECLARE_FUNCTION(execSetScrollbarVisibility); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execScrollToBottom); \
	DECLARE_FUNCTION(execScrollToTop); \
	DECLARE_FUNCTION(execRegenerateAllEntries); \
	DECLARE_FUNCTION(execGetScrollOffset); \
	DECLARE_FUNCTION(execGetDisplayedEntryWidgets);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestRefresh); \
	DECLARE_FUNCTION(execSetScrollbarVisibility); \
	DECLARE_FUNCTION(execSetWheelScrollMultiplier); \
	DECLARE_FUNCTION(execSetScrollOffset); \
	DECLARE_FUNCTION(execScrollToBottom); \
	DECLARE_FUNCTION(execScrollToTop); \
	DECLARE_FUNCTION(execRegenerateAllEntries); \
	DECLARE_FUNCTION(execGetScrollOffset); \
	DECLARE_FUNCTION(execGetDisplayedEntryWidgets);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListViewBase(); \
	friend struct Z_Construct_UClass_UListViewBase_Statics; \
public: \
	DECLARE_CLASS(UListViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListViewBase)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_INCLASS \
private: \
	static void StaticRegisterNativesUListViewBase(); \
	friend struct Z_Construct_UClass_UListViewBase_Statics; \
public: \
	DECLARE_CLASS(UListViewBase, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListViewBase)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListViewBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListViewBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListViewBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListViewBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListViewBase(UListViewBase&&); \
	NO_API UListViewBase(const UListViewBase&); \
public: \
	NO_API virtual ~UListViewBase();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListViewBase(UListViewBase&&); \
	NO_API UListViewBase(const UListViewBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListViewBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListViewBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListViewBase) \
	NO_API virtual ~UListViewBase();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_489_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h_492_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UListViewBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ListViewBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
