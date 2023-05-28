// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DestructibleInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DestructibleInterface_generated_h
#error "DestructibleInterface.generated.h already included, missing '#pragma once' in DestructibleInterface.h"
#endif
#define ENGINE_DestructibleInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleInterface(UDestructibleInterface&&); \
	NO_API UDestructibleInterface(const UDestructibleInterface&); \
public: \
	NO_API virtual ~UDestructibleInterface();


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDestructibleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDestructibleInterface(UDestructibleInterface&&); \
	NO_API UDestructibleInterface(const UDestructibleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestructibleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestructibleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDestructibleInterface) \
	NO_API virtual ~UDestructibleInterface();


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDestructibleInterface(); \
	friend struct Z_Construct_UClass_UDestructibleInterface_Statics; \
public: \
	DECLARE_CLASS(UDestructibleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDestructibleInterface)


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDestructibleInterface() {} \
public: \
	typedef UDestructibleInterface UClassType; \
	typedef IDestructibleInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IDestructibleInterface() {} \
public: \
	typedef UDestructibleInterface UClassType; \
	typedef IDestructibleInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_7_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDestructibleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_DestructibleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
