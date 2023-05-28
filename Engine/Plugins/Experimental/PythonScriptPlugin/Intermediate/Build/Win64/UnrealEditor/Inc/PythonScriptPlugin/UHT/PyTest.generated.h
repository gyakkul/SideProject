// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyTest.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
 class UObject;
class FProperty;
class UObject;
class UPyTestObject;
enum class EPyTestEnum : uint8;
struct FPyTestChildStruct;
struct FPyTestStruct;
#ifdef PYTHONSCRIPTPLUGIN_PyTest_generated_h
#error "PyTest.generated.h already included, missing '#pragma once' in PyTest.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyTest_generated_h

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_14_DELEGATE \
PYTHONSCRIPTPLUGIN_API int32 FPyTestDelegate_DelegateWrapper(const FScriptDelegate& PyTestDelegate, int32 InValue);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_19_DELEGATE \
PYTHONSCRIPTPLUGIN_API void FPyTestMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& PyTestMulticastDelegate, const FString& InStr);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_24_DELEGATE \
PYTHONSCRIPTPLUGIN_API void FPyTestSlateTickDelegate_DelegateWrapper(const FScriptDelegate& PyTestSlateTickDelegate, float InDeltaTime);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPyTestStruct_Statics; \
	PYTHONSCRIPTPLUGIN_API static class UScriptStruct* StaticStruct();


template<> PYTHONSCRIPTPLUGIN_API UScriptStruct* StaticStruct<struct FPyTestStruct>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPyTestChildStruct_Statics; \
	PYTHONSCRIPTPLUGIN_API static class UScriptStruct* StaticStruct(); \
	typedef FPyTestStruct Super;


template<> PYTHONSCRIPTPLUGIN_API UScriptStruct* StaticStruct<struct FPyTestChildStruct>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearBoolMutableViaRef); \
	DECLARE_FUNCTION(execSetBoolMutableViaRef); \
	DECLARE_FUNCTION(execClearBoolMutable); \
	DECLARE_FUNCTION(execSetBoolMutable); \
	DECLARE_FUNCTION(execAddStr); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAddInt); \
	DECLARE_FUNCTION(execGetConstantValue); \
	DECLARE_FUNCTION(execLegacyIsBoolSet); \
	DECLARE_FUNCTION(execIsBoolSet);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearBoolMutableViaRef); \
	DECLARE_FUNCTION(execSetBoolMutableViaRef); \
	DECLARE_FUNCTION(execClearBoolMutable); \
	DECLARE_FUNCTION(execSetBoolMutable); \
	DECLARE_FUNCTION(execAddStr); \
	DECLARE_FUNCTION(execAddFloat); \
	DECLARE_FUNCTION(execAddInt); \
	DECLARE_FUNCTION(execGetConstantValue); \
	DECLARE_FUNCTION(execLegacyIsBoolSet); \
	DECLARE_FUNCTION(execIsBoolSet);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestStructLibrary(); \
	friend struct Z_Construct_UClass_UPyTestStructLibrary_Statics; \
public: \
	DECLARE_CLASS(UPyTestStructLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestStructLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUPyTestStructLibrary(); \
	friend struct Z_Construct_UClass_UPyTestStructLibrary_Statics; \
public: \
	DECLARE_CLASS(UPyTestStructLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestStructLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestStructLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestStructLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestStructLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestStructLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestStructLibrary(UPyTestStructLibrary&&); \
	NO_API UPyTestStructLibrary(const UPyTestStructLibrary&); \
public: \
	NO_API virtual ~UPyTestStructLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestStructLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestStructLibrary(UPyTestStructLibrary&&); \
	NO_API UPyTestStructLibrary(const UPyTestStructLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestStructLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestStructLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestStructLibrary) \
	NO_API virtual ~UPyTestStructLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_108_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestStructLibrary>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_RPC_WRAPPERS \
	virtual void FuncBlueprintNativeRef_Implementation(FPyTestStruct& InOutStruct) const; \
	virtual int32 FuncBlueprintNative_Implementation(const int32 InValue) const; \
 \
	DECLARE_FUNCTION(execGetConstantValue); \
	DECLARE_FUNCTION(execEmitScriptWarning); \
	DECLARE_FUNCTION(execEmitScriptError); \
	DECLARE_FUNCTION(execReturnFieldPath); \
	DECLARE_FUNCTION(execReturnMap); \
	DECLARE_FUNCTION(execReturnSet); \
	DECLARE_FUNCTION(execReturnArray); \
	DECLARE_FUNCTION(execMulticastDelegatePropertyCallback); \
	DECLARE_FUNCTION(execDelegatePropertyCallback); \
	DECLARE_FUNCTION(execFuncTakingFieldPath); \
	DECLARE_FUNCTION(execFuncTakingPyTestDelegate); \
	DECLARE_FUNCTION(execFuncTakingPyTestStructDefault); \
	DECLARE_FUNCTION(execLegacyFuncTakingPyTestStruct); \
	DECLARE_FUNCTION(execFuncTakingPyTestChildStruct); \
	DECLARE_FUNCTION(execFuncTakingPyTestStruct); \
	DECLARE_FUNCTION(execCallFuncBlueprintNativeRef); \
	DECLARE_FUNCTION(execCallFuncBlueprintNative); \
	DECLARE_FUNCTION(execCallFuncBlueprintImplementable); \
	DECLARE_FUNCTION(execFuncBlueprintNativeRef); \
	DECLARE_FUNCTION(execFuncBlueprintNative);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FuncBlueprintNativeRef_Implementation(FPyTestStruct& InOutStruct) const; \
	virtual int32 FuncBlueprintNative_Implementation(const int32 InValue) const; \
 \
	DECLARE_FUNCTION(execGetConstantValue); \
	DECLARE_FUNCTION(execEmitScriptWarning); \
	DECLARE_FUNCTION(execEmitScriptError); \
	DECLARE_FUNCTION(execReturnFieldPath); \
	DECLARE_FUNCTION(execReturnMap); \
	DECLARE_FUNCTION(execReturnSet); \
	DECLARE_FUNCTION(execReturnArray); \
	DECLARE_FUNCTION(execMulticastDelegatePropertyCallback); \
	DECLARE_FUNCTION(execDelegatePropertyCallback); \
	DECLARE_FUNCTION(execFuncTakingFieldPath); \
	DECLARE_FUNCTION(execFuncTakingPyTestDelegate); \
	DECLARE_FUNCTION(execFuncTakingPyTestStructDefault); \
	DECLARE_FUNCTION(execLegacyFuncTakingPyTestStruct); \
	DECLARE_FUNCTION(execFuncTakingPyTestChildStruct); \
	DECLARE_FUNCTION(execFuncTakingPyTestStruct); \
	DECLARE_FUNCTION(execCallFuncBlueprintNativeRef); \
	DECLARE_FUNCTION(execCallFuncBlueprintNative); \
	DECLARE_FUNCTION(execCallFuncBlueprintImplementable); \
	DECLARE_FUNCTION(execFuncBlueprintNativeRef); \
	DECLARE_FUNCTION(execFuncBlueprintNative);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestObject(); \
	friend struct Z_Construct_UClass_UPyTestObject_Statics; \
public: \
	DECLARE_CLASS(UPyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestObject) \
	virtual UObject* _getUObject() const override { return const_cast<UPyTestObject*>(this); }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUPyTestObject(); \
	friend struct Z_Construct_UClass_UPyTestObject_Statics; \
public: \
	DECLARE_CLASS(UPyTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestObject) \
	virtual UObject* _getUObject() const override { return const_cast<UPyTestObject*>(this); }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestObject(UPyTestObject&&); \
	NO_API UPyTestObject(const UPyTestObject&); \
public: \
	NO_API virtual ~UPyTestObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestObject(UPyTestObject&&); \
	NO_API UPyTestObject(const UPyTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPyTestObject) \
	NO_API virtual ~UPyTestObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_147_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestObject>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestChildObject(); \
	friend struct Z_Construct_UClass_UPyTestChildObject_Statics; \
public: \
	DECLARE_CLASS(UPyTestChildObject, UPyTestObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestChildObject)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_INCLASS \
private: \
	static void StaticRegisterNativesUPyTestChildObject(); \
	friend struct Z_Construct_UClass_UPyTestChildObject_Statics; \
public: \
	DECLARE_CLASS(UPyTestChildObject, UPyTestObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestChildObject)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestChildObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestChildObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestChildObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestChildObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestChildObject(UPyTestChildObject&&); \
	NO_API UPyTestChildObject(const UPyTestChildObject&); \
public: \
	NO_API virtual ~UPyTestChildObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestChildObject(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestChildObject(UPyTestChildObject&&); \
	NO_API UPyTestChildObject(const UPyTestChildObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestChildObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestChildObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPyTestChildObject) \
	NO_API virtual ~UPyTestChildObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_283_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_286_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestChildObject>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDEPRECATED_LegacyPyTestObject(); \
	friend struct Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_LegacyPyTestObject, UPyTestObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_LegacyPyTestObject)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_LegacyPyTestObject(); \
	friend struct Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_LegacyPyTestObject, UPyTestObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UDEPRECATED_LegacyPyTestObject)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_LegacyPyTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_LegacyPyTestObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_LegacyPyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_LegacyPyTestObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_LegacyPyTestObject(UDEPRECATED_LegacyPyTestObject&&); \
	NO_API UDEPRECATED_LegacyPyTestObject(const UDEPRECATED_LegacyPyTestObject&); \
public: \
	NO_API virtual ~UDEPRECATED_LegacyPyTestObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDEPRECATED_LegacyPyTestObject(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDEPRECATED_LegacyPyTestObject(UDEPRECATED_LegacyPyTestObject&&); \
	NO_API UDEPRECATED_LegacyPyTestObject(const UDEPRECATED_LegacyPyTestObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDEPRECATED_LegacyPyTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_LegacyPyTestObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDEPRECATED_LegacyPyTestObject) \
	NO_API virtual ~UDEPRECATED_LegacyPyTestObject();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_292_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_295_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UDEPRECATED_LegacyPyTestObject>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOtherConstantValue); \
	DECLARE_FUNCTION(execIsBoolSet);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOtherConstantValue); \
	DECLARE_FUNCTION(execIsBoolSet);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestObjectLibrary(); \
	friend struct Z_Construct_UClass_UPyTestObjectLibrary_Statics; \
public: \
	DECLARE_CLASS(UPyTestObjectLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestObjectLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_INCLASS \
private: \
	static void StaticRegisterNativesUPyTestObjectLibrary(); \
	friend struct Z_Construct_UClass_UPyTestObjectLibrary_Statics; \
public: \
	DECLARE_CLASS(UPyTestObjectLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestObjectLibrary)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestObjectLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestObjectLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestObjectLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestObjectLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestObjectLibrary(UPyTestObjectLibrary&&); \
	NO_API UPyTestObjectLibrary(const UPyTestObjectLibrary&); \
public: \
	NO_API virtual ~UPyTestObjectLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestObjectLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestObjectLibrary(UPyTestObjectLibrary&&); \
	NO_API UPyTestObjectLibrary(const UPyTestObjectLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestObjectLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestObjectLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestObjectLibrary) \
	NO_API virtual ~UPyTestObjectLibrary();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_301_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_304_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestObjectLibrary>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_322_DELEGATE \
static PYTHONSCRIPTPLUGIN_API void FOnNameCollisionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNameCollisionDelegate, FPyTestStruct const& PyStruct);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestStructDelegate(); \
	friend struct Z_Construct_UClass_UPyTestStructDelegate_Statics; \
public: \
	DECLARE_CLASS(UPyTestStructDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestStructDelegate)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_INCLASS \
private: \
	static void StaticRegisterNativesUPyTestStructDelegate(); \
	friend struct Z_Construct_UClass_UPyTestStructDelegate_Statics; \
public: \
	DECLARE_CLASS(UPyTestStructDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestStructDelegate)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestStructDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestStructDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestStructDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestStructDelegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestStructDelegate(UPyTestStructDelegate&&); \
	NO_API UPyTestStructDelegate(const UPyTestStructDelegate&); \
public: \
	NO_API virtual ~UPyTestStructDelegate();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestStructDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestStructDelegate(UPyTestStructDelegate&&); \
	NO_API UPyTestStructDelegate(const UPyTestStructDelegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestStructDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestStructDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestStructDelegate) \
	NO_API virtual ~UPyTestStructDelegate();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_316_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_319_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestStructDelegate>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_338_DELEGATE \
static PYTHONSCRIPTPLUGIN_API void FOnNameCollisionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNameCollisionDelegate, FVector2D const& Vec);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestVectorDelegate(); \
	friend struct Z_Construct_UClass_UPyTestVectorDelegate_Statics; \
public: \
	DECLARE_CLASS(UPyTestVectorDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestVectorDelegate)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_INCLASS \
private: \
	static void StaticRegisterNativesUPyTestVectorDelegate(); \
	friend struct Z_Construct_UClass_UPyTestVectorDelegate_Statics; \
public: \
	DECLARE_CLASS(UPyTestVectorDelegate, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestVectorDelegate)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestVectorDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestVectorDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestVectorDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestVectorDelegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestVectorDelegate(UPyTestVectorDelegate&&); \
	NO_API UPyTestVectorDelegate(const UPyTestVectorDelegate&); \
public: \
	NO_API virtual ~UPyTestVectorDelegate();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestVectorDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestVectorDelegate(UPyTestVectorDelegate&&); \
	NO_API UPyTestVectorDelegate(const UPyTestVectorDelegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestVectorDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestVectorDelegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestVectorDelegate) \
	NO_API virtual ~UPyTestVectorDelegate();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_332_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_335_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestVectorDelegate>();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckTupleReturnType); \
	DECLARE_FUNCTION(execCheckStaticFunction); \
	DECLARE_FUNCTION(execCheckDelegateTypeHints); \
	DECLARE_FUNCTION(execCheckMapTypeHints); \
	DECLARE_FUNCTION(execCheckSetTypeHints); \
	DECLARE_FUNCTION(execCheckArrayTypeHints); \
	DECLARE_FUNCTION(execCheckObjectTypeHints); \
	DECLARE_FUNCTION(execCheckStructTypeHints); \
	DECLARE_FUNCTION(execCheckFieldPathTypeHints); \
	DECLARE_FUNCTION(execCheckTextTypeHints); \
	DECLARE_FUNCTION(execCheckNameTypeHints); \
	DECLARE_FUNCTION(execCheckStringTypeHints); \
	DECLARE_FUNCTION(execCheckEnumTypeHints); \
	DECLARE_FUNCTION(execCheckFloatTypeHints); \
	DECLARE_FUNCTION(execCheckIntegerTypeHints); \
	DECLARE_FUNCTION(execCheckBoolTypeHints); \
	DECLARE_FUNCTION(execGetIntConst); \
	DECLARE_FUNCTION(execGetStringConst);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckTupleReturnType); \
	DECLARE_FUNCTION(execCheckStaticFunction); \
	DECLARE_FUNCTION(execCheckDelegateTypeHints); \
	DECLARE_FUNCTION(execCheckMapTypeHints); \
	DECLARE_FUNCTION(execCheckSetTypeHints); \
	DECLARE_FUNCTION(execCheckArrayTypeHints); \
	DECLARE_FUNCTION(execCheckObjectTypeHints); \
	DECLARE_FUNCTION(execCheckStructTypeHints); \
	DECLARE_FUNCTION(execCheckFieldPathTypeHints); \
	DECLARE_FUNCTION(execCheckTextTypeHints); \
	DECLARE_FUNCTION(execCheckNameTypeHints); \
	DECLARE_FUNCTION(execCheckStringTypeHints); \
	DECLARE_FUNCTION(execCheckEnumTypeHints); \
	DECLARE_FUNCTION(execCheckFloatTypeHints); \
	DECLARE_FUNCTION(execCheckIntegerTypeHints); \
	DECLARE_FUNCTION(execCheckBoolTypeHints); \
	DECLARE_FUNCTION(execGetIntConst); \
	DECLARE_FUNCTION(execGetStringConst);


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_ACCESSORS
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPyTestTypeHint(); \
	friend struct Z_Construct_UClass_UPyTestTypeHint_Statics; \
public: \
	DECLARE_CLASS(UPyTestTypeHint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestTypeHint)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_INCLASS \
private: \
	static void StaticRegisterNativesUPyTestTypeHint(); \
	friend struct Z_Construct_UClass_UPyTestTypeHint_Statics; \
public: \
	DECLARE_CLASS(UPyTestTypeHint, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPyTestTypeHint)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestTypeHint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestTypeHint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestTypeHint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestTypeHint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestTypeHint(UPyTestTypeHint&&); \
	NO_API UPyTestTypeHint(const UPyTestTypeHint&); \
public: \
	NO_API virtual ~UPyTestTypeHint();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPyTestTypeHint(UPyTestTypeHint&&); \
	NO_API UPyTestTypeHint(const UPyTestTypeHint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestTypeHint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestTypeHint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPyTestTypeHint) \
	NO_API virtual ~UPyTestTypeHint();


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_351_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_INCLASS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_ACCESSORS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_354_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<class UPyTestTypeHint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h


#define FOREACH_ENUM_EPYTESTENUM(op) \
	op(EPyTestEnum::One) \
	op(EPyTestEnum::Two) 

enum class EPyTestEnum : uint8;
template<> struct TIsUEnumClass<EPyTestEnum> { enum { Value = true }; };
template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPyTestEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
