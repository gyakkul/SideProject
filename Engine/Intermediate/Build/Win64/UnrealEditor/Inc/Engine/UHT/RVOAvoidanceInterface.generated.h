// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/RVOAvoidanceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RVOAvoidanceInterface_generated_h
#error "RVOAvoidanceInterface.generated.h already included, missing '#pragma once' in RVOAvoidanceInterface.h"
#endif
#define ENGINE_RVOAvoidanceInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URVOAvoidanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URVOAvoidanceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URVOAvoidanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URVOAvoidanceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URVOAvoidanceInterface(URVOAvoidanceInterface&&); \
	ENGINE_API URVOAvoidanceInterface(const URVOAvoidanceInterface&); \
public: \
	ENGINE_API virtual ~URVOAvoidanceInterface();


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URVOAvoidanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API URVOAvoidanceInterface(URVOAvoidanceInterface&&); \
	ENGINE_API URVOAvoidanceInterface(const URVOAvoidanceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URVOAvoidanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URVOAvoidanceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URVOAvoidanceInterface) \
	ENGINE_API virtual ~URVOAvoidanceInterface();


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesURVOAvoidanceInterface(); \
	friend struct Z_Construct_UClass_URVOAvoidanceInterface_Statics; \
public: \
	DECLARE_CLASS(URVOAvoidanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URVOAvoidanceInterface)


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IRVOAvoidanceInterface() {} \
public: \
	typedef URVOAvoidanceInterface UClassType; \
	typedef IRVOAvoidanceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~IRVOAvoidanceInterface() {} \
public: \
	typedef URVOAvoidanceInterface UClassType; \
	typedef IRVOAvoidanceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URVOAvoidanceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_AI_RVOAvoidanceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
