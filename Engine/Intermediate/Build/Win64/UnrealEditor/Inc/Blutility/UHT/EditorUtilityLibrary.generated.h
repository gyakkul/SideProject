// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtilityLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAsyncEditorDelay;
class UAsyncEditorOpenMapAndFocusActor;
class UAsyncEditorWaitForGameWorld;
class UObject;
class UWorld;
struct FAssetData;
struct FSoftObjectPath;
#ifdef BLUTILITY_EditorUtilityLibrary_generated_h
#error "EditorUtilityLibrary.generated.h already included, missing '#pragma once' in EditorUtilityLibrary.h"
#endif
#define BLUTILITY_EditorUtilityLibrary_generated_h

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityBlueprintAsyncActionBase(); \
	friend struct Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityBlueprintAsyncActionBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityBlueprintAsyncActionBase)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityBlueprintAsyncActionBase(); \
	friend struct Z_Construct_UClass_UEditorUtilityBlueprintAsyncActionBase_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityBlueprintAsyncActionBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityBlueprintAsyncActionBase)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityBlueprintAsyncActionBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityBlueprintAsyncActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityBlueprintAsyncActionBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityBlueprintAsyncActionBase(UEditorUtilityBlueprintAsyncActionBase&&); \
	NO_API UEditorUtilityBlueprintAsyncActionBase(const UEditorUtilityBlueprintAsyncActionBase&); \
public: \
	NO_API virtual ~UEditorUtilityBlueprintAsyncActionBase();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityBlueprintAsyncActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityBlueprintAsyncActionBase(UEditorUtilityBlueprintAsyncActionBase&&); \
	NO_API UEditorUtilityBlueprintAsyncActionBase(const UEditorUtilityBlueprintAsyncActionBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityBlueprintAsyncActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityBlueprintAsyncActionBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityBlueprintAsyncActionBase) \
	NO_API virtual ~UEditorUtilityBlueprintAsyncActionBase();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_28_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorUtilityBlueprintAsyncActionBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityBlueprintAsyncActionBase>();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_38_DELEGATE \
BLUTILITY_API void FAsyncDelayComplete_DelegateWrapper(const FMulticastScriptDelegate& AsyncDelayComplete);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncEditorDelay);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncEditorDelay);


#else
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncEditorDelay(); \
	friend struct Z_Construct_UClass_UAsyncEditorDelay_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorDelay, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorDelay)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorDelay(); \
	friend struct Z_Construct_UClass_UAsyncEditorDelay_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorDelay, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorDelay)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorDelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorDelay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncEditorDelay(UAsyncEditorDelay&&); \
	NO_API UAsyncEditorDelay(const UAsyncEditorDelay&); \
public: \
	NO_API virtual ~UAsyncEditorDelay();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorDelay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncEditorDelay(UAsyncEditorDelay&&); \
	NO_API UAsyncEditorDelay(const UAsyncEditorDelay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorDelay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorDelay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorDelay) \
	NO_API virtual ~UAsyncEditorDelay();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_40_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncEditorDelay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncEditorDelay>();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_70_DELEGATE \
BLUTILITY_API void FAsyncEditorWaitForGameWorldEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncEditorWaitForGameWorldEvent, UWorld* World);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncWaitForGameWorld);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncWaitForGameWorld);


#else
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncEditorWaitForGameWorld(); \
	friend struct Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorWaitForGameWorld, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorWaitForGameWorld)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorWaitForGameWorld(); \
	friend struct Z_Construct_UClass_UAsyncEditorWaitForGameWorld_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorWaitForGameWorld, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorWaitForGameWorld)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorWaitForGameWorld(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorWaitForGameWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorWaitForGameWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorWaitForGameWorld); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncEditorWaitForGameWorld(UAsyncEditorWaitForGameWorld&&); \
	NO_API UAsyncEditorWaitForGameWorld(const UAsyncEditorWaitForGameWorld&); \
public: \
	NO_API virtual ~UAsyncEditorWaitForGameWorld();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorWaitForGameWorld(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncEditorWaitForGameWorld(UAsyncEditorWaitForGameWorld&&); \
	NO_API UAsyncEditorWaitForGameWorld(const UAsyncEditorWaitForGameWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorWaitForGameWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorWaitForGameWorld); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorWaitForGameWorld) \
	NO_API virtual ~UAsyncEditorWaitForGameWorld();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_72_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_75_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncEditorWaitForGameWorld."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncEditorWaitForGameWorld>();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncEditorOpenMapAndFocusActor);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncEditorOpenMapAndFocusActor);


#else
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncEditorOpenMapAndFocusActor(); \
	friend struct Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorOpenMapAndFocusActor, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorOpenMapAndFocusActor)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncEditorOpenMapAndFocusActor(); \
	friend struct Z_Construct_UClass_UAsyncEditorOpenMapAndFocusActor_Statics; \
public: \
	DECLARE_CLASS(UAsyncEditorOpenMapAndFocusActor, UEditorUtilityBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UAsyncEditorOpenMapAndFocusActor)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorOpenMapAndFocusActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorOpenMapAndFocusActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorOpenMapAndFocusActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorOpenMapAndFocusActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncEditorOpenMapAndFocusActor(UAsyncEditorOpenMapAndFocusActor&&); \
	NO_API UAsyncEditorOpenMapAndFocusActor(const UAsyncEditorOpenMapAndFocusActor&); \
public: \
	NO_API virtual ~UAsyncEditorOpenMapAndFocusActor();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncEditorOpenMapAndFocusActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncEditorOpenMapAndFocusActor(UAsyncEditorOpenMapAndFocusActor&&); \
	NO_API UAsyncEditorOpenMapAndFocusActor(const UAsyncEditorOpenMapAndFocusActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncEditorOpenMapAndFocusActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncEditorOpenMapAndFocusActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncEditorOpenMapAndFocusActor) \
	NO_API virtual ~UAsyncEditorOpenMapAndFocusActor();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_102_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_105_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AsyncEditorOpenMapAndFocusActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UAsyncEditorOpenMapAndFocusActor>();

#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_SPARSE_DATA
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSyncBrowserToFolders); \
	DECLARE_FUNCTION(execGetSelectedFolderPaths); \
	DECLARE_FUNCTION(execGetCurrentContentBrowserPath); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execGetSelectedAssetData); \
	DECLARE_FUNCTION(execGetSelectedBlueprintClasses); \
	DECLARE_FUNCTION(execGetSelectedAssetsOfClass); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execGetSelectionBounds); \
	DECLARE_FUNCTION(execGetSelectionSet);


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSyncBrowserToFolders); \
	DECLARE_FUNCTION(execGetSelectedFolderPaths); \
	DECLARE_FUNCTION(execGetCurrentContentBrowserPath); \
	DECLARE_FUNCTION(execGetActorReference); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execGetSelectedAssetData); \
	DECLARE_FUNCTION(execGetSelectedBlueprintClasses); \
	DECLARE_FUNCTION(execGetSelectedAssetsOfClass); \
	DECLARE_FUNCTION(execGetSelectedAssets); \
	DECLARE_FUNCTION(execGetSelectionBounds); \
	DECLARE_FUNCTION(execGetSelectionSet);


#else
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_ACCESSORS
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UEditorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityLibrary)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_INCLASS \
private: \
	static void StaticRegisterNativesUEditorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UEditorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UEditorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Blutility"), NO_API) \
	DECLARE_SERIALIZER(UEditorUtilityLibrary)


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityLibrary(UEditorUtilityLibrary&&); \
	NO_API UEditorUtilityLibrary(const UEditorUtilityLibrary&); \
public: \
	NO_API virtual ~UEditorUtilityLibrary();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditorUtilityLibrary(UEditorUtilityLibrary&&); \
	NO_API UEditorUtilityLibrary(const UEditorUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorUtilityLibrary) \
	NO_API virtual ~UEditorUtilityLibrary();


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_134_PROLOG
#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_INCLASS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_SPARSE_DATA \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_ACCESSORS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h_137_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EditorUtilityLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUTILITY_API UClass* StaticClass<class UEditorUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Blutility_Public_EditorUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
