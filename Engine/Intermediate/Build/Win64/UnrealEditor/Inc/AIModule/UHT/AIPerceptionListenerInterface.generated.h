// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AIPerceptionListenerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIPerceptionListenerInterface_generated_h
#error "AIPerceptionListenerInterface.generated.h already included, missing '#pragma once' in AIPerceptionListenerInterface.h"
#endif
#define AIMODULE_AIPerceptionListenerInterface_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionListenerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionListenerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionListenerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionListenerInterface(UAIPerceptionListenerInterface&&); \
	NO_API UAIPerceptionListenerInterface(const UAIPerceptionListenerInterface&); \
public: \
	NO_API virtual ~UAIPerceptionListenerInterface();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIPerceptionListenerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIPerceptionListenerInterface(UAIPerceptionListenerInterface&&); \
	NO_API UAIPerceptionListenerInterface(const UAIPerceptionListenerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIPerceptionListenerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIPerceptionListenerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIPerceptionListenerInterface) \
	NO_API virtual ~UAIPerceptionListenerInterface();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAIPerceptionListenerInterface(); \
	friend struct Z_Construct_UClass_UAIPerceptionListenerInterface_Statics; \
public: \
	DECLARE_CLASS(UAIPerceptionListenerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIPerceptionListenerInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAIPerceptionListenerInterface() {} \
public: \
	typedef UAIPerceptionListenerInterface UClassType; \
	typedef IAIPerceptionListenerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IAIPerceptionListenerInterface() {} \
public: \
	typedef UAIPerceptionListenerInterface UClassType; \
	typedef IAIPerceptionListenerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_12_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIPerceptionListenerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionListenerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
