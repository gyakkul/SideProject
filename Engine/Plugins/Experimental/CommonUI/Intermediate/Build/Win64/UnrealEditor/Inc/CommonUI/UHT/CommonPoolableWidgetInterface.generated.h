// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonPoolableWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonPoolableWidgetInterface_generated_h
#error "CommonPoolableWidgetInterface.generated.h already included, missing '#pragma once' in CommonPoolableWidgetInterface.h"
#endif
#define COMMONUI_CommonPoolableWidgetInterface_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_RPC_WRAPPERS \
	virtual void OnReleaseToPool_Implementation() {}; \
	virtual void OnAcquireFromPool_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnReleaseToPool); \
	DECLARE_FUNCTION(execOnAcquireFromPool);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnReleaseToPool_Implementation() {}; \
	virtual void OnAcquireFromPool_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnReleaseToPool); \
	DECLARE_FUNCTION(execOnAcquireFromPool);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPoolableWidgetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPoolableWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPoolableWidgetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPoolableWidgetInterface(UCommonPoolableWidgetInterface&&); \
	NO_API UCommonPoolableWidgetInterface(const UCommonPoolableWidgetInterface&); \
public: \
	NO_API virtual ~UCommonPoolableWidgetInterface();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonPoolableWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonPoolableWidgetInterface(UCommonPoolableWidgetInterface&&); \
	NO_API UCommonPoolableWidgetInterface(const UCommonPoolableWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonPoolableWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonPoolableWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonPoolableWidgetInterface) \
	NO_API virtual ~UCommonPoolableWidgetInterface();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonPoolableWidgetInterface(); \
	friend struct Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UCommonPoolableWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonPoolableWidgetInterface)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommonPoolableWidgetInterface() {} \
public: \
	typedef UCommonPoolableWidgetInterface UClassType; \
	typedef ICommonPoolableWidgetInterface ThisClass; \
	static void Execute_OnAcquireFromPool(UObject* O); \
	static void Execute_OnReleaseToPool(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ICommonPoolableWidgetInterface() {} \
public: \
	typedef UCommonPoolableWidgetInterface UClassType; \
	typedef ICommonPoolableWidgetInterface ThisClass; \
	static void Execute_OnAcquireFromPool(UObject* O); \
	static void Execute_OnReleaseToPool(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonPoolableWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonPoolableWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
