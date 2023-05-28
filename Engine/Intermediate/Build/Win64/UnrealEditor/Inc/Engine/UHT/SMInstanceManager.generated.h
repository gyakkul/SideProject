// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/SMInstance/SMInstanceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SMInstanceManager_generated_h
#error "SMInstanceManager.generated.h already included, missing '#pragma once' in SMInstanceManager.h"
#endif
#define ENGINE_SMInstanceManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstanceManager(USMInstanceManager&&); \
	NO_API USMInstanceManager(const USMInstanceManager&); \
public: \
	NO_API virtual ~USMInstanceManager();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstanceManager(USMInstanceManager&&); \
	NO_API USMInstanceManager(const USMInstanceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceManager); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceManager) \
	NO_API virtual ~USMInstanceManager();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSMInstanceManager(); \
	friend struct Z_Construct_UClass_USMInstanceManager_Statics; \
public: \
	DECLARE_CLASS(USMInstanceManager, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USMInstanceManager)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISMInstanceManager() {} \
public: \
	typedef USMInstanceManager UClassType; \
	typedef ISMInstanceManager ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~ISMInstanceManager() {} \
public: \
	typedef USMInstanceManager UClassType; \
	typedef ISMInstanceManager ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USMInstanceManager>();

#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstanceManagerProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceManagerProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceManagerProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceManagerProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstanceManagerProvider(USMInstanceManagerProvider&&); \
	NO_API USMInstanceManagerProvider(const USMInstanceManagerProvider&); \
public: \
	NO_API virtual ~USMInstanceManagerProvider();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USMInstanceManagerProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USMInstanceManagerProvider(USMInstanceManagerProvider&&); \
	NO_API USMInstanceManagerProvider(const USMInstanceManagerProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USMInstanceManagerProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USMInstanceManagerProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USMInstanceManagerProvider) \
	NO_API virtual ~USMInstanceManagerProvider();


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSMInstanceManagerProvider(); \
	friend struct Z_Construct_UClass_USMInstanceManagerProvider_Statics; \
public: \
	DECLARE_CLASS(USMInstanceManagerProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USMInstanceManagerProvider)


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISMInstanceManagerProvider() {} \
public: \
	typedef USMInstanceManagerProvider UClassType; \
	typedef ISMInstanceManagerProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_INCLASS_IINTERFACE \
protected: \
	virtual ~ISMInstanceManagerProvider() {} \
public: \
	typedef USMInstanceManagerProvider UClassType; \
	typedef ISMInstanceManagerProvider ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_148_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_155_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_155_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h_151_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USMInstanceManagerProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
