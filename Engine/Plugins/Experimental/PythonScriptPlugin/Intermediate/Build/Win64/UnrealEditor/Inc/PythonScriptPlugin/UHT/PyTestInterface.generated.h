// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyTestInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PYTHONSCRIPTPLUGIN_PyTestInterface_generated_h
#error "PyTestInterface.generated.h already included, missing '#pragma once' in PyTestInterface.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyTestInterface_generated_h

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFuncInterface);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFuncInterface);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestInterface(UPyTestInterface&&); \
	NO_API UPyTestInterface(const UPyTestInterface&); \
public: \
	NO_API virtual ~UPyTestInterface();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestInterface(UPyTestInterface&&); \
	NO_API UPyTestInterface(const UPyTestInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestInterface) \
	NO_API virtual ~UPyTestInterface();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPyTestInterface(); \
	friend struct Z_Construct_UClass_UPyTestInterface_Statics; \
public: \
	DECLARE_CLASS(UPyTestInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestInterface)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPyTestInterface() {} \
public: \
	typedef UPyTestInterface UClassType; \
	typedef IPyTestInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IPyTestInterface() {} \
public: \
	typedef UPyTestInterface UClassType; \
	typedef IPyTestInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestInterface>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFuncInterfaceChild);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFuncInterfaceChild);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestChildInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestChildInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestChildInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestChildInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestChildInterface(UPyTestChildInterface&&); \
	NO_API UPyTestChildInterface(const UPyTestChildInterface&); \
public: \
	NO_API virtual ~UPyTestChildInterface();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestChildInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestChildInterface(UPyTestChildInterface&&); \
	NO_API UPyTestChildInterface(const UPyTestChildInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestChildInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestChildInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestChildInterface) \
	NO_API virtual ~UPyTestChildInterface();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPyTestChildInterface(); \
	friend struct Z_Construct_UClass_UPyTestChildInterface_Statics; \
public: \
	DECLARE_CLASS(UPyTestChildInterface, UPyTestInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestChildInterface)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPyTestChildInterface() {} \
public: \
	typedef UPyTestChildInterface UClassType; \
	typedef IPyTestChildInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_INCLASS_IINTERFACE \
protected: \
	virtual ~IPyTestChildInterface() {} \
public: \
	typedef UPyTestChildInterface UClassType; \
	typedef IPyTestChildInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestChildInterface>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFuncInterfaceOther);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFuncInterfaceOther);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestOtherInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestOtherInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestOtherInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestOtherInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestOtherInterface(UPyTestOtherInterface&&); \
	NO_API UPyTestOtherInterface(const UPyTestOtherInterface&); \
public: \
	NO_API virtual ~UPyTestOtherInterface();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestOtherInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestOtherInterface(UPyTestOtherInterface&&); \
	NO_API UPyTestOtherInterface(const UPyTestOtherInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestOtherInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestOtherInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestOtherInterface) \
	NO_API virtual ~UPyTestOtherInterface();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPyTestOtherInterface(); \
	friend struct Z_Construct_UClass_UPyTestOtherInterface_Statics; \
public: \
	DECLARE_CLASS(UPyTestOtherInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestOtherInterface)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPyTestOtherInterface() {} \
public: \
	typedef UPyTestOtherInterface UClassType; \
	typedef IPyTestOtherInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_INCLASS_IINTERFACE \
protected: \
	virtual ~IPyTestOtherInterface() {} \
public: \
	typedef UPyTestOtherInterface UClassType; \
	typedef IPyTestOtherInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestOtherInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
