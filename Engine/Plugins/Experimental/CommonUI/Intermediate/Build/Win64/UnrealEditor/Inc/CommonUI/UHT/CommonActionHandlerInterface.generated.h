// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommonActionHandlerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONUI_CommonActionHandlerInterface_generated_h
#error "CommonActionHandlerInterface.generated.h already included, missing '#pragma once' in CommonActionHandlerInterface.h"
#endif
#define COMMONUI_CommonActionHandlerInterface_generated_h

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_23_DELEGATE \
COMMONUI_API void FCommonActionCommited_DelegateWrapper(const FScriptDelegate& CommonActionCommited, bool& bPassThrough);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_30_DELEGATE \
COMMONUI_API void FCommonActionCompleteSingle_DelegateWrapper(const FScriptDelegate& CommonActionCompleteSingle);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_32_DELEGATE \
COMMONUI_API void FCommonActionComplete_DelegateWrapper(const FMulticastScriptDelegate& CommonActionComplete);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_39_DELEGATE \
COMMONUI_API void FCommonActionProgressSingle_DelegateWrapper(const FScriptDelegate& CommonActionProgressSingle, float HeldPercent);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_41_DELEGATE \
COMMONUI_API void FCommonActionProgress_DelegateWrapper(const FMulticastScriptDelegate& CommonActionProgress, float HeldPercent);


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMMONUI_API UScriptStruct* StaticStruct<struct FCommonInputActionHandlerData>();

#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_ACCESSORS
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActionHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActionHandlerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActionHandlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionHandlerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActionHandlerInterface(UCommonActionHandlerInterface&&); \
	NO_API UCommonActionHandlerInterface(const UCommonActionHandlerInterface&); \
public: \
	NO_API virtual ~UCommonActionHandlerInterface();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCommonActionHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCommonActionHandlerInterface(UCommonActionHandlerInterface&&); \
	NO_API UCommonActionHandlerInterface(const UCommonActionHandlerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommonActionHandlerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommonActionHandlerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCommonActionHandlerInterface) \
	NO_API virtual ~UCommonActionHandlerInterface();


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCommonActionHandlerInterface(); \
	friend struct Z_Construct_UClass_UCommonActionHandlerInterface_Statics; \
public: \
	DECLARE_CLASS(UCommonActionHandlerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CommonUI"), NO_API) \
	DECLARE_SERIALIZER(UCommonActionHandlerInterface)


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICommonActionHandlerInterface() {} \
public: \
	typedef UCommonActionHandlerInterface UClassType; \
	typedef ICommonActionHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_INCLASS_IINTERFACE \
protected: \
	virtual ~ICommonActionHandlerInterface() {} \
public: \
	typedef UCommonActionHandlerInterface UClassType; \
	typedef ICommonActionHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_120_PROLOG
#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_ACCESSORS \
	FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_123_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONUI_API UClass* StaticClass<class UCommonActionHandlerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
