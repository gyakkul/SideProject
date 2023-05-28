// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/CrowdAgentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_CrowdAgentInterface_generated_h
#error "CrowdAgentInterface.generated.h already included, missing '#pragma once' in CrowdAgentInterface.h"
#endif
#define AIMODULE_CrowdAgentInterface_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UCrowdAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UCrowdAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UCrowdAgentInterface(UCrowdAgentInterface&&); \
	AIMODULE_API UCrowdAgentInterface(const UCrowdAgentInterface&); \
public: \
	AIMODULE_API virtual ~UCrowdAgentInterface();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UCrowdAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AIMODULE_API UCrowdAgentInterface(UCrowdAgentInterface&&); \
	AIMODULE_API UCrowdAgentInterface(const UCrowdAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UCrowdAgentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrowdAgentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrowdAgentInterface) \
	AIMODULE_API virtual ~UCrowdAgentInterface();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCrowdAgentInterface(); \
	friend struct Z_Construct_UClass_UCrowdAgentInterface_Statics; \
public: \
	DECLARE_CLASS(UCrowdAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UCrowdAgentInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICrowdAgentInterface() {} \
public: \
	typedef UCrowdAgentInterface UClassType; \
	typedef ICrowdAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ICrowdAgentInterface() {} \
public: \
	typedef UCrowdAgentInterface UClassType; \
	typedef ICrowdAgentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_11_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UCrowdAgentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_CrowdAgentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
