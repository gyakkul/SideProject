// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NNECoreRuntime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NNECORE_NNECoreRuntime_generated_h
#error "NNECoreRuntime.generated.h already included, missing '#pragma once' in NNECoreRuntime.h"
#endif
#define NNECORE_NNECoreRuntime_generated_h

#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_ACCESSORS
#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNERuntime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntime) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntime); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNNERuntime(UNNERuntime&&); \
	NO_API UNNERuntime(const UNNERuntime&); \
public: \
	NO_API virtual ~UNNERuntime();


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNNERuntime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNNERuntime(UNNERuntime&&); \
	NO_API UNNERuntime(const UNNERuntime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNNERuntime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNNERuntime); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNNERuntime) \
	NO_API virtual ~UNNERuntime();


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUNNERuntime(); \
	friend struct Z_Construct_UClass_UNNERuntime_Statics; \
public: \
	DECLARE_CLASS(UNNERuntime, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NNECore"), NO_API) \
	DECLARE_SERIALIZER(UNNERuntime)


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~INNERuntime() {} \
public: \
	typedef UNNERuntime UClassType; \
	typedef INNERuntime ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~INNERuntime() {} \
public: \
	typedef UNNERuntime UClassType; \
	typedef INNERuntime ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NNECORE_API UClass* StaticClass<class UNNERuntime>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Public_NNECoreRuntime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
