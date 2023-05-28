// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GlobalEditorUtilityBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UEditorPerProjectUserSettings;
class UObject;
#ifdef BLUTILITY_GlobalEditorUtilityBase_generated_h
#error "GlobalEditorUtilityBase.generated.h already included, missing '#pragma once' in GlobalEditorUtilityBase.h"
#endif
#define BLUTILITY_GlobalEditorUtilityBase_generated_h

#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_26_DELEGATE \
BLUTILITY_API void FForEachActorIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachActorIteratorSignature, AActor* Actor, int32 Index);


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_27_DELEGATE \
BLUTILITY_API void FForEachAssetIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachAssetIteratorSignature, UObject* Asset, int32 Index);


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execGetSelectionBounds); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execGetEditorUserSettings); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execForEachSelectedAsset); \
	DECLARE_FUNCTION(execForEachSelectedActor); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execGetSelectionSet);


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execGetSelectionBounds); \
	DECLARE_FUNCTION(execSetActorSelectionState); \
	DECLARE_FUNCTION(execSelectNothing); \
	DECLARE_FUNCTION(execClearActorSelectionSet); \
	DECLARE_FUNCTION(execGetEditorUserSettings); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execForEachSelectedAsset); \
	DECLARE_FUNCTION(execForEachSelectedActor); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execGetSelectionSet);


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_GlobalEditorUtilityBase(); \
	friend struct Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_GlobalEditorUtilityBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_GlobalEditorUtilityBase)


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_GlobalEditorUtilityBase(); \
	friend struct Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_GlobalEditorUtilityBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_GlobalEditorUtilityBase)


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_GlobalEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_GlobalEditorUtilityBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_GlobalEditorUtilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_GlobalEditorUtilityBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_GlobalEditorUtilityBase(UDEPRECATED_GlobalEditorUtilityBase&&); \
	NO_API UDEPRECATED_GlobalEditorUtilityBase(const UDEPRECATED_GlobalEditorUtilityBase&); \
public: \
	NO_API virtual ~UDEPRECATED_GlobalEditorUtilityBase();


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_GlobalEditorUtilityBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_GlobalEditorUtilityBase(UDEPRECATED_GlobalEditorUtilityBase&&); \
	NO_API UDEPRECATED_GlobalEditorUtilityBase(const UDEPRECATED_GlobalEditorUtilityBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_GlobalEditorUtilityBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_GlobalEditorUtilityBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_GlobalEditorUtilityBase) \
	NO_API virtual ~UDEPRECATED_GlobalEditorUtilityBase();


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_30_PROLOG
#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_INCLASS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GlobalEditorUtilityBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UDEPRECATED_GlobalEditorUtilityBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
