// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Interface_AsyncCompilation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Interface_AsyncCompilation_generated_h
#error "Interface_AsyncCompilation.generated.h already included, missing '#pragma once' in Interface_AsyncCompilation.h"
#endif
#define ENGINE_Interface_AsyncCompilation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_AsyncCompilation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_AsyncCompilation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_AsyncCompilation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_AsyncCompilation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_AsyncCompilation(UInterface_AsyncCompilation&&); \
	ENGINE_API UInterface_AsyncCompilation(const UInterface_AsyncCompilation&); \
public: \
	ENGINE_API virtual ~UInterface_AsyncCompilation();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInterface_AsyncCompilation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UInterface_AsyncCompilation(UInterface_AsyncCompilation&&); \
	ENGINE_API UInterface_AsyncCompilation(const UInterface_AsyncCompilation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInterface_AsyncCompilation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterface_AsyncCompilation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterface_AsyncCompilation) \
	ENGINE_API virtual ~UInterface_AsyncCompilation();


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterface_AsyncCompilation(); \
	friend struct Z_Construct_UClass_UInterface_AsyncCompilation_Statics; \
public: \
	DECLARE_CLASS(UInterface_AsyncCompilation, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInterface_AsyncCompilation)


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterface_AsyncCompilation() {} \
public: \
	typedef UInterface_AsyncCompilation UClassType; \
	typedef IInterface_AsyncCompilation ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterface_AsyncCompilation() {} \
public: \
	typedef UInterface_AsyncCompilation UClassType; \
	typedef IInterface_AsyncCompilation ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInterface_AsyncCompilation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Interfaces_Interface_AsyncCompilation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
