// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ListView.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UUserWidget;
#ifdef UMG_ListView_generated_h
#error "ListView.generated.h already included, missing '#pragma once' in ListView.h"
#endif
#define UMG_ListView_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_10_DELEGATE \
UMG_API void FSimpleListItemEventDynamic_DelegateWrapper(const FMulticastScriptDelegate& SimpleListItemEventDynamic, UObject* Item);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_11_DELEGATE \
UMG_API void FOnListEntryInitializedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListEntryInitializedDynamic, UObject* Item, UUserWidget* Widget);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_12_DELEGATE \
UMG_API void FOnListItemSelectionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemSelectionChangedDynamic, UObject* Item, bool bIsSelected);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_13_DELEGATE \
UMG_API void FOnItemIsHoveredChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemIsHoveredChangedDynamic, UObject* Item, bool bIsHovered);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_14_DELEGATE \
UMG_API void FOnListItemScrolledIntoViewDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListItemScrolledIntoViewDynamic, UObject* Item, UUserWidget* Widget);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_15_DELEGATE \
UMG_API void FOnListViewScrolledDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnListViewScrolledDynamic, float ItemOffset, float DistanceRemaining);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItem); \
	DECLARE_FUNCTION(execBP_SetListItems); \
	DECLARE_FUNCTION(execBP_CancelScrollIntoView); \
	DECLARE_FUNCTION(execBP_ScrollItemIntoView); \
	DECLARE_FUNCTION(execBP_NavigateToItem); \
	DECLARE_FUNCTION(execBP_IsItemVisible); \
	DECLARE_FUNCTION(execBP_GetSelectedItems); \
	DECLARE_FUNCTION(execBP_GetNumItemsSelected); \
	DECLARE_FUNCTION(execBP_ClearSelection); \
	DECLARE_FUNCTION(execBP_SetItemSelection); \
	DECLARE_FUNCTION(execBP_SetSelectedItem); \
	DECLARE_FUNCTION(execOnListItemOuterEndPlayed); \
	DECLARE_FUNCTION(execOnListItemEndPlayed); \
	DECLARE_FUNCTION(execNavigateToIndex); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execScrollIndexIntoView); \
	DECLARE_FUNCTION(execIsRefreshPending); \
	DECLARE_FUNCTION(execSetSelectionMode); \
	DECLARE_FUNCTION(execClearListItems); \
	DECLARE_FUNCTION(execGetIndexForItem); \
	DECLARE_FUNCTION(execGetNumItems); \
	DECLARE_FUNCTION(execGetItemAt); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetListItems);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetSelectedItem); \
	DECLARE_FUNCTION(execBP_SetListItems); \
	DECLARE_FUNCTION(execBP_CancelScrollIntoView); \
	DECLARE_FUNCTION(execBP_ScrollItemIntoView); \
	DECLARE_FUNCTION(execBP_NavigateToItem); \
	DECLARE_FUNCTION(execBP_IsItemVisible); \
	DECLARE_FUNCTION(execBP_GetSelectedItems); \
	DECLARE_FUNCTION(execBP_GetNumItemsSelected); \
	DECLARE_FUNCTION(execBP_ClearSelection); \
	DECLARE_FUNCTION(execBP_SetItemSelection); \
	DECLARE_FUNCTION(execBP_SetSelectedItem); \
	DECLARE_FUNCTION(execOnListItemOuterEndPlayed); \
	DECLARE_FUNCTION(execOnListItemEndPlayed); \
	DECLARE_FUNCTION(execNavigateToIndex); \
	DECLARE_FUNCTION(execSetSelectedIndex); \
	DECLARE_FUNCTION(execScrollIndexIntoView); \
	DECLARE_FUNCTION(execIsRefreshPending); \
	DECLARE_FUNCTION(execSetSelectionMode); \
	DECLARE_FUNCTION(execClearListItems); \
	DECLARE_FUNCTION(execGetIndexForItem); \
	DECLARE_FUNCTION(execGetNumItems); \
	DECLARE_FUNCTION(execGetItemAt); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execGetListItems);


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend struct Z_Construct_UClass_UListView_Statics; \
public: \
	DECLARE_CLASS(UListView, UListViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUListView(); \
	friend struct Z_Construct_UClass_UListView_Statics; \
public: \
	DECLARE_CLASS(UListView, UListViewBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UListView)


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UListView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public: \
	NO_API virtual ~UListView();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UListView(UListView&&); \
	NO_API UListView(const UListView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UListView); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UListView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UListView) \
	NO_API virtual ~UListView();


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_26_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UListView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_ListView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
