// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSupport/CompositingEditorSupportLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCompositingPickerAsyncTask;
class UTexture;
class UTextureRenderTarget2D;
struct FLinearColor;
#ifdef COMPOSURE_CompositingEditorSupportLibrary_generated_h
#error "CompositingEditorSupportLibrary.generated.h already included, missing '#pragma once' in CompositingEditorSupportLibrary.h"
#endif
#define COMPOSURE_CompositingEditorSupportLibrary_generated_h

#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_12_DELEGATE \
COMPOSURE_API void FOnPixelPicked_DelegateWrapper(const FMulticastScriptDelegate& OnPixelPicked, FVector2D const& PickedUV, FLinearColor const& SampledColor);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenCompositingPicker);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenCompositingPicker);


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositingPickerAsyncTask(); \
	friend struct Z_Construct_UClass_UCompositingPickerAsyncTask_Statics; \
public: \
	DECLARE_CLASS(UCompositingPickerAsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingPickerAsyncTask) \
	virtual UObject* _getUObject() const override { return const_cast<UCompositingPickerAsyncTask*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCompositingPickerAsyncTask(); \
	friend struct Z_Construct_UClass_UCompositingPickerAsyncTask_Statics; \
public: \
	DECLARE_CLASS(UCompositingPickerAsyncTask, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composure"), NO_API) \
	DECLARE_SERIALIZER(UCompositingPickerAsyncTask) \
	virtual UObject* _getUObject() const override { return const_cast<UCompositingPickerAsyncTask*>(this); }


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingPickerAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingPickerAsyncTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingPickerAsyncTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingPickerAsyncTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingPickerAsyncTask(UCompositingPickerAsyncTask&&); \
	NO_API UCompositingPickerAsyncTask(const UCompositingPickerAsyncTask&); \
public: \
	NO_API virtual ~UCompositingPickerAsyncTask();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCompositingPickerAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCompositingPickerAsyncTask(UCompositingPickerAsyncTask&&); \
	NO_API UCompositingPickerAsyncTask(const UCompositingPickerAsyncTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCompositingPickerAsyncTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositingPickerAsyncTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositingPickerAsyncTask) \
	NO_API virtual ~UCompositingPickerAsyncTask();


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_14_PROLOG
#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_INCLASS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPOSURE_API UClass* StaticClass<class UCompositingPickerAsyncTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
