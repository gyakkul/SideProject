// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeformableInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeformableInterface_generated_h
#error "DeformableInterface.generated.h already included, missing '#pragma once' in DeformableInterface.h"
#endif
#define ENGINE_DeformableInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeformableInterface(UDeformableInterface&&); \
	NO_API UDeformableInterface(const UDeformableInterface&); \
public: \
	NO_API virtual ~UDeformableInterface();


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeformableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeformableInterface(UDeformableInterface&&); \
	NO_API UDeformableInterface(const UDeformableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeformableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeformableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeformableInterface) \
	NO_API virtual ~UDeformableInterface();


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDeformableInterface(); \
	friend struct Z_Construct_UClass_UDeformableInterface_Statics; \
public: \
	DECLARE_CLASS(UDeformableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDeformableInterface)


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDeformableInterface() {} \
public: \
	typedef UDeformableInterface UClassType; \
	typedef IDeformableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IDeformableInterface() {} \
public: \
	typedef UDeformableInterface UClassType; \
	typedef IDeformableInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeformableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_DeformableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
