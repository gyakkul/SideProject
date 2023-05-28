// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectPersistentCollection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMARTOBJECTSMODULE_SmartObjectPersistentCollection_generated_h
#error "SmartObjectPersistentCollection.generated.h already included, missing '#pragma once' in SmartObjectPersistentCollection.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectPersistentCollection_generated_h

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectCollectionEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectCollectionEntry>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_79_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectContainer>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRebuildCollection); \
	DECLARE_FUNCTION(execClearCollection);


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRebuildCollection); \
	DECLARE_FUNCTION(execClearCollection);


#else
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmartObjectPersistentCollection(); \
	friend struct Z_Construct_UClass_ASmartObjectPersistentCollection_Statics; \
public: \
	DECLARE_CLASS(ASmartObjectPersistentCollection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(ASmartObjectPersistentCollection)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_INCLASS \
private: \
	static void StaticRegisterNativesASmartObjectPersistentCollection(); \
	friend struct Z_Construct_UClass_ASmartObjectPersistentCollection_Statics; \
public: \
	DECLARE_CLASS(ASmartObjectPersistentCollection, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(ASmartObjectPersistentCollection)


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmartObjectPersistentCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmartObjectPersistentCollection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartObjectPersistentCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartObjectPersistentCollection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartObjectPersistentCollection(ASmartObjectPersistentCollection&&); \
	NO_API ASmartObjectPersistentCollection(const ASmartObjectPersistentCollection&); \
public: \
	NO_API virtual ~ASmartObjectPersistentCollection();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmartObjectPersistentCollection(ASmartObjectPersistentCollection&&); \
	NO_API ASmartObjectPersistentCollection(const ASmartObjectPersistentCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmartObjectPersistentCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmartObjectPersistentCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmartObjectPersistentCollection) \
	NO_API virtual ~ASmartObjectPersistentCollection();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_148_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_INCLASS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTOBJECTSMODULE_API UClass* StaticClass<class ASmartObjectPersistentCollection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectPersistentCollection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
