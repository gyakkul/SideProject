// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncActionLoadPrimaryAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncActionChangePrimaryAssetBundles;
class UAsyncActionLoadPrimaryAsset;
class UAsyncActionLoadPrimaryAssetClass;
class UAsyncActionLoadPrimaryAssetClassList;
class UAsyncActionLoadPrimaryAssetList;
class UObject;
struct FPrimaryAssetId;
#ifdef ENGINE_AsyncActionLoadPrimaryAsset_generated_h
#error "AsyncActionLoadPrimaryAsset.generated.h already included, missing '#pragma once' in AsyncActionLoadPrimaryAsset.h"
#endif
#define ENGINE_AsyncActionLoadPrimaryAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetBase)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetBase, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetBase)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(UAsyncActionLoadPrimaryAssetBase&&); \
	NO_API UAsyncActionLoadPrimaryAssetBase(const UAsyncActionLoadPrimaryAssetBase&); \
public: \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetBase();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetBase(UAsyncActionLoadPrimaryAssetBase&&); \
	NO_API UAsyncActionLoadPrimaryAssetBase(const UAsyncActionLoadPrimaryAssetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetBase) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetBase();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetBase>();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_54_DELEGATE \
ENGINE_API void FOnPrimaryAssetLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetLoaded, UObject* Loaded);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAsset);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAsset);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAsset(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAsset, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAsset)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAsset(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAsset, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAsset)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAsset(UAsyncActionLoadPrimaryAsset&&); \
	NO_API UAsyncActionLoadPrimaryAsset(const UAsyncActionLoadPrimaryAsset&); \
public: \
	NO_API virtual ~UAsyncActionLoadPrimaryAsset();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAsset(UAsyncActionLoadPrimaryAsset&&); \
	NO_API UAsyncActionLoadPrimaryAsset(const UAsyncActionLoadPrimaryAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAsset) \
	NO_API virtual ~UAsyncActionLoadPrimaryAsset();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_56_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAsset>();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_79_DELEGATE \
ENGINE_API void FOnPrimaryAssetClassLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassLoaded, TSubclassOf<UObject>  Loaded);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClass);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClass);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClass, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClass)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClass, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClass)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(UAsyncActionLoadPrimaryAssetClass&&); \
	NO_API UAsyncActionLoadPrimaryAssetClass(const UAsyncActionLoadPrimaryAssetClass&); \
public: \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetClass();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClass(UAsyncActionLoadPrimaryAssetClass&&); \
	NO_API UAsyncActionLoadPrimaryAssetClass(const UAsyncActionLoadPrimaryAssetClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClass) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetClass();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_81_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetClass>();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_104_DELEGATE \
ENGINE_API void FOnPrimaryAssetListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetListLoaded, TArray<UObject*> const& Loaded);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetList);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetList);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetList)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetList)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetList(UAsyncActionLoadPrimaryAssetList&&); \
	NO_API UAsyncActionLoadPrimaryAssetList(const UAsyncActionLoadPrimaryAssetList&); \
public: \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetList();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetList(UAsyncActionLoadPrimaryAssetList&&); \
	NO_API UAsyncActionLoadPrimaryAssetList(const UAsyncActionLoadPrimaryAssetList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetList) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetList();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_106_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetList>();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_129_DELEGATE \
ENGINE_API void FOnPrimaryAssetClassListLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetClassListLoaded, TArray<TSubclassOf<UObject> > const& Loaded);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClassList);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncLoadPrimaryAssetClassList);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClassList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClassList)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList(); \
	friend struct Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionLoadPrimaryAssetClassList, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionLoadPrimaryAssetClassList)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClassList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClassList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(UAsyncActionLoadPrimaryAssetClassList&&); \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const UAsyncActionLoadPrimaryAssetClassList&); \
public: \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetClassList();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionLoadPrimaryAssetClassList(UAsyncActionLoadPrimaryAssetClassList&&); \
	NO_API UAsyncActionLoadPrimaryAssetClassList(const UAsyncActionLoadPrimaryAssetClassList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionLoadPrimaryAssetClassList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionLoadPrimaryAssetClassList) \
	NO_API virtual ~UAsyncActionLoadPrimaryAssetClassList();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_131_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionLoadPrimaryAssetClassList>();

#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_154_DELEGATE \
ENGINE_API void FOnPrimaryAssetBundlesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPrimaryAssetBundlesChanged);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForPrimaryAssetList); \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForMatchingPrimaryAssets);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForPrimaryAssetList); \
	DECLARE_FUNCTION(execAsyncChangeBundleStateForMatchingPrimaryAssets);


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles(); \
	friend struct Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionChangePrimaryAssetBundles, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionChangePrimaryAssetBundles)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles(); \
	friend struct Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics; \
public: \
	DECLARE_CLASS(UAsyncActionChangePrimaryAssetBundles, UAsyncActionLoadPrimaryAssetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAsyncActionChangePrimaryAssetBundles)


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionChangePrimaryAssetBundles) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionChangePrimaryAssetBundles); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(UAsyncActionChangePrimaryAssetBundles&&); \
	NO_API UAsyncActionChangePrimaryAssetBundles(const UAsyncActionChangePrimaryAssetBundles&); \
public: \
	NO_API virtual ~UAsyncActionChangePrimaryAssetBundles();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncActionChangePrimaryAssetBundles(UAsyncActionChangePrimaryAssetBundles&&); \
	NO_API UAsyncActionChangePrimaryAssetBundles(const UAsyncActionChangePrimaryAssetBundles&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncActionChangePrimaryAssetBundles); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncActionChangePrimaryAssetBundles) \
	NO_API virtual ~UAsyncActionChangePrimaryAssetBundles();


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_156_PROLOG
#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_INCLASS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAsyncActionChangePrimaryAssetBundles>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
