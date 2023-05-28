// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Perception/AISightTargetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AISightTargetInterface_generated_h
#error "AISightTargetInterface.generated.h already included, missing '#pragma once' in AISightTargetInterface.h"
#endif
#define AIMODULE_AISightTargetInterface_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISightTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISightTargetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISightTargetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISightTargetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISightTargetInterface(UAISightTargetInterface&&); \
	NO_API UAISightTargetInterface(const UAISightTargetInterface&); \
public: \
	NO_API virtual ~UAISightTargetInterface();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAISightTargetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAISightTargetInterface(UAISightTargetInterface&&); \
	NO_API UAISightTargetInterface(const UAISightTargetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAISightTargetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAISightTargetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAISightTargetInterface) \
	NO_API virtual ~UAISightTargetInterface();


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAISightTargetInterface(); \
	friend struct Z_Construct_UClass_UAISightTargetInterface_Statics; \
public: \
	DECLARE_CLASS(UAISightTargetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAISightTargetInterface)


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAISightTargetInterface() {} \
public: \
	typedef UAISightTargetInterface UClassType; \
	typedef IAISightTargetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IAISightTargetInterface() {} \
public: \
	typedef UAISightTargetInterface UClassType; \
	typedef IAISightTargetInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAISightTargetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISightTargetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
